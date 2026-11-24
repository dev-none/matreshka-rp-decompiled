package io.flutter.view;

/* JADX INFO: loaded from: classes7.dex */
public class RoleConfiguratorFactory {
    private static final AccessibilityNodeConfigurator progressBarConfigurator = new ProgressBarRoleConfigurator();
    private static final AccessibilityNodeConfigurator comboBoxConfigurator = new ComboBoxRoleConfigurator();
    private static final AccessibilityNodeConfigurator menuConfigurator = new MenuRoleConfigurator();
    private static final AccessibilityNodeConfigurator listViewConfigurator = new ClassNameRoleConfigurator("android.widget.ListView");
    private static final AccessibilityNodeConfigurator radioGroupConfigurator = new ClassNameRoleConfigurator("android.widget.RadioGroup");
    private static final AccessibilityNodeConfigurator menuItemConfigurator = new ClassNameRoleConfigurator("android.view.MenuItem");
    private static final AccessibilityNodeConfigurator genericConfigurator = new BaseRoleConfigurator();

    /* JADX INFO: renamed from: io.flutter.view.RoleConfiguratorFactory$1, reason: invalid class name */
    static /* synthetic */ class AnonymousClass1 {
        static final /* synthetic */ int[] $SwitchMap$io$flutter$view$AccessibilityBridge$Role;

        static {
            int[] iArr = new int[AccessibilityBridge.Role.values().length];
            $SwitchMap$io$flutter$view$AccessibilityBridge$Role = iArr;
            try {
                iArr[AccessibilityBridge.Role.PROGRESS_BAR.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                $SwitchMap$io$flutter$view$AccessibilityBridge$Role[AccessibilityBridge.Role.COMBO_BOX.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            try {
                $SwitchMap$io$flutter$view$AccessibilityBridge$Role[AccessibilityBridge.Role.MENU.ordinal()] = 3;
            } catch (NoSuchFieldError unused3) {
            }
            try {
                $SwitchMap$io$flutter$view$AccessibilityBridge$Role[AccessibilityBridge.Role.LIST.ordinal()] = 4;
            } catch (NoSuchFieldError unused4) {
            }
            try {
                $SwitchMap$io$flutter$view$AccessibilityBridge$Role[AccessibilityBridge.Role.RADIO_GROUP.ordinal()] = 5;
            } catch (NoSuchFieldError unused5) {
            }
            try {
                $SwitchMap$io$flutter$view$AccessibilityBridge$Role[AccessibilityBridge.Role.MENU_ITEM.ordinal()] = 6;
            } catch (NoSuchFieldError unused6) {
            }
            try {
                $SwitchMap$io$flutter$view$AccessibilityBridge$Role[AccessibilityBridge.Role.MENU_ITEM_CHECKBOX.ordinal()] = 7;
            } catch (NoSuchFieldError unused7) {
            }
            try {
                $SwitchMap$io$flutter$view$AccessibilityBridge$Role[AccessibilityBridge.Role.MENU_ITEM_RADIO.ordinal()] = 8;
            } catch (NoSuchFieldError unused8) {
            }
            try {
                $SwitchMap$io$flutter$view$AccessibilityBridge$Role[AccessibilityBridge.Role.NONE.ordinal()] = 9;
            } catch (NoSuchFieldError unused9) {
            }
        }
    }

    public static AccessibilityNodeConfigurator getConfigurator(AccessibilityBridge.Role role) {
        switch (AnonymousClass1.$SwitchMap$io$flutter$view$AccessibilityBridge$Role[role.ordinal()]) {
            case 1:
                return progressBarConfigurator;
            case 2:
                return comboBoxConfigurator;
            case 3:
                return menuConfigurator;
            case 4:
                return listViewConfigurator;
            case 5:
                return radioGroupConfigurator;
            case 6:
            case 7:
            case 8:
                return menuItemConfigurator;
            default:
                return genericConfigurator;
        }
    }
}
