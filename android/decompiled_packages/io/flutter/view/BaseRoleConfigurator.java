package io.flutter.view;

import android.os.Build;
import android.view.accessibility.AccessibilityNodeInfo;
import androidx.compose.ui.platform.AndroidComposeViewAccessibilityDelegateCompat;
import io.sentry.SentryMaskingOptions;
import java.util.List;

/* JADX INFO: loaded from: classes7.dex */
public class BaseRoleConfigurator implements AccessibilityNodeConfigurator {
    private static final String TAG = "BaseRoleConfigurator";

    protected void configureRole(AccessibilityNodeInfo accessibilityNodeInfo, AccessibilityBridge.SemanticsNode semanticsNode) {
    }

    @Override // io.flutter.view.AccessibilityNodeConfigurator
    public final void configure(AccessibilityNodeInfo accessibilityNodeInfo, AccessibilityBridge.SemanticsNode semanticsNode) {
        configureFocusable(accessibilityNodeInfo, semanticsNode);
        configureClipboard(accessibilityNodeInfo, semanticsNode);
        configureDismissable(accessibilityNodeInfo, semanticsNode);
        configureTappable(accessibilityNodeInfo, semanticsNode);
        configureLiveRegion(accessibilityNodeInfo, semanticsNode);
        configureSelectable(accessibilityNodeInfo, semanticsNode);
        configureHeading(accessibilityNodeInfo, semanticsNode);
        configureCustomActions(accessibilityNodeInfo, semanticsNode);
        configureTextField(accessibilityNodeInfo, semanticsNode);
        configureButton(accessibilityNodeInfo, semanticsNode);
        configureImage(accessibilityNodeInfo, semanticsNode);
        configureSlider(accessibilityNodeInfo, semanticsNode);
        configureScrollable(accessibilityNodeInfo, semanticsNode);
        configureCollection(accessibilityNodeInfo, semanticsNode);
        configureCollectionItem(accessibilityNodeInfo, semanticsNode);
        configureLabelAndValue(accessibilityNodeInfo, semanticsNode);
        configureCheckable(accessibilityNodeInfo, semanticsNode);
        configureExpanded(accessibilityNodeInfo, semanticsNode);
        configureRole(accessibilityNodeInfo, semanticsNode);
    }

    private void configureFocusable(AccessibilityNodeInfo accessibilityNodeInfo, AccessibilityBridge.SemanticsNode semanticsNode) {
        accessibilityNodeInfo.setFocusable(semanticsNode.isFocusable());
        if (semanticsNode.accessibilityBridge.inputFocusedSemanticsNode != null) {
            accessibilityNodeInfo.setFocused(semanticsNode.accessibilityBridge.inputFocusedSemanticsNode.id == semanticsNode.id);
        }
        if (semanticsNode.accessibilityBridge.accessibilityFocusedSemanticsNode != null) {
            accessibilityNodeInfo.setAccessibilityFocused(semanticsNode.accessibilityBridge.accessibilityFocusedSemanticsNode.id == semanticsNode.id);
        }
        if (semanticsNode.accessibilityBridge.accessibilityFocusedSemanticsNode != null && semanticsNode.accessibilityBridge.accessibilityFocusedSemanticsNode.id == semanticsNode.id) {
            accessibilityNodeInfo.addAction(128);
        } else {
            accessibilityNodeInfo.addAction(64);
        }
    }

    private void configureClipboard(AccessibilityNodeInfo accessibilityNodeInfo, AccessibilityBridge.SemanticsNode semanticsNode) {
        if (semanticsNode.hasAction(AccessibilityBridge.Action.SET_SELECTION)) {
            accessibilityNodeInfo.addAction(131072);
        }
        if (semanticsNode.hasAction(AccessibilityBridge.Action.COPY)) {
            accessibilityNodeInfo.addAction(16384);
        }
        if (semanticsNode.hasAction(AccessibilityBridge.Action.CUT)) {
            accessibilityNodeInfo.addAction(65536);
        }
        if (semanticsNode.hasAction(AccessibilityBridge.Action.PASTE)) {
            accessibilityNodeInfo.addAction(32768);
        }
        if (semanticsNode.hasAction(AccessibilityBridge.Action.SET_TEXT)) {
            accessibilityNodeInfo.addAction(2097152);
        }
    }

    private void configureDismissable(AccessibilityNodeInfo accessibilityNodeInfo, AccessibilityBridge.SemanticsNode semanticsNode) {
        if (semanticsNode.hasAction(AccessibilityBridge.Action.DISMISS)) {
            accessibilityNodeInfo.setDismissable(true);
            accessibilityNodeInfo.addAction(1048576);
        }
    }

    private void configureTappable(AccessibilityNodeInfo accessibilityNodeInfo, AccessibilityBridge.SemanticsNode semanticsNode) {
        if (semanticsNode.hasAction(AccessibilityBridge.Action.TAP)) {
            if (semanticsNode.onTapOverride != null) {
                accessibilityNodeInfo.addAction(new AccessibilityNodeInfo.AccessibilityAction(16, semanticsNode.onTapOverride.hint));
                accessibilityNodeInfo.setClickable(true);
            } else {
                accessibilityNodeInfo.addAction(16);
                accessibilityNodeInfo.setClickable(true);
            }
        }
        if (semanticsNode.hasAction(AccessibilityBridge.Action.LONG_PRESS)) {
            if (semanticsNode.onLongPressOverride != null) {
                accessibilityNodeInfo.addAction(new AccessibilityNodeInfo.AccessibilityAction(32, semanticsNode.onLongPressOverride.hint));
                accessibilityNodeInfo.setLongClickable(true);
            } else {
                accessibilityNodeInfo.addAction(32);
                accessibilityNodeInfo.setLongClickable(true);
            }
        }
    }

    private void configureLiveRegion(AccessibilityNodeInfo accessibilityNodeInfo, AccessibilityBridge.SemanticsNode semanticsNode) {
        if (semanticsNode.hasFlag(AccessibilityBridge.Flag.IS_LIVE_REGION)) {
            accessibilityNodeInfo.setLiveRegion(1);
        }
    }

    private void configureSelectable(AccessibilityNodeInfo accessibilityNodeInfo, AccessibilityBridge.SemanticsNode semanticsNode) {
        accessibilityNodeInfo.setSelected(semanticsNode.hasFlag(AccessibilityBridge.Flag.IS_SELECTED));
    }

    private void configureHeading(AccessibilityNodeInfo accessibilityNodeInfo, AccessibilityBridge.SemanticsNode semanticsNode) {
        if (Build.VERSION.SDK_INT >= 28) {
            accessibilityNodeInfo.setHeading(semanticsNode.headingLevel > 0);
        }
    }

    private void configureCustomActions(AccessibilityNodeInfo accessibilityNodeInfo, AccessibilityBridge.SemanticsNode semanticsNode) {
        if (semanticsNode.customAccessibilityActions != null) {
            for (AccessibilityBridge.CustomAccessibilityAction customAccessibilityAction : semanticsNode.customAccessibilityActions) {
                accessibilityNodeInfo.addAction(new AccessibilityNodeInfo.AccessibilityAction(customAccessibilityAction.resourceId, customAccessibilityAction.label));
            }
        }
    }

    private void configureTextField(AccessibilityNodeInfo accessibilityNodeInfo, AccessibilityBridge.SemanticsNode semanticsNode) {
        int i;
        if (semanticsNode.hasFlag(AccessibilityBridge.Flag.IS_TEXT_FIELD)) {
            accessibilityNodeInfo.setPassword(semanticsNode.hasFlag(AccessibilityBridge.Flag.IS_OBSCURED));
            if (!semanticsNode.hasFlag(AccessibilityBridge.Flag.IS_READ_ONLY)) {
                accessibilityNodeInfo.setClassName(AndroidComposeViewAccessibilityDelegateCompat.TextFieldClassName);
            }
            int i2 = 1;
            accessibilityNodeInfo.setEditable(!semanticsNode.hasFlag(AccessibilityBridge.Flag.IS_READ_ONLY));
            if (semanticsNode.textSelectionBase != -1 && semanticsNode.textSelectionExtent != -1) {
                accessibilityNodeInfo.setTextSelection(semanticsNode.textSelectionBase, semanticsNode.textSelectionExtent);
            }
            if (semanticsNode.accessibilityBridge.accessibilityFocusedSemanticsNode != null && semanticsNode.accessibilityBridge.accessibilityFocusedSemanticsNode.id == semanticsNode.id) {
                accessibilityNodeInfo.setLiveRegion(1);
            }
            if (semanticsNode.hasAction(AccessibilityBridge.Action.MOVE_CURSOR_FORWARD_BY_CHARACTER)) {
                accessibilityNodeInfo.addAction(256);
                i = 1;
            } else {
                i = 0;
            }
            if (semanticsNode.hasAction(AccessibilityBridge.Action.MOVE_CURSOR_BACKWARD_BY_CHARACTER)) {
                accessibilityNodeInfo.addAction(512);
            } else {
                i2 = i;
            }
            if (semanticsNode.hasAction(AccessibilityBridge.Action.MOVE_CURSOR_FORWARD_BY_WORD)) {
                accessibilityNodeInfo.addAction(256);
                i2 |= 2;
            }
            if (semanticsNode.hasAction(AccessibilityBridge.Action.MOVE_CURSOR_BACKWARD_BY_WORD)) {
                accessibilityNodeInfo.addAction(512);
                i2 |= 2;
            }
            accessibilityNodeInfo.setMovementGranularities(i2);
            if (semanticsNode.maxValueLength >= 0) {
                accessibilityNodeInfo.setMaxTextLength(((semanticsNode.value != null ? semanticsNode.value.length() : 0) - semanticsNode.currentValueLength) + semanticsNode.maxValueLength);
            }
        }
    }

    private void configureButton(AccessibilityNodeInfo accessibilityNodeInfo, AccessibilityBridge.SemanticsNode semanticsNode) {
        if (semanticsNode.shouldBeTreatedAsButton()) {
            accessibilityNodeInfo.setClassName("android.widget.Button");
        }
    }

    private void configureImage(AccessibilityNodeInfo accessibilityNodeInfo, AccessibilityBridge.SemanticsNode semanticsNode) {
        if (semanticsNode.hasFlag(AccessibilityBridge.Flag.IS_IMAGE)) {
            accessibilityNodeInfo.setClassName(SentryMaskingOptions.IMAGE_VIEW_CLASS_NAME);
        }
    }

    private void configureSlider(AccessibilityNodeInfo accessibilityNodeInfo, AccessibilityBridge.SemanticsNode semanticsNode) {
        if (!semanticsNode.hasAction(AccessibilityBridge.Action.TAP) && semanticsNode.hasFlag(AccessibilityBridge.Flag.IS_SLIDER)) {
            accessibilityNodeInfo.addAction(16);
            accessibilityNodeInfo.setClickable(true);
        }
        if (semanticsNode.hasAction(AccessibilityBridge.Action.INCREASE) || semanticsNode.hasAction(AccessibilityBridge.Action.DECREASE)) {
            accessibilityNodeInfo.setClassName("android.widget.SeekBar");
            if (semanticsNode.hasAction(AccessibilityBridge.Action.INCREASE)) {
                accessibilityNodeInfo.addAction(4096);
            }
            if (semanticsNode.hasAction(AccessibilityBridge.Action.DECREASE)) {
                accessibilityNodeInfo.addAction(8192);
            }
        }
    }

    private void configureScrollable(AccessibilityNodeInfo accessibilityNodeInfo, AccessibilityBridge.SemanticsNode semanticsNode) {
        if (semanticsNode.hasAction(AccessibilityBridge.Action.SCROLL_LEFT) || semanticsNode.hasAction(AccessibilityBridge.Action.SCROLL_UP) || semanticsNode.hasAction(AccessibilityBridge.Action.SCROLL_RIGHT) || semanticsNode.hasAction(AccessibilityBridge.Action.SCROLL_DOWN)) {
            accessibilityNodeInfo.setScrollable(true);
            if (semanticsNode.hasFlag(AccessibilityBridge.Flag.HAS_IMPLICIT_SCROLLING)) {
                if (semanticsNode.hasAction(AccessibilityBridge.Action.SCROLL_LEFT) || semanticsNode.hasAction(AccessibilityBridge.Action.SCROLL_RIGHT)) {
                    accessibilityNodeInfo.setClassName("android.widget.HorizontalScrollView");
                } else {
                    accessibilityNodeInfo.setClassName("android.widget.ScrollView");
                }
            }
        }
        if (semanticsNode.hasAction(AccessibilityBridge.Action.SCROLL_LEFT) || semanticsNode.hasAction(AccessibilityBridge.Action.SCROLL_UP)) {
            accessibilityNodeInfo.addAction(4096);
        }
        if (semanticsNode.hasAction(AccessibilityBridge.Action.SCROLL_RIGHT) || semanticsNode.hasAction(AccessibilityBridge.Action.SCROLL_DOWN)) {
            accessibilityNodeInfo.addAction(8192);
        }
    }

    private void configureCollection(AccessibilityNodeInfo accessibilityNodeInfo, AccessibilityBridge.SemanticsNode semanticsNode) {
        if (semanticsNode.accessibilityBridge.shouldSetCollectionInfo(semanticsNode)) {
            if (semanticsNode.hasAction(AccessibilityBridge.Action.SCROLL_LEFT) || semanticsNode.hasAction(AccessibilityBridge.Action.SCROLL_RIGHT)) {
                if (Build.VERSION.SDK_INT < 33) {
                    accessibilityNodeInfo.setCollectionInfo(AccessibilityNodeInfo.CollectionInfo.obtain(1, semanticsNode.scrollChildren, false));
                    return;
                } else {
                    AccessibilityBridge$$ExternalSyntheticApiModelOutline0.m();
                    accessibilityNodeInfo.setCollectionInfo(AccessibilityBridge$$ExternalSyntheticApiModelOutline0.m(1, semanticsNode.scrollChildren, false));
                    return;
                }
            }
            if (Build.VERSION.SDK_INT < 33) {
                accessibilityNodeInfo.setCollectionInfo(AccessibilityNodeInfo.CollectionInfo.obtain(semanticsNode.scrollChildren, 1, false));
            } else {
                AccessibilityBridge$$ExternalSyntheticApiModelOutline0.m();
                accessibilityNodeInfo.setCollectionInfo(AccessibilityBridge$$ExternalSyntheticApiModelOutline0.m(semanticsNode.scrollChildren, 1, false));
            }
        }
    }

    private void configureCollectionItem(AccessibilityNodeInfo accessibilityNodeInfo, AccessibilityBridge.SemanticsNode semanticsNode) {
        if (semanticsNode.accessibilityBridge.shouldSetCollectionItemInfo(semanticsNode)) {
            AccessibilityBridge.SemanticsNode semanticsNode2 = semanticsNode.parent;
            List<AccessibilityBridge.SemanticsNode> list = semanticsNode2.childrenInTraversalOrder;
            boolean z = (semanticsNode2.hasAction(AccessibilityBridge.Action.SCROLL_LEFT) || semanticsNode2.hasAction(AccessibilityBridge.Action.SCROLL_RIGHT)) ? false : true;
            int iIndexOf = list.indexOf(semanticsNode);
            if (z) {
                if (Build.VERSION.SDK_INT < 33) {
                    accessibilityNodeInfo.setCollectionItemInfo(AccessibilityNodeInfo.CollectionItemInfo.obtain(iIndexOf, 1, 0, 1, semanticsNode.hasFlag(AccessibilityBridge.Flag.IS_HEADER)));
                    return;
                } else {
                    AccessibilityBridge$$ExternalSyntheticApiModelOutline0.m$1();
                    accessibilityNodeInfo.setCollectionItemInfo(AccessibilityBridge$$ExternalSyntheticApiModelOutline0.m(iIndexOf, 1, 0, 1, semanticsNode.hasFlag(AccessibilityBridge.Flag.IS_HEADER)));
                    return;
                }
            }
            if (Build.VERSION.SDK_INT < 33) {
                accessibilityNodeInfo.setCollectionItemInfo(AccessibilityNodeInfo.CollectionItemInfo.obtain(0, 1, iIndexOf, 1, semanticsNode.hasFlag(AccessibilityBridge.Flag.IS_HEADER)));
            } else {
                AccessibilityBridge$$ExternalSyntheticApiModelOutline0.m$1();
                accessibilityNodeInfo.setCollectionItemInfo(AccessibilityBridge$$ExternalSyntheticApiModelOutline0.m(0, 1, iIndexOf, 1, semanticsNode.hasFlag(AccessibilityBridge.Flag.IS_HEADER)));
            }
        }
    }

    private void configureLabelAndValue(AccessibilityNodeInfo accessibilityNodeInfo, AccessibilityBridge.SemanticsNode semanticsNode) {
        if (semanticsNode.hasFlag(AccessibilityBridge.Flag.IS_TEXT_FIELD)) {
            accessibilityNodeInfo.setText(semanticsNode.getValue());
            if (Build.VERSION.SDK_INT >= 28) {
                accessibilityNodeInfo.setHintText(semanticsNode.getTextFieldHint());
            }
        } else if (!semanticsNode.hasFlag(AccessibilityBridge.Flag.SCOPES_ROUTE)) {
            CharSequence valueLabelHint = semanticsNode.getValueLabelHint();
            if (Build.VERSION.SDK_INT < 28 && semanticsNode.tooltip != null) {
                if (valueLabelHint == null) {
                    valueLabelHint = "";
                }
                valueLabelHint = ((Object) valueLabelHint) + "\n" + semanticsNode.tooltip;
            }
            if (valueLabelHint != null) {
                accessibilityNodeInfo.setContentDescription(valueLabelHint);
            }
        }
        if (Build.VERSION.SDK_INT < 28 || semanticsNode.tooltip == null) {
            return;
        }
        accessibilityNodeInfo.setTooltipText(semanticsNode.tooltip);
        if (semanticsNode.getValueLabelHint() == null) {
            accessibilityNodeInfo.setContentDescription(semanticsNode.tooltip);
        }
    }

    private void configureCheckable(AccessibilityNodeInfo accessibilityNodeInfo, AccessibilityBridge.SemanticsNode semanticsNode) {
        boolean zHasFlag = semanticsNode.hasFlag(AccessibilityBridge.Flag.HAS_CHECKED_STATE);
        boolean zHasFlag2 = semanticsNode.hasFlag(AccessibilityBridge.Flag.HAS_TOGGLED_STATE);
        accessibilityNodeInfo.setCheckable(zHasFlag || zHasFlag2);
        if (zHasFlag) {
            if (semanticsNode.hasFlag(AccessibilityBridge.Flag.IS_IN_MUTUALLY_EXCLUSIVE_GROUP)) {
                accessibilityNodeInfo.setClassName("android.widget.RadioButton");
            } else {
                accessibilityNodeInfo.setClassName("android.widget.CheckBox");
            }
            setChecked(accessibilityNodeInfo, semanticsNode.hasFlag(AccessibilityBridge.Flag.IS_CHECKED), semanticsNode.hasFlag(AccessibilityBridge.Flag.IS_CHECK_STATE_MIXED));
            return;
        }
        if (zHasFlag2) {
            accessibilityNodeInfo.setClassName("android.widget.Switch");
            setChecked(accessibilityNodeInfo, semanticsNode.hasFlag(AccessibilityBridge.Flag.IS_TOGGLED), false);
        }
    }

    private void setChecked(AccessibilityNodeInfo accessibilityNodeInfo, boolean z, boolean z2) {
        int i;
        if (Build.VERSION.SDK_INT >= 36) {
            if (z2) {
                i = 2;
            } else {
                i = z ? 1 : 0;
            }
            accessibilityNodeInfo.setChecked(i);
            return;
        }
        accessibilityNodeInfo.setChecked(z);
    }

    private void configureExpanded(AccessibilityNodeInfo accessibilityNodeInfo, AccessibilityBridge.SemanticsNode semanticsNode) {
        if (Build.VERSION.SDK_INT < 36 || !semanticsNode.hasFlag(AccessibilityBridge.Flag.HAS_EXPANDED_STATE)) {
            return;
        }
        accessibilityNodeInfo.setExpandedState(semanticsNode.hasFlag(AccessibilityBridge.Flag.IS_EXPANDED) ? 3 : 1);
        if (semanticsNode.hasAction(AccessibilityBridge.Action.EXPAND)) {
            accessibilityNodeInfo.addAction(262144);
        }
        if (semanticsNode.hasAction(AccessibilityBridge.Action.COLLAPSE)) {
            accessibilityNodeInfo.addAction(524288);
        }
    }
}
