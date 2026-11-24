package io.sentry;

import com.google.common.base.Ascii;
import io.sentry.profilemeasurements.ProfileMeasurement;
import io.sentry.protocol.DebugMeta;
import io.sentry.protocol.SdkVersion;
import io.sentry.protocol.SentryId;
import io.sentry.protocol.profiling.SentryProfile;
import io.sentry.vendor.gson.stream.JsonToken;
import java.io.File;
import java.io.IOException;
import java.math.BigDecimal;
import java.math.RoundingMode;
import java.util.HashMap;
import java.util.Map;
import java.util.Objects;
import java.util.concurrent.ConcurrentHashMap;

/* JADX INFO: loaded from: classes7.dex */
public final class ProfileChunk implements JsonUnknown, JsonSerializable {
    public static final String PLATFORM_ANDROID = "android";
    public static final String PLATFORM_JAVA = "java";
    private SentryId chunkId;
    private SdkVersion clientSdk;
    private DebugMeta debugMeta;
    private String environment;
    private final Map<String, ProfileMeasurement> measurements;
    private String platform;
    private SentryId profilerId;
    private String release;
    private String sampledProfile;
    private SentryProfile sentryProfile;
    private double timestamp;
    private final File traceFile;
    private Map<String, Object> unknown;
    private String version;

    public static final class JsonKeys {
        public static final String CHUNK_ID = "chunk_id";
        public static final String CLIENT_SDK = "client_sdk";
        public static final String DEBUG_META = "debug_meta";
        public static final String ENVIRONMENT = "environment";
        public static final String MEASUREMENTS = "measurements";
        public static final String PLATFORM = "platform";
        public static final String PROFILER_ID = "profiler_id";
        public static final String RELEASE = "release";
        public static final String SAMPLED_PROFILE = "sampled_profile";
        public static final String SENTRY_PROFILE = "profile";
        public static final String TIMESTAMP = "timestamp";
        public static final String VERSION = "version";
    }

    public ProfileChunk() {
        this(SentryId.EMPTY_ID, SentryId.EMPTY_ID, null, new HashMap(), Double.valueOf(0.0d), "android", SentryOptions.empty());
    }

    public ProfileChunk(SentryId sentryId, SentryId sentryId2, File file, Map<String, ProfileMeasurement> map, Double d, String str, SentryOptions sentryOptions) {
        this.sampledProfile = null;
        this.profilerId = sentryId;
        this.chunkId = sentryId2;
        this.traceFile = file;
        this.measurements = map;
        this.debugMeta = null;
        this.clientSdk = sentryOptions.getSdkVersion();
        this.release = sentryOptions.getRelease() != null ? sentryOptions.getRelease() : "";
        this.environment = sentryOptions.getEnvironment();
        this.platform = str;
        this.version = "2";
        this.timestamp = d.doubleValue();
    }

    public Map<String, ProfileMeasurement> getMeasurements() {
        return this.measurements;
    }

    public DebugMeta getDebugMeta() {
        return this.debugMeta;
    }

    public void setDebugMeta(DebugMeta debugMeta) {
        this.debugMeta = debugMeta;
    }

    public SdkVersion getClientSdk() {
        return this.clientSdk;
    }

    public SentryId getChunkId() {
        return this.chunkId;
    }

    public String getEnvironment() {
        return this.environment;
    }

    public String getPlatform() {
        return this.platform;
    }

    public SentryId getProfilerId() {
        return this.profilerId;
    }

    public String getRelease() {
        return this.release;
    }

    public String getSampledProfile() {
        return this.sampledProfile;
    }

    public void setSampledProfile(String str) {
        this.sampledProfile = str;
    }

    public File getTraceFile() {
        return this.traceFile;
    }

    public double getTimestamp() {
        return this.timestamp;
    }

    public String getVersion() {
        return this.version;
    }

    public SentryProfile getSentryProfile() {
        return this.sentryProfile;
    }

    public void setSentryProfile(SentryProfile sentryProfile) {
        this.sentryProfile = sentryProfile;
    }

    public boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof ProfileChunk)) {
            return false;
        }
        ProfileChunk profileChunk = (ProfileChunk) obj;
        return Objects.equals(this.debugMeta, profileChunk.debugMeta) && Objects.equals(this.profilerId, profileChunk.profilerId) && Objects.equals(this.chunkId, profileChunk.chunkId) && Objects.equals(this.clientSdk, profileChunk.clientSdk) && Objects.equals(this.measurements, profileChunk.measurements) && Objects.equals(this.platform, profileChunk.platform) && Objects.equals(this.release, profileChunk.release) && Objects.equals(this.environment, profileChunk.environment) && Objects.equals(this.version, profileChunk.version) && Objects.equals(this.sampledProfile, profileChunk.sampledProfile) && Objects.equals(this.unknown, profileChunk.unknown) && Objects.equals(this.sentryProfile, profileChunk.sentryProfile);
    }

    public int hashCode() {
        return Objects.hash(this.debugMeta, this.profilerId, this.chunkId, this.clientSdk, this.measurements, this.platform, this.release, this.environment, this.version, this.sampledProfile, this.sentryProfile, this.unknown);
    }

    public static final class Builder {
        private final SentryId chunkId;
        private final Map<String, ProfileMeasurement> measurements;
        private final String platform;
        private final SentryId profilerId;
        private final double timestamp;
        private final File traceFile;

        public Builder(SentryId sentryId, SentryId sentryId2, Map<String, ProfileMeasurement> map, File file, SentryDate sentryDate, String str) {
            this.profilerId = sentryId;
            this.chunkId = sentryId2;
            this.measurements = new ConcurrentHashMap(map);
            this.traceFile = file;
            this.timestamp = DateUtils.nanosToSeconds(sentryDate.nanoTimestamp());
            this.platform = str;
        }

        public ProfileChunk build(SentryOptions sentryOptions) {
            return new ProfileChunk(this.profilerId, this.chunkId, this.traceFile, this.measurements, Double.valueOf(this.timestamp), this.platform, sentryOptions);
        }
    }

    @Override // io.sentry.JsonSerializable
    public void serialize(ObjectWriter objectWriter, ILogger iLogger) throws IOException {
        objectWriter.beginObject();
        if (this.debugMeta != null) {
            objectWriter.name("debug_meta").value(iLogger, this.debugMeta);
        }
        objectWriter.name("profiler_id").value(iLogger, this.profilerId);
        objectWriter.name(JsonKeys.CHUNK_ID).value(iLogger, this.chunkId);
        if (this.clientSdk != null) {
            objectWriter.name(JsonKeys.CLIENT_SDK).value(iLogger, this.clientSdk);
        }
        if (!this.measurements.isEmpty()) {
            String indent = objectWriter.getIndent();
            objectWriter.setIndent("");
            objectWriter.name("measurements").value(iLogger, this.measurements);
            objectWriter.setIndent(indent);
        }
        objectWriter.name("platform").value(iLogger, this.platform);
        objectWriter.name("release").value(iLogger, this.release);
        if (this.environment != null) {
            objectWriter.name("environment").value(iLogger, this.environment);
        }
        objectWriter.name("version").value(iLogger, this.version);
        if (this.sampledProfile != null) {
            objectWriter.name("sampled_profile").value(iLogger, this.sampledProfile);
        }
        objectWriter.name("timestamp").value(iLogger, doubleToBigDecimal(Double.valueOf(this.timestamp)));
        if (this.sentryProfile != null) {
            objectWriter.name("profile").value(iLogger, this.sentryProfile);
        }
        Map<String, Object> map = this.unknown;
        if (map != null) {
            for (String str : map.keySet()) {
                objectWriter.name(str).value(iLogger, this.unknown.get(str));
            }
        }
        objectWriter.endObject();
    }

    private BigDecimal doubleToBigDecimal(Double d) {
        return BigDecimal.valueOf(d.doubleValue()).setScale(6, RoundingMode.DOWN);
    }

    @Override // io.sentry.JsonUnknown
    public Map<String, Object> getUnknown() {
        return this.unknown;
    }

    @Override // io.sentry.JsonUnknown
    public void setUnknown(Map<String, Object> map) {
        this.unknown = map;
    }

    public static final class Deserializer implements JsonDeserializer<ProfileChunk> {
        /* JADX WARN: Can't rename method to resolve collision */
        /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
        @Override // io.sentry.JsonDeserializer
        public ProfileChunk deserialize(ObjectReader objectReader, ILogger iLogger) throws Exception {
            objectReader.beginObject();
            ProfileChunk profileChunk = new ProfileChunk();
            ConcurrentHashMap concurrentHashMap = null;
            while (objectReader.peek() == JsonToken.NAME) {
                String strNextName = objectReader.nextName();
                strNextName.hashCode();
                byte b = -1;
                switch (strNextName.hashCode()) {
                    case -1840434063:
                        if (strNextName.equals("debug_meta")) {
                            b = 0;
                        }
                        break;
                    case -362243017:
                        if (strNextName.equals("measurements")) {
                            b = 1;
                        }
                        break;
                    case -309425751:
                        if (strNextName.equals("profile")) {
                            b = 2;
                        }
                        break;
                    case -85904877:
                        if (strNextName.equals("environment")) {
                            b = 3;
                        }
                        break;
                    case 55126294:
                        if (strNextName.equals("timestamp")) {
                            b = 4;
                        }
                        break;
                    case 178573617:
                        if (strNextName.equals("profiler_id")) {
                            b = 5;
                        }
                        break;
                    case 351608024:
                        if (strNextName.equals("version")) {
                            b = 6;
                        }
                        break;
                    case 1090594823:
                        if (strNextName.equals("release")) {
                            b = 7;
                        }
                        break;
                    case 1102774726:
                        if (strNextName.equals(JsonKeys.CLIENT_SDK)) {
                            b = 8;
                        }
                        break;
                    case 1874684019:
                        if (strNextName.equals("platform")) {
                            b = 9;
                        }
                        break;
                    case 1953158756:
                        if (strNextName.equals("sampled_profile")) {
                            b = 10;
                        }
                        break;
                    case 2005113901:
                        if (strNextName.equals(JsonKeys.CHUNK_ID)) {
                            b = Ascii.VT;
                        }
                        break;
                }
                switch (b) {
                    case 0:
                        DebugMeta debugMeta = (DebugMeta) objectReader.nextOrNull(iLogger, new DebugMeta.Deserializer());
                        if (debugMeta != null) {
                            profileChunk.debugMeta = debugMeta;
                        }
                        break;
                    case 1:
                        Map mapNextMapOrNull = objectReader.nextMapOrNull(iLogger, new ProfileMeasurement.Deserializer());
                        if (mapNextMapOrNull != null) {
                            profileChunk.measurements.putAll(mapNextMapOrNull);
                        }
                        break;
                    case 2:
                        SentryProfile sentryProfile = (SentryProfile) objectReader.nextOrNull(iLogger, new SentryProfile.Deserializer());
                        if (sentryProfile != null) {
                            profileChunk.sentryProfile = sentryProfile;
                        }
                        break;
                    case 3:
                        String strNextStringOrNull = objectReader.nextStringOrNull();
                        if (strNextStringOrNull != null) {
                            profileChunk.environment = strNextStringOrNull;
                        }
                        break;
                    case 4:
                        Double dNextDoubleOrNull = objectReader.nextDoubleOrNull();
                        if (dNextDoubleOrNull != null) {
                            profileChunk.timestamp = dNextDoubleOrNull.doubleValue();
                        }
                        break;
                    case 5:
                        SentryId sentryId = (SentryId) objectReader.nextOrNull(iLogger, new SentryId.Deserializer());
                        if (sentryId != null) {
                            profileChunk.profilerId = sentryId;
                        }
                        break;
                    case 6:
                        String strNextStringOrNull2 = objectReader.nextStringOrNull();
                        if (strNextStringOrNull2 != null) {
                            profileChunk.version = strNextStringOrNull2;
                        }
                        break;
                    case 7:
                        String strNextStringOrNull3 = objectReader.nextStringOrNull();
                        if (strNextStringOrNull3 != null) {
                            profileChunk.release = strNextStringOrNull3;
                        }
                        break;
                    case 8:
                        SdkVersion sdkVersion = (SdkVersion) objectReader.nextOrNull(iLogger, new SdkVersion.Deserializer());
                        if (sdkVersion != null) {
                            profileChunk.clientSdk = sdkVersion;
                        }
                        break;
                    case 9:
                        String strNextStringOrNull4 = objectReader.nextStringOrNull();
                        if (strNextStringOrNull4 != null) {
                            profileChunk.platform = strNextStringOrNull4;
                        }
                        break;
                    case 10:
                        String strNextStringOrNull5 = objectReader.nextStringOrNull();
                        if (strNextStringOrNull5 != null) {
                            profileChunk.sampledProfile = strNextStringOrNull5;
                        }
                        break;
                    case 11:
                        SentryId sentryId2 = (SentryId) objectReader.nextOrNull(iLogger, new SentryId.Deserializer());
                        if (sentryId2 != null) {
                            profileChunk.chunkId = sentryId2;
                        }
                        break;
                    default:
                        if (concurrentHashMap == null) {
                            concurrentHashMap = new ConcurrentHashMap();
                        }
                        objectReader.nextUnknown(iLogger, concurrentHashMap, strNextName);
                        break;
                }
            }
            profileChunk.setUnknown(concurrentHashMap);
            objectReader.endObject();
            return profileChunk;
        }
    }
}
