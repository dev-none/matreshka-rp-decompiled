package io.flutter.view;

import android.os.Build;
import android.view.accessibility.AccessibilityNodeInfo;

/* JADX INFO: loaded from: classes7.dex */
public class ProgressBarRoleConfigurator extends BaseRoleConfigurator {
    @Override // io.flutter.view.BaseRoleConfigurator
    protected void configureRole(AccessibilityNodeInfo accessibilityNodeInfo, AccessibilityBridge.SemanticsNode semanticsNode) {
        float f;
        float f2;
        accessibilityNodeInfo.setClassName("android.widget.ProgressBar");
        if (semanticsNode.value != null) {
            if (semanticsNode.minValue != null) {
                try {
                    f = Float.parseFloat(semanticsNode.minValue);
                } catch (NumberFormatException unused) {
                    f = Float.NEGATIVE_INFINITY;
                }
            } else {
                f = Float.NEGATIVE_INFINITY;
            }
            if (semanticsNode.maxValue != null) {
                try {
                    f2 = Float.parseFloat(semanticsNode.maxValue);
                } catch (NumberFormatException unused2) {
                    f2 = Float.POSITIVE_INFINITY;
                }
            } else {
                f2 = Float.POSITIVE_INFINITY;
            }
            try {
                accessibilityNodeInfo.setRangeInfo(AccessibilityNodeInfo.RangeInfo.obtain(1, f, f2, Float.parseFloat(semanticsNode.value)));
            } catch (NumberFormatException unused3) {
                if (Build.VERSION.SDK_INT >= 36) {
                    accessibilityNodeInfo.setRangeInfo(AccessibilityNodeInfo.RangeInfo.obtain(3, 0.0f, 0.0f, 0.0f));
                } else {
                    accessibilityNodeInfo.setRangeInfo(AccessibilityNodeInfo.RangeInfo.obtain(1, 0.0f, 0.0f, 0.0f));
                }
            }
        }
    }
}
