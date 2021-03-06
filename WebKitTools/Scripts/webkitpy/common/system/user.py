# Copyright (c) 2009, Google Inc. All rights reserved.
# 
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions are
# met:
# 
#     * Redistributions of source code must retain the above copyright
# notice, this list of conditions and the following disclaimer.
#     * Redistributions in binary form must reproduce the above
# copyright notice, this list of conditions and the following disclaimer
# in the documentation and/or other materials provided with the
# distribution.
#     * Neither the name of Google Inc. nor the names of its
# contributors may be used to endorse or promote products derived from
# this software without specific prior written permission.
# 
# THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
# "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
# LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
# A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
# OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
# SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
# LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
# DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
# THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
# (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
# OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

import logging
import os
import shlex
import subprocess
import sys
import webbrowser


_log = logging.getLogger("webkitpy.common.system.user")


try:
    import readline
except ImportError:
    if sys.platform != "win32":
        # There is no readline module for win32, not much to do except cry.
        _log.warn("Unable to import readline.")
    # FIXME: We could give instructions for non-mac platforms.
    # Lack of readline results in a very bad user experiance.
    if sys.platform == "mac":
        _log.warn("If you're using MacPorts, try running:")
        _log.warn("  sudo port install py25-readline")


class User(object):
    # FIXME: These are @classmethods because bugzilla.py doesn't have a Tool object (thus no User instance).
    @classmethod
    def prompt(cls, message, repeat=1, raw_input=raw_input):
        response = None
        while (repeat and not response):
            repeat -= 1
            response = raw_input(message)
        return response

    @classmethod
    def prompt_with_list(cls, list_title, list_items):
        print list_title
        i = 0
        for item in list_items:
            i += 1
            print "%2d. %s" % (i, item)
        result = int(cls.prompt("Enter a number: ")) - 1
        return list_items[result]

    def edit(self, files):
        editor = os.environ.get("EDITOR") or "vi"
        args = shlex.split(editor)
        # Note: Not thread safe: http://bugs.python.org/issue2320
        subprocess.call(args + files)

    def edit_changelog(self, files):
        edit_application = os.environ.get("CHANGE_LOG_EDIT_APPLICATION")
        if edit_application and sys.platform == "darwin":
            # On Mac we support editing ChangeLogs using an application.
            args = shlex.split(edit_application)
            print "Using editor in the CHANGE_LOG_EDIT_APPLICATION environment variable."
            print "Please quit the editor application when done editing."
            if edit_application.find("Xcode.app"):
                print "Instead of using Xcode.app, consider using EDITOR=\"xed --wait\"."
            subprocess.call(["open", "-W", "-n", "-a"] + args + files)
            return
        self.edit(files)

    def page(self, message):
        pager = os.environ.get("PAGER") or "less"
        try:
            # Note: Not thread safe: http://bugs.python.org/issue2320
            child_process = subprocess.Popen([pager], stdin=subprocess.PIPE)
            child_process.communicate(input=message)
        except IOError, e:
            pass

    def confirm(self, message=None):
        if not message:
            message = "Continue?"
        response = raw_input("%s [Y/n]: " % message)
        return not response or response.lower() == "y"

    def can_open_url(self):
        try:
            webbrowser.get()
            return True
        except webbrowser.Error, e:
            return False

    def open_url(self, url):
        if not self.can_open_url():
            _log.warn("Failed to open %s" % url)
        webbrowser.open(url)
