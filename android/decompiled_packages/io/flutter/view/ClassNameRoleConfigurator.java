package io.flutter.view;

import android.view.accessibility.AccessibilityNodeInfo;

/* JADX INFO: loaded from: classes7.dex */
public class ClassNameRoleConfigurator extends BaseRoleConfigurator {
    private final String className;

    public ClassNameRoleConfigurator(String str) {
        this.className = str;
    }

    @Override // io.flutter.view.BaseRoleConfigurator
    protected void configureRole(AccessibilityNodeInfo accessibilityNodeInfo, AccessibilityBridge.SemanticsNode semanticsNode) {
        accessibilityNodeInfo.setClassName(this.className);
    }
}
