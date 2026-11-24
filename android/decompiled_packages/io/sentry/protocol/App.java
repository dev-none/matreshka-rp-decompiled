package io.sentry.protocol;

import com.google.common.base.Ascii;
import io.sentry.ILogger;
import io.sentry.JsonDeserializer;
import io.sentry.JsonSerializable;
import io.sentry.JsonUnknown;
import io.sentry.ObjectReader;
import io.sentry.ObjectWriter;
import io.sentry.util.CollectionUtils;
import io.sentry.util.Objects;
import io.sentry.vendor.gson.stream.JsonToken;
import java.io.IOException;
import java.util.Date;
import java.util.List;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;

/* JADX INFO: loaded from: classes7.dex */
public final class App implements JsonUnknown, JsonSerializable {
    public static final String TYPE = "app";
    private String appBuild;
    private String appIdentifier;
    private String appName;
    private Date appStartTime;
    private String appVersion;
    private String buildType;
    private String deviceAppHash;
    private Boolean inForeground;
    private Boolean isSplitApks;
    private Map<String, String> permissions;
    private List<String> splitNames;
    private String startType;
    private Map<String, Object> unknown;
    private List<String> viewNames;

    public static final class JsonKeys {
        public static final String APP_BUILD = "app_build";
        public static final String APP_IDENTIFIER = "app_identifier";
        public static final String APP_NAME = "app_name";
        public static final String APP_PERMISSIONS = "permissions";
        public static final String APP_START_TIME = "app_start_time";
        public static final String APP_VERSION = "app_version";
        public static final String BUILD_TYPE = "build_type";
        public static final String DEVICE_APP_HASH = "device_app_hash";
        public static final String IN_FOREGROUND = "in_foreground";
        public static final String IS_SPLIT_APKS = "is_split_apks";
        public static final String SPLIT_NAMES = "split_names";
        public static final String START_TYPE = "start_type";
        public static final String VIEW_NAMES = "view_names";
    }

    public App() {
    }

    App(App app) {
        this.appBuild = app.appBuild;
        this.appIdentifier = app.appIdentifier;
        this.appName = app.appName;
        this.appStartTime = app.appStartTime;
        this.appVersion = app.appVersion;
        this.buildType = app.buildType;
        this.deviceAppHash = app.deviceAppHash;
        this.permissions = CollectionUtils.newConcurrentHashMap(app.permissions);
        this.inForeground = app.inForeground;
        this.viewNames = CollectionUtils.newArrayList(app.viewNames);
        this.startType = app.startType;
        this.isSplitApks = app.isSplitApks;
        this.splitNames = app.splitNames;
        this.unknown = CollectionUtils.newConcurrentHashMap(app.unknown);
    }

    public String getAppIdentifier() {
        return this.appIdentifier;
    }

    public void setAppIdentifier(String str) {
        this.appIdentifier = str;
    }

    public Date getAppStartTime() {
        Date date = this.appStartTime;
        if (date != null) {
            return (Date) date.clone();
        }
        return null;
    }

    public void setAppStartTime(Date date) {
        this.appStartTime = date;
    }

    public String getDeviceAppHash() {
        return this.deviceAppHash;
    }

    public void setDeviceAppHash(String str) {
        this.deviceAppHash = str;
    }

    public String getBuildType() {
        return this.buildType;
    }

    public void setBuildType(String str) {
        this.buildType = str;
    }

    public String getAppName() {
        return this.appName;
    }

    public void setAppName(String str) {
        this.appName = str;
    }

    public String getAppVersion() {
        return this.appVersion;
    }

    public void setAppVersion(String str) {
        this.appVersion = str;
    }

    public String getAppBuild() {
        return this.appBuild;
    }

    public void setAppBuild(String str) {
        this.appBuild = str;
    }

    public Map<String, String> getPermissions() {
        return this.permissions;
    }

    public void setPermissions(Map<String, String> map) {
        this.permissions = map;
    }

    public Boolean getInForeground() {
        return this.inForeground;
    }

    public void setInForeground(Boolean bool) {
        this.inForeground = bool;
    }

    public List<String> getViewNames() {
        return this.viewNames;
    }

    public void setViewNames(List<String> list) {
        this.viewNames = list;
    }

    public String getStartType() {
        return this.startType;
    }

    public void setStartType(String str) {
        this.startType = str;
    }

    public Boolean getSplitApks() {
        return this.isSplitApks;
    }

    public void setSplitApks(Boolean bool) {
        this.isSplitApks = bool;
    }

    public List<String> getSplitNames() {
        return this.splitNames;
    }

    public void setSplitNames(List<String> list) {
        this.splitNames = list;
    }

    public boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && getClass() == obj.getClass()) {
            App app = (App) obj;
            if (Objects.equals(this.appIdentifier, app.appIdentifier) && Objects.equals(this.appStartTime, app.appStartTime) && Objects.equals(this.deviceAppHash, app.deviceAppHash) && Objects.equals(this.buildType, app.buildType) && Objects.equals(this.appName, app.appName) && Objects.equals(this.appVersion, app.appVersion) && Objects.equals(this.appBuild, app.appBuild) && Objects.equals(this.permissions, app.permissions) && Objects.equals(this.inForeground, app.inForeground) && Objects.equals(this.viewNames, app.viewNames) && Objects.equals(this.startType, app.startType) && Objects.equals(this.isSplitApks, app.isSplitApks) && Objects.equals(this.splitNames, app.splitNames)) {
                return true;
            }
        }
        return false;
    }

    public int hashCode() {
        return Objects.hash(this.appIdentifier, this.appStartTime, this.deviceAppHash, this.buildType, this.appName, this.appVersion, this.appBuild, this.permissions, this.inForeground, this.viewNames, this.startType, this.isSplitApks, this.splitNames);
    }

    @Override // io.sentry.JsonUnknown
    public Map<String, Object> getUnknown() {
        return this.unknown;
    }

    @Override // io.sentry.JsonUnknown
    public void setUnknown(Map<String, Object> map) {
        this.unknown = map;
    }

    @Override // io.sentry.JsonSerializable
    public void serialize(ObjectWriter objectWriter, ILogger iLogger) throws IOException {
        objectWriter.beginObject();
        if (this.appIdentifier != null) {
            objectWriter.name(JsonKeys.APP_IDENTIFIER).value(this.appIdentifier);
        }
        if (this.appStartTime != null) {
            objectWriter.name(JsonKeys.APP_START_TIME).value(iLogger, this.appStartTime);
        }
        if (this.deviceAppHash != null) {
            objectWriter.name(JsonKeys.DEVICE_APP_HASH).value(this.deviceAppHash);
        }
        if (this.buildType != null) {
            objectWriter.name(JsonKeys.BUILD_TYPE).value(this.buildType);
        }
        if (this.appName != null) {
            objectWriter.name(JsonKeys.APP_NAME).value(this.appName);
        }
        if (this.appVersion != null) {
            objectWriter.name(JsonKeys.APP_VERSION).value(this.appVersion);
        }
        if (this.appBuild != null) {
            objectWriter.name(JsonKeys.APP_BUILD).value(this.appBuild);
        }
        Map<String, String> map = this.permissions;
        if (map != null && !map.isEmpty()) {
            objectWriter.name(JsonKeys.APP_PERMISSIONS).value(iLogger, this.permissions);
        }
        if (this.inForeground != null) {
            objectWriter.name(JsonKeys.IN_FOREGROUND).value(this.inForeground);
        }
        if (this.viewNames != null) {
            objectWriter.name(JsonKeys.VIEW_NAMES).value(iLogger, this.viewNames);
        }
        if (this.startType != null) {
            objectWriter.name(JsonKeys.START_TYPE).value(this.startType);
        }
        if (this.isSplitApks != null) {
            objectWriter.name(JsonKeys.IS_SPLIT_APKS).value(this.isSplitApks);
        }
        List<String> list = this.splitNames;
        if (list != null && !list.isEmpty()) {
            objectWriter.name(JsonKeys.SPLIT_NAMES).value(iLogger, this.splitNames);
        }
        Map<String, Object> map2 = this.unknown;
        if (map2 != null) {
            for (String str : map2.keySet()) {
                objectWriter.name(str).value(iLogger, this.unknown.get(str));
            }
        }
        objectWriter.endObject();
    }

    public static final class Deserializer implements JsonDeserializer<App> {
        /* JADX WARN: Can't rename method to resolve collision */
        /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
        @Override // io.sentry.JsonDeserializer
        public App deserialize(ObjectReader objectReader, ILogger iLogger) throws Exception {
            objectReader.beginObject();
            App app = new App();
            ConcurrentHashMap concurrentHashMap = null;
            while (objectReader.peek() == JsonToken.NAME) {
                String strNextName = objectReader.nextName();
                strNextName.hashCode();
                byte b = -1;
                switch (strNextName.hashCode()) {
                    case -1950148125:
                        if (strNextName.equals(JsonKeys.SPLIT_NAMES)) {
                            b = 0;
                        }
                        break;
                    case -1898053579:
                        if (strNextName.equals(JsonKeys.DEVICE_APP_HASH)) {
                            b = 1;
                        }
                        break;
                    case -1573129993:
                        if (strNextName.equals(JsonKeys.START_TYPE)) {
                            b = 2;
                        }
                        break;
                    case -1524619986:
                        if (strNextName.equals(JsonKeys.VIEW_NAMES)) {
                            b = 3;
                        }
                        break;
                    case -901870406:
                        if (strNextName.equals(JsonKeys.APP_VERSION)) {
                            b = 4;
                        }
                        break;
                    case -650544995:
                        if (strNextName.equals(JsonKeys.IN_FOREGROUND)) {
                            b = 5;
                        }
                        break;
                    case -470395285:
                        if (strNextName.equals(JsonKeys.BUILD_TYPE)) {
                            b = 6;
                        }
                        break;
                    case 746297735:
                        if (strNextName.equals(JsonKeys.APP_IDENTIFIER)) {
                            b = 7;
                        }
                        break;
                    case 791585128:
                        if (strNextName.equals(JsonKeys.APP_START_TIME)) {
                            b = 8;
                        }
                        break;
                    case 1133704324:
                        if (strNextName.equals(JsonKeys.APP_PERMISSIONS)) {
                            b = 9;
                        }
                        break;
                    case 1167648233:
                        if (strNextName.equals(JsonKeys.APP_NAME)) {
                            b = 10;
                        }
                        break;
                    case 1826866896:
                        if (strNextName.equals(JsonKeys.APP_BUILD)) {
                            b = Ascii.VT;
                        }
                        break;
                    case 1965003281:
                        if (strNextName.equals(JsonKeys.IS_SPLIT_APKS)) {
                            b = Ascii.FF;
                        }
                        break;
                }
                switch (b) {
                    case 0:
                        List<String> list = (List) objectReader.nextObjectOrNull();
                        if (list != null) {
                            app.setSplitNames(list);
                        }
                        break;
                    case 1:
                        app.deviceAppHash = objectReader.nextStringOrNull();
                        break;
                    case 2:
                        app.startType = objectReader.nextStringOrNull();
                        break;
                    case 3:
                        List<String> list2 = (List) objectReader.nextObjectOrNull();
                        if (list2 != null) {
                            app.setViewNames(list2);
                        }
                        break;
                    case 4:
                        app.appVersion = objectReader.nextStringOrNull();
                        break;
                    case 5:
                        app.inForeground = objectReader.nextBooleanOrNull();
                        break;
                    case 6:
                        app.buildType = objectReader.nextStringOrNull();
                        break;
                    case 7:
                        app.appIdentifier = objectReader.nextStringOrNull();
                        break;
                    case 8:
                        app.appStartTime = objectReader.nextDateOrNull(iLogger);
                        break;
                    case 9:
                        app.permissions = CollectionUtils.newConcurrentHashMap((Map) objectReader.nextObjectOrNull());
                        break;
                    case 10:
                        app.appName = objectReader.nextStringOrNull();
                        break;
                    case 11:
                        app.appBuild = objectReader.nextStringOrNull();
                        break;
                    case 12:
                        app.isSplitApks = objectReader.nextBooleanOrNull();
                        break;
                    default:
                        if (concurrentHashMap == null) {
                            concurrentHashMap = new ConcurrentHashMap();
                        }
                        objectReader.nextUnknown(iLogger, concurrentHashMap, strNextName);
                        break;
                }
            }
            app.setUnknown(concurrentHashMap);
            objectReader.endObject();
            return app;
        }
    }
}
