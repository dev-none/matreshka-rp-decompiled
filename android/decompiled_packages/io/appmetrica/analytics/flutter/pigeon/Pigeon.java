package io.appmetrica.analytics.flutter.pigeon;

import android.util.Log;
import androidx.compose.runtime.ComposerKt;
import androidx.media3.common.PlaybackException;
import androidx.media3.extractor.ts.TsExtractor;
import io.flutter.plugin.common.BasicMessageChannel;
import io.flutter.plugin.common.BinaryMessenger;
import io.flutter.plugin.common.MessageCodec;
import io.flutter.plugin.common.StandardMessageCodec;
import java.io.ByteArrayOutputStream;
import java.nio.ByteBuffer;
import java.util.ArrayList;
import java.util.List;
import java.util.Map;

/* JADX INFO: loaded from: classes7.dex */
public class Pigeon {

    public interface Result<T> {
        void error(Throwable th);

        void success(T t);
    }

    public static class FlutterError extends RuntimeException {
        public final String code;
        public final Object details;

        public FlutterError(String str, String str2, Object obj) {
            super(str2);
            this.code = str;
            this.details = obj;
        }
    }

    protected static ArrayList<Object> wrapError(Throwable th) {
        ArrayList<Object> arrayList = new ArrayList<>(3);
        if (th instanceof FlutterError) {
            FlutterError flutterError = (FlutterError) th;
            arrayList.add(flutterError.code);
            arrayList.add(flutterError.getMessage());
            arrayList.add(flutterError.details);
            return arrayList;
        }
        arrayList.add(th.toString());
        arrayList.add(th.getClass().getSimpleName());
        arrayList.add("Cause: " + th.getCause() + ", Stacktrace: " + Log.getStackTraceString(th));
        return arrayList;
    }

    public enum AppMetricaDeferredDeeplinkReasonPigeon {
        NOT_A_FIRST_LAUNCH(0),
        PARSE_ERROR(1),
        UNKNOWN(2),
        NO_REFERRER(3),
        NO_ERROR(4);

        final int index;

        AppMetricaDeferredDeeplinkReasonPigeon(int i) {
            this.index = i;
        }
    }

    public enum UserProfileAttributeType {
        BIRTH_DATE(0),
        BOOLEAN(1),
        COUNTER(2),
        GENDER(3),
        NAME(4),
        NOTIFICATION_ENABLED(5),
        NUMBER(6),
        STRING(7);

        final int index;

        UserProfileAttributeType(int i) {
            this.index = i;
        }
    }

    public enum GenderPigeon {
        MALE(0),
        FEMALE(1),
        OTHER(2),
        UNDEFINED(3);

        final int index;

        GenderPigeon(int i) {
            this.index = i;
        }
    }

    public enum AdTypePigeon {
        UNKNOWN(0),
        NATIVE(1),
        BANNER(2),
        REWARDED(3),
        INTERSTITIAL(4),
        MREC(5),
        APP_OPEN(6),
        OTHER(7);

        final int index;

        AdTypePigeon(int i) {
            this.index = i;
        }
    }

    public enum StartupParamsItemStatusPigeon {
        FEATURE_DISABLED(0),
        INVALID_VALUE_FROM_PROVIDER(1),
        NETWORK_ERROR(2),
        OK(3),
        PROVIDER_UNAVAILABLE(4),
        UNKNOWN_ERROR(5);

        final int index;

        StartupParamsItemStatusPigeon(int i) {
            this.index = i;
        }
    }

    public static final class AppMetricaConfigPigeon {
        private Boolean advIdentifiersTracking;
        private Boolean anrMonitoring;
        private Long anrMonitoringTimeout;
        private String apiKey;
        private Long appBuildNumber;
        private Map<String, String> appEnvironment;
        private Boolean appOpenTrackingEnabled;
        private String appVersion;
        private Boolean crashReporting;
        private List<String> customHosts;
        private Boolean dataSendingEnabled;
        private String deviceType;
        private Long dispatchPeriodSeconds;
        private Map<String, String> errorEnvironment;
        private Boolean firstActivationAsUpdate;
        private LocationPigeon location;
        private Boolean locationTracking;
        private Boolean logs;
        private Long maxReportsCount;
        private Long maxReportsInDatabaseCount;
        private Boolean nativeCrashReporting;
        private PreloadInfoPigeon preloadInfo;
        private Boolean revenueAutoTrackingEnabled;
        private Long sessionTimeout;
        private Boolean sessionsAutoTrackingEnabled;
        private String userProfileID;

        public String getApiKey() {
            return this.apiKey;
        }

        public void setApiKey(String str) {
            if (str == null) {
                throw new IllegalStateException("Nonnull field \"apiKey\" is null.");
            }
            this.apiKey = str;
        }

        public Boolean getAdvIdentifiersTracking() {
            return this.advIdentifiersTracking;
        }

        public void setAdvIdentifiersTracking(Boolean bool) {
            this.advIdentifiersTracking = bool;
        }

        public Boolean getAnrMonitoring() {
            return this.anrMonitoring;
        }

        public void setAnrMonitoring(Boolean bool) {
            this.anrMonitoring = bool;
        }

        public Long getAnrMonitoringTimeout() {
            return this.anrMonitoringTimeout;
        }

        public void setAnrMonitoringTimeout(Long l) {
            this.anrMonitoringTimeout = l;
        }

        public Long getAppBuildNumber() {
            return this.appBuildNumber;
        }

        public void setAppBuildNumber(Long l) {
            this.appBuildNumber = l;
        }

        public Map<String, String> getAppEnvironment() {
            return this.appEnvironment;
        }

        public void setAppEnvironment(Map<String, String> map) {
            this.appEnvironment = map;
        }

        public Boolean getAppOpenTrackingEnabled() {
            return this.appOpenTrackingEnabled;
        }

        public void setAppOpenTrackingEnabled(Boolean bool) {
            this.appOpenTrackingEnabled = bool;
        }

        public String getAppVersion() {
            return this.appVersion;
        }

        public void setAppVersion(String str) {
            this.appVersion = str;
        }

        public Boolean getCrashReporting() {
            return this.crashReporting;
        }

        public void setCrashReporting(Boolean bool) {
            this.crashReporting = bool;
        }

        public List<String> getCustomHosts() {
            return this.customHosts;
        }

        public void setCustomHosts(List<String> list) {
            this.customHosts = list;
        }

        public Boolean getDataSendingEnabled() {
            return this.dataSendingEnabled;
        }

        public void setDataSendingEnabled(Boolean bool) {
            this.dataSendingEnabled = bool;
        }

        public String getDeviceType() {
            return this.deviceType;
        }

        public void setDeviceType(String str) {
            this.deviceType = str;
        }

        public Long getDispatchPeriodSeconds() {
            return this.dispatchPeriodSeconds;
        }

        public void setDispatchPeriodSeconds(Long l) {
            this.dispatchPeriodSeconds = l;
        }

        public Map<String, String> getErrorEnvironment() {
            return this.errorEnvironment;
        }

        public void setErrorEnvironment(Map<String, String> map) {
            this.errorEnvironment = map;
        }

        public Boolean getFirstActivationAsUpdate() {
            return this.firstActivationAsUpdate;
        }

        public void setFirstActivationAsUpdate(Boolean bool) {
            this.firstActivationAsUpdate = bool;
        }

        public LocationPigeon getLocation() {
            return this.location;
        }

        public void setLocation(LocationPigeon locationPigeon) {
            this.location = locationPigeon;
        }

        public Boolean getLocationTracking() {
            return this.locationTracking;
        }

        public void setLocationTracking(Boolean bool) {
            this.locationTracking = bool;
        }

        public Boolean getLogs() {
            return this.logs;
        }

        public void setLogs(Boolean bool) {
            this.logs = bool;
        }

        public Long getMaxReportsCount() {
            return this.maxReportsCount;
        }

        public void setMaxReportsCount(Long l) {
            this.maxReportsCount = l;
        }

        public Long getMaxReportsInDatabaseCount() {
            return this.maxReportsInDatabaseCount;
        }

        public void setMaxReportsInDatabaseCount(Long l) {
            this.maxReportsInDatabaseCount = l;
        }

        public Boolean getNativeCrashReporting() {
            return this.nativeCrashReporting;
        }

        public void setNativeCrashReporting(Boolean bool) {
            this.nativeCrashReporting = bool;
        }

        public PreloadInfoPigeon getPreloadInfo() {
            return this.preloadInfo;
        }

        public void setPreloadInfo(PreloadInfoPigeon preloadInfoPigeon) {
            this.preloadInfo = preloadInfoPigeon;
        }

        public Boolean getRevenueAutoTrackingEnabled() {
            return this.revenueAutoTrackingEnabled;
        }

        public void setRevenueAutoTrackingEnabled(Boolean bool) {
            this.revenueAutoTrackingEnabled = bool;
        }

        public Long getSessionTimeout() {
            return this.sessionTimeout;
        }

        public void setSessionTimeout(Long l) {
            this.sessionTimeout = l;
        }

        public Boolean getSessionsAutoTrackingEnabled() {
            return this.sessionsAutoTrackingEnabled;
        }

        public void setSessionsAutoTrackingEnabled(Boolean bool) {
            this.sessionsAutoTrackingEnabled = bool;
        }

        public String getUserProfileID() {
            return this.userProfileID;
        }

        public void setUserProfileID(String str) {
            this.userProfileID = str;
        }

        AppMetricaConfigPigeon() {
        }

        public static final class Builder {
            private Boolean advIdentifiersTracking;
            private Boolean anrMonitoring;
            private Long anrMonitoringTimeout;
            private String apiKey;
            private Long appBuildNumber;
            private Map<String, String> appEnvironment;
            private Boolean appOpenTrackingEnabled;
            private String appVersion;
            private Boolean crashReporting;
            private List<String> customHosts;
            private Boolean dataSendingEnabled;
            private String deviceType;
            private Long dispatchPeriodSeconds;
            private Map<String, String> errorEnvironment;
            private Boolean firstActivationAsUpdate;
            private LocationPigeon location;
            private Boolean locationTracking;
            private Boolean logs;
            private Long maxReportsCount;
            private Long maxReportsInDatabaseCount;
            private Boolean nativeCrashReporting;
            private PreloadInfoPigeon preloadInfo;
            private Boolean revenueAutoTrackingEnabled;
            private Long sessionTimeout;
            private Boolean sessionsAutoTrackingEnabled;
            private String userProfileID;

            public Builder setApiKey(String str) {
                this.apiKey = str;
                return this;
            }

            public Builder setAdvIdentifiersTracking(Boolean bool) {
                this.advIdentifiersTracking = bool;
                return this;
            }

            public Builder setAnrMonitoring(Boolean bool) {
                this.anrMonitoring = bool;
                return this;
            }

            public Builder setAnrMonitoringTimeout(Long l) {
                this.anrMonitoringTimeout = l;
                return this;
            }

            public Builder setAppBuildNumber(Long l) {
                this.appBuildNumber = l;
                return this;
            }

            public Builder setAppEnvironment(Map<String, String> map) {
                this.appEnvironment = map;
                return this;
            }

            public Builder setAppOpenTrackingEnabled(Boolean bool) {
                this.appOpenTrackingEnabled = bool;
                return this;
            }

            public Builder setAppVersion(String str) {
                this.appVersion = str;
                return this;
            }

            public Builder setCrashReporting(Boolean bool) {
                this.crashReporting = bool;
                return this;
            }

            public Builder setCustomHosts(List<String> list) {
                this.customHosts = list;
                return this;
            }

            public Builder setDataSendingEnabled(Boolean bool) {
                this.dataSendingEnabled = bool;
                return this;
            }

            public Builder setDeviceType(String str) {
                this.deviceType = str;
                return this;
            }

            public Builder setDispatchPeriodSeconds(Long l) {
                this.dispatchPeriodSeconds = l;
                return this;
            }

            public Builder setErrorEnvironment(Map<String, String> map) {
                this.errorEnvironment = map;
                return this;
            }

            public Builder setFirstActivationAsUpdate(Boolean bool) {
                this.firstActivationAsUpdate = bool;
                return this;
            }

            public Builder setLocation(LocationPigeon locationPigeon) {
                this.location = locationPigeon;
                return this;
            }

            public Builder setLocationTracking(Boolean bool) {
                this.locationTracking = bool;
                return this;
            }

            public Builder setLogs(Boolean bool) {
                this.logs = bool;
                return this;
            }

            public Builder setMaxReportsCount(Long l) {
                this.maxReportsCount = l;
                return this;
            }

            public Builder setMaxReportsInDatabaseCount(Long l) {
                this.maxReportsInDatabaseCount = l;
                return this;
            }

            public Builder setNativeCrashReporting(Boolean bool) {
                this.nativeCrashReporting = bool;
                return this;
            }

            public Builder setPreloadInfo(PreloadInfoPigeon preloadInfoPigeon) {
                this.preloadInfo = preloadInfoPigeon;
                return this;
            }

            public Builder setRevenueAutoTrackingEnabled(Boolean bool) {
                this.revenueAutoTrackingEnabled = bool;
                return this;
            }

            public Builder setSessionTimeout(Long l) {
                this.sessionTimeout = l;
                return this;
            }

            public Builder setSessionsAutoTrackingEnabled(Boolean bool) {
                this.sessionsAutoTrackingEnabled = bool;
                return this;
            }

            public Builder setUserProfileID(String str) {
                this.userProfileID = str;
                return this;
            }

            public AppMetricaConfigPigeon build() {
                AppMetricaConfigPigeon appMetricaConfigPigeon = new AppMetricaConfigPigeon();
                appMetricaConfigPigeon.setApiKey(this.apiKey);
                appMetricaConfigPigeon.setAdvIdentifiersTracking(this.advIdentifiersTracking);
                appMetricaConfigPigeon.setAnrMonitoring(this.anrMonitoring);
                appMetricaConfigPigeon.setAnrMonitoringTimeout(this.anrMonitoringTimeout);
                appMetricaConfigPigeon.setAppBuildNumber(this.appBuildNumber);
                appMetricaConfigPigeon.setAppEnvironment(this.appEnvironment);
                appMetricaConfigPigeon.setAppOpenTrackingEnabled(this.appOpenTrackingEnabled);
                appMetricaConfigPigeon.setAppVersion(this.appVersion);
                appMetricaConfigPigeon.setCrashReporting(this.crashReporting);
                appMetricaConfigPigeon.setCustomHosts(this.customHosts);
                appMetricaConfigPigeon.setDataSendingEnabled(this.dataSendingEnabled);
                appMetricaConfigPigeon.setDeviceType(this.deviceType);
                appMetricaConfigPigeon.setDispatchPeriodSeconds(this.dispatchPeriodSeconds);
                appMetricaConfigPigeon.setErrorEnvironment(this.errorEnvironment);
                appMetricaConfigPigeon.setFirstActivationAsUpdate(this.firstActivationAsUpdate);
                appMetricaConfigPigeon.setLocation(this.location);
                appMetricaConfigPigeon.setLocationTracking(this.locationTracking);
                appMetricaConfigPigeon.setLogs(this.logs);
                appMetricaConfigPigeon.setMaxReportsCount(this.maxReportsCount);
                appMetricaConfigPigeon.setMaxReportsInDatabaseCount(this.maxReportsInDatabaseCount);
                appMetricaConfigPigeon.setNativeCrashReporting(this.nativeCrashReporting);
                appMetricaConfigPigeon.setPreloadInfo(this.preloadInfo);
                appMetricaConfigPigeon.setRevenueAutoTrackingEnabled(this.revenueAutoTrackingEnabled);
                appMetricaConfigPigeon.setSessionTimeout(this.sessionTimeout);
                appMetricaConfigPigeon.setSessionsAutoTrackingEnabled(this.sessionsAutoTrackingEnabled);
                appMetricaConfigPigeon.setUserProfileID(this.userProfileID);
                return appMetricaConfigPigeon;
            }
        }

        ArrayList<Object> toList() {
            ArrayList<Object> arrayList = new ArrayList<>(26);
            arrayList.add(this.apiKey);
            arrayList.add(this.advIdentifiersTracking);
            arrayList.add(this.anrMonitoring);
            arrayList.add(this.anrMonitoringTimeout);
            arrayList.add(this.appBuildNumber);
            arrayList.add(this.appEnvironment);
            arrayList.add(this.appOpenTrackingEnabled);
            arrayList.add(this.appVersion);
            arrayList.add(this.crashReporting);
            arrayList.add(this.customHosts);
            arrayList.add(this.dataSendingEnabled);
            arrayList.add(this.deviceType);
            arrayList.add(this.dispatchPeriodSeconds);
            arrayList.add(this.errorEnvironment);
            arrayList.add(this.firstActivationAsUpdate);
            LocationPigeon locationPigeon = this.location;
            arrayList.add(locationPigeon == null ? null : locationPigeon.toList());
            arrayList.add(this.locationTracking);
            arrayList.add(this.logs);
            arrayList.add(this.maxReportsCount);
            arrayList.add(this.maxReportsInDatabaseCount);
            arrayList.add(this.nativeCrashReporting);
            PreloadInfoPigeon preloadInfoPigeon = this.preloadInfo;
            arrayList.add(preloadInfoPigeon != null ? preloadInfoPigeon.toList() : null);
            arrayList.add(this.revenueAutoTrackingEnabled);
            arrayList.add(this.sessionTimeout);
            arrayList.add(this.sessionsAutoTrackingEnabled);
            arrayList.add(this.userProfileID);
            return arrayList;
        }

        static AppMetricaConfigPigeon fromList(ArrayList<Object> arrayList) {
            Long lValueOf;
            Long lValueOf2;
            Long lValueOf3;
            Long lValueOf4;
            Long lValueOf5;
            AppMetricaConfigPigeon appMetricaConfigPigeon = new AppMetricaConfigPigeon();
            appMetricaConfigPigeon.setApiKey((String) arrayList.get(0));
            appMetricaConfigPigeon.setAdvIdentifiersTracking((Boolean) arrayList.get(1));
            appMetricaConfigPigeon.setAnrMonitoring((Boolean) arrayList.get(2));
            Object obj = arrayList.get(3);
            Long lValueOf6 = null;
            if (obj == null) {
                lValueOf = null;
            } else {
                lValueOf = Long.valueOf(obj instanceof Integer ? ((Integer) obj).intValue() : ((Long) obj).longValue());
            }
            appMetricaConfigPigeon.setAnrMonitoringTimeout(lValueOf);
            Object obj2 = arrayList.get(4);
            if (obj2 == null) {
                lValueOf2 = null;
            } else {
                lValueOf2 = Long.valueOf(obj2 instanceof Integer ? ((Integer) obj2).intValue() : ((Long) obj2).longValue());
            }
            appMetricaConfigPigeon.setAppBuildNumber(lValueOf2);
            appMetricaConfigPigeon.setAppEnvironment((Map) arrayList.get(5));
            appMetricaConfigPigeon.setAppOpenTrackingEnabled((Boolean) arrayList.get(6));
            appMetricaConfigPigeon.setAppVersion((String) arrayList.get(7));
            appMetricaConfigPigeon.setCrashReporting((Boolean) arrayList.get(8));
            appMetricaConfigPigeon.setCustomHosts((List) arrayList.get(9));
            appMetricaConfigPigeon.setDataSendingEnabled((Boolean) arrayList.get(10));
            appMetricaConfigPigeon.setDeviceType((String) arrayList.get(11));
            Object obj3 = arrayList.get(12);
            if (obj3 == null) {
                lValueOf3 = null;
            } else {
                lValueOf3 = Long.valueOf(obj3 instanceof Integer ? ((Integer) obj3).intValue() : ((Long) obj3).longValue());
            }
            appMetricaConfigPigeon.setDispatchPeriodSeconds(lValueOf3);
            appMetricaConfigPigeon.setErrorEnvironment((Map) arrayList.get(13));
            appMetricaConfigPigeon.setFirstActivationAsUpdate((Boolean) arrayList.get(14));
            Object obj4 = arrayList.get(15);
            appMetricaConfigPigeon.setLocation(obj4 == null ? null : LocationPigeon.fromList((ArrayList) obj4));
            appMetricaConfigPigeon.setLocationTracking((Boolean) arrayList.get(16));
            appMetricaConfigPigeon.setLogs((Boolean) arrayList.get(17));
            Object obj5 = arrayList.get(18);
            if (obj5 == null) {
                lValueOf4 = null;
            } else {
                lValueOf4 = Long.valueOf(obj5 instanceof Integer ? ((Integer) obj5).intValue() : ((Long) obj5).longValue());
            }
            appMetricaConfigPigeon.setMaxReportsCount(lValueOf4);
            Object obj6 = arrayList.get(19);
            if (obj6 == null) {
                lValueOf5 = null;
            } else {
                lValueOf5 = Long.valueOf(obj6 instanceof Integer ? ((Integer) obj6).intValue() : ((Long) obj6).longValue());
            }
            appMetricaConfigPigeon.setMaxReportsInDatabaseCount(lValueOf5);
            appMetricaConfigPigeon.setNativeCrashReporting((Boolean) arrayList.get(20));
            Object obj7 = arrayList.get(21);
            appMetricaConfigPigeon.setPreloadInfo(obj7 == null ? null : PreloadInfoPigeon.fromList((ArrayList) obj7));
            appMetricaConfigPigeon.setRevenueAutoTrackingEnabled((Boolean) arrayList.get(22));
            Object obj8 = arrayList.get(23);
            if (obj8 != null) {
                lValueOf6 = Long.valueOf(obj8 instanceof Integer ? ((Integer) obj8).intValue() : ((Long) obj8).longValue());
            }
            appMetricaConfigPigeon.setSessionTimeout(lValueOf6);
            appMetricaConfigPigeon.setSessionsAutoTrackingEnabled((Boolean) arrayList.get(24));
            appMetricaConfigPigeon.setUserProfileID((String) arrayList.get(25));
            return appMetricaConfigPigeon;
        }
    }

    public static final class LocationPigeon {
        private Double accuracy;
        private Double altitude;
        private Double course;
        private Double latitude;
        private Double longitude;
        private String provider;
        private Double speed;
        private Long timestamp;

        public Double getLatitude() {
            return this.latitude;
        }

        public void setLatitude(Double d) {
            if (d == null) {
                throw new IllegalStateException("Nonnull field \"latitude\" is null.");
            }
            this.latitude = d;
        }

        public Double getLongitude() {
            return this.longitude;
        }

        public void setLongitude(Double d) {
            if (d == null) {
                throw new IllegalStateException("Nonnull field \"longitude\" is null.");
            }
            this.longitude = d;
        }

        public String getProvider() {
            return this.provider;
        }

        public void setProvider(String str) {
            this.provider = str;
        }

        public Double getAltitude() {
            return this.altitude;
        }

        public void setAltitude(Double d) {
            this.altitude = d;
        }

        public Double getAccuracy() {
            return this.accuracy;
        }

        public void setAccuracy(Double d) {
            this.accuracy = d;
        }

        public Double getCourse() {
            return this.course;
        }

        public void setCourse(Double d) {
            this.course = d;
        }

        public Double getSpeed() {
            return this.speed;
        }

        public void setSpeed(Double d) {
            this.speed = d;
        }

        public Long getTimestamp() {
            return this.timestamp;
        }

        public void setTimestamp(Long l) {
            this.timestamp = l;
        }

        LocationPigeon() {
        }

        public static final class Builder {
            private Double accuracy;
            private Double altitude;
            private Double course;
            private Double latitude;
            private Double longitude;
            private String provider;
            private Double speed;
            private Long timestamp;

            public Builder setLatitude(Double d) {
                this.latitude = d;
                return this;
            }

            public Builder setLongitude(Double d) {
                this.longitude = d;
                return this;
            }

            public Builder setProvider(String str) {
                this.provider = str;
                return this;
            }

            public Builder setAltitude(Double d) {
                this.altitude = d;
                return this;
            }

            public Builder setAccuracy(Double d) {
                this.accuracy = d;
                return this;
            }

            public Builder setCourse(Double d) {
                this.course = d;
                return this;
            }

            public Builder setSpeed(Double d) {
                this.speed = d;
                return this;
            }

            public Builder setTimestamp(Long l) {
                this.timestamp = l;
                return this;
            }

            public LocationPigeon build() {
                LocationPigeon locationPigeon = new LocationPigeon();
                locationPigeon.setLatitude(this.latitude);
                locationPigeon.setLongitude(this.longitude);
                locationPigeon.setProvider(this.provider);
                locationPigeon.setAltitude(this.altitude);
                locationPigeon.setAccuracy(this.accuracy);
                locationPigeon.setCourse(this.course);
                locationPigeon.setSpeed(this.speed);
                locationPigeon.setTimestamp(this.timestamp);
                return locationPigeon;
            }
        }

        ArrayList<Object> toList() {
            ArrayList<Object> arrayList = new ArrayList<>(8);
            arrayList.add(this.latitude);
            arrayList.add(this.longitude);
            arrayList.add(this.provider);
            arrayList.add(this.altitude);
            arrayList.add(this.accuracy);
            arrayList.add(this.course);
            arrayList.add(this.speed);
            arrayList.add(this.timestamp);
            return arrayList;
        }

        static LocationPigeon fromList(ArrayList<Object> arrayList) {
            Long lValueOf;
            LocationPigeon locationPigeon = new LocationPigeon();
            locationPigeon.setLatitude((Double) arrayList.get(0));
            locationPigeon.setLongitude((Double) arrayList.get(1));
            locationPigeon.setProvider((String) arrayList.get(2));
            locationPigeon.setAltitude((Double) arrayList.get(3));
            locationPigeon.setAccuracy((Double) arrayList.get(4));
            locationPigeon.setCourse((Double) arrayList.get(5));
            locationPigeon.setSpeed((Double) arrayList.get(6));
            Object obj = arrayList.get(7);
            if (obj == null) {
                lValueOf = null;
            } else {
                lValueOf = Long.valueOf(obj instanceof Integer ? ((Integer) obj).intValue() : ((Long) obj).longValue());
            }
            locationPigeon.setTimestamp(lValueOf);
            return locationPigeon;
        }
    }

    public static final class PreloadInfoPigeon {
        private Map<String, String> additionalInfo;
        private String trackingId;

        public String getTrackingId() {
            return this.trackingId;
        }

        public void setTrackingId(String str) {
            if (str == null) {
                throw new IllegalStateException("Nonnull field \"trackingId\" is null.");
            }
            this.trackingId = str;
        }

        public Map<String, String> getAdditionalInfo() {
            return this.additionalInfo;
        }

        public void setAdditionalInfo(Map<String, String> map) {
            this.additionalInfo = map;
        }

        PreloadInfoPigeon() {
        }

        public static final class Builder {
            private Map<String, String> additionalInfo;
            private String trackingId;

            public Builder setTrackingId(String str) {
                this.trackingId = str;
                return this;
            }

            public Builder setAdditionalInfo(Map<String, String> map) {
                this.additionalInfo = map;
                return this;
            }

            public PreloadInfoPigeon build() {
                PreloadInfoPigeon preloadInfoPigeon = new PreloadInfoPigeon();
                preloadInfoPigeon.setTrackingId(this.trackingId);
                preloadInfoPigeon.setAdditionalInfo(this.additionalInfo);
                return preloadInfoPigeon;
            }
        }

        ArrayList<Object> toList() {
            ArrayList<Object> arrayList = new ArrayList<>(2);
            arrayList.add(this.trackingId);
            arrayList.add(this.additionalInfo);
            return arrayList;
        }

        static PreloadInfoPigeon fromList(ArrayList<Object> arrayList) {
            PreloadInfoPigeon preloadInfoPigeon = new PreloadInfoPigeon();
            preloadInfoPigeon.setTrackingId((String) arrayList.get(0));
            preloadInfoPigeon.setAdditionalInfo((Map) arrayList.get(1));
            return preloadInfoPigeon;
        }
    }

    public static final class AppMetricaDeferredDeeplinkErrorPigeon {
        private String description;
        private String message;
        private AppMetricaDeferredDeeplinkReasonPigeon reason;

        public AppMetricaDeferredDeeplinkReasonPigeon getReason() {
            return this.reason;
        }

        public void setReason(AppMetricaDeferredDeeplinkReasonPigeon appMetricaDeferredDeeplinkReasonPigeon) {
            if (appMetricaDeferredDeeplinkReasonPigeon == null) {
                throw new IllegalStateException("Nonnull field \"reason\" is null.");
            }
            this.reason = appMetricaDeferredDeeplinkReasonPigeon;
        }

        public String getDescription() {
            return this.description;
        }

        public void setDescription(String str) {
            if (str == null) {
                throw new IllegalStateException("Nonnull field \"description\" is null.");
            }
            this.description = str;
        }

        public String getMessage() {
            return this.message;
        }

        public void setMessage(String str) {
            this.message = str;
        }

        AppMetricaDeferredDeeplinkErrorPigeon() {
        }

        public static final class Builder {
            private String description;
            private String message;
            private AppMetricaDeferredDeeplinkReasonPigeon reason;

            public Builder setReason(AppMetricaDeferredDeeplinkReasonPigeon appMetricaDeferredDeeplinkReasonPigeon) {
                this.reason = appMetricaDeferredDeeplinkReasonPigeon;
                return this;
            }

            public Builder setDescription(String str) {
                this.description = str;
                return this;
            }

            public Builder setMessage(String str) {
                this.message = str;
                return this;
            }

            public AppMetricaDeferredDeeplinkErrorPigeon build() {
                AppMetricaDeferredDeeplinkErrorPigeon appMetricaDeferredDeeplinkErrorPigeon = new AppMetricaDeferredDeeplinkErrorPigeon();
                appMetricaDeferredDeeplinkErrorPigeon.setReason(this.reason);
                appMetricaDeferredDeeplinkErrorPigeon.setDescription(this.description);
                appMetricaDeferredDeeplinkErrorPigeon.setMessage(this.message);
                return appMetricaDeferredDeeplinkErrorPigeon;
            }
        }

        ArrayList<Object> toList() {
            ArrayList<Object> arrayList = new ArrayList<>(3);
            AppMetricaDeferredDeeplinkReasonPigeon appMetricaDeferredDeeplinkReasonPigeon = this.reason;
            arrayList.add(appMetricaDeferredDeeplinkReasonPigeon == null ? null : Integer.valueOf(appMetricaDeferredDeeplinkReasonPigeon.index));
            arrayList.add(this.description);
            arrayList.add(this.message);
            return arrayList;
        }

        static AppMetricaDeferredDeeplinkErrorPigeon fromList(ArrayList<Object> arrayList) {
            AppMetricaDeferredDeeplinkErrorPigeon appMetricaDeferredDeeplinkErrorPigeon = new AppMetricaDeferredDeeplinkErrorPigeon();
            Object obj = arrayList.get(0);
            appMetricaDeferredDeeplinkErrorPigeon.setReason(obj == null ? null : AppMetricaDeferredDeeplinkReasonPigeon.values()[((Integer) obj).intValue()]);
            appMetricaDeferredDeeplinkErrorPigeon.setDescription((String) arrayList.get(1));
            appMetricaDeferredDeeplinkErrorPigeon.setMessage((String) arrayList.get(2));
            return appMetricaDeferredDeeplinkErrorPigeon;
        }
    }

    public static final class AppMetricaDeferredDeeplinkPigeon {
        private String deeplink;
        private AppMetricaDeferredDeeplinkErrorPigeon error;

        public String getDeeplink() {
            return this.deeplink;
        }

        public void setDeeplink(String str) {
            this.deeplink = str;
        }

        public AppMetricaDeferredDeeplinkErrorPigeon getError() {
            return this.error;
        }

        public void setError(AppMetricaDeferredDeeplinkErrorPigeon appMetricaDeferredDeeplinkErrorPigeon) {
            this.error = appMetricaDeferredDeeplinkErrorPigeon;
        }

        public static final class Builder {
            private String deeplink;
            private AppMetricaDeferredDeeplinkErrorPigeon error;

            public Builder setDeeplink(String str) {
                this.deeplink = str;
                return this;
            }

            public Builder setError(AppMetricaDeferredDeeplinkErrorPigeon appMetricaDeferredDeeplinkErrorPigeon) {
                this.error = appMetricaDeferredDeeplinkErrorPigeon;
                return this;
            }

            public AppMetricaDeferredDeeplinkPigeon build() {
                AppMetricaDeferredDeeplinkPigeon appMetricaDeferredDeeplinkPigeon = new AppMetricaDeferredDeeplinkPigeon();
                appMetricaDeferredDeeplinkPigeon.setDeeplink(this.deeplink);
                appMetricaDeferredDeeplinkPigeon.setError(this.error);
                return appMetricaDeferredDeeplinkPigeon;
            }
        }

        ArrayList<Object> toList() {
            ArrayList<Object> arrayList = new ArrayList<>(2);
            arrayList.add(this.deeplink);
            AppMetricaDeferredDeeplinkErrorPigeon appMetricaDeferredDeeplinkErrorPigeon = this.error;
            arrayList.add(appMetricaDeferredDeeplinkErrorPigeon == null ? null : appMetricaDeferredDeeplinkErrorPigeon.toList());
            return arrayList;
        }

        static AppMetricaDeferredDeeplinkPigeon fromList(ArrayList<Object> arrayList) {
            AppMetricaDeferredDeeplinkPigeon appMetricaDeferredDeeplinkPigeon = new AppMetricaDeferredDeeplinkPigeon();
            appMetricaDeferredDeeplinkPigeon.setDeeplink((String) arrayList.get(0));
            Object obj = arrayList.get(1);
            appMetricaDeferredDeeplinkPigeon.setError(obj == null ? null : AppMetricaDeferredDeeplinkErrorPigeon.fromList((ArrayList) obj));
            return appMetricaDeferredDeeplinkPigeon;
        }
    }

    public static final class AppMetricaDeferredDeeplinkParametersPigeon {
        private AppMetricaDeferredDeeplinkErrorPigeon error;
        private Map<String, String> parameters;

        public Map<String, String> getParameters() {
            return this.parameters;
        }

        public void setParameters(Map<String, String> map) {
            this.parameters = map;
        }

        public AppMetricaDeferredDeeplinkErrorPigeon getError() {
            return this.error;
        }

        public void setError(AppMetricaDeferredDeeplinkErrorPigeon appMetricaDeferredDeeplinkErrorPigeon) {
            this.error = appMetricaDeferredDeeplinkErrorPigeon;
        }

        public static final class Builder {
            private AppMetricaDeferredDeeplinkErrorPigeon error;
            private Map<String, String> parameters;

            public Builder setParameters(Map<String, String> map) {
                this.parameters = map;
                return this;
            }

            public Builder setError(AppMetricaDeferredDeeplinkErrorPigeon appMetricaDeferredDeeplinkErrorPigeon) {
                this.error = appMetricaDeferredDeeplinkErrorPigeon;
                return this;
            }

            public AppMetricaDeferredDeeplinkParametersPigeon build() {
                AppMetricaDeferredDeeplinkParametersPigeon appMetricaDeferredDeeplinkParametersPigeon = new AppMetricaDeferredDeeplinkParametersPigeon();
                appMetricaDeferredDeeplinkParametersPigeon.setParameters(this.parameters);
                appMetricaDeferredDeeplinkParametersPigeon.setError(this.error);
                return appMetricaDeferredDeeplinkParametersPigeon;
            }
        }

        ArrayList<Object> toList() {
            ArrayList<Object> arrayList = new ArrayList<>(2);
            arrayList.add(this.parameters);
            AppMetricaDeferredDeeplinkErrorPigeon appMetricaDeferredDeeplinkErrorPigeon = this.error;
            arrayList.add(appMetricaDeferredDeeplinkErrorPigeon == null ? null : appMetricaDeferredDeeplinkErrorPigeon.toList());
            return arrayList;
        }

        static AppMetricaDeferredDeeplinkParametersPigeon fromList(ArrayList<Object> arrayList) {
            AppMetricaDeferredDeeplinkParametersPigeon appMetricaDeferredDeeplinkParametersPigeon = new AppMetricaDeferredDeeplinkParametersPigeon();
            appMetricaDeferredDeeplinkParametersPigeon.setParameters((Map) arrayList.get(0));
            Object obj = arrayList.get(1);
            appMetricaDeferredDeeplinkParametersPigeon.setError(obj == null ? null : AppMetricaDeferredDeeplinkErrorPigeon.fromList((ArrayList) obj));
            return appMetricaDeferredDeeplinkParametersPigeon;
        }
    }

    public static final class RevenuePigeon {
        private String currency;
        private String payload;
        private String price;
        private String productId;
        private Long quantity;
        private ReceiptPigeon receipt;
        private String transactionId;

        public String getPrice() {
            return this.price;
        }

        public void setPrice(String str) {
            if (str == null) {
                throw new IllegalStateException("Nonnull field \"price\" is null.");
            }
            this.price = str;
        }

        public String getCurrency() {
            return this.currency;
        }

        public void setCurrency(String str) {
            if (str == null) {
                throw new IllegalStateException("Nonnull field \"currency\" is null.");
            }
            this.currency = str;
        }

        public Long getQuantity() {
            return this.quantity;
        }

        public void setQuantity(Long l) {
            this.quantity = l;
        }

        public String getProductId() {
            return this.productId;
        }

        public void setProductId(String str) {
            this.productId = str;
        }

        public String getPayload() {
            return this.payload;
        }

        public void setPayload(String str) {
            this.payload = str;
        }

        public ReceiptPigeon getReceipt() {
            return this.receipt;
        }

        public void setReceipt(ReceiptPigeon receiptPigeon) {
            this.receipt = receiptPigeon;
        }

        public String getTransactionId() {
            return this.transactionId;
        }

        public void setTransactionId(String str) {
            this.transactionId = str;
        }

        RevenuePigeon() {
        }

        public static final class Builder {
            private String currency;
            private String payload;
            private String price;
            private String productId;
            private Long quantity;
            private ReceiptPigeon receipt;
            private String transactionId;

            public Builder setPrice(String str) {
                this.price = str;
                return this;
            }

            public Builder setCurrency(String str) {
                this.currency = str;
                return this;
            }

            public Builder setQuantity(Long l) {
                this.quantity = l;
                return this;
            }

            public Builder setProductId(String str) {
                this.productId = str;
                return this;
            }

            public Builder setPayload(String str) {
                this.payload = str;
                return this;
            }

            public Builder setReceipt(ReceiptPigeon receiptPigeon) {
                this.receipt = receiptPigeon;
                return this;
            }

            public Builder setTransactionId(String str) {
                this.transactionId = str;
                return this;
            }

            public RevenuePigeon build() {
                RevenuePigeon revenuePigeon = new RevenuePigeon();
                revenuePigeon.setPrice(this.price);
                revenuePigeon.setCurrency(this.currency);
                revenuePigeon.setQuantity(this.quantity);
                revenuePigeon.setProductId(this.productId);
                revenuePigeon.setPayload(this.payload);
                revenuePigeon.setReceipt(this.receipt);
                revenuePigeon.setTransactionId(this.transactionId);
                return revenuePigeon;
            }
        }

        ArrayList<Object> toList() {
            ArrayList<Object> arrayList = new ArrayList<>(7);
            arrayList.add(this.price);
            arrayList.add(this.currency);
            arrayList.add(this.quantity);
            arrayList.add(this.productId);
            arrayList.add(this.payload);
            ReceiptPigeon receiptPigeon = this.receipt;
            arrayList.add(receiptPigeon == null ? null : receiptPigeon.toList());
            arrayList.add(this.transactionId);
            return arrayList;
        }

        static RevenuePigeon fromList(ArrayList<Object> arrayList) {
            Long lValueOf;
            RevenuePigeon revenuePigeon = new RevenuePigeon();
            revenuePigeon.setPrice((String) arrayList.get(0));
            revenuePigeon.setCurrency((String) arrayList.get(1));
            Object obj = arrayList.get(2);
            if (obj == null) {
                lValueOf = null;
            } else {
                lValueOf = Long.valueOf(obj instanceof Integer ? ((Integer) obj).intValue() : ((Long) obj).longValue());
            }
            revenuePigeon.setQuantity(lValueOf);
            revenuePigeon.setProductId((String) arrayList.get(3));
            revenuePigeon.setPayload((String) arrayList.get(4));
            Object obj2 = arrayList.get(5);
            revenuePigeon.setReceipt(obj2 != null ? ReceiptPigeon.fromList((ArrayList) obj2) : null);
            revenuePigeon.setTransactionId((String) arrayList.get(6));
            return revenuePigeon;
        }
    }

    public static final class ReceiptPigeon {
        private String data;
        private String signature;

        public String getData() {
            return this.data;
        }

        public void setData(String str) {
            this.data = str;
        }

        public String getSignature() {
            return this.signature;
        }

        public void setSignature(String str) {
            this.signature = str;
        }

        public static final class Builder {
            private String data;
            private String signature;

            public Builder setData(String str) {
                this.data = str;
                return this;
            }

            public Builder setSignature(String str) {
                this.signature = str;
                return this;
            }

            public ReceiptPigeon build() {
                ReceiptPigeon receiptPigeon = new ReceiptPigeon();
                receiptPigeon.setData(this.data);
                receiptPigeon.setSignature(this.signature);
                return receiptPigeon;
            }
        }

        ArrayList<Object> toList() {
            ArrayList<Object> arrayList = new ArrayList<>(2);
            arrayList.add(this.data);
            arrayList.add(this.signature);
            return arrayList;
        }

        static ReceiptPigeon fromList(ArrayList<Object> arrayList) {
            ReceiptPigeon receiptPigeon = new ReceiptPigeon();
            receiptPigeon.setData((String) arrayList.get(0));
            receiptPigeon.setSignature((String) arrayList.get(1));
            return receiptPigeon;
        }
    }

    public static final class ECommerceAmountPigeon {
        private String amount;
        private String currency;

        public String getAmount() {
            return this.amount;
        }

        public void setAmount(String str) {
            if (str == null) {
                throw new IllegalStateException("Nonnull field \"amount\" is null.");
            }
            this.amount = str;
        }

        public String getCurrency() {
            return this.currency;
        }

        public void setCurrency(String str) {
            if (str == null) {
                throw new IllegalStateException("Nonnull field \"currency\" is null.");
            }
            this.currency = str;
        }

        ECommerceAmountPigeon() {
        }

        public static final class Builder {
            private String amount;
            private String currency;

            public Builder setAmount(String str) {
                this.amount = str;
                return this;
            }

            public Builder setCurrency(String str) {
                this.currency = str;
                return this;
            }

            public ECommerceAmountPigeon build() {
                ECommerceAmountPigeon eCommerceAmountPigeon = new ECommerceAmountPigeon();
                eCommerceAmountPigeon.setAmount(this.amount);
                eCommerceAmountPigeon.setCurrency(this.currency);
                return eCommerceAmountPigeon;
            }
        }

        ArrayList<Object> toList() {
            ArrayList<Object> arrayList = new ArrayList<>(2);
            arrayList.add(this.amount);
            arrayList.add(this.currency);
            return arrayList;
        }

        static ECommerceAmountPigeon fromList(ArrayList<Object> arrayList) {
            ECommerceAmountPigeon eCommerceAmountPigeon = new ECommerceAmountPigeon();
            eCommerceAmountPigeon.setAmount((String) arrayList.get(0));
            eCommerceAmountPigeon.setCurrency((String) arrayList.get(1));
            return eCommerceAmountPigeon;
        }
    }

    public static final class ECommerceProductPigeon {
        private ECommercePricePigeon actualPrice;
        private List<String> categoriesPath;
        private String name;
        private ECommercePricePigeon originalPrice;
        private Map<String, String> payload;
        private List<String> promocodes;
        private String sku;

        public String getSku() {
            return this.sku;
        }

        public void setSku(String str) {
            if (str == null) {
                throw new IllegalStateException("Nonnull field \"sku\" is null.");
            }
            this.sku = str;
        }

        public String getName() {
            return this.name;
        }

        public void setName(String str) {
            this.name = str;
        }

        public List<String> getCategoriesPath() {
            return this.categoriesPath;
        }

        public void setCategoriesPath(List<String> list) {
            this.categoriesPath = list;
        }

        public Map<String, String> getPayload() {
            return this.payload;
        }

        public void setPayload(Map<String, String> map) {
            this.payload = map;
        }

        public ECommercePricePigeon getActualPrice() {
            return this.actualPrice;
        }

        public void setActualPrice(ECommercePricePigeon eCommercePricePigeon) {
            this.actualPrice = eCommercePricePigeon;
        }

        public ECommercePricePigeon getOriginalPrice() {
            return this.originalPrice;
        }

        public void setOriginalPrice(ECommercePricePigeon eCommercePricePigeon) {
            this.originalPrice = eCommercePricePigeon;
        }

        public List<String> getPromocodes() {
            return this.promocodes;
        }

        public void setPromocodes(List<String> list) {
            this.promocodes = list;
        }

        ECommerceProductPigeon() {
        }

        public static final class Builder {
            private ECommercePricePigeon actualPrice;
            private List<String> categoriesPath;
            private String name;
            private ECommercePricePigeon originalPrice;
            private Map<String, String> payload;
            private List<String> promocodes;
            private String sku;

            public Builder setSku(String str) {
                this.sku = str;
                return this;
            }

            public Builder setName(String str) {
                this.name = str;
                return this;
            }

            public Builder setCategoriesPath(List<String> list) {
                this.categoriesPath = list;
                return this;
            }

            public Builder setPayload(Map<String, String> map) {
                this.payload = map;
                return this;
            }

            public Builder setActualPrice(ECommercePricePigeon eCommercePricePigeon) {
                this.actualPrice = eCommercePricePigeon;
                return this;
            }

            public Builder setOriginalPrice(ECommercePricePigeon eCommercePricePigeon) {
                this.originalPrice = eCommercePricePigeon;
                return this;
            }

            public Builder setPromocodes(List<String> list) {
                this.promocodes = list;
                return this;
            }

            public ECommerceProductPigeon build() {
                ECommerceProductPigeon eCommerceProductPigeon = new ECommerceProductPigeon();
                eCommerceProductPigeon.setSku(this.sku);
                eCommerceProductPigeon.setName(this.name);
                eCommerceProductPigeon.setCategoriesPath(this.categoriesPath);
                eCommerceProductPigeon.setPayload(this.payload);
                eCommerceProductPigeon.setActualPrice(this.actualPrice);
                eCommerceProductPigeon.setOriginalPrice(this.originalPrice);
                eCommerceProductPigeon.setPromocodes(this.promocodes);
                return eCommerceProductPigeon;
            }
        }

        ArrayList<Object> toList() {
            ArrayList<Object> arrayList = new ArrayList<>(7);
            arrayList.add(this.sku);
            arrayList.add(this.name);
            arrayList.add(this.categoriesPath);
            arrayList.add(this.payload);
            ECommercePricePigeon eCommercePricePigeon = this.actualPrice;
            arrayList.add(eCommercePricePigeon == null ? null : eCommercePricePigeon.toList());
            ECommercePricePigeon eCommercePricePigeon2 = this.originalPrice;
            arrayList.add(eCommercePricePigeon2 != null ? eCommercePricePigeon2.toList() : null);
            arrayList.add(this.promocodes);
            return arrayList;
        }

        static ECommerceProductPigeon fromList(ArrayList<Object> arrayList) {
            ECommerceProductPigeon eCommerceProductPigeon = new ECommerceProductPigeon();
            eCommerceProductPigeon.setSku((String) arrayList.get(0));
            eCommerceProductPigeon.setName((String) arrayList.get(1));
            eCommerceProductPigeon.setCategoriesPath((List) arrayList.get(2));
            eCommerceProductPigeon.setPayload((Map) arrayList.get(3));
            Object obj = arrayList.get(4);
            eCommerceProductPigeon.setActualPrice(obj == null ? null : ECommercePricePigeon.fromList((ArrayList) obj));
            Object obj2 = arrayList.get(5);
            eCommerceProductPigeon.setOriginalPrice(obj2 != null ? ECommercePricePigeon.fromList((ArrayList) obj2) : null);
            eCommerceProductPigeon.setPromocodes((List) arrayList.get(6));
            return eCommerceProductPigeon;
        }
    }

    public static final class ECommercePricePigeon {
        private ECommerceAmountPigeon fiat;
        private List<ECommerceAmountPigeon> internalComponents;

        public ECommerceAmountPigeon getFiat() {
            return this.fiat;
        }

        public void setFiat(ECommerceAmountPigeon eCommerceAmountPigeon) {
            if (eCommerceAmountPigeon == null) {
                throw new IllegalStateException("Nonnull field \"fiat\" is null.");
            }
            this.fiat = eCommerceAmountPigeon;
        }

        public List<ECommerceAmountPigeon> getInternalComponents() {
            return this.internalComponents;
        }

        public void setInternalComponents(List<ECommerceAmountPigeon> list) {
            this.internalComponents = list;
        }

        ECommercePricePigeon() {
        }

        public static final class Builder {
            private ECommerceAmountPigeon fiat;
            private List<ECommerceAmountPigeon> internalComponents;

            public Builder setFiat(ECommerceAmountPigeon eCommerceAmountPigeon) {
                this.fiat = eCommerceAmountPigeon;
                return this;
            }

            public Builder setInternalComponents(List<ECommerceAmountPigeon> list) {
                this.internalComponents = list;
                return this;
            }

            public ECommercePricePigeon build() {
                ECommercePricePigeon eCommercePricePigeon = new ECommercePricePigeon();
                eCommercePricePigeon.setFiat(this.fiat);
                eCommercePricePigeon.setInternalComponents(this.internalComponents);
                return eCommercePricePigeon;
            }
        }

        ArrayList<Object> toList() {
            ArrayList<Object> arrayList = new ArrayList<>(2);
            ECommerceAmountPigeon eCommerceAmountPigeon = this.fiat;
            arrayList.add(eCommerceAmountPigeon == null ? null : eCommerceAmountPigeon.toList());
            arrayList.add(this.internalComponents);
            return arrayList;
        }

        static ECommercePricePigeon fromList(ArrayList<Object> arrayList) {
            ECommercePricePigeon eCommercePricePigeon = new ECommercePricePigeon();
            Object obj = arrayList.get(0);
            eCommercePricePigeon.setFiat(obj == null ? null : ECommerceAmountPigeon.fromList((ArrayList) obj));
            eCommercePricePigeon.setInternalComponents((List) arrayList.get(1));
            return eCommercePricePigeon;
        }
    }

    public static final class ECommerceReferrerPigeon {
        private String identifier;
        private ECommerceScreenPigeon screen;
        private String type;

        public String getType() {
            return this.type;
        }

        public void setType(String str) {
            this.type = str;
        }

        public String getIdentifier() {
            return this.identifier;
        }

        public void setIdentifier(String str) {
            this.identifier = str;
        }

        public ECommerceScreenPigeon getScreen() {
            return this.screen;
        }

        public void setScreen(ECommerceScreenPigeon eCommerceScreenPigeon) {
            this.screen = eCommerceScreenPigeon;
        }

        public static final class Builder {
            private String identifier;
            private ECommerceScreenPigeon screen;
            private String type;

            public Builder setType(String str) {
                this.type = str;
                return this;
            }

            public Builder setIdentifier(String str) {
                this.identifier = str;
                return this;
            }

            public Builder setScreen(ECommerceScreenPigeon eCommerceScreenPigeon) {
                this.screen = eCommerceScreenPigeon;
                return this;
            }

            public ECommerceReferrerPigeon build() {
                ECommerceReferrerPigeon eCommerceReferrerPigeon = new ECommerceReferrerPigeon();
                eCommerceReferrerPigeon.setType(this.type);
                eCommerceReferrerPigeon.setIdentifier(this.identifier);
                eCommerceReferrerPigeon.setScreen(this.screen);
                return eCommerceReferrerPigeon;
            }
        }

        ArrayList<Object> toList() {
            ArrayList<Object> arrayList = new ArrayList<>(3);
            arrayList.add(this.type);
            arrayList.add(this.identifier);
            ECommerceScreenPigeon eCommerceScreenPigeon = this.screen;
            arrayList.add(eCommerceScreenPigeon == null ? null : eCommerceScreenPigeon.toList());
            return arrayList;
        }

        static ECommerceReferrerPigeon fromList(ArrayList<Object> arrayList) {
            ECommerceReferrerPigeon eCommerceReferrerPigeon = new ECommerceReferrerPigeon();
            eCommerceReferrerPigeon.setType((String) arrayList.get(0));
            eCommerceReferrerPigeon.setIdentifier((String) arrayList.get(1));
            Object obj = arrayList.get(2);
            eCommerceReferrerPigeon.setScreen(obj == null ? null : ECommerceScreenPigeon.fromList((ArrayList) obj));
            return eCommerceReferrerPigeon;
        }
    }

    public static final class ECommerceScreenPigeon {
        private List<String> categoriesPath;
        private String name;
        private Map<String, String> payload;
        private String searchQuery;

        public String getName() {
            return this.name;
        }

        public void setName(String str) {
            this.name = str;
        }

        public List<String> getCategoriesPath() {
            return this.categoriesPath;
        }

        public void setCategoriesPath(List<String> list) {
            this.categoriesPath = list;
        }

        public String getSearchQuery() {
            return this.searchQuery;
        }

        public void setSearchQuery(String str) {
            this.searchQuery = str;
        }

        public Map<String, String> getPayload() {
            return this.payload;
        }

        public void setPayload(Map<String, String> map) {
            this.payload = map;
        }

        public static final class Builder {
            private List<String> categoriesPath;
            private String name;
            private Map<String, String> payload;
            private String searchQuery;

            public Builder setName(String str) {
                this.name = str;
                return this;
            }

            public Builder setCategoriesPath(List<String> list) {
                this.categoriesPath = list;
                return this;
            }

            public Builder setSearchQuery(String str) {
                this.searchQuery = str;
                return this;
            }

            public Builder setPayload(Map<String, String> map) {
                this.payload = map;
                return this;
            }

            public ECommerceScreenPigeon build() {
                ECommerceScreenPigeon eCommerceScreenPigeon = new ECommerceScreenPigeon();
                eCommerceScreenPigeon.setName(this.name);
                eCommerceScreenPigeon.setCategoriesPath(this.categoriesPath);
                eCommerceScreenPigeon.setSearchQuery(this.searchQuery);
                eCommerceScreenPigeon.setPayload(this.payload);
                return eCommerceScreenPigeon;
            }
        }

        ArrayList<Object> toList() {
            ArrayList<Object> arrayList = new ArrayList<>(4);
            arrayList.add(this.name);
            arrayList.add(this.categoriesPath);
            arrayList.add(this.searchQuery);
            arrayList.add(this.payload);
            return arrayList;
        }

        static ECommerceScreenPigeon fromList(ArrayList<Object> arrayList) {
            ECommerceScreenPigeon eCommerceScreenPigeon = new ECommerceScreenPigeon();
            eCommerceScreenPigeon.setName((String) arrayList.get(0));
            eCommerceScreenPigeon.setCategoriesPath((List) arrayList.get(1));
            eCommerceScreenPigeon.setSearchQuery((String) arrayList.get(2));
            eCommerceScreenPigeon.setPayload((Map) arrayList.get(3));
            return eCommerceScreenPigeon;
        }
    }

    public static final class ECommerceCartItemPigeon {
        private ECommerceProductPigeon product;
        private String quantity;
        private ECommerceReferrerPigeon referrer;
        private ECommercePricePigeon revenue;

        public ECommerceProductPigeon getProduct() {
            return this.product;
        }

        public void setProduct(ECommerceProductPigeon eCommerceProductPigeon) {
            if (eCommerceProductPigeon == null) {
                throw new IllegalStateException("Nonnull field \"product\" is null.");
            }
            this.product = eCommerceProductPigeon;
        }

        public String getQuantity() {
            return this.quantity;
        }

        public void setQuantity(String str) {
            if (str == null) {
                throw new IllegalStateException("Nonnull field \"quantity\" is null.");
            }
            this.quantity = str;
        }

        public ECommercePricePigeon getRevenue() {
            return this.revenue;
        }

        public void setRevenue(ECommercePricePigeon eCommercePricePigeon) {
            if (eCommercePricePigeon == null) {
                throw new IllegalStateException("Nonnull field \"revenue\" is null.");
            }
            this.revenue = eCommercePricePigeon;
        }

        public ECommerceReferrerPigeon getReferrer() {
            return this.referrer;
        }

        public void setReferrer(ECommerceReferrerPigeon eCommerceReferrerPigeon) {
            this.referrer = eCommerceReferrerPigeon;
        }

        ECommerceCartItemPigeon() {
        }

        public static final class Builder {
            private ECommerceProductPigeon product;
            private String quantity;
            private ECommerceReferrerPigeon referrer;
            private ECommercePricePigeon revenue;

            public Builder setProduct(ECommerceProductPigeon eCommerceProductPigeon) {
                this.product = eCommerceProductPigeon;
                return this;
            }

            public Builder setQuantity(String str) {
                this.quantity = str;
                return this;
            }

            public Builder setRevenue(ECommercePricePigeon eCommercePricePigeon) {
                this.revenue = eCommercePricePigeon;
                return this;
            }

            public Builder setReferrer(ECommerceReferrerPigeon eCommerceReferrerPigeon) {
                this.referrer = eCommerceReferrerPigeon;
                return this;
            }

            public ECommerceCartItemPigeon build() {
                ECommerceCartItemPigeon eCommerceCartItemPigeon = new ECommerceCartItemPigeon();
                eCommerceCartItemPigeon.setProduct(this.product);
                eCommerceCartItemPigeon.setQuantity(this.quantity);
                eCommerceCartItemPigeon.setRevenue(this.revenue);
                eCommerceCartItemPigeon.setReferrer(this.referrer);
                return eCommerceCartItemPigeon;
            }
        }

        ArrayList<Object> toList() {
            ArrayList<Object> arrayList = new ArrayList<>(4);
            ECommerceProductPigeon eCommerceProductPigeon = this.product;
            arrayList.add(eCommerceProductPigeon == null ? null : eCommerceProductPigeon.toList());
            arrayList.add(this.quantity);
            ECommercePricePigeon eCommercePricePigeon = this.revenue;
            arrayList.add(eCommercePricePigeon == null ? null : eCommercePricePigeon.toList());
            ECommerceReferrerPigeon eCommerceReferrerPigeon = this.referrer;
            arrayList.add(eCommerceReferrerPigeon != null ? eCommerceReferrerPigeon.toList() : null);
            return arrayList;
        }

        static ECommerceCartItemPigeon fromList(ArrayList<Object> arrayList) {
            ECommerceCartItemPigeon eCommerceCartItemPigeon = new ECommerceCartItemPigeon();
            Object obj = arrayList.get(0);
            eCommerceCartItemPigeon.setProduct(obj == null ? null : ECommerceProductPigeon.fromList((ArrayList) obj));
            eCommerceCartItemPigeon.setQuantity((String) arrayList.get(1));
            Object obj2 = arrayList.get(2);
            eCommerceCartItemPigeon.setRevenue(obj2 == null ? null : ECommercePricePigeon.fromList((ArrayList) obj2));
            Object obj3 = arrayList.get(3);
            eCommerceCartItemPigeon.setReferrer(obj3 != null ? ECommerceReferrerPigeon.fromList((ArrayList) obj3) : null);
            return eCommerceCartItemPigeon;
        }
    }

    public static final class ECommerceOrderPigeon {
        private String identifier;
        private List<ECommerceCartItemPigeon> items;
        private Map<String, String> payload;

        public String getIdentifier() {
            return this.identifier;
        }

        public void setIdentifier(String str) {
            if (str == null) {
                throw new IllegalStateException("Nonnull field \"identifier\" is null.");
            }
            this.identifier = str;
        }

        public List<ECommerceCartItemPigeon> getItems() {
            return this.items;
        }

        public void setItems(List<ECommerceCartItemPigeon> list) {
            if (list == null) {
                throw new IllegalStateException("Nonnull field \"items\" is null.");
            }
            this.items = list;
        }

        public Map<String, String> getPayload() {
            return this.payload;
        }

        public void setPayload(Map<String, String> map) {
            this.payload = map;
        }

        ECommerceOrderPigeon() {
        }

        public static final class Builder {
            private String identifier;
            private List<ECommerceCartItemPigeon> items;
            private Map<String, String> payload;

            public Builder setIdentifier(String str) {
                this.identifier = str;
                return this;
            }

            public Builder setItems(List<ECommerceCartItemPigeon> list) {
                this.items = list;
                return this;
            }

            public Builder setPayload(Map<String, String> map) {
                this.payload = map;
                return this;
            }

            public ECommerceOrderPigeon build() {
                ECommerceOrderPigeon eCommerceOrderPigeon = new ECommerceOrderPigeon();
                eCommerceOrderPigeon.setIdentifier(this.identifier);
                eCommerceOrderPigeon.setItems(this.items);
                eCommerceOrderPigeon.setPayload(this.payload);
                return eCommerceOrderPigeon;
            }
        }

        ArrayList<Object> toList() {
            ArrayList<Object> arrayList = new ArrayList<>(3);
            arrayList.add(this.identifier);
            arrayList.add(this.items);
            arrayList.add(this.payload);
            return arrayList;
        }

        static ECommerceOrderPigeon fromList(ArrayList<Object> arrayList) {
            ECommerceOrderPigeon eCommerceOrderPigeon = new ECommerceOrderPigeon();
            eCommerceOrderPigeon.setIdentifier((String) arrayList.get(0));
            eCommerceOrderPigeon.setItems((List) arrayList.get(1));
            eCommerceOrderPigeon.setPayload((Map) arrayList.get(2));
            return eCommerceOrderPigeon;
        }
    }

    public static final class ECommerceEventPigeon {
        private ECommerceCartItemPigeon cartItem;
        private String eventType;
        private ECommerceOrderPigeon order;
        private ECommerceProductPigeon product;
        private ECommerceReferrerPigeon referrer;
        private ECommerceScreenPigeon screen;

        public String getEventType() {
            return this.eventType;
        }

        public void setEventType(String str) {
            if (str == null) {
                throw new IllegalStateException("Nonnull field \"eventType\" is null.");
            }
            this.eventType = str;
        }

        public ECommerceCartItemPigeon getCartItem() {
            return this.cartItem;
        }

        public void setCartItem(ECommerceCartItemPigeon eCommerceCartItemPigeon) {
            this.cartItem = eCommerceCartItemPigeon;
        }

        public ECommerceOrderPigeon getOrder() {
            return this.order;
        }

        public void setOrder(ECommerceOrderPigeon eCommerceOrderPigeon) {
            this.order = eCommerceOrderPigeon;
        }

        public ECommerceProductPigeon getProduct() {
            return this.product;
        }

        public void setProduct(ECommerceProductPigeon eCommerceProductPigeon) {
            this.product = eCommerceProductPigeon;
        }

        public ECommerceReferrerPigeon getReferrer() {
            return this.referrer;
        }

        public void setReferrer(ECommerceReferrerPigeon eCommerceReferrerPigeon) {
            this.referrer = eCommerceReferrerPigeon;
        }

        public ECommerceScreenPigeon getScreen() {
            return this.screen;
        }

        public void setScreen(ECommerceScreenPigeon eCommerceScreenPigeon) {
            this.screen = eCommerceScreenPigeon;
        }

        ECommerceEventPigeon() {
        }

        public static final class Builder {
            private ECommerceCartItemPigeon cartItem;
            private String eventType;
            private ECommerceOrderPigeon order;
            private ECommerceProductPigeon product;
            private ECommerceReferrerPigeon referrer;
            private ECommerceScreenPigeon screen;

            public Builder setEventType(String str) {
                this.eventType = str;
                return this;
            }

            public Builder setCartItem(ECommerceCartItemPigeon eCommerceCartItemPigeon) {
                this.cartItem = eCommerceCartItemPigeon;
                return this;
            }

            public Builder setOrder(ECommerceOrderPigeon eCommerceOrderPigeon) {
                this.order = eCommerceOrderPigeon;
                return this;
            }

            public Builder setProduct(ECommerceProductPigeon eCommerceProductPigeon) {
                this.product = eCommerceProductPigeon;
                return this;
            }

            public Builder setReferrer(ECommerceReferrerPigeon eCommerceReferrerPigeon) {
                this.referrer = eCommerceReferrerPigeon;
                return this;
            }

            public Builder setScreen(ECommerceScreenPigeon eCommerceScreenPigeon) {
                this.screen = eCommerceScreenPigeon;
                return this;
            }

            public ECommerceEventPigeon build() {
                ECommerceEventPigeon eCommerceEventPigeon = new ECommerceEventPigeon();
                eCommerceEventPigeon.setEventType(this.eventType);
                eCommerceEventPigeon.setCartItem(this.cartItem);
                eCommerceEventPigeon.setOrder(this.order);
                eCommerceEventPigeon.setProduct(this.product);
                eCommerceEventPigeon.setReferrer(this.referrer);
                eCommerceEventPigeon.setScreen(this.screen);
                return eCommerceEventPigeon;
            }
        }

        ArrayList<Object> toList() {
            ArrayList<Object> arrayList = new ArrayList<>(6);
            arrayList.add(this.eventType);
            ECommerceCartItemPigeon eCommerceCartItemPigeon = this.cartItem;
            arrayList.add(eCommerceCartItemPigeon == null ? null : eCommerceCartItemPigeon.toList());
            ECommerceOrderPigeon eCommerceOrderPigeon = this.order;
            arrayList.add(eCommerceOrderPigeon == null ? null : eCommerceOrderPigeon.toList());
            ECommerceProductPigeon eCommerceProductPigeon = this.product;
            arrayList.add(eCommerceProductPigeon == null ? null : eCommerceProductPigeon.toList());
            ECommerceReferrerPigeon eCommerceReferrerPigeon = this.referrer;
            arrayList.add(eCommerceReferrerPigeon == null ? null : eCommerceReferrerPigeon.toList());
            ECommerceScreenPigeon eCommerceScreenPigeon = this.screen;
            arrayList.add(eCommerceScreenPigeon != null ? eCommerceScreenPigeon.toList() : null);
            return arrayList;
        }

        static ECommerceEventPigeon fromList(ArrayList<Object> arrayList) {
            ECommerceEventPigeon eCommerceEventPigeon = new ECommerceEventPigeon();
            eCommerceEventPigeon.setEventType((String) arrayList.get(0));
            Object obj = arrayList.get(1);
            eCommerceEventPigeon.setCartItem(obj == null ? null : ECommerceCartItemPigeon.fromList((ArrayList) obj));
            Object obj2 = arrayList.get(2);
            eCommerceEventPigeon.setOrder(obj2 == null ? null : ECommerceOrderPigeon.fromList((ArrayList) obj2));
            Object obj3 = arrayList.get(3);
            eCommerceEventPigeon.setProduct(obj3 == null ? null : ECommerceProductPigeon.fromList((ArrayList) obj3));
            Object obj4 = arrayList.get(4);
            eCommerceEventPigeon.setReferrer(obj4 == null ? null : ECommerceReferrerPigeon.fromList((ArrayList) obj4));
            Object obj5 = arrayList.get(5);
            eCommerceEventPigeon.setScreen(obj5 != null ? ECommerceScreenPigeon.fromList((ArrayList) obj5) : null);
            return eCommerceEventPigeon;
        }
    }

    public static final class StackTraceElementPigeon {
        private String className;
        private Long column;
        private String fileName;
        private Long line;
        private String methodName;

        public String getClassName() {
            return this.className;
        }

        public void setClassName(String str) {
            if (str == null) {
                throw new IllegalStateException("Nonnull field \"className\" is null.");
            }
            this.className = str;
        }

        public String getFileName() {
            return this.fileName;
        }

        public void setFileName(String str) {
            this.fileName = str;
        }

        public Long getLine() {
            return this.line;
        }

        public void setLine(Long l) {
            if (l == null) {
                throw new IllegalStateException("Nonnull field \"line\" is null.");
            }
            this.line = l;
        }

        public Long getColumn() {
            return this.column;
        }

        public void setColumn(Long l) {
            if (l == null) {
                throw new IllegalStateException("Nonnull field \"column\" is null.");
            }
            this.column = l;
        }

        public String getMethodName() {
            return this.methodName;
        }

        public void setMethodName(String str) {
            if (str == null) {
                throw new IllegalStateException("Nonnull field \"methodName\" is null.");
            }
            this.methodName = str;
        }

        StackTraceElementPigeon() {
        }

        public static final class Builder {
            private String className;
            private Long column;
            private String fileName;
            private Long line;
            private String methodName;

            public Builder setClassName(String str) {
                this.className = str;
                return this;
            }

            public Builder setFileName(String str) {
                this.fileName = str;
                return this;
            }

            public Builder setLine(Long l) {
                this.line = l;
                return this;
            }

            public Builder setColumn(Long l) {
                this.column = l;
                return this;
            }

            public Builder setMethodName(String str) {
                this.methodName = str;
                return this;
            }

            public StackTraceElementPigeon build() {
                StackTraceElementPigeon stackTraceElementPigeon = new StackTraceElementPigeon();
                stackTraceElementPigeon.setClassName(this.className);
                stackTraceElementPigeon.setFileName(this.fileName);
                stackTraceElementPigeon.setLine(this.line);
                stackTraceElementPigeon.setColumn(this.column);
                stackTraceElementPigeon.setMethodName(this.methodName);
                return stackTraceElementPigeon;
            }
        }

        ArrayList<Object> toList() {
            ArrayList<Object> arrayList = new ArrayList<>(5);
            arrayList.add(this.className);
            arrayList.add(this.fileName);
            arrayList.add(this.line);
            arrayList.add(this.column);
            arrayList.add(this.methodName);
            return arrayList;
        }

        static StackTraceElementPigeon fromList(ArrayList<Object> arrayList) {
            Long lValueOf;
            StackTraceElementPigeon stackTraceElementPigeon = new StackTraceElementPigeon();
            stackTraceElementPigeon.setClassName((String) arrayList.get(0));
            stackTraceElementPigeon.setFileName((String) arrayList.get(1));
            Object obj = arrayList.get(2);
            Long lValueOf2 = null;
            if (obj == null) {
                lValueOf = null;
            } else {
                lValueOf = Long.valueOf(obj instanceof Integer ? ((Integer) obj).intValue() : ((Long) obj).longValue());
            }
            stackTraceElementPigeon.setLine(lValueOf);
            Object obj2 = arrayList.get(3);
            if (obj2 != null) {
                lValueOf2 = Long.valueOf(obj2 instanceof Integer ? ((Integer) obj2).intValue() : ((Long) obj2).longValue());
            }
            stackTraceElementPigeon.setColumn(lValueOf2);
            stackTraceElementPigeon.setMethodName((String) arrayList.get(4));
            return stackTraceElementPigeon;
        }
    }

    public static final class ErrorDetailsPigeon {
        private List<StackTraceElementPigeon> backtrace;
        private String dartVersion;
        private String exceptionClass;
        private String message;

        public String getExceptionClass() {
            return this.exceptionClass;
        }

        public void setExceptionClass(String str) {
            if (str == null) {
                throw new IllegalStateException("Nonnull field \"exceptionClass\" is null.");
            }
            this.exceptionClass = str;
        }

        public String getMessage() {
            return this.message;
        }

        public void setMessage(String str) {
            this.message = str;
        }

        public String getDartVersion() {
            return this.dartVersion;
        }

        public void setDartVersion(String str) {
            if (str == null) {
                throw new IllegalStateException("Nonnull field \"dartVersion\" is null.");
            }
            this.dartVersion = str;
        }

        public List<StackTraceElementPigeon> getBacktrace() {
            return this.backtrace;
        }

        public void setBacktrace(List<StackTraceElementPigeon> list) {
            this.backtrace = list;
        }

        ErrorDetailsPigeon() {
        }

        public static final class Builder {
            private List<StackTraceElementPigeon> backtrace;
            private String dartVersion;
            private String exceptionClass;
            private String message;

            public Builder setExceptionClass(String str) {
                this.exceptionClass = str;
                return this;
            }

            public Builder setMessage(String str) {
                this.message = str;
                return this;
            }

            public Builder setDartVersion(String str) {
                this.dartVersion = str;
                return this;
            }

            public Builder setBacktrace(List<StackTraceElementPigeon> list) {
                this.backtrace = list;
                return this;
            }

            public ErrorDetailsPigeon build() {
                ErrorDetailsPigeon errorDetailsPigeon = new ErrorDetailsPigeon();
                errorDetailsPigeon.setExceptionClass(this.exceptionClass);
                errorDetailsPigeon.setMessage(this.message);
                errorDetailsPigeon.setDartVersion(this.dartVersion);
                errorDetailsPigeon.setBacktrace(this.backtrace);
                return errorDetailsPigeon;
            }
        }

        ArrayList<Object> toList() {
            ArrayList<Object> arrayList = new ArrayList<>(4);
            arrayList.add(this.exceptionClass);
            arrayList.add(this.message);
            arrayList.add(this.dartVersion);
            arrayList.add(this.backtrace);
            return arrayList;
        }

        static ErrorDetailsPigeon fromList(ArrayList<Object> arrayList) {
            ErrorDetailsPigeon errorDetailsPigeon = new ErrorDetailsPigeon();
            errorDetailsPigeon.setExceptionClass((String) arrayList.get(0));
            errorDetailsPigeon.setMessage((String) arrayList.get(1));
            errorDetailsPigeon.setDartVersion((String) arrayList.get(2));
            errorDetailsPigeon.setBacktrace((List) arrayList.get(3));
            return errorDetailsPigeon;
        }
    }

    public static final class UserProfileAttributePigeon {
        private Long age;
        private Boolean boolValue;
        private Long day;
        private Double doubleValue;
        private GenderPigeon genderValue;
        private Boolean ifUndefined;
        private String key;
        private Long month;
        private Boolean reset;
        private String stringValue;
        private UserProfileAttributeType type;
        private Long year;

        public String getKey() {
            return this.key;
        }

        public void setKey(String str) {
            if (str == null) {
                throw new IllegalStateException("Nonnull field \"key\" is null.");
            }
            this.key = str;
        }

        public Double getDoubleValue() {
            return this.doubleValue;
        }

        public void setDoubleValue(Double d) {
            this.doubleValue = d;
        }

        public String getStringValue() {
            return this.stringValue;
        }

        public void setStringValue(String str) {
            this.stringValue = str;
        }

        public Boolean getBoolValue() {
            return this.boolValue;
        }

        public void setBoolValue(Boolean bool) {
            this.boolValue = bool;
        }

        public Long getYear() {
            return this.year;
        }

        public void setYear(Long l) {
            this.year = l;
        }

        public Long getMonth() {
            return this.month;
        }

        public void setMonth(Long l) {
            this.month = l;
        }

        public Long getDay() {
            return this.day;
        }

        public void setDay(Long l) {
            this.day = l;
        }

        public Long getAge() {
            return this.age;
        }

        public void setAge(Long l) {
            this.age = l;
        }

        public GenderPigeon getGenderValue() {
            return this.genderValue;
        }

        public void setGenderValue(GenderPigeon genderPigeon) {
            this.genderValue = genderPigeon;
        }

        public Boolean getIfUndefined() {
            return this.ifUndefined;
        }

        public void setIfUndefined(Boolean bool) {
            this.ifUndefined = bool;
        }

        public Boolean getReset() {
            return this.reset;
        }

        public void setReset(Boolean bool) {
            this.reset = bool;
        }

        public UserProfileAttributeType getType() {
            return this.type;
        }

        public void setType(UserProfileAttributeType userProfileAttributeType) {
            this.type = userProfileAttributeType;
        }

        UserProfileAttributePigeon() {
        }

        public static final class Builder {
            private Long age;
            private Boolean boolValue;
            private Long day;
            private Double doubleValue;
            private GenderPigeon genderValue;
            private Boolean ifUndefined;
            private String key;
            private Long month;
            private Boolean reset;
            private String stringValue;
            private UserProfileAttributeType type;
            private Long year;

            public Builder setKey(String str) {
                this.key = str;
                return this;
            }

            public Builder setDoubleValue(Double d) {
                this.doubleValue = d;
                return this;
            }

            public Builder setStringValue(String str) {
                this.stringValue = str;
                return this;
            }

            public Builder setBoolValue(Boolean bool) {
                this.boolValue = bool;
                return this;
            }

            public Builder setYear(Long l) {
                this.year = l;
                return this;
            }

            public Builder setMonth(Long l) {
                this.month = l;
                return this;
            }

            public Builder setDay(Long l) {
                this.day = l;
                return this;
            }

            public Builder setAge(Long l) {
                this.age = l;
                return this;
            }

            public Builder setGenderValue(GenderPigeon genderPigeon) {
                this.genderValue = genderPigeon;
                return this;
            }

            public Builder setIfUndefined(Boolean bool) {
                this.ifUndefined = bool;
                return this;
            }

            public Builder setReset(Boolean bool) {
                this.reset = bool;
                return this;
            }

            public Builder setType(UserProfileAttributeType userProfileAttributeType) {
                this.type = userProfileAttributeType;
                return this;
            }

            public UserProfileAttributePigeon build() {
                UserProfileAttributePigeon userProfileAttributePigeon = new UserProfileAttributePigeon();
                userProfileAttributePigeon.setKey(this.key);
                userProfileAttributePigeon.setDoubleValue(this.doubleValue);
                userProfileAttributePigeon.setStringValue(this.stringValue);
                userProfileAttributePigeon.setBoolValue(this.boolValue);
                userProfileAttributePigeon.setYear(this.year);
                userProfileAttributePigeon.setMonth(this.month);
                userProfileAttributePigeon.setDay(this.day);
                userProfileAttributePigeon.setAge(this.age);
                userProfileAttributePigeon.setGenderValue(this.genderValue);
                userProfileAttributePigeon.setIfUndefined(this.ifUndefined);
                userProfileAttributePigeon.setReset(this.reset);
                userProfileAttributePigeon.setType(this.type);
                return userProfileAttributePigeon;
            }
        }

        ArrayList<Object> toList() {
            ArrayList<Object> arrayList = new ArrayList<>(12);
            arrayList.add(this.key);
            arrayList.add(this.doubleValue);
            arrayList.add(this.stringValue);
            arrayList.add(this.boolValue);
            arrayList.add(this.year);
            arrayList.add(this.month);
            arrayList.add(this.day);
            arrayList.add(this.age);
            GenderPigeon genderPigeon = this.genderValue;
            arrayList.add(genderPigeon == null ? null : Integer.valueOf(genderPigeon.index));
            arrayList.add(this.ifUndefined);
            arrayList.add(this.reset);
            UserProfileAttributeType userProfileAttributeType = this.type;
            arrayList.add(userProfileAttributeType != null ? Integer.valueOf(userProfileAttributeType.index) : null);
            return arrayList;
        }

        static UserProfileAttributePigeon fromList(ArrayList<Object> arrayList) {
            Long lValueOf;
            Long lValueOf2;
            Long lValueOf3;
            Long lValueOf4;
            UserProfileAttributePigeon userProfileAttributePigeon = new UserProfileAttributePigeon();
            userProfileAttributePigeon.setKey((String) arrayList.get(0));
            userProfileAttributePigeon.setDoubleValue((Double) arrayList.get(1));
            userProfileAttributePigeon.setStringValue((String) arrayList.get(2));
            userProfileAttributePigeon.setBoolValue((Boolean) arrayList.get(3));
            Object obj = arrayList.get(4);
            if (obj == null) {
                lValueOf = null;
            } else {
                lValueOf = Long.valueOf(obj instanceof Integer ? ((Integer) obj).intValue() : ((Long) obj).longValue());
            }
            userProfileAttributePigeon.setYear(lValueOf);
            Object obj2 = arrayList.get(5);
            if (obj2 == null) {
                lValueOf2 = null;
            } else {
                lValueOf2 = Long.valueOf(obj2 instanceof Integer ? ((Integer) obj2).intValue() : ((Long) obj2).longValue());
            }
            userProfileAttributePigeon.setMonth(lValueOf2);
            Object obj3 = arrayList.get(6);
            if (obj3 == null) {
                lValueOf3 = null;
            } else {
                lValueOf3 = Long.valueOf(obj3 instanceof Integer ? ((Integer) obj3).intValue() : ((Long) obj3).longValue());
            }
            userProfileAttributePigeon.setDay(lValueOf3);
            Object obj4 = arrayList.get(7);
            if (obj4 == null) {
                lValueOf4 = null;
            } else {
                lValueOf4 = Long.valueOf(obj4 instanceof Integer ? ((Integer) obj4).intValue() : ((Long) obj4).longValue());
            }
            userProfileAttributePigeon.setAge(lValueOf4);
            Object obj5 = arrayList.get(8);
            userProfileAttributePigeon.setGenderValue(obj5 == null ? null : GenderPigeon.values()[((Integer) obj5).intValue()]);
            userProfileAttributePigeon.setIfUndefined((Boolean) arrayList.get(9));
            userProfileAttributePigeon.setReset((Boolean) arrayList.get(10));
            Object obj6 = arrayList.get(11);
            userProfileAttributePigeon.setType(obj6 != null ? UserProfileAttributeType.values()[((Integer) obj6).intValue()] : null);
            return userProfileAttributePigeon;
        }
    }

    public static final class UserProfilePigeon {
        private List<UserProfileAttributePigeon> attributes;

        public List<UserProfileAttributePigeon> getAttributes() {
            return this.attributes;
        }

        public void setAttributes(List<UserProfileAttributePigeon> list) {
            if (list == null) {
                throw new IllegalStateException("Nonnull field \"attributes\" is null.");
            }
            this.attributes = list;
        }

        UserProfilePigeon() {
        }

        public static final class Builder {
            private List<UserProfileAttributePigeon> attributes;

            public Builder setAttributes(List<UserProfileAttributePigeon> list) {
                this.attributes = list;
                return this;
            }

            public UserProfilePigeon build() {
                UserProfilePigeon userProfilePigeon = new UserProfilePigeon();
                userProfilePigeon.setAttributes(this.attributes);
                return userProfilePigeon;
            }
        }

        ArrayList<Object> toList() {
            ArrayList<Object> arrayList = new ArrayList<>(1);
            arrayList.add(this.attributes);
            return arrayList;
        }

        static UserProfilePigeon fromList(ArrayList<Object> arrayList) {
            UserProfilePigeon userProfilePigeon = new UserProfilePigeon();
            userProfilePigeon.setAttributes((List) arrayList.get(0));
            return userProfilePigeon;
        }
    }

    public static final class AdRevenuePigeon {
        private String adNetwork;
        private String adPlacementId;
        private String adPlacementName;
        private String adRevenue;
        private AdTypePigeon adType;
        private String adUnitId;
        private String adUnitName;
        private String currency;
        private Map<String, String> payload;
        private String precision;

        public String getAdRevenue() {
            return this.adRevenue;
        }

        public void setAdRevenue(String str) {
            if (str == null) {
                throw new IllegalStateException("Nonnull field \"adRevenue\" is null.");
            }
            this.adRevenue = str;
        }

        public String getCurrency() {
            return this.currency;
        }

        public void setCurrency(String str) {
            if (str == null) {
                throw new IllegalStateException("Nonnull field \"currency\" is null.");
            }
            this.currency = str;
        }

        public AdTypePigeon getAdType() {
            return this.adType;
        }

        public void setAdType(AdTypePigeon adTypePigeon) {
            this.adType = adTypePigeon;
        }

        public String getAdNetwork() {
            return this.adNetwork;
        }

        public void setAdNetwork(String str) {
            this.adNetwork = str;
        }

        public String getAdUnitId() {
            return this.adUnitId;
        }

        public void setAdUnitId(String str) {
            this.adUnitId = str;
        }

        public String getAdUnitName() {
            return this.adUnitName;
        }

        public void setAdUnitName(String str) {
            this.adUnitName = str;
        }

        public String getAdPlacementId() {
            return this.adPlacementId;
        }

        public void setAdPlacementId(String str) {
            this.adPlacementId = str;
        }

        public String getAdPlacementName() {
            return this.adPlacementName;
        }

        public void setAdPlacementName(String str) {
            this.adPlacementName = str;
        }

        public String getPrecision() {
            return this.precision;
        }

        public void setPrecision(String str) {
            this.precision = str;
        }

        public Map<String, String> getPayload() {
            return this.payload;
        }

        public void setPayload(Map<String, String> map) {
            this.payload = map;
        }

        AdRevenuePigeon() {
        }

        public static final class Builder {
            private String adNetwork;
            private String adPlacementId;
            private String adPlacementName;
            private String adRevenue;
            private AdTypePigeon adType;
            private String adUnitId;
            private String adUnitName;
            private String currency;
            private Map<String, String> payload;
            private String precision;

            public Builder setAdRevenue(String str) {
                this.adRevenue = str;
                return this;
            }

            public Builder setCurrency(String str) {
                this.currency = str;
                return this;
            }

            public Builder setAdType(AdTypePigeon adTypePigeon) {
                this.adType = adTypePigeon;
                return this;
            }

            public Builder setAdNetwork(String str) {
                this.adNetwork = str;
                return this;
            }

            public Builder setAdUnitId(String str) {
                this.adUnitId = str;
                return this;
            }

            public Builder setAdUnitName(String str) {
                this.adUnitName = str;
                return this;
            }

            public Builder setAdPlacementId(String str) {
                this.adPlacementId = str;
                return this;
            }

            public Builder setAdPlacementName(String str) {
                this.adPlacementName = str;
                return this;
            }

            public Builder setPrecision(String str) {
                this.precision = str;
                return this;
            }

            public Builder setPayload(Map<String, String> map) {
                this.payload = map;
                return this;
            }

            public AdRevenuePigeon build() {
                AdRevenuePigeon adRevenuePigeon = new AdRevenuePigeon();
                adRevenuePigeon.setAdRevenue(this.adRevenue);
                adRevenuePigeon.setCurrency(this.currency);
                adRevenuePigeon.setAdType(this.adType);
                adRevenuePigeon.setAdNetwork(this.adNetwork);
                adRevenuePigeon.setAdUnitId(this.adUnitId);
                adRevenuePigeon.setAdUnitName(this.adUnitName);
                adRevenuePigeon.setAdPlacementId(this.adPlacementId);
                adRevenuePigeon.setAdPlacementName(this.adPlacementName);
                adRevenuePigeon.setPrecision(this.precision);
                adRevenuePigeon.setPayload(this.payload);
                return adRevenuePigeon;
            }
        }

        ArrayList<Object> toList() {
            ArrayList<Object> arrayList = new ArrayList<>(10);
            arrayList.add(this.adRevenue);
            arrayList.add(this.currency);
            AdTypePigeon adTypePigeon = this.adType;
            arrayList.add(adTypePigeon == null ? null : Integer.valueOf(adTypePigeon.index));
            arrayList.add(this.adNetwork);
            arrayList.add(this.adUnitId);
            arrayList.add(this.adUnitName);
            arrayList.add(this.adPlacementId);
            arrayList.add(this.adPlacementName);
            arrayList.add(this.precision);
            arrayList.add(this.payload);
            return arrayList;
        }

        static AdRevenuePigeon fromList(ArrayList<Object> arrayList) {
            AdRevenuePigeon adRevenuePigeon = new AdRevenuePigeon();
            adRevenuePigeon.setAdRevenue((String) arrayList.get(0));
            adRevenuePigeon.setCurrency((String) arrayList.get(1));
            Object obj = arrayList.get(2);
            adRevenuePigeon.setAdType(obj == null ? null : AdTypePigeon.values()[((Integer) obj).intValue()]);
            adRevenuePigeon.setAdNetwork((String) arrayList.get(3));
            adRevenuePigeon.setAdUnitId((String) arrayList.get(4));
            adRevenuePigeon.setAdUnitName((String) arrayList.get(5));
            adRevenuePigeon.setAdPlacementId((String) arrayList.get(6));
            adRevenuePigeon.setAdPlacementName((String) arrayList.get(7));
            adRevenuePigeon.setPrecision((String) arrayList.get(8));
            adRevenuePigeon.setPayload((Map) arrayList.get(9));
            return adRevenuePigeon;
        }
    }

    public static final class StartupParamsItemPigeon {
        private String errorDetails;
        private String id;
        private StartupParamsItemStatusPigeon status;

        public String getId() {
            return this.id;
        }

        public void setId(String str) {
            this.id = str;
        }

        public StartupParamsItemStatusPigeon getStatus() {
            return this.status;
        }

        public void setStatus(StartupParamsItemStatusPigeon startupParamsItemStatusPigeon) {
            if (startupParamsItemStatusPigeon == null) {
                throw new IllegalStateException("Nonnull field \"status\" is null.");
            }
            this.status = startupParamsItemStatusPigeon;
        }

        public String getErrorDetails() {
            return this.errorDetails;
        }

        public void setErrorDetails(String str) {
            this.errorDetails = str;
        }

        StartupParamsItemPigeon() {
        }

        public static final class Builder {
            private String errorDetails;
            private String id;
            private StartupParamsItemStatusPigeon status;

            public Builder setId(String str) {
                this.id = str;
                return this;
            }

            public Builder setStatus(StartupParamsItemStatusPigeon startupParamsItemStatusPigeon) {
                this.status = startupParamsItemStatusPigeon;
                return this;
            }

            public Builder setErrorDetails(String str) {
                this.errorDetails = str;
                return this;
            }

            public StartupParamsItemPigeon build() {
                StartupParamsItemPigeon startupParamsItemPigeon = new StartupParamsItemPigeon();
                startupParamsItemPigeon.setId(this.id);
                startupParamsItemPigeon.setStatus(this.status);
                startupParamsItemPigeon.setErrorDetails(this.errorDetails);
                return startupParamsItemPigeon;
            }
        }

        ArrayList<Object> toList() {
            ArrayList<Object> arrayList = new ArrayList<>(3);
            arrayList.add(this.id);
            StartupParamsItemStatusPigeon startupParamsItemStatusPigeon = this.status;
            arrayList.add(startupParamsItemStatusPigeon == null ? null : Integer.valueOf(startupParamsItemStatusPigeon.index));
            arrayList.add(this.errorDetails);
            return arrayList;
        }

        static StartupParamsItemPigeon fromList(ArrayList<Object> arrayList) {
            StartupParamsItemPigeon startupParamsItemPigeon = new StartupParamsItemPigeon();
            startupParamsItemPigeon.setId((String) arrayList.get(0));
            Object obj = arrayList.get(1);
            startupParamsItemPigeon.setStatus(obj == null ? null : StartupParamsItemStatusPigeon.values()[((Integer) obj).intValue()]);
            startupParamsItemPigeon.setErrorDetails((String) arrayList.get(2));
            return startupParamsItemPigeon;
        }
    }

    public static final class StartupParamsResultPigeon {
        private String deviceId;
        private String deviceIdHash;
        private Map<String, StartupParamsItemPigeon> parameters;
        private String uuid;

        public String getDeviceId() {
            return this.deviceId;
        }

        public void setDeviceId(String str) {
            this.deviceId = str;
        }

        public String getDeviceIdHash() {
            return this.deviceIdHash;
        }

        public void setDeviceIdHash(String str) {
            this.deviceIdHash = str;
        }

        public Map<String, StartupParamsItemPigeon> getParameters() {
            return this.parameters;
        }

        public void setParameters(Map<String, StartupParamsItemPigeon> map) {
            this.parameters = map;
        }

        public String getUuid() {
            return this.uuid;
        }

        public void setUuid(String str) {
            this.uuid = str;
        }

        public static final class Builder {
            private String deviceId;
            private String deviceIdHash;
            private Map<String, StartupParamsItemPigeon> parameters;
            private String uuid;

            public Builder setDeviceId(String str) {
                this.deviceId = str;
                return this;
            }

            public Builder setDeviceIdHash(String str) {
                this.deviceIdHash = str;
                return this;
            }

            public Builder setParameters(Map<String, StartupParamsItemPigeon> map) {
                this.parameters = map;
                return this;
            }

            public Builder setUuid(String str) {
                this.uuid = str;
                return this;
            }

            public StartupParamsResultPigeon build() {
                StartupParamsResultPigeon startupParamsResultPigeon = new StartupParamsResultPigeon();
                startupParamsResultPigeon.setDeviceId(this.deviceId);
                startupParamsResultPigeon.setDeviceIdHash(this.deviceIdHash);
                startupParamsResultPigeon.setParameters(this.parameters);
                startupParamsResultPigeon.setUuid(this.uuid);
                return startupParamsResultPigeon;
            }
        }

        ArrayList<Object> toList() {
            ArrayList<Object> arrayList = new ArrayList<>(4);
            arrayList.add(this.deviceId);
            arrayList.add(this.deviceIdHash);
            arrayList.add(this.parameters);
            arrayList.add(this.uuid);
            return arrayList;
        }

        static StartupParamsResultPigeon fromList(ArrayList<Object> arrayList) {
            StartupParamsResultPigeon startupParamsResultPigeon = new StartupParamsResultPigeon();
            startupParamsResultPigeon.setDeviceId((String) arrayList.get(0));
            startupParamsResultPigeon.setDeviceIdHash((String) arrayList.get(1));
            startupParamsResultPigeon.setParameters((Map) arrayList.get(2));
            startupParamsResultPigeon.setUuid((String) arrayList.get(3));
            return startupParamsResultPigeon;
        }
    }

    public static final class StartupParamsReasonPigeon {
        private String value;

        public String getValue() {
            return this.value;
        }

        public void setValue(String str) {
            if (str == null) {
                throw new IllegalStateException("Nonnull field \"value\" is null.");
            }
            this.value = str;
        }

        StartupParamsReasonPigeon() {
        }

        public static final class Builder {
            private String value;

            public Builder setValue(String str) {
                this.value = str;
                return this;
            }

            public StartupParamsReasonPigeon build() {
                StartupParamsReasonPigeon startupParamsReasonPigeon = new StartupParamsReasonPigeon();
                startupParamsReasonPigeon.setValue(this.value);
                return startupParamsReasonPigeon;
            }
        }

        ArrayList<Object> toList() {
            ArrayList<Object> arrayList = new ArrayList<>(1);
            arrayList.add(this.value);
            return arrayList;
        }

        static StartupParamsReasonPigeon fromList(ArrayList<Object> arrayList) {
            StartupParamsReasonPigeon startupParamsReasonPigeon = new StartupParamsReasonPigeon();
            startupParamsReasonPigeon.setValue((String) arrayList.get(0));
            return startupParamsReasonPigeon;
        }
    }

    public static final class StartupParamsPigeon {
        private StartupParamsReasonPigeon reason;
        private StartupParamsResultPigeon result;

        public StartupParamsResultPigeon getResult() {
            return this.result;
        }

        public void setResult(StartupParamsResultPigeon startupParamsResultPigeon) {
            this.result = startupParamsResultPigeon;
        }

        public StartupParamsReasonPigeon getReason() {
            return this.reason;
        }

        public void setReason(StartupParamsReasonPigeon startupParamsReasonPigeon) {
            this.reason = startupParamsReasonPigeon;
        }

        public static final class Builder {
            private StartupParamsReasonPigeon reason;
            private StartupParamsResultPigeon result;

            public Builder setResult(StartupParamsResultPigeon startupParamsResultPigeon) {
                this.result = startupParamsResultPigeon;
                return this;
            }

            public Builder setReason(StartupParamsReasonPigeon startupParamsReasonPigeon) {
                this.reason = startupParamsReasonPigeon;
                return this;
            }

            public StartupParamsPigeon build() {
                StartupParamsPigeon startupParamsPigeon = new StartupParamsPigeon();
                startupParamsPigeon.setResult(this.result);
                startupParamsPigeon.setReason(this.reason);
                return startupParamsPigeon;
            }
        }

        ArrayList<Object> toList() {
            ArrayList<Object> arrayList = new ArrayList<>(2);
            StartupParamsResultPigeon startupParamsResultPigeon = this.result;
            arrayList.add(startupParamsResultPigeon == null ? null : startupParamsResultPigeon.toList());
            StartupParamsReasonPigeon startupParamsReasonPigeon = this.reason;
            arrayList.add(startupParamsReasonPigeon != null ? startupParamsReasonPigeon.toList() : null);
            return arrayList;
        }

        static StartupParamsPigeon fromList(ArrayList<Object> arrayList) {
            StartupParamsPigeon startupParamsPigeon = new StartupParamsPigeon();
            Object obj = arrayList.get(0);
            startupParamsPigeon.setResult(obj == null ? null : StartupParamsResultPigeon.fromList((ArrayList) obj));
            Object obj2 = arrayList.get(1);
            startupParamsPigeon.setReason(obj2 != null ? StartupParamsReasonPigeon.fromList((ArrayList) obj2) : null);
            return startupParamsPigeon;
        }
    }

    public static final class ExternalAttributionPigeon {
        private Map<String, Object> data;
        private String source;

        public String getSource() {
            return this.source;
        }

        public void setSource(String str) {
            if (str == null) {
                throw new IllegalStateException("Nonnull field \"source\" is null.");
            }
            this.source = str;
        }

        public Map<String, Object> getData() {
            return this.data;
        }

        public void setData(Map<String, Object> map) {
            if (map == null) {
                throw new IllegalStateException("Nonnull field \"data\" is null.");
            }
            this.data = map;
        }

        ExternalAttributionPigeon() {
        }

        public static final class Builder {
            private Map<String, Object> data;
            private String source;

            public Builder setSource(String str) {
                this.source = str;
                return this;
            }

            public Builder setData(Map<String, Object> map) {
                this.data = map;
                return this;
            }

            public ExternalAttributionPigeon build() {
                ExternalAttributionPigeon externalAttributionPigeon = new ExternalAttributionPigeon();
                externalAttributionPigeon.setSource(this.source);
                externalAttributionPigeon.setData(this.data);
                return externalAttributionPigeon;
            }
        }

        ArrayList<Object> toList() {
            ArrayList<Object> arrayList = new ArrayList<>(2);
            arrayList.add(this.source);
            arrayList.add(this.data);
            return arrayList;
        }

        static ExternalAttributionPigeon fromList(ArrayList<Object> arrayList) {
            ExternalAttributionPigeon externalAttributionPigeon = new ExternalAttributionPigeon();
            externalAttributionPigeon.setSource((String) arrayList.get(0));
            externalAttributionPigeon.setData((Map) arrayList.get(1));
            return externalAttributionPigeon;
        }
    }

    public static final class ReporterConfigPigeon {
        private String apiKey;
        private Map<String, String> appEnvironment;
        private Boolean dataSendingEnabled;
        private Long dispatchPeriodSeconds;
        private Boolean logs;
        private Long maxReportsCount;
        private Long maxReportsInDatabaseCount;
        private Long sessionTimeout;
        private String userProfileID;

        public String getApiKey() {
            return this.apiKey;
        }

        public void setApiKey(String str) {
            if (str == null) {
                throw new IllegalStateException("Nonnull field \"apiKey\" is null.");
            }
            this.apiKey = str;
        }

        public Map<String, String> getAppEnvironment() {
            return this.appEnvironment;
        }

        public void setAppEnvironment(Map<String, String> map) {
            this.appEnvironment = map;
        }

        public Boolean getDataSendingEnabled() {
            return this.dataSendingEnabled;
        }

        public void setDataSendingEnabled(Boolean bool) {
            this.dataSendingEnabled = bool;
        }

        public Long getDispatchPeriodSeconds() {
            return this.dispatchPeriodSeconds;
        }

        public void setDispatchPeriodSeconds(Long l) {
            this.dispatchPeriodSeconds = l;
        }

        public Boolean getLogs() {
            return this.logs;
        }

        public void setLogs(Boolean bool) {
            this.logs = bool;
        }

        public Long getMaxReportsCount() {
            return this.maxReportsCount;
        }

        public void setMaxReportsCount(Long l) {
            this.maxReportsCount = l;
        }

        public Long getMaxReportsInDatabaseCount() {
            return this.maxReportsInDatabaseCount;
        }

        public void setMaxReportsInDatabaseCount(Long l) {
            this.maxReportsInDatabaseCount = l;
        }

        public Long getSessionTimeout() {
            return this.sessionTimeout;
        }

        public void setSessionTimeout(Long l) {
            this.sessionTimeout = l;
        }

        public String getUserProfileID() {
            return this.userProfileID;
        }

        public void setUserProfileID(String str) {
            this.userProfileID = str;
        }

        ReporterConfigPigeon() {
        }

        public static final class Builder {
            private String apiKey;
            private Map<String, String> appEnvironment;
            private Boolean dataSendingEnabled;
            private Long dispatchPeriodSeconds;
            private Boolean logs;
            private Long maxReportsCount;
            private Long maxReportsInDatabaseCount;
            private Long sessionTimeout;
            private String userProfileID;

            public Builder setApiKey(String str) {
                this.apiKey = str;
                return this;
            }

            public Builder setAppEnvironment(Map<String, String> map) {
                this.appEnvironment = map;
                return this;
            }

            public Builder setDataSendingEnabled(Boolean bool) {
                this.dataSendingEnabled = bool;
                return this;
            }

            public Builder setDispatchPeriodSeconds(Long l) {
                this.dispatchPeriodSeconds = l;
                return this;
            }

            public Builder setLogs(Boolean bool) {
                this.logs = bool;
                return this;
            }

            public Builder setMaxReportsCount(Long l) {
                this.maxReportsCount = l;
                return this;
            }

            public Builder setMaxReportsInDatabaseCount(Long l) {
                this.maxReportsInDatabaseCount = l;
                return this;
            }

            public Builder setSessionTimeout(Long l) {
                this.sessionTimeout = l;
                return this;
            }

            public Builder setUserProfileID(String str) {
                this.userProfileID = str;
                return this;
            }

            public ReporterConfigPigeon build() {
                ReporterConfigPigeon reporterConfigPigeon = new ReporterConfigPigeon();
                reporterConfigPigeon.setApiKey(this.apiKey);
                reporterConfigPigeon.setAppEnvironment(this.appEnvironment);
                reporterConfigPigeon.setDataSendingEnabled(this.dataSendingEnabled);
                reporterConfigPigeon.setDispatchPeriodSeconds(this.dispatchPeriodSeconds);
                reporterConfigPigeon.setLogs(this.logs);
                reporterConfigPigeon.setMaxReportsCount(this.maxReportsCount);
                reporterConfigPigeon.setMaxReportsInDatabaseCount(this.maxReportsInDatabaseCount);
                reporterConfigPigeon.setSessionTimeout(this.sessionTimeout);
                reporterConfigPigeon.setUserProfileID(this.userProfileID);
                return reporterConfigPigeon;
            }
        }

        ArrayList<Object> toList() {
            ArrayList<Object> arrayList = new ArrayList<>(9);
            arrayList.add(this.apiKey);
            arrayList.add(this.appEnvironment);
            arrayList.add(this.dataSendingEnabled);
            arrayList.add(this.dispatchPeriodSeconds);
            arrayList.add(this.logs);
            arrayList.add(this.maxReportsCount);
            arrayList.add(this.maxReportsInDatabaseCount);
            arrayList.add(this.sessionTimeout);
            arrayList.add(this.userProfileID);
            return arrayList;
        }

        static ReporterConfigPigeon fromList(ArrayList<Object> arrayList) {
            Long lValueOf;
            Long lValueOf2;
            Long lValueOf3;
            ReporterConfigPigeon reporterConfigPigeon = new ReporterConfigPigeon();
            reporterConfigPigeon.setApiKey((String) arrayList.get(0));
            reporterConfigPigeon.setAppEnvironment((Map) arrayList.get(1));
            reporterConfigPigeon.setDataSendingEnabled((Boolean) arrayList.get(2));
            Object obj = arrayList.get(3);
            Long lValueOf4 = null;
            if (obj == null) {
                lValueOf = null;
            } else {
                lValueOf = Long.valueOf(obj instanceof Integer ? ((Integer) obj).intValue() : ((Long) obj).longValue());
            }
            reporterConfigPigeon.setDispatchPeriodSeconds(lValueOf);
            reporterConfigPigeon.setLogs((Boolean) arrayList.get(4));
            Object obj2 = arrayList.get(5);
            if (obj2 == null) {
                lValueOf2 = null;
            } else {
                lValueOf2 = Long.valueOf(obj2 instanceof Integer ? ((Integer) obj2).intValue() : ((Long) obj2).longValue());
            }
            reporterConfigPigeon.setMaxReportsCount(lValueOf2);
            Object obj3 = arrayList.get(6);
            if (obj3 == null) {
                lValueOf3 = null;
            } else {
                lValueOf3 = Long.valueOf(obj3 instanceof Integer ? ((Integer) obj3).intValue() : ((Long) obj3).longValue());
            }
            reporterConfigPigeon.setMaxReportsInDatabaseCount(lValueOf3);
            Object obj4 = arrayList.get(7);
            if (obj4 != null) {
                lValueOf4 = Long.valueOf(obj4 instanceof Integer ? ((Integer) obj4).intValue() : ((Long) obj4).longValue());
            }
            reporterConfigPigeon.setSessionTimeout(lValueOf4);
            reporterConfigPigeon.setUserProfileID((String) arrayList.get(8));
            return reporterConfigPigeon;
        }
    }

    private static class AppMetricaConfigConverterPigeonCodec extends StandardMessageCodec {
        public static final AppMetricaConfigConverterPigeonCodec INSTANCE = new AppMetricaConfigConverterPigeonCodec();

        private AppMetricaConfigConverterPigeonCodec() {
        }

        @Override // io.flutter.plugin.common.StandardMessageCodec
        protected Object readValueOfType(byte b, ByteBuffer byteBuffer) {
            switch (b) {
                case -128:
                    return AppMetricaConfigPigeon.fromList((ArrayList) readValue(byteBuffer));
                case ComposerKt.defaultsKey /* -127 */:
                    return LocationPigeon.fromList((ArrayList) readValue(byteBuffer));
                case -126:
                    return PreloadInfoPigeon.fromList((ArrayList) readValue(byteBuffer));
                default:
                    return super.readValueOfType(b, byteBuffer);
            }
        }

        @Override // io.flutter.plugin.common.StandardMessageCodec
        protected void writeValue(ByteArrayOutputStream byteArrayOutputStream, Object obj) {
            if (obj instanceof AppMetricaConfigPigeon) {
                byteArrayOutputStream.write(128);
                writeValue(byteArrayOutputStream, ((AppMetricaConfigPigeon) obj).toList());
            } else if (obj instanceof LocationPigeon) {
                byteArrayOutputStream.write(TsExtractor.TS_STREAM_TYPE_AC3);
                writeValue(byteArrayOutputStream, ((LocationPigeon) obj).toList());
            } else if (obj instanceof PreloadInfoPigeon) {
                byteArrayOutputStream.write(TsExtractor.TS_STREAM_TYPE_HDMV_DTS);
                writeValue(byteArrayOutputStream, ((PreloadInfoPigeon) obj).toList());
            } else {
                super.writeValue(byteArrayOutputStream, obj);
            }
        }
    }

    public interface AppMetricaConfigConverterPigeon {
        String toJson(AppMetricaConfigPigeon appMetricaConfigPigeon);

        static MessageCodec<Object> getCodec() {
            return AppMetricaConfigConverterPigeonCodec.INSTANCE;
        }

        static void setup(BinaryMessenger binaryMessenger, final AppMetricaConfigConverterPigeon appMetricaConfigConverterPigeon) {
            BasicMessageChannel basicMessageChannel = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.appmetrica_plugin.AppMetricaConfigConverterPigeon.toJson", getCodec());
            if (appMetricaConfigConverterPigeon != null) {
                basicMessageChannel.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.appmetrica.analytics.flutter.pigeon.Pigeon$AppMetricaConfigConverterPigeon$$ExternalSyntheticLambda0
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        Pigeon.AppMetricaConfigConverterPigeon.lambda$setup$0(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel.setMessageHandler(null);
            }
        }

        static /* synthetic */ void lambda$setup$0(AppMetricaConfigConverterPigeon appMetricaConfigConverterPigeon, Object obj, BasicMessageChannel.Reply reply) {
            ArrayList<Object> arrayList = new ArrayList<>();
            try {
                arrayList.add(0, appMetricaConfigConverterPigeon.toJson((AppMetricaConfigPigeon) ((ArrayList) obj).get(0)));
            } catch (Throwable th) {
                arrayList = Pigeon.wrapError(th);
            }
            reply.reply(arrayList);
        }
    }

    private static class AppMetricaPigeonCodec extends StandardMessageCodec {
        public static final AppMetricaPigeonCodec INSTANCE = new AppMetricaPigeonCodec();

        private AppMetricaPigeonCodec() {
        }

        @Override // io.flutter.plugin.common.StandardMessageCodec
        protected Object readValueOfType(byte b, ByteBuffer byteBuffer) {
            switch (b) {
                case -128:
                    return AdRevenuePigeon.fromList((ArrayList) readValue(byteBuffer));
                case ComposerKt.defaultsKey /* -127 */:
                    return AppMetricaConfigPigeon.fromList((ArrayList) readValue(byteBuffer));
                case -126:
                    return AppMetricaDeferredDeeplinkErrorPigeon.fromList((ArrayList) readValue(byteBuffer));
                case -125:
                    return AppMetricaDeferredDeeplinkParametersPigeon.fromList((ArrayList) readValue(byteBuffer));
                case -124:
                    return AppMetricaDeferredDeeplinkPigeon.fromList((ArrayList) readValue(byteBuffer));
                case -123:
                    return ECommerceAmountPigeon.fromList((ArrayList) readValue(byteBuffer));
                case -122:
                    return ECommerceAmountPigeon.fromList((ArrayList) readValue(byteBuffer));
                case -121:
                    return ECommerceCartItemPigeon.fromList((ArrayList) readValue(byteBuffer));
                case -120:
                    return ECommerceEventPigeon.fromList((ArrayList) readValue(byteBuffer));
                case -119:
                    return ECommerceOrderPigeon.fromList((ArrayList) readValue(byteBuffer));
                case -118:
                    return ECommercePricePigeon.fromList((ArrayList) readValue(byteBuffer));
                case -117:
                    return ECommercePricePigeon.fromList((ArrayList) readValue(byteBuffer));
                case -116:
                    return ECommerceProductPigeon.fromList((ArrayList) readValue(byteBuffer));
                case -115:
                    return ECommerceProductPigeon.fromList((ArrayList) readValue(byteBuffer));
                case -114:
                    return ECommerceReferrerPigeon.fromList((ArrayList) readValue(byteBuffer));
                case -113:
                    return ECommerceScreenPigeon.fromList((ArrayList) readValue(byteBuffer));
                case -112:
                    return ErrorDetailsPigeon.fromList((ArrayList) readValue(byteBuffer));
                case -111:
                    return ErrorDetailsPigeon.fromList((ArrayList) readValue(byteBuffer));
                case PlaybackException.ERROR_CODE_CONTENT_ALREADY_PLAYING /* -110 */:
                    return ExternalAttributionPigeon.fromList((ArrayList) readValue(byteBuffer));
                case PlaybackException.ERROR_CODE_END_OF_PLAYLIST /* -109 */:
                    return LocationPigeon.fromList((ArrayList) readValue(byteBuffer));
                case PlaybackException.ERROR_CODE_SETUP_REQUIRED /* -108 */:
                    return PreloadInfoPigeon.fromList((ArrayList) readValue(byteBuffer));
                case PlaybackException.ERROR_CODE_SKIP_LIMIT_REACHED /* -107 */:
                    return ReceiptPigeon.fromList((ArrayList) readValue(byteBuffer));
                case PlaybackException.ERROR_CODE_NOT_AVAILABLE_IN_REGION /* -106 */:
                    return ReporterConfigPigeon.fromList((ArrayList) readValue(byteBuffer));
                case PlaybackException.ERROR_CODE_PARENTAL_CONTROL_RESTRICTED /* -105 */:
                    return RevenuePigeon.fromList((ArrayList) readValue(byteBuffer));
                case PlaybackException.ERROR_CODE_CONCURRENT_STREAM_LIMIT /* -104 */:
                    return StackTraceElementPigeon.fromList((ArrayList) readValue(byteBuffer));
                case PlaybackException.ERROR_CODE_PREMIUM_ACCOUNT_REQUIRED /* -103 */:
                    return StartupParamsItemPigeon.fromList((ArrayList) readValue(byteBuffer));
                case PlaybackException.ERROR_CODE_AUTHENTICATION_EXPIRED /* -102 */:
                    return StartupParamsPigeon.fromList((ArrayList) readValue(byteBuffer));
                case -101:
                    return StartupParamsReasonPigeon.fromList((ArrayList) readValue(byteBuffer));
                case -100:
                    return StartupParamsResultPigeon.fromList((ArrayList) readValue(byteBuffer));
                case -99:
                    return UserProfileAttributePigeon.fromList((ArrayList) readValue(byteBuffer));
                case -98:
                    return UserProfilePigeon.fromList((ArrayList) readValue(byteBuffer));
                default:
                    return super.readValueOfType(b, byteBuffer);
            }
        }

        @Override // io.flutter.plugin.common.StandardMessageCodec
        protected void writeValue(ByteArrayOutputStream byteArrayOutputStream, Object obj) {
            if (obj instanceof AdRevenuePigeon) {
                byteArrayOutputStream.write(128);
                writeValue(byteArrayOutputStream, ((AdRevenuePigeon) obj).toList());
                return;
            }
            if (obj instanceof AppMetricaConfigPigeon) {
                byteArrayOutputStream.write(TsExtractor.TS_STREAM_TYPE_AC3);
                writeValue(byteArrayOutputStream, ((AppMetricaConfigPigeon) obj).toList());
                return;
            }
            if (obj instanceof AppMetricaDeferredDeeplinkErrorPigeon) {
                byteArrayOutputStream.write(TsExtractor.TS_STREAM_TYPE_HDMV_DTS);
                writeValue(byteArrayOutputStream, ((AppMetricaDeferredDeeplinkErrorPigeon) obj).toList());
                return;
            }
            if (obj instanceof AppMetricaDeferredDeeplinkParametersPigeon) {
                byteArrayOutputStream.write(131);
                writeValue(byteArrayOutputStream, ((AppMetricaDeferredDeeplinkParametersPigeon) obj).toList());
                return;
            }
            if (obj instanceof AppMetricaDeferredDeeplinkPigeon) {
                byteArrayOutputStream.write(132);
                writeValue(byteArrayOutputStream, ((AppMetricaDeferredDeeplinkPigeon) obj).toList());
                return;
            }
            boolean z = obj instanceof ECommerceAmountPigeon;
            if (z) {
                byteArrayOutputStream.write(133);
                writeValue(byteArrayOutputStream, ((ECommerceAmountPigeon) obj).toList());
                return;
            }
            if (z) {
                byteArrayOutputStream.write(TsExtractor.TS_STREAM_TYPE_SPLICE_INFO);
                writeValue(byteArrayOutputStream, ((ECommerceAmountPigeon) obj).toList());
                return;
            }
            if (obj instanceof ECommerceCartItemPigeon) {
                byteArrayOutputStream.write(TsExtractor.TS_STREAM_TYPE_E_AC3);
                writeValue(byteArrayOutputStream, ((ECommerceCartItemPigeon) obj).toList());
                return;
            }
            if (obj instanceof ECommerceEventPigeon) {
                byteArrayOutputStream.write(TsExtractor.TS_STREAM_TYPE_DTS_HD);
                writeValue(byteArrayOutputStream, ((ECommerceEventPigeon) obj).toList());
                return;
            }
            if (obj instanceof ECommerceOrderPigeon) {
                byteArrayOutputStream.write(137);
                writeValue(byteArrayOutputStream, ((ECommerceOrderPigeon) obj).toList());
                return;
            }
            boolean z2 = obj instanceof ECommercePricePigeon;
            if (z2) {
                byteArrayOutputStream.write(TsExtractor.TS_STREAM_TYPE_DTS);
                writeValue(byteArrayOutputStream, ((ECommercePricePigeon) obj).toList());
                return;
            }
            if (z2) {
                byteArrayOutputStream.write(TsExtractor.TS_STREAM_TYPE_DTS_UHD);
                writeValue(byteArrayOutputStream, ((ECommercePricePigeon) obj).toList());
                return;
            }
            boolean z3 = obj instanceof ECommerceProductPigeon;
            if (z3) {
                byteArrayOutputStream.write(140);
                writeValue(byteArrayOutputStream, ((ECommerceProductPigeon) obj).toList());
                return;
            }
            if (z3) {
                byteArrayOutputStream.write(141);
                writeValue(byteArrayOutputStream, ((ECommerceProductPigeon) obj).toList());
                return;
            }
            if (obj instanceof ECommerceReferrerPigeon) {
                byteArrayOutputStream.write(142);
                writeValue(byteArrayOutputStream, ((ECommerceReferrerPigeon) obj).toList());
                return;
            }
            if (obj instanceof ECommerceScreenPigeon) {
                byteArrayOutputStream.write(143);
                writeValue(byteArrayOutputStream, ((ECommerceScreenPigeon) obj).toList());
                return;
            }
            boolean z4 = obj instanceof ErrorDetailsPigeon;
            if (z4) {
                byteArrayOutputStream.write(144);
                writeValue(byteArrayOutputStream, ((ErrorDetailsPigeon) obj).toList());
                return;
            }
            if (z4) {
                byteArrayOutputStream.write(145);
                writeValue(byteArrayOutputStream, ((ErrorDetailsPigeon) obj).toList());
                return;
            }
            if (obj instanceof ExternalAttributionPigeon) {
                byteArrayOutputStream.write(146);
                writeValue(byteArrayOutputStream, ((ExternalAttributionPigeon) obj).toList());
                return;
            }
            if (obj instanceof LocationPigeon) {
                byteArrayOutputStream.write(147);
                writeValue(byteArrayOutputStream, ((LocationPigeon) obj).toList());
                return;
            }
            if (obj instanceof PreloadInfoPigeon) {
                byteArrayOutputStream.write(148);
                writeValue(byteArrayOutputStream, ((PreloadInfoPigeon) obj).toList());
                return;
            }
            if (obj instanceof ReceiptPigeon) {
                byteArrayOutputStream.write(149);
                writeValue(byteArrayOutputStream, ((ReceiptPigeon) obj).toList());
                return;
            }
            if (obj instanceof ReporterConfigPigeon) {
                byteArrayOutputStream.write(150);
                writeValue(byteArrayOutputStream, ((ReporterConfigPigeon) obj).toList());
                return;
            }
            if (obj instanceof RevenuePigeon) {
                byteArrayOutputStream.write(151);
                writeValue(byteArrayOutputStream, ((RevenuePigeon) obj).toList());
                return;
            }
            if (obj instanceof StackTraceElementPigeon) {
                byteArrayOutputStream.write(152);
                writeValue(byteArrayOutputStream, ((StackTraceElementPigeon) obj).toList());
                return;
            }
            if (obj instanceof StartupParamsItemPigeon) {
                byteArrayOutputStream.write(153);
                writeValue(byteArrayOutputStream, ((StartupParamsItemPigeon) obj).toList());
                return;
            }
            if (obj instanceof StartupParamsPigeon) {
                byteArrayOutputStream.write(154);
                writeValue(byteArrayOutputStream, ((StartupParamsPigeon) obj).toList());
                return;
            }
            if (obj instanceof StartupParamsReasonPigeon) {
                byteArrayOutputStream.write(155);
                writeValue(byteArrayOutputStream, ((StartupParamsReasonPigeon) obj).toList());
                return;
            }
            if (obj instanceof StartupParamsResultPigeon) {
                byteArrayOutputStream.write(156);
                writeValue(byteArrayOutputStream, ((StartupParamsResultPigeon) obj).toList());
            } else if (obj instanceof UserProfileAttributePigeon) {
                byteArrayOutputStream.write(157);
                writeValue(byteArrayOutputStream, ((UserProfileAttributePigeon) obj).toList());
            } else if (obj instanceof UserProfilePigeon) {
                byteArrayOutputStream.write(158);
                writeValue(byteArrayOutputStream, ((UserProfilePigeon) obj).toList());
            } else {
                super.writeValue(byteArrayOutputStream, obj);
            }
        }
    }

    public interface AppMetricaPigeon {
        void activate(AppMetricaConfigPigeon appMetricaConfigPigeon);

        void activateReporter(ReporterConfigPigeon reporterConfigPigeon);

        void clearAppEnvironment();

        void enableActivityAutoTracking();

        String getDeviceId();

        Long getLibraryApiLevel();

        String getLibraryVersion();

        String getUuid();

        void handlePluginInitFinished();

        void pauseSession();

        void putAppEnvironmentValue(String str, String str2);

        void putErrorEnvironmentValue(String str, String str2);

        void reportAdRevenue(AdRevenuePigeon adRevenuePigeon);

        void reportAppOpen(String str);

        void reportECommerce(ECommerceEventPigeon eCommerceEventPigeon);

        void reportError(ErrorDetailsPigeon errorDetailsPigeon, String str);

        void reportErrorWithGroup(String str, ErrorDetailsPigeon errorDetailsPigeon, String str2);

        void reportEvent(String str);

        void reportEventWithJson(String str, String str2);

        void reportExternalAttribution(ExternalAttributionPigeon externalAttributionPigeon);

        void reportReferralUrl(String str);

        void reportRevenue(RevenuePigeon revenuePigeon);

        void reportUnhandledException(ErrorDetailsPigeon errorDetailsPigeon);

        void reportUserProfile(UserProfilePigeon userProfilePigeon);

        void requestDeferredDeeplink(Result<AppMetricaDeferredDeeplinkPigeon> result);

        void requestDeferredDeeplinkParameters(Result<AppMetricaDeferredDeeplinkParametersPigeon> result);

        void requestStartupParams(List<String> list, Result<StartupParamsPigeon> result);

        void resumeSession();

        void sendEventsBuffer();

        void setAdvIdentifiersTracking(Boolean bool);

        void setDataSendingEnabled(Boolean bool);

        void setLocation(LocationPigeon locationPigeon);

        void setLocationTracking(Boolean bool);

        void setUserProfileID(String str);

        void touchReporter(String str);

        static MessageCodec<Object> getCodec() {
            return AppMetricaPigeonCodec.INSTANCE;
        }

        static void setup(BinaryMessenger binaryMessenger, final AppMetricaPigeon appMetricaPigeon) {
            BasicMessageChannel basicMessageChannel = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.appmetrica_plugin.AppMetricaPigeon.activate", getCodec());
            if (appMetricaPigeon != null) {
                basicMessageChannel.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.appmetrica.analytics.flutter.pigeon.Pigeon$AppMetricaPigeon$$ExternalSyntheticLambda0
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        Pigeon.AppMetricaPigeon.lambda$setup$0(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel2 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.appmetrica_plugin.AppMetricaPigeon.activateReporter", getCodec());
            if (appMetricaPigeon != null) {
                basicMessageChannel2.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.appmetrica.analytics.flutter.pigeon.Pigeon$AppMetricaPigeon$$ExternalSyntheticLambda2
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        Pigeon.AppMetricaPigeon.lambda$setup$1(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel2.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel3 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.appmetrica_plugin.AppMetricaPigeon.clearAppEnvironment", getCodec());
            if (appMetricaPigeon != null) {
                basicMessageChannel3.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.appmetrica.analytics.flutter.pigeon.Pigeon$AppMetricaPigeon$$ExternalSyntheticLambda14
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        Pigeon.AppMetricaPigeon.lambda$setup$2(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel3.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel4 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.appmetrica_plugin.AppMetricaPigeon.enableActivityAutoTracking", getCodec());
            if (appMetricaPigeon != null) {
                basicMessageChannel4.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.appmetrica.analytics.flutter.pigeon.Pigeon$AppMetricaPigeon$$ExternalSyntheticLambda20
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        Pigeon.AppMetricaPigeon.lambda$setup$3(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel4.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel5 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.appmetrica_plugin.AppMetricaPigeon.getDeviceId", getCodec());
            if (appMetricaPigeon != null) {
                basicMessageChannel5.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.appmetrica.analytics.flutter.pigeon.Pigeon$AppMetricaPigeon$$ExternalSyntheticLambda21
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        Pigeon.AppMetricaPigeon.lambda$setup$4(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel5.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel6 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.appmetrica_plugin.AppMetricaPigeon.getLibraryApiLevel", getCodec());
            if (appMetricaPigeon != null) {
                basicMessageChannel6.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.appmetrica.analytics.flutter.pigeon.Pigeon$AppMetricaPigeon$$ExternalSyntheticLambda23
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        Pigeon.AppMetricaPigeon.lambda$setup$5(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel6.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel7 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.appmetrica_plugin.AppMetricaPigeon.getLibraryVersion", getCodec());
            if (appMetricaPigeon != null) {
                basicMessageChannel7.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.appmetrica.analytics.flutter.pigeon.Pigeon$AppMetricaPigeon$$ExternalSyntheticLambda24
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        Pigeon.AppMetricaPigeon.lambda$setup$6(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel7.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel8 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.appmetrica_plugin.AppMetricaPigeon.getUuid", getCodec());
            if (appMetricaPigeon != null) {
                basicMessageChannel8.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.appmetrica.analytics.flutter.pigeon.Pigeon$AppMetricaPigeon$$ExternalSyntheticLambda25
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        Pigeon.AppMetricaPigeon.lambda$setup$7(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel8.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel9 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.appmetrica_plugin.AppMetricaPigeon.pauseSession", getCodec());
            if (appMetricaPigeon != null) {
                basicMessageChannel9.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.appmetrica.analytics.flutter.pigeon.Pigeon$AppMetricaPigeon$$ExternalSyntheticLambda26
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        Pigeon.AppMetricaPigeon.lambda$setup$8(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel9.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel10 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.appmetrica_plugin.AppMetricaPigeon.putAppEnvironmentValue", getCodec());
            if (appMetricaPigeon != null) {
                basicMessageChannel10.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.appmetrica.analytics.flutter.pigeon.Pigeon$AppMetricaPigeon$$ExternalSyntheticLambda27
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        Pigeon.AppMetricaPigeon.lambda$setup$9(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel10.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel11 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.appmetrica_plugin.AppMetricaPigeon.putErrorEnvironmentValue", getCodec());
            if (appMetricaPigeon != null) {
                basicMessageChannel11.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.appmetrica.analytics.flutter.pigeon.Pigeon$AppMetricaPigeon$$ExternalSyntheticLambda11
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        Pigeon.AppMetricaPigeon.lambda$setup$10(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel11.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel12 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.appmetrica_plugin.AppMetricaPigeon.reportAdRevenue", getCodec());
            if (appMetricaPigeon != null) {
                basicMessageChannel12.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.appmetrica.analytics.flutter.pigeon.Pigeon$AppMetricaPigeon$$ExternalSyntheticLambda22
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        Pigeon.AppMetricaPigeon.lambda$setup$11(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel12.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel13 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.appmetrica_plugin.AppMetricaPigeon.reportAppOpen", getCodec());
            if (appMetricaPigeon != null) {
                basicMessageChannel13.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.appmetrica.analytics.flutter.pigeon.Pigeon$AppMetricaPigeon$$ExternalSyntheticLambda28
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        Pigeon.AppMetricaPigeon.lambda$setup$12(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel13.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel14 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.appmetrica_plugin.AppMetricaPigeon.reportECommerce", getCodec());
            if (appMetricaPigeon != null) {
                basicMessageChannel14.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.appmetrica.analytics.flutter.pigeon.Pigeon$AppMetricaPigeon$$ExternalSyntheticLambda29
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        Pigeon.AppMetricaPigeon.lambda$setup$13(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel14.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel15 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.appmetrica_plugin.AppMetricaPigeon.reportError", getCodec());
            if (appMetricaPigeon != null) {
                basicMessageChannel15.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.appmetrica.analytics.flutter.pigeon.Pigeon$AppMetricaPigeon$$ExternalSyntheticLambda30
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        Pigeon.AppMetricaPigeon.lambda$setup$14(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel15.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel16 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.appmetrica_plugin.AppMetricaPigeon.reportErrorWithGroup", getCodec());
            if (appMetricaPigeon != null) {
                basicMessageChannel16.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.appmetrica.analytics.flutter.pigeon.Pigeon$AppMetricaPigeon$$ExternalSyntheticLambda31
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        Pigeon.AppMetricaPigeon.lambda$setup$15(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel16.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel17 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.appmetrica_plugin.AppMetricaPigeon.reportEvent", getCodec());
            if (appMetricaPigeon != null) {
                basicMessageChannel17.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.appmetrica.analytics.flutter.pigeon.Pigeon$AppMetricaPigeon$$ExternalSyntheticLambda32
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        Pigeon.AppMetricaPigeon.lambda$setup$16(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel17.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel18 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.appmetrica_plugin.AppMetricaPigeon.reportEventWithJson", getCodec());
            if (appMetricaPigeon != null) {
                basicMessageChannel18.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.appmetrica.analytics.flutter.pigeon.Pigeon$AppMetricaPigeon$$ExternalSyntheticLambda33
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        Pigeon.AppMetricaPigeon.lambda$setup$17(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel18.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel19 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.appmetrica_plugin.AppMetricaPigeon.reportExternalAttribution", getCodec());
            if (appMetricaPigeon != null) {
                basicMessageChannel19.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.appmetrica.analytics.flutter.pigeon.Pigeon$AppMetricaPigeon$$ExternalSyntheticLambda34
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        Pigeon.AppMetricaPigeon.lambda$setup$18(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel19.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel20 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.appmetrica_plugin.AppMetricaPigeon.reportReferralUrl", getCodec());
            if (appMetricaPigeon != null) {
                basicMessageChannel20.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.appmetrica.analytics.flutter.pigeon.Pigeon$AppMetricaPigeon$$ExternalSyntheticLambda1
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        Pigeon.AppMetricaPigeon.lambda$setup$19(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel20.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel21 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.appmetrica_plugin.AppMetricaPigeon.reportRevenue", getCodec());
            if (appMetricaPigeon != null) {
                basicMessageChannel21.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.appmetrica.analytics.flutter.pigeon.Pigeon$AppMetricaPigeon$$ExternalSyntheticLambda3
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        Pigeon.AppMetricaPigeon.lambda$setup$20(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel21.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel22 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.appmetrica_plugin.AppMetricaPigeon.reportUnhandledException", getCodec());
            if (appMetricaPigeon != null) {
                basicMessageChannel22.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.appmetrica.analytics.flutter.pigeon.Pigeon$AppMetricaPigeon$$ExternalSyntheticLambda4
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        Pigeon.AppMetricaPigeon.lambda$setup$21(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel22.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel23 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.appmetrica_plugin.AppMetricaPigeon.reportUserProfile", getCodec());
            if (appMetricaPigeon != null) {
                basicMessageChannel23.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.appmetrica.analytics.flutter.pigeon.Pigeon$AppMetricaPigeon$$ExternalSyntheticLambda5
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        Pigeon.AppMetricaPigeon.lambda$setup$22(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel23.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel24 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.appmetrica_plugin.AppMetricaPigeon.requestDeferredDeeplink", getCodec());
            if (appMetricaPigeon != null) {
                basicMessageChannel24.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.appmetrica.analytics.flutter.pigeon.Pigeon$AppMetricaPigeon$$ExternalSyntheticLambda6
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        Pigeon.AppMetricaPigeon.lambda$setup$23(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel24.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel25 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.appmetrica_plugin.AppMetricaPigeon.requestDeferredDeeplinkParameters", getCodec());
            if (appMetricaPigeon != null) {
                basicMessageChannel25.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.appmetrica.analytics.flutter.pigeon.Pigeon$AppMetricaPigeon$$ExternalSyntheticLambda7
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        Pigeon.AppMetricaPigeon.lambda$setup$24(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel25.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel26 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.appmetrica_plugin.AppMetricaPigeon.requestStartupParams", getCodec());
            if (appMetricaPigeon != null) {
                basicMessageChannel26.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.appmetrica.analytics.flutter.pigeon.Pigeon$AppMetricaPigeon$$ExternalSyntheticLambda8
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        Pigeon.AppMetricaPigeon.lambda$setup$25(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel26.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel27 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.appmetrica_plugin.AppMetricaPigeon.resumeSession", getCodec());
            if (appMetricaPigeon != null) {
                basicMessageChannel27.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.appmetrica.analytics.flutter.pigeon.Pigeon$AppMetricaPigeon$$ExternalSyntheticLambda9
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        Pigeon.AppMetricaPigeon.lambda$setup$26(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel27.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel28 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.appmetrica_plugin.AppMetricaPigeon.sendEventsBuffer", getCodec());
            if (appMetricaPigeon != null) {
                basicMessageChannel28.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.appmetrica.analytics.flutter.pigeon.Pigeon$AppMetricaPigeon$$ExternalSyntheticLambda10
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        Pigeon.AppMetricaPigeon.lambda$setup$27(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel28.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel29 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.appmetrica_plugin.AppMetricaPigeon.setAdvIdentifiersTracking", getCodec());
            if (appMetricaPigeon != null) {
                basicMessageChannel29.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.appmetrica.analytics.flutter.pigeon.Pigeon$AppMetricaPigeon$$ExternalSyntheticLambda12
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        Pigeon.AppMetricaPigeon.lambda$setup$28(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel29.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel30 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.appmetrica_plugin.AppMetricaPigeon.setDataSendingEnabled", getCodec());
            if (appMetricaPigeon != null) {
                basicMessageChannel30.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.appmetrica.analytics.flutter.pigeon.Pigeon$AppMetricaPigeon$$ExternalSyntheticLambda13
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        Pigeon.AppMetricaPigeon.lambda$setup$29(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel30.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel31 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.appmetrica_plugin.AppMetricaPigeon.setLocation", getCodec());
            if (appMetricaPigeon != null) {
                basicMessageChannel31.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.appmetrica.analytics.flutter.pigeon.Pigeon$AppMetricaPigeon$$ExternalSyntheticLambda15
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        Pigeon.AppMetricaPigeon.lambda$setup$30(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel31.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel32 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.appmetrica_plugin.AppMetricaPigeon.setLocationTracking", getCodec());
            if (appMetricaPigeon != null) {
                basicMessageChannel32.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.appmetrica.analytics.flutter.pigeon.Pigeon$AppMetricaPigeon$$ExternalSyntheticLambda16
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        Pigeon.AppMetricaPigeon.lambda$setup$31(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel32.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel33 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.appmetrica_plugin.AppMetricaPigeon.setUserProfileID", getCodec());
            if (appMetricaPigeon != null) {
                basicMessageChannel33.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.appmetrica.analytics.flutter.pigeon.Pigeon$AppMetricaPigeon$$ExternalSyntheticLambda17
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        Pigeon.AppMetricaPigeon.lambda$setup$32(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel33.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel34 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.appmetrica_plugin.AppMetricaPigeon.handlePluginInitFinished", getCodec());
            if (appMetricaPigeon != null) {
                basicMessageChannel34.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.appmetrica.analytics.flutter.pigeon.Pigeon$AppMetricaPigeon$$ExternalSyntheticLambda18
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        Pigeon.AppMetricaPigeon.lambda$setup$33(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel34.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel35 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.appmetrica_plugin.AppMetricaPigeon.touchReporter", getCodec());
            if (appMetricaPigeon != null) {
                basicMessageChannel35.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.appmetrica.analytics.flutter.pigeon.Pigeon$AppMetricaPigeon$$ExternalSyntheticLambda19
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        Pigeon.AppMetricaPigeon.lambda$setup$34(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel35.setMessageHandler(null);
            }
        }

        static /* synthetic */ void lambda$setup$0(AppMetricaPigeon appMetricaPigeon, Object obj, BasicMessageChannel.Reply reply) {
            ArrayList<Object> arrayList = new ArrayList<>();
            try {
                appMetricaPigeon.activate((AppMetricaConfigPigeon) ((ArrayList) obj).get(0));
                arrayList.add(0, null);
            } catch (Throwable th) {
                arrayList = Pigeon.wrapError(th);
            }
            reply.reply(arrayList);
        }

        static /* synthetic */ void lambda$setup$1(AppMetricaPigeon appMetricaPigeon, Object obj, BasicMessageChannel.Reply reply) {
            ArrayList<Object> arrayList = new ArrayList<>();
            try {
                appMetricaPigeon.activateReporter((ReporterConfigPigeon) ((ArrayList) obj).get(0));
                arrayList.add(0, null);
            } catch (Throwable th) {
                arrayList = Pigeon.wrapError(th);
            }
            reply.reply(arrayList);
        }

        static /* synthetic */ void lambda$setup$2(AppMetricaPigeon appMetricaPigeon, Object obj, BasicMessageChannel.Reply reply) {
            ArrayList<Object> arrayList = new ArrayList<>();
            try {
                appMetricaPigeon.clearAppEnvironment();
                arrayList.add(0, null);
            } catch (Throwable th) {
                arrayList = Pigeon.wrapError(th);
            }
            reply.reply(arrayList);
        }

        static /* synthetic */ void lambda$setup$3(AppMetricaPigeon appMetricaPigeon, Object obj, BasicMessageChannel.Reply reply) {
            ArrayList<Object> arrayList = new ArrayList<>();
            try {
                appMetricaPigeon.enableActivityAutoTracking();
                arrayList.add(0, null);
            } catch (Throwable th) {
                arrayList = Pigeon.wrapError(th);
            }
            reply.reply(arrayList);
        }

        static /* synthetic */ void lambda$setup$4(AppMetricaPigeon appMetricaPigeon, Object obj, BasicMessageChannel.Reply reply) {
            ArrayList<Object> arrayList = new ArrayList<>();
            try {
                arrayList.add(0, appMetricaPigeon.getDeviceId());
            } catch (Throwable th) {
                arrayList = Pigeon.wrapError(th);
            }
            reply.reply(arrayList);
        }

        static /* synthetic */ void lambda$setup$5(AppMetricaPigeon appMetricaPigeon, Object obj, BasicMessageChannel.Reply reply) {
            ArrayList<Object> arrayList = new ArrayList<>();
            try {
                arrayList.add(0, appMetricaPigeon.getLibraryApiLevel());
            } catch (Throwable th) {
                arrayList = Pigeon.wrapError(th);
            }
            reply.reply(arrayList);
        }

        static /* synthetic */ void lambda$setup$6(AppMetricaPigeon appMetricaPigeon, Object obj, BasicMessageChannel.Reply reply) {
            ArrayList<Object> arrayList = new ArrayList<>();
            try {
                arrayList.add(0, appMetricaPigeon.getLibraryVersion());
            } catch (Throwable th) {
                arrayList = Pigeon.wrapError(th);
            }
            reply.reply(arrayList);
        }

        static /* synthetic */ void lambda$setup$7(AppMetricaPigeon appMetricaPigeon, Object obj, BasicMessageChannel.Reply reply) {
            ArrayList<Object> arrayList = new ArrayList<>();
            try {
                arrayList.add(0, appMetricaPigeon.getUuid());
            } catch (Throwable th) {
                arrayList = Pigeon.wrapError(th);
            }
            reply.reply(arrayList);
        }

        static /* synthetic */ void lambda$setup$8(AppMetricaPigeon appMetricaPigeon, Object obj, BasicMessageChannel.Reply reply) {
            ArrayList<Object> arrayList = new ArrayList<>();
            try {
                appMetricaPigeon.pauseSession();
                arrayList.add(0, null);
            } catch (Throwable th) {
                arrayList = Pigeon.wrapError(th);
            }
            reply.reply(arrayList);
        }

        static /* synthetic */ void lambda$setup$9(AppMetricaPigeon appMetricaPigeon, Object obj, BasicMessageChannel.Reply reply) {
            ArrayList<Object> arrayList = new ArrayList<>();
            ArrayList arrayList2 = (ArrayList) obj;
            try {
                appMetricaPigeon.putAppEnvironmentValue((String) arrayList2.get(0), (String) arrayList2.get(1));
                arrayList.add(0, null);
            } catch (Throwable th) {
                arrayList = Pigeon.wrapError(th);
            }
            reply.reply(arrayList);
        }

        static /* synthetic */ void lambda$setup$10(AppMetricaPigeon appMetricaPigeon, Object obj, BasicMessageChannel.Reply reply) {
            ArrayList<Object> arrayList = new ArrayList<>();
            ArrayList arrayList2 = (ArrayList) obj;
            try {
                appMetricaPigeon.putErrorEnvironmentValue((String) arrayList2.get(0), (String) arrayList2.get(1));
                arrayList.add(0, null);
            } catch (Throwable th) {
                arrayList = Pigeon.wrapError(th);
            }
            reply.reply(arrayList);
        }

        static /* synthetic */ void lambda$setup$11(AppMetricaPigeon appMetricaPigeon, Object obj, BasicMessageChannel.Reply reply) {
            ArrayList<Object> arrayList = new ArrayList<>();
            try {
                appMetricaPigeon.reportAdRevenue((AdRevenuePigeon) ((ArrayList) obj).get(0));
                arrayList.add(0, null);
            } catch (Throwable th) {
                arrayList = Pigeon.wrapError(th);
            }
            reply.reply(arrayList);
        }

        static /* synthetic */ void lambda$setup$12(AppMetricaPigeon appMetricaPigeon, Object obj, BasicMessageChannel.Reply reply) {
            ArrayList<Object> arrayList = new ArrayList<>();
            try {
                appMetricaPigeon.reportAppOpen((String) ((ArrayList) obj).get(0));
                arrayList.add(0, null);
            } catch (Throwable th) {
                arrayList = Pigeon.wrapError(th);
            }
            reply.reply(arrayList);
        }

        static /* synthetic */ void lambda$setup$13(AppMetricaPigeon appMetricaPigeon, Object obj, BasicMessageChannel.Reply reply) {
            ArrayList<Object> arrayList = new ArrayList<>();
            try {
                appMetricaPigeon.reportECommerce((ECommerceEventPigeon) ((ArrayList) obj).get(0));
                arrayList.add(0, null);
            } catch (Throwable th) {
                arrayList = Pigeon.wrapError(th);
            }
            reply.reply(arrayList);
        }

        static /* synthetic */ void lambda$setup$14(AppMetricaPigeon appMetricaPigeon, Object obj, BasicMessageChannel.Reply reply) {
            ArrayList<Object> arrayList = new ArrayList<>();
            ArrayList arrayList2 = (ArrayList) obj;
            try {
                appMetricaPigeon.reportError((ErrorDetailsPigeon) arrayList2.get(0), (String) arrayList2.get(1));
                arrayList.add(0, null);
            } catch (Throwable th) {
                arrayList = Pigeon.wrapError(th);
            }
            reply.reply(arrayList);
        }

        static /* synthetic */ void lambda$setup$15(AppMetricaPigeon appMetricaPigeon, Object obj, BasicMessageChannel.Reply reply) {
            ArrayList<Object> arrayList = new ArrayList<>();
            ArrayList arrayList2 = (ArrayList) obj;
            try {
                appMetricaPigeon.reportErrorWithGroup((String) arrayList2.get(0), (ErrorDetailsPigeon) arrayList2.get(1), (String) arrayList2.get(2));
                arrayList.add(0, null);
            } catch (Throwable th) {
                arrayList = Pigeon.wrapError(th);
            }
            reply.reply(arrayList);
        }

        static /* synthetic */ void lambda$setup$16(AppMetricaPigeon appMetricaPigeon, Object obj, BasicMessageChannel.Reply reply) {
            ArrayList<Object> arrayList = new ArrayList<>();
            try {
                appMetricaPigeon.reportEvent((String) ((ArrayList) obj).get(0));
                arrayList.add(0, null);
            } catch (Throwable th) {
                arrayList = Pigeon.wrapError(th);
            }
            reply.reply(arrayList);
        }

        static /* synthetic */ void lambda$setup$17(AppMetricaPigeon appMetricaPigeon, Object obj, BasicMessageChannel.Reply reply) {
            ArrayList<Object> arrayList = new ArrayList<>();
            ArrayList arrayList2 = (ArrayList) obj;
            try {
                appMetricaPigeon.reportEventWithJson((String) arrayList2.get(0), (String) arrayList2.get(1));
                arrayList.add(0, null);
            } catch (Throwable th) {
                arrayList = Pigeon.wrapError(th);
            }
            reply.reply(arrayList);
        }

        static /* synthetic */ void lambda$setup$18(AppMetricaPigeon appMetricaPigeon, Object obj, BasicMessageChannel.Reply reply) {
            ArrayList<Object> arrayList = new ArrayList<>();
            try {
                appMetricaPigeon.reportExternalAttribution((ExternalAttributionPigeon) ((ArrayList) obj).get(0));
                arrayList.add(0, null);
            } catch (Throwable th) {
                arrayList = Pigeon.wrapError(th);
            }
            reply.reply(arrayList);
        }

        static /* synthetic */ void lambda$setup$19(AppMetricaPigeon appMetricaPigeon, Object obj, BasicMessageChannel.Reply reply) {
            ArrayList<Object> arrayList = new ArrayList<>();
            try {
                appMetricaPigeon.reportReferralUrl((String) ((ArrayList) obj).get(0));
                arrayList.add(0, null);
            } catch (Throwable th) {
                arrayList = Pigeon.wrapError(th);
            }
            reply.reply(arrayList);
        }

        static /* synthetic */ void lambda$setup$20(AppMetricaPigeon appMetricaPigeon, Object obj, BasicMessageChannel.Reply reply) {
            ArrayList<Object> arrayList = new ArrayList<>();
            try {
                appMetricaPigeon.reportRevenue((RevenuePigeon) ((ArrayList) obj).get(0));
                arrayList.add(0, null);
            } catch (Throwable th) {
                arrayList = Pigeon.wrapError(th);
            }
            reply.reply(arrayList);
        }

        static /* synthetic */ void lambda$setup$21(AppMetricaPigeon appMetricaPigeon, Object obj, BasicMessageChannel.Reply reply) {
            ArrayList<Object> arrayList = new ArrayList<>();
            try {
                appMetricaPigeon.reportUnhandledException((ErrorDetailsPigeon) ((ArrayList) obj).get(0));
                arrayList.add(0, null);
            } catch (Throwable th) {
                arrayList = Pigeon.wrapError(th);
            }
            reply.reply(arrayList);
        }

        static /* synthetic */ void lambda$setup$22(AppMetricaPigeon appMetricaPigeon, Object obj, BasicMessageChannel.Reply reply) {
            ArrayList<Object> arrayList = new ArrayList<>();
            try {
                appMetricaPigeon.reportUserProfile((UserProfilePigeon) ((ArrayList) obj).get(0));
                arrayList.add(0, null);
            } catch (Throwable th) {
                arrayList = Pigeon.wrapError(th);
            }
            reply.reply(arrayList);
        }

        static /* synthetic */ void lambda$setup$23(AppMetricaPigeon appMetricaPigeon, Object obj, final BasicMessageChannel.Reply reply) {
            final ArrayList arrayList = new ArrayList();
            appMetricaPigeon.requestDeferredDeeplink(new Result<AppMetricaDeferredDeeplinkPigeon>() { // from class: io.appmetrica.analytics.flutter.pigeon.Pigeon.AppMetricaPigeon.1
                @Override // io.appmetrica.analytics.flutter.pigeon.Pigeon.Result
                public void success(AppMetricaDeferredDeeplinkPigeon appMetricaDeferredDeeplinkPigeon) {
                    arrayList.add(0, appMetricaDeferredDeeplinkPigeon);
                    reply.reply(arrayList);
                }

                @Override // io.appmetrica.analytics.flutter.pigeon.Pigeon.Result
                public void error(Throwable th) {
                    reply.reply(Pigeon.wrapError(th));
                }
            });
        }

        static /* synthetic */ void lambda$setup$24(AppMetricaPigeon appMetricaPigeon, Object obj, final BasicMessageChannel.Reply reply) {
            final ArrayList arrayList = new ArrayList();
            appMetricaPigeon.requestDeferredDeeplinkParameters(new Result<AppMetricaDeferredDeeplinkParametersPigeon>() { // from class: io.appmetrica.analytics.flutter.pigeon.Pigeon.AppMetricaPigeon.2
                @Override // io.appmetrica.analytics.flutter.pigeon.Pigeon.Result
                public void success(AppMetricaDeferredDeeplinkParametersPigeon appMetricaDeferredDeeplinkParametersPigeon) {
                    arrayList.add(0, appMetricaDeferredDeeplinkParametersPigeon);
                    reply.reply(arrayList);
                }

                @Override // io.appmetrica.analytics.flutter.pigeon.Pigeon.Result
                public void error(Throwable th) {
                    reply.reply(Pigeon.wrapError(th));
                }
            });
        }

        static /* synthetic */ void lambda$setup$25(AppMetricaPigeon appMetricaPigeon, Object obj, final BasicMessageChannel.Reply reply) {
            final ArrayList arrayList = new ArrayList();
            appMetricaPigeon.requestStartupParams((List) ((ArrayList) obj).get(0), new Result<StartupParamsPigeon>() { // from class: io.appmetrica.analytics.flutter.pigeon.Pigeon.AppMetricaPigeon.3
                @Override // io.appmetrica.analytics.flutter.pigeon.Pigeon.Result
                public void success(StartupParamsPigeon startupParamsPigeon) {
                    arrayList.add(0, startupParamsPigeon);
                    reply.reply(arrayList);
                }

                @Override // io.appmetrica.analytics.flutter.pigeon.Pigeon.Result
                public void error(Throwable th) {
                    reply.reply(Pigeon.wrapError(th));
                }
            });
        }

        static /* synthetic */ void lambda$setup$26(AppMetricaPigeon appMetricaPigeon, Object obj, BasicMessageChannel.Reply reply) {
            ArrayList<Object> arrayList = new ArrayList<>();
            try {
                appMetricaPigeon.resumeSession();
                arrayList.add(0, null);
            } catch (Throwable th) {
                arrayList = Pigeon.wrapError(th);
            }
            reply.reply(arrayList);
        }

        static /* synthetic */ void lambda$setup$27(AppMetricaPigeon appMetricaPigeon, Object obj, BasicMessageChannel.Reply reply) {
            ArrayList<Object> arrayList = new ArrayList<>();
            try {
                appMetricaPigeon.sendEventsBuffer();
                arrayList.add(0, null);
            } catch (Throwable th) {
                arrayList = Pigeon.wrapError(th);
            }
            reply.reply(arrayList);
        }

        static /* synthetic */ void lambda$setup$28(AppMetricaPigeon appMetricaPigeon, Object obj, BasicMessageChannel.Reply reply) {
            ArrayList<Object> arrayList = new ArrayList<>();
            try {
                appMetricaPigeon.setAdvIdentifiersTracking((Boolean) ((ArrayList) obj).get(0));
                arrayList.add(0, null);
            } catch (Throwable th) {
                arrayList = Pigeon.wrapError(th);
            }
            reply.reply(arrayList);
        }

        static /* synthetic */ void lambda$setup$29(AppMetricaPigeon appMetricaPigeon, Object obj, BasicMessageChannel.Reply reply) {
            ArrayList<Object> arrayList = new ArrayList<>();
            try {
                appMetricaPigeon.setDataSendingEnabled((Boolean) ((ArrayList) obj).get(0));
                arrayList.add(0, null);
            } catch (Throwable th) {
                arrayList = Pigeon.wrapError(th);
            }
            reply.reply(arrayList);
        }

        static /* synthetic */ void lambda$setup$30(AppMetricaPigeon appMetricaPigeon, Object obj, BasicMessageChannel.Reply reply) {
            ArrayList<Object> arrayList = new ArrayList<>();
            try {
                appMetricaPigeon.setLocation((LocationPigeon) ((ArrayList) obj).get(0));
                arrayList.add(0, null);
            } catch (Throwable th) {
                arrayList = Pigeon.wrapError(th);
            }
            reply.reply(arrayList);
        }

        static /* synthetic */ void lambda$setup$31(AppMetricaPigeon appMetricaPigeon, Object obj, BasicMessageChannel.Reply reply) {
            ArrayList<Object> arrayList = new ArrayList<>();
            try {
                appMetricaPigeon.setLocationTracking((Boolean) ((ArrayList) obj).get(0));
                arrayList.add(0, null);
            } catch (Throwable th) {
                arrayList = Pigeon.wrapError(th);
            }
            reply.reply(arrayList);
        }

        static /* synthetic */ void lambda$setup$32(AppMetricaPigeon appMetricaPigeon, Object obj, BasicMessageChannel.Reply reply) {
            ArrayList<Object> arrayList = new ArrayList<>();
            try {
                appMetricaPigeon.setUserProfileID((String) ((ArrayList) obj).get(0));
                arrayList.add(0, null);
            } catch (Throwable th) {
                arrayList = Pigeon.wrapError(th);
            }
            reply.reply(arrayList);
        }

        static /* synthetic */ void lambda$setup$33(AppMetricaPigeon appMetricaPigeon, Object obj, BasicMessageChannel.Reply reply) {
            ArrayList<Object> arrayList = new ArrayList<>();
            try {
                appMetricaPigeon.handlePluginInitFinished();
                arrayList.add(0, null);
            } catch (Throwable th) {
                arrayList = Pigeon.wrapError(th);
            }
            reply.reply(arrayList);
        }

        static /* synthetic */ void lambda$setup$34(AppMetricaPigeon appMetricaPigeon, Object obj, BasicMessageChannel.Reply reply) {
            ArrayList<Object> arrayList = new ArrayList<>();
            try {
                appMetricaPigeon.touchReporter((String) ((ArrayList) obj).get(0));
                arrayList.add(0, null);
            } catch (Throwable th) {
                arrayList = Pigeon.wrapError(th);
            }
            reply.reply(arrayList);
        }
    }

    public interface AppMetricaLibraryAdapterPigeon {
        void subscribeForAutoCollectedData(String str);

        static MessageCodec<Object> getCodec() {
            return new StandardMessageCodec();
        }

        static void setup(BinaryMessenger binaryMessenger, final AppMetricaLibraryAdapterPigeon appMetricaLibraryAdapterPigeon) {
            BasicMessageChannel basicMessageChannel = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.appmetrica_plugin.AppMetricaLibraryAdapterPigeon.subscribeForAutoCollectedData", getCodec());
            if (appMetricaLibraryAdapterPigeon != null) {
                basicMessageChannel.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.appmetrica.analytics.flutter.pigeon.Pigeon$AppMetricaLibraryAdapterPigeon$$ExternalSyntheticLambda0
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        Pigeon.AppMetricaLibraryAdapterPigeon.lambda$setup$0(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel.setMessageHandler(null);
            }
        }

        static /* synthetic */ void lambda$setup$0(AppMetricaLibraryAdapterPigeon appMetricaLibraryAdapterPigeon, Object obj, BasicMessageChannel.Reply reply) {
            ArrayList<Object> arrayList = new ArrayList<>();
            try {
                appMetricaLibraryAdapterPigeon.subscribeForAutoCollectedData((String) ((ArrayList) obj).get(0));
                arrayList.add(0, null);
            } catch (Throwable th) {
                arrayList = Pigeon.wrapError(th);
            }
            reply.reply(arrayList);
        }
    }

    private static class ReporterPigeonCodec extends StandardMessageCodec {
        public static final ReporterPigeonCodec INSTANCE = new ReporterPigeonCodec();

        private ReporterPigeonCodec() {
        }

        @Override // io.flutter.plugin.common.StandardMessageCodec
        protected Object readValueOfType(byte b, ByteBuffer byteBuffer) {
            switch (b) {
                case -128:
                    return AdRevenuePigeon.fromList((ArrayList) readValue(byteBuffer));
                case ComposerKt.defaultsKey /* -127 */:
                    return ECommerceAmountPigeon.fromList((ArrayList) readValue(byteBuffer));
                case -126:
                    return ECommerceAmountPigeon.fromList((ArrayList) readValue(byteBuffer));
                case -125:
                    return ECommerceCartItemPigeon.fromList((ArrayList) readValue(byteBuffer));
                case -124:
                    return ECommerceEventPigeon.fromList((ArrayList) readValue(byteBuffer));
                case -123:
                    return ECommerceOrderPigeon.fromList((ArrayList) readValue(byteBuffer));
                case -122:
                    return ECommercePricePigeon.fromList((ArrayList) readValue(byteBuffer));
                case -121:
                    return ECommercePricePigeon.fromList((ArrayList) readValue(byteBuffer));
                case -120:
                    return ECommerceProductPigeon.fromList((ArrayList) readValue(byteBuffer));
                case -119:
                    return ECommerceProductPigeon.fromList((ArrayList) readValue(byteBuffer));
                case -118:
                    return ECommerceReferrerPigeon.fromList((ArrayList) readValue(byteBuffer));
                case -117:
                    return ECommerceScreenPigeon.fromList((ArrayList) readValue(byteBuffer));
                case -116:
                    return ErrorDetailsPigeon.fromList((ArrayList) readValue(byteBuffer));
                case -115:
                    return ErrorDetailsPigeon.fromList((ArrayList) readValue(byteBuffer));
                case -114:
                    return ReceiptPigeon.fromList((ArrayList) readValue(byteBuffer));
                case -113:
                    return RevenuePigeon.fromList((ArrayList) readValue(byteBuffer));
                case -112:
                    return StackTraceElementPigeon.fromList((ArrayList) readValue(byteBuffer));
                case -111:
                    return UserProfileAttributePigeon.fromList((ArrayList) readValue(byteBuffer));
                case PlaybackException.ERROR_CODE_CONTENT_ALREADY_PLAYING /* -110 */:
                    return UserProfilePigeon.fromList((ArrayList) readValue(byteBuffer));
                default:
                    return super.readValueOfType(b, byteBuffer);
            }
        }

        @Override // io.flutter.plugin.common.StandardMessageCodec
        protected void writeValue(ByteArrayOutputStream byteArrayOutputStream, Object obj) {
            if (obj instanceof AdRevenuePigeon) {
                byteArrayOutputStream.write(128);
                writeValue(byteArrayOutputStream, ((AdRevenuePigeon) obj).toList());
                return;
            }
            boolean z = obj instanceof ECommerceAmountPigeon;
            if (z) {
                byteArrayOutputStream.write(TsExtractor.TS_STREAM_TYPE_AC3);
                writeValue(byteArrayOutputStream, ((ECommerceAmountPigeon) obj).toList());
                return;
            }
            if (z) {
                byteArrayOutputStream.write(TsExtractor.TS_STREAM_TYPE_HDMV_DTS);
                writeValue(byteArrayOutputStream, ((ECommerceAmountPigeon) obj).toList());
                return;
            }
            if (obj instanceof ECommerceCartItemPigeon) {
                byteArrayOutputStream.write(131);
                writeValue(byteArrayOutputStream, ((ECommerceCartItemPigeon) obj).toList());
                return;
            }
            if (obj instanceof ECommerceEventPigeon) {
                byteArrayOutputStream.write(132);
                writeValue(byteArrayOutputStream, ((ECommerceEventPigeon) obj).toList());
                return;
            }
            if (obj instanceof ECommerceOrderPigeon) {
                byteArrayOutputStream.write(133);
                writeValue(byteArrayOutputStream, ((ECommerceOrderPigeon) obj).toList());
                return;
            }
            boolean z2 = obj instanceof ECommercePricePigeon;
            if (z2) {
                byteArrayOutputStream.write(TsExtractor.TS_STREAM_TYPE_SPLICE_INFO);
                writeValue(byteArrayOutputStream, ((ECommercePricePigeon) obj).toList());
                return;
            }
            if (z2) {
                byteArrayOutputStream.write(TsExtractor.TS_STREAM_TYPE_E_AC3);
                writeValue(byteArrayOutputStream, ((ECommercePricePigeon) obj).toList());
                return;
            }
            boolean z3 = obj instanceof ECommerceProductPigeon;
            if (z3) {
                byteArrayOutputStream.write(TsExtractor.TS_STREAM_TYPE_DTS_HD);
                writeValue(byteArrayOutputStream, ((ECommerceProductPigeon) obj).toList());
                return;
            }
            if (z3) {
                byteArrayOutputStream.write(137);
                writeValue(byteArrayOutputStream, ((ECommerceProductPigeon) obj).toList());
                return;
            }
            if (obj instanceof ECommerceReferrerPigeon) {
                byteArrayOutputStream.write(TsExtractor.TS_STREAM_TYPE_DTS);
                writeValue(byteArrayOutputStream, ((ECommerceReferrerPigeon) obj).toList());
                return;
            }
            if (obj instanceof ECommerceScreenPigeon) {
                byteArrayOutputStream.write(TsExtractor.TS_STREAM_TYPE_DTS_UHD);
                writeValue(byteArrayOutputStream, ((ECommerceScreenPigeon) obj).toList());
                return;
            }
            boolean z4 = obj instanceof ErrorDetailsPigeon;
            if (z4) {
                byteArrayOutputStream.write(140);
                writeValue(byteArrayOutputStream, ((ErrorDetailsPigeon) obj).toList());
                return;
            }
            if (z4) {
                byteArrayOutputStream.write(141);
                writeValue(byteArrayOutputStream, ((ErrorDetailsPigeon) obj).toList());
                return;
            }
            if (obj instanceof ReceiptPigeon) {
                byteArrayOutputStream.write(142);
                writeValue(byteArrayOutputStream, ((ReceiptPigeon) obj).toList());
                return;
            }
            if (obj instanceof RevenuePigeon) {
                byteArrayOutputStream.write(143);
                writeValue(byteArrayOutputStream, ((RevenuePigeon) obj).toList());
                return;
            }
            if (obj instanceof StackTraceElementPigeon) {
                byteArrayOutputStream.write(144);
                writeValue(byteArrayOutputStream, ((StackTraceElementPigeon) obj).toList());
            } else if (obj instanceof UserProfileAttributePigeon) {
                byteArrayOutputStream.write(145);
                writeValue(byteArrayOutputStream, ((UserProfileAttributePigeon) obj).toList());
            } else if (obj instanceof UserProfilePigeon) {
                byteArrayOutputStream.write(146);
                writeValue(byteArrayOutputStream, ((UserProfilePigeon) obj).toList());
            } else {
                super.writeValue(byteArrayOutputStream, obj);
            }
        }
    }

    public interface ReporterPigeon {
        void clearAppEnvironment(String str);

        void pauseSession(String str);

        void putAppEnvironmentValue(String str, String str2, String str3);

        void reportAdRevenue(String str, AdRevenuePigeon adRevenuePigeon);

        void reportECommerce(String str, ECommerceEventPigeon eCommerceEventPigeon);

        void reportError(String str, ErrorDetailsPigeon errorDetailsPigeon, String str2);

        void reportErrorWithGroup(String str, String str2, ErrorDetailsPigeon errorDetailsPigeon, String str3);

        void reportEvent(String str, String str2);

        void reportEventWithJson(String str, String str2, String str3);

        void reportRevenue(String str, RevenuePigeon revenuePigeon);

        void reportUnhandledException(String str, ErrorDetailsPigeon errorDetailsPigeon);

        void reportUserProfile(String str, UserProfilePigeon userProfilePigeon);

        void resumeSession(String str);

        void sendEventsBuffer(String str);

        void setDataSendingEnabled(String str, Boolean bool);

        void setUserProfileID(String str, String str2);

        static MessageCodec<Object> getCodec() {
            return ReporterPigeonCodec.INSTANCE;
        }

        static void setup(BinaryMessenger binaryMessenger, final ReporterPigeon reporterPigeon) {
            BasicMessageChannel basicMessageChannel = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.appmetrica_plugin.ReporterPigeon.clearAppEnvironment", getCodec());
            if (reporterPigeon != null) {
                basicMessageChannel.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.appmetrica.analytics.flutter.pigeon.Pigeon$ReporterPigeon$$ExternalSyntheticLambda0
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        Pigeon.ReporterPigeon.lambda$setup$0(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel2 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.appmetrica_plugin.ReporterPigeon.pauseSession", getCodec());
            if (reporterPigeon != null) {
                basicMessageChannel2.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.appmetrica.analytics.flutter.pigeon.Pigeon$ReporterPigeon$$ExternalSyntheticLambda13
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        Pigeon.ReporterPigeon.lambda$setup$1(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel2.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel3 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.appmetrica_plugin.ReporterPigeon.putAppEnvironmentValue", getCodec());
            if (reporterPigeon != null) {
                basicMessageChannel3.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.appmetrica.analytics.flutter.pigeon.Pigeon$ReporterPigeon$$ExternalSyntheticLambda14
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        Pigeon.ReporterPigeon.lambda$setup$2(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel3.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel4 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.appmetrica_plugin.ReporterPigeon.reportAdRevenue", getCodec());
            if (reporterPigeon != null) {
                basicMessageChannel4.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.appmetrica.analytics.flutter.pigeon.Pigeon$ReporterPigeon$$ExternalSyntheticLambda15
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        Pigeon.ReporterPigeon.lambda$setup$3(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel4.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel5 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.appmetrica_plugin.ReporterPigeon.reportECommerce", getCodec());
            if (reporterPigeon != null) {
                basicMessageChannel5.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.appmetrica.analytics.flutter.pigeon.Pigeon$ReporterPigeon$$ExternalSyntheticLambda1
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        Pigeon.ReporterPigeon.lambda$setup$4(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel5.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel6 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.appmetrica_plugin.ReporterPigeon.reportError", getCodec());
            if (reporterPigeon != null) {
                basicMessageChannel6.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.appmetrica.analytics.flutter.pigeon.Pigeon$ReporterPigeon$$ExternalSyntheticLambda2
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        Pigeon.ReporterPigeon.lambda$setup$5(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel6.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel7 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.appmetrica_plugin.ReporterPigeon.reportErrorWithGroup", getCodec());
            if (reporterPigeon != null) {
                basicMessageChannel7.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.appmetrica.analytics.flutter.pigeon.Pigeon$ReporterPigeon$$ExternalSyntheticLambda3
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        Pigeon.ReporterPigeon.lambda$setup$6(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel7.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel8 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.appmetrica_plugin.ReporterPigeon.reportEvent", getCodec());
            if (reporterPigeon != null) {
                basicMessageChannel8.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.appmetrica.analytics.flutter.pigeon.Pigeon$ReporterPigeon$$ExternalSyntheticLambda4
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        Pigeon.ReporterPigeon.lambda$setup$7(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel8.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel9 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.appmetrica_plugin.ReporterPigeon.reportEventWithJson", getCodec());
            if (reporterPigeon != null) {
                basicMessageChannel9.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.appmetrica.analytics.flutter.pigeon.Pigeon$ReporterPigeon$$ExternalSyntheticLambda5
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        Pigeon.ReporterPigeon.lambda$setup$8(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel9.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel10 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.appmetrica_plugin.ReporterPigeon.reportRevenue", getCodec());
            if (reporterPigeon != null) {
                basicMessageChannel10.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.appmetrica.analytics.flutter.pigeon.Pigeon$ReporterPigeon$$ExternalSyntheticLambda6
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        Pigeon.ReporterPigeon.lambda$setup$9(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel10.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel11 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.appmetrica_plugin.ReporterPigeon.reportUnhandledException", getCodec());
            if (reporterPigeon != null) {
                basicMessageChannel11.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.appmetrica.analytics.flutter.pigeon.Pigeon$ReporterPigeon$$ExternalSyntheticLambda7
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        Pigeon.ReporterPigeon.lambda$setup$10(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel11.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel12 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.appmetrica_plugin.ReporterPigeon.reportUserProfile", getCodec());
            if (reporterPigeon != null) {
                basicMessageChannel12.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.appmetrica.analytics.flutter.pigeon.Pigeon$ReporterPigeon$$ExternalSyntheticLambda8
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        Pigeon.ReporterPigeon.lambda$setup$11(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel12.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel13 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.appmetrica_plugin.ReporterPigeon.resumeSession", getCodec());
            if (reporterPigeon != null) {
                basicMessageChannel13.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.appmetrica.analytics.flutter.pigeon.Pigeon$ReporterPigeon$$ExternalSyntheticLambda9
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        Pigeon.ReporterPigeon.lambda$setup$12(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel13.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel14 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.appmetrica_plugin.ReporterPigeon.sendEventsBuffer", getCodec());
            if (reporterPigeon != null) {
                basicMessageChannel14.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.appmetrica.analytics.flutter.pigeon.Pigeon$ReporterPigeon$$ExternalSyntheticLambda10
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        Pigeon.ReporterPigeon.lambda$setup$13(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel14.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel15 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.appmetrica_plugin.ReporterPigeon.setDataSendingEnabled", getCodec());
            if (reporterPigeon != null) {
                basicMessageChannel15.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.appmetrica.analytics.flutter.pigeon.Pigeon$ReporterPigeon$$ExternalSyntheticLambda11
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        Pigeon.ReporterPigeon.lambda$setup$14(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel15.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel16 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.appmetrica_plugin.ReporterPigeon.setUserProfileID", getCodec());
            if (reporterPigeon != null) {
                basicMessageChannel16.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.appmetrica.analytics.flutter.pigeon.Pigeon$ReporterPigeon$$ExternalSyntheticLambda12
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        Pigeon.ReporterPigeon.lambda$setup$15(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel16.setMessageHandler(null);
            }
        }

        static /* synthetic */ void lambda$setup$0(ReporterPigeon reporterPigeon, Object obj, BasicMessageChannel.Reply reply) {
            ArrayList<Object> arrayList = new ArrayList<>();
            try {
                reporterPigeon.clearAppEnvironment((String) ((ArrayList) obj).get(0));
                arrayList.add(0, null);
            } catch (Throwable th) {
                arrayList = Pigeon.wrapError(th);
            }
            reply.reply(arrayList);
        }

        static /* synthetic */ void lambda$setup$1(ReporterPigeon reporterPigeon, Object obj, BasicMessageChannel.Reply reply) {
            ArrayList<Object> arrayList = new ArrayList<>();
            try {
                reporterPigeon.pauseSession((String) ((ArrayList) obj).get(0));
                arrayList.add(0, null);
            } catch (Throwable th) {
                arrayList = Pigeon.wrapError(th);
            }
            reply.reply(arrayList);
        }

        static /* synthetic */ void lambda$setup$2(ReporterPigeon reporterPigeon, Object obj, BasicMessageChannel.Reply reply) {
            ArrayList<Object> arrayList = new ArrayList<>();
            ArrayList arrayList2 = (ArrayList) obj;
            try {
                reporterPigeon.putAppEnvironmentValue((String) arrayList2.get(0), (String) arrayList2.get(1), (String) arrayList2.get(2));
                arrayList.add(0, null);
            } catch (Throwable th) {
                arrayList = Pigeon.wrapError(th);
            }
            reply.reply(arrayList);
        }

        static /* synthetic */ void lambda$setup$3(ReporterPigeon reporterPigeon, Object obj, BasicMessageChannel.Reply reply) {
            ArrayList<Object> arrayList = new ArrayList<>();
            ArrayList arrayList2 = (ArrayList) obj;
            try {
                reporterPigeon.reportAdRevenue((String) arrayList2.get(0), (AdRevenuePigeon) arrayList2.get(1));
                arrayList.add(0, null);
            } catch (Throwable th) {
                arrayList = Pigeon.wrapError(th);
            }
            reply.reply(arrayList);
        }

        static /* synthetic */ void lambda$setup$4(ReporterPigeon reporterPigeon, Object obj, BasicMessageChannel.Reply reply) {
            ArrayList<Object> arrayList = new ArrayList<>();
            ArrayList arrayList2 = (ArrayList) obj;
            try {
                reporterPigeon.reportECommerce((String) arrayList2.get(0), (ECommerceEventPigeon) arrayList2.get(1));
                arrayList.add(0, null);
            } catch (Throwable th) {
                arrayList = Pigeon.wrapError(th);
            }
            reply.reply(arrayList);
        }

        static /* synthetic */ void lambda$setup$5(ReporterPigeon reporterPigeon, Object obj, BasicMessageChannel.Reply reply) {
            ArrayList<Object> arrayList = new ArrayList<>();
            ArrayList arrayList2 = (ArrayList) obj;
            try {
                reporterPigeon.reportError((String) arrayList2.get(0), (ErrorDetailsPigeon) arrayList2.get(1), (String) arrayList2.get(2));
                arrayList.add(0, null);
            } catch (Throwable th) {
                arrayList = Pigeon.wrapError(th);
            }
            reply.reply(arrayList);
        }

        static /* synthetic */ void lambda$setup$6(ReporterPigeon reporterPigeon, Object obj, BasicMessageChannel.Reply reply) {
            ArrayList<Object> arrayList = new ArrayList<>();
            ArrayList arrayList2 = (ArrayList) obj;
            try {
                reporterPigeon.reportErrorWithGroup((String) arrayList2.get(0), (String) arrayList2.get(1), (ErrorDetailsPigeon) arrayList2.get(2), (String) arrayList2.get(3));
                arrayList.add(0, null);
            } catch (Throwable th) {
                arrayList = Pigeon.wrapError(th);
            }
            reply.reply(arrayList);
        }

        static /* synthetic */ void lambda$setup$7(ReporterPigeon reporterPigeon, Object obj, BasicMessageChannel.Reply reply) {
            ArrayList<Object> arrayList = new ArrayList<>();
            ArrayList arrayList2 = (ArrayList) obj;
            try {
                reporterPigeon.reportEvent((String) arrayList2.get(0), (String) arrayList2.get(1));
                arrayList.add(0, null);
            } catch (Throwable th) {
                arrayList = Pigeon.wrapError(th);
            }
            reply.reply(arrayList);
        }

        static /* synthetic */ void lambda$setup$8(ReporterPigeon reporterPigeon, Object obj, BasicMessageChannel.Reply reply) {
            ArrayList<Object> arrayList = new ArrayList<>();
            ArrayList arrayList2 = (ArrayList) obj;
            try {
                reporterPigeon.reportEventWithJson((String) arrayList2.get(0), (String) arrayList2.get(1), (String) arrayList2.get(2));
                arrayList.add(0, null);
            } catch (Throwable th) {
                arrayList = Pigeon.wrapError(th);
            }
            reply.reply(arrayList);
        }

        static /* synthetic */ void lambda$setup$9(ReporterPigeon reporterPigeon, Object obj, BasicMessageChannel.Reply reply) {
            ArrayList<Object> arrayList = new ArrayList<>();
            ArrayList arrayList2 = (ArrayList) obj;
            try {
                reporterPigeon.reportRevenue((String) arrayList2.get(0), (RevenuePigeon) arrayList2.get(1));
                arrayList.add(0, null);
            } catch (Throwable th) {
                arrayList = Pigeon.wrapError(th);
            }
            reply.reply(arrayList);
        }

        static /* synthetic */ void lambda$setup$10(ReporterPigeon reporterPigeon, Object obj, BasicMessageChannel.Reply reply) {
            ArrayList<Object> arrayList = new ArrayList<>();
            ArrayList arrayList2 = (ArrayList) obj;
            try {
                reporterPigeon.reportUnhandledException((String) arrayList2.get(0), (ErrorDetailsPigeon) arrayList2.get(1));
                arrayList.add(0, null);
            } catch (Throwable th) {
                arrayList = Pigeon.wrapError(th);
            }
            reply.reply(arrayList);
        }

        static /* synthetic */ void lambda$setup$11(ReporterPigeon reporterPigeon, Object obj, BasicMessageChannel.Reply reply) {
            ArrayList<Object> arrayList = new ArrayList<>();
            ArrayList arrayList2 = (ArrayList) obj;
            try {
                reporterPigeon.reportUserProfile((String) arrayList2.get(0), (UserProfilePigeon) arrayList2.get(1));
                arrayList.add(0, null);
            } catch (Throwable th) {
                arrayList = Pigeon.wrapError(th);
            }
            reply.reply(arrayList);
        }

        static /* synthetic */ void lambda$setup$12(ReporterPigeon reporterPigeon, Object obj, BasicMessageChannel.Reply reply) {
            ArrayList<Object> arrayList = new ArrayList<>();
            try {
                reporterPigeon.resumeSession((String) ((ArrayList) obj).get(0));
                arrayList.add(0, null);
            } catch (Throwable th) {
                arrayList = Pigeon.wrapError(th);
            }
            reply.reply(arrayList);
        }

        static /* synthetic */ void lambda$setup$13(ReporterPigeon reporterPigeon, Object obj, BasicMessageChannel.Reply reply) {
            ArrayList<Object> arrayList = new ArrayList<>();
            try {
                reporterPigeon.sendEventsBuffer((String) ((ArrayList) obj).get(0));
                arrayList.add(0, null);
            } catch (Throwable th) {
                arrayList = Pigeon.wrapError(th);
            }
            reply.reply(arrayList);
        }

        static /* synthetic */ void lambda$setup$14(ReporterPigeon reporterPigeon, Object obj, BasicMessageChannel.Reply reply) {
            ArrayList<Object> arrayList = new ArrayList<>();
            ArrayList arrayList2 = (ArrayList) obj;
            try {
                reporterPigeon.setDataSendingEnabled((String) arrayList2.get(0), (Boolean) arrayList2.get(1));
                arrayList.add(0, null);
            } catch (Throwable th) {
                arrayList = Pigeon.wrapError(th);
            }
            reply.reply(arrayList);
        }

        static /* synthetic */ void lambda$setup$15(ReporterPigeon reporterPigeon, Object obj, BasicMessageChannel.Reply reply) {
            ArrayList<Object> arrayList = new ArrayList<>();
            ArrayList arrayList2 = (ArrayList) obj;
            try {
                reporterPigeon.setUserProfileID((String) arrayList2.get(0), (String) arrayList2.get(1));
                arrayList.add(0, null);
            } catch (Throwable th) {
                arrayList = Pigeon.wrapError(th);
            }
            reply.reply(arrayList);
        }
    }

    public interface InitialDeepLinkHolderPigeon {
        String getInitialDeeplink();

        static MessageCodec<Object> getCodec() {
            return new StandardMessageCodec();
        }

        static void setup(BinaryMessenger binaryMessenger, final InitialDeepLinkHolderPigeon initialDeepLinkHolderPigeon) {
            BasicMessageChannel basicMessageChannel = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.appmetrica_plugin.InitialDeepLinkHolderPigeon.getInitialDeeplink", getCodec());
            if (initialDeepLinkHolderPigeon != null) {
                basicMessageChannel.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.appmetrica.analytics.flutter.pigeon.Pigeon$InitialDeepLinkHolderPigeon$$ExternalSyntheticLambda0
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        Pigeon.InitialDeepLinkHolderPigeon.lambda$setup$0(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel.setMessageHandler(null);
            }
        }

        static /* synthetic */ void lambda$setup$0(InitialDeepLinkHolderPigeon initialDeepLinkHolderPigeon, Object obj, BasicMessageChannel.Reply reply) {
            ArrayList<Object> arrayList = new ArrayList<>();
            try {
                arrayList.add(0, initialDeepLinkHolderPigeon.getInitialDeeplink());
            } catch (Throwable th) {
                arrayList = Pigeon.wrapError(th);
            }
            reply.reply(arrayList);
        }
    }
}
