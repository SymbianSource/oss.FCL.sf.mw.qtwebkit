// Copyright (c) 2010 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
#ifndef RemoteInspectorFrontend_h
#define RemoteInspectorFrontend_h

#include <wtf/PassRefPtr.h>

namespace WebCore {

class InspectorArray;
class InspectorClient;
class InspectorObject;
class InspectorValue;
class String;

class RemoteInspectorFrontend {
public:
    RemoteInspectorFrontend(InspectorClient* inspectorClient) : m_inspectorClient(inspectorClient) { }

    void didSaveSessionSettings(long callId);
    void didEnableDebugger(long callId);
    void didDisableMonitoringXHR(long callId);
    void didPause(long callId);
    void didReloadPage(long callId);
    void didStepIntoStatement(long callId);
    void didSetOuterHTML(long callId, long nodeId);
    void didGetStyles(long callId, PassRefPtr<InspectorValue> styles);
    void didDisableSearchingForNode(long callId);
    void didStoreLastActivePanel(long callId);
    void didGetCookies(long callId);
    void didStepOutOfFunction(long callId);
    void didGetEventListenersForNode(long callId, long nodeId, PassRefPtr<InspectorArray> listenersArray);
    void didDisableResourceTracking(long callId);
    void didStepOverStatement(long callId);
    void didStartProfiling(long callId);
    void setDetachedRoot(PassRefPtr<InspectorObject> root);
    void didGetProfile(long callId);
    void didHighlightDOMNode(long callId);
    void didAddRule(long callId, PassRefPtr<InspectorValue> rule, bool selectorAffectsNode);
    void didSetBreakpoint(long callId);
    void didGetInlineStyle(long callId, PassRefPtr<InspectorValue> style);
    void didSetInjectedScriptSource(long callId);
    void didStopProfiling(long callId);
    void didRemoveDOMStorageItem(long callId);
    void didGetStyleSheet(long callId, PassRefPtr<InspectorValue> styleSheet);
    void didAddInspectedNode(long callId);
    void didSetPauseOnExceptionsState(long callId);
    void attributesUpdated(long id, PassRefPtr<InspectorArray> attributes);
    void didGetAllStyles(long callId, PassRefPtr<InspectorArray> styles);
    void didGetApplicationCaches(long callId);
    void didTakeHeapSnapshot(long callId);
    void didGetResourceContent(long callId);
    void setDocument(PassRefPtr<InspectorValue> root);
    void didHideDOMNodeHighlight(long callId);
    void didGetProfileHeaders(long callId);
    void didSetStyleProperty(long callId, bool success);
    void didApplyStyleText(long callId, bool success, PassRefPtr<InspectorValue> style, PassRefPtr<InspectorArray> changedProperties);
    void didEnableResourceTracking(long callId);
    void childNodeCountUpdated(long id, int newValue);
    void didSearchCanceled(long callId);
    void childNodeInserted(long parentId, long prevId, PassRefPtr<InspectorObject> node);
    void didGetOuterHTML(long callId, const String& outerHTML);
    void didEnableSearchingForNode(long callId);
    void didToggleStyleEnabled(long callId, PassRefPtr<InspectorValue> style);
    void didChangeTagName(long callId, long nodeId);
    void didAddScriptToEvaluateOnLoad(long callId);
    void didRemoveNode(long callId, long nodeId);
    void didGetComputedStyle(long callId, PassRefPtr<InspectorValue> style);
    void didDisableDebugger(long callId);
    void didEditScriptSource(long callId);
    void didApplyDomChange(long callId, bool success);
    void didGetRuleRangesForStyleSheetId(long callId);
    void didResume(long callId);
    void didDidEvaluateForTestInFrontend(long callId);
    void didSetDOMStorageItem(long callId);
    void didClearConsoleMessages(long callId);
    void addRecordToTimeline(PassRefPtr<InspectorObject> record);
    void childNodeRemoved(long parentId, long id);
    void didStartTimelineProfiler(long callId);
    void didReleaseWrapperObjectGroup(long callId);
    void didRemoveProfile(long callId);
    void didDispatchOnInjectedScript(long callId);
    void didEnableMonitoringXHR(long callId);
    void didSetTextNodeValue(long callId);
    void didRemoveBreakpoint(long callId);
    void didSaveApplicationSettings(long callId);
    void didActivateBreakpoints(long callId);
    void didClearProfiles(long callId);
    void didPerformSearch(long callId);
    void didPushNodeByPathToFrontend(long callId, long nodeId);
    void didDeactivateBreakpoints(long callId);
    void setChildNodes(long parentId, PassRefPtr<InspectorArray> nodes);
    void didStopTimelineProfiler(long callId);
    void addNodesToSearchResult(PassRefPtr<InspectorArray> nodeIds);
    void didSetStyleText(long callId, bool success);
    void didCopyNode(long callId);
    void didSetRuleSelector(long callId, PassRefPtr<InspectorValue> rule, bool selectorAffectsNode);
    void didGetScriptSource(long callId);
    void didDisableProfiler(long callId);
    void didRemoveAllScriptsToEvaluateOnLoad(long callId);
    void didGetDatabaseTableNames(long callId);
    void didEnableProfiler(long callId);
    void didGetChildNodes(long callId);
    void didGetDOMStorageEntries(long callId);
    void didDeleteCookie(long callId);

private:
    InspectorClient* m_inspectorClient;
};

} // namespace WebCore
#endif // !defined(RemoteInspectorFrontend_h)

