package com.pichillilorenzo.flutter_inappwebview_android.chrome_custom_tabs;

import android.content.Intent;
import androidx.browser.trusted.TrustedWebActivityDisplayMode;
import com.google.common.base.Ascii;
import com.pichillilorenzo.flutter_inappwebview_android.ISettings;
import com.pichillilorenzo.flutter_inappwebview_android.types.AndroidResource;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

/* JADX INFO: loaded from: classes6.dex */
public class ChromeCustomTabsSettings implements ISettings<ChromeCustomTabsActivity> {
    static final String LOG_TAG = "ChromeCustomTabsSettings";

    @Deprecated
    public Boolean addDefaultShareMenuItem;
    public List<String> additionalTrustedOrigins;
    public Boolean alwaysUseBrowserUI;
    public TrustedWebActivityDisplayMode displayMode;
    public Boolean enableUrlBarHiding;
    public List<AndroidResource> exitAnimations;
    public Boolean instantAppsEnabled;
    public Boolean isSingleInstance;
    public Boolean isTrustedWebActivity;
    public Boolean keepAliveEnabled;
    public String navigationBarColor;
    public String navigationBarDividerColor;
    public Boolean noHistory;
    public String packageName;
    public Integer screenOrientation;
    public String secondaryToolbarColor;
    public Integer shareState = 0;
    public Boolean showTitle = Boolean.TRUE;
    public List<AndroidResource> startAnimations;
    public String toolbarBackgroundColor;

    public ChromeCustomTabsSettings() {
        Boolean bool = Boolean.FALSE;
        this.enableUrlBarHiding = bool;
        this.instantAppsEnabled = bool;
        this.keepAliveEnabled = bool;
        this.isSingleInstance = bool;
        this.noHistory = bool;
        this.isTrustedWebActivity = bool;
        this.additionalTrustedOrigins = new ArrayList();
        this.displayMode = null;
        this.screenOrientation = 0;
        this.startAnimations = new ArrayList();
        this.exitAnimations = new ArrayList();
        this.alwaysUseBrowserUI = bool;
    }

    @Override // com.pichillilorenzo.flutter_inappwebview_android.ISettings
    public /* bridge */ /* synthetic */ ISettings<ChromeCustomTabsActivity> parse(Map map) {
        return parse2((Map<String, Object>) map);
    }

    @Override // com.pichillilorenzo.flutter_inappwebview_android.ISettings
    public Map<String, Object> toMap() {
        HashMap map = new HashMap();
        map.put("addDefaultShareMenuItem", this.addDefaultShareMenuItem);
        map.put("showTitle", this.showTitle);
        map.put("toolbarBackgroundColor", this.toolbarBackgroundColor);
        map.put("navigationBarColor", this.navigationBarColor);
        map.put("navigationBarDividerColor", this.navigationBarDividerColor);
        map.put("secondaryToolbarColor", this.secondaryToolbarColor);
        map.put("enableUrlBarHiding", this.enableUrlBarHiding);
        map.put("instantAppsEnabled", this.instantAppsEnabled);
        map.put("packageName", this.packageName);
        map.put("keepAliveEnabled", this.keepAliveEnabled);
        map.put("isSingleInstance", this.isSingleInstance);
        map.put("noHistory", this.noHistory);
        map.put("isTrustedWebActivity", this.isTrustedWebActivity);
        map.put("additionalTrustedOrigins", this.additionalTrustedOrigins);
        map.put("screenOrientation", this.screenOrientation);
        map.put("alwaysUseBrowserUI", this.alwaysUseBrowserUI);
        return map;
    }

    @Override // com.pichillilorenzo.flutter_inappwebview_android.ISettings
    public Map<String, Object> getRealSettings(ChromeCustomTabsActivity chromeCustomTabsActivity) {
        Intent intent;
        Map<String, Object> map = toMap();
        if (chromeCustomTabsActivity != null && (intent = chromeCustomTabsActivity.getIntent()) != null) {
            map.put("packageName", intent.getPackage());
            map.put("keepAliveEnabled", Boolean.valueOf(intent.hasExtra("android.support.customtabs.extra.KEEP_ALIVE")));
        }
        return map;
    }

    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    @Override // com.pichillilorenzo.flutter_inappwebview_android.ISettings
    /* JADX INFO: renamed from: parse, reason: avoid collision after fix types in other method */
    public ISettings<ChromeCustomTabsActivity> parse2(Map<String, Object> map) {
        for (Map.Entry<String, Object> entry : map.entrySet()) {
            String key = entry.getKey();
            Object value = entry.getValue();
            if (value != null) {
                key.getClass();
                key.hashCode();
                byte b = -1;
                switch (key.hashCode()) {
                    case -2112880751:
                        if (key.equals("addDefaultShareMenuItem")) {
                            b = 0;
                        }
                        break;
                    case -2080611471:
                        if (key.equals("startAnimations")) {
                            b = 1;
                        }
                        break;
                    case -1913803429:
                        if (key.equals("showTitle")) {
                            b = 2;
                        }
                        break;
                    case -1799055374:
                        if (key.equals("shareState")) {
                            b = 3;
                        }
                        break;
                    case -632275769:
                        if (key.equals("isSingleInstance")) {
                            b = 4;
                        }
                        break;
                    case -462720700:
                        if (key.equals("navigationBarColor")) {
                            b = 5;
                        }
                        break;
                    case -329366839:
                        if (key.equals("navigationBarDividerColor")) {
                            b = 6;
                        }
                        break;
                    case -227713574:
                        if (key.equals("toolbarBackgroundColor")) {
                            b = 7;
                        }
                        break;
                    case 137483238:
                        if (key.equals("enableUrlBarHiding")) {
                            b = 8;
                        }
                        break;
                    case 227582404:
                        if (key.equals("screenOrientation")) {
                            b = 9;
                        }
                        break;
                    case 317955373:
                        if (key.equals("exitAnimations")) {
                            b = 10;
                        }
                        break;
                    case 378069052:
                        if (key.equals("secondaryToolbarColor")) {
                            b = Ascii.VT;
                        }
                        break;
                    case 390710230:
                        if (key.equals("isTrustedWebActivity")) {
                            b = Ascii.FF;
                        }
                        break;
                    case 472764366:
                        if (key.equals("instantAppsEnabled")) {
                            b = Ascii.CR;
                        }
                        break;
                    case 908759025:
                        if (key.equals("packageName")) {
                            b = Ascii.SO;
                        }
                        break;
                    case 1518510995:
                        if (key.equals("noHistory")) {
                            b = Ascii.SI;
                        }
                        break;
                    case 1578203421:
                        if (key.equals("additionalTrustedOrigins")) {
                            b = Ascii.DLE;
                        }
                        break;
                    case 1603728804:
                        if (key.equals("alwaysUseBrowserUI")) {
                            b = 17;
                        }
                        break;
                    case 1714132357:
                        if (key.equals("displayMode")) {
                            b = Ascii.DC2;
                        }
                        break;
                    case 2126240217:
                        if (key.equals("keepAliveEnabled")) {
                            b = 19;
                        }
                        break;
                }
                switch (b) {
                    case 0:
                        this.addDefaultShareMenuItem = (Boolean) value;
                        break;
                    case 1:
                        for (Map map2 : (List) value) {
                            if (AndroidResource.fromMap(map2) != null) {
                                this.startAnimations.add(AndroidResource.fromMap(map2));
                            }
                        }
                        break;
                    case 2:
                        this.showTitle = (Boolean) value;
                        break;
                    case 3:
                        this.shareState = (Integer) value;
                        break;
                    case 4:
                        this.isSingleInstance = (Boolean) value;
                        break;
                    case 5:
                        this.navigationBarColor = (String) value;
                        break;
                    case 6:
                        this.navigationBarDividerColor = (String) value;
                        break;
                    case 7:
                        this.toolbarBackgroundColor = (String) value;
                        break;
                    case 8:
                        this.enableUrlBarHiding = (Boolean) value;
                        break;
                    case 9:
                        this.screenOrientation = (Integer) value;
                        break;
                    case 10:
                        for (Map map3 : (List) value) {
                            if (AndroidResource.fromMap(map3) != null) {
                                this.exitAnimations.add(AndroidResource.fromMap(map3));
                            }
                        }
                        break;
                    case 11:
                        this.secondaryToolbarColor = (String) value;
                        break;
                    case 12:
                        this.isTrustedWebActivity = (Boolean) value;
                        break;
                    case 13:
                        this.instantAppsEnabled = (Boolean) value;
                        break;
                    case 14:
                        this.packageName = (String) value;
                        break;
                    case 15:
                        this.noHistory = (Boolean) value;
                        break;
                    case 16:
                        this.additionalTrustedOrigins = (List) value;
                        break;
                    case 17:
                        this.alwaysUseBrowserUI = (Boolean) value;
                        break;
                    case 18:
                        Map map4 = (Map) value;
                        String str = (String) map4.get("type");
                        if (str != null) {
                            if (str.equals("IMMERSIVE_MODE")) {
                                this.displayMode = new TrustedWebActivityDisplayMode.ImmersiveMode(((Boolean) map4.get("isSticky")).booleanValue(), ((Integer) map4.get("displayCutoutMode")).intValue());
                            } else if (str.equals("DEFAULT_MODE")) {
                                this.displayMode = new TrustedWebActivityDisplayMode.DefaultMode();
                            }
                        }
                        break;
                    case 19:
                        this.keepAliveEnabled = (Boolean) value;
                        break;
                }
            }
        }
        return this;
    }
}
