package io.flutter.view;

import android.view.accessibility.AccessibilityNodeInfo;

/* JADX INFO: loaded from: classes7.dex */
public class ComboBoxRoleConfigurator extends BaseRoleConfigurator {
    @Override // io.flutter.view.BaseRoleConfigurator
    protected void configureRole(AccessibilityNodeInfo accessibilityNodeInfo, AccessibilityBridge.SemanticsNode semanticsNode) {
        accessibilityNodeInfo.setClassName("android.widget.Spinner");
        accessibilityNodeInfo.setCanOpenPopup(true);
    }
}
