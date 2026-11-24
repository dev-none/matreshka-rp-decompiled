package io.sentry.protocol;

import com.google.common.base.Ascii;
import io.sentry.ILogger;
import io.sentry.ISentryLifecycleToken;
import io.sentry.JsonDeserializer;
import io.sentry.JsonSerializable;
import io.sentry.ObjectReader;
import io.sentry.ObjectWriter;
import io.sentry.ProfileContext;
import io.sentry.SpanContext;
import io.sentry.util.AutoClosableReentrantLock;
import io.sentry.util.HintUtils;
import io.sentry.util.Objects;
import io.sentry.vendor.gson.stream.JsonToken;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Enumeration;
import java.util.HashMap;
import java.util.Map;
import java.util.Set;
import java.util.concurrent.ConcurrentHashMap;

/* JADX INFO: loaded from: classes7.dex */
public class Contexts implements JsonSerializable {
    public static final String REPLAY_ID = "replay_id";
    private static final long serialVersionUID = 252445813254943011L;
    private final ConcurrentHashMap<String, Object> internalStorage = new ConcurrentHashMap<>();
    protected final AutoClosableReentrantLock responseLock = new AutoClosableReentrantLock();

    public Contexts() {
    }

    public Contexts(Contexts contexts) {
        for (Map.Entry<String, Object> entry : contexts.entrySet()) {
            if (entry != null) {
                Object value = entry.getValue();
                if (App.TYPE.equals(entry.getKey()) && (value instanceof App)) {
                    setApp(new App((App) value));
                } else if (Browser.TYPE.equals(entry.getKey()) && (value instanceof Browser)) {
                    setBrowser(new Browser((Browser) value));
                } else if (Device.TYPE.equals(entry.getKey()) && (value instanceof Device)) {
                    setDevice(new Device((Device) value));
                } else if (OperatingSystem.TYPE.equals(entry.getKey()) && (value instanceof OperatingSystem)) {
                    setOperatingSystem(new OperatingSystem((OperatingSystem) value));
                } else if (SentryRuntime.TYPE.equals(entry.getKey()) && (value instanceof SentryRuntime)) {
                    setRuntime(new SentryRuntime((SentryRuntime) value));
                } else if (Feedback.TYPE.equals(entry.getKey()) && (value instanceof Feedback)) {
                    setFeedback(new Feedback((Feedback) value));
                } else if (Gpu.TYPE.equals(entry.getKey()) && (value instanceof Gpu)) {
                    setGpu(new Gpu((Gpu) value));
                } else if ("trace".equals(entry.getKey()) && (value instanceof SpanContext)) {
                    setTrace(new SpanContext((SpanContext) value));
                } else if ("profile".equals(entry.getKey()) && (value instanceof ProfileContext)) {
                    setProfile(new ProfileContext((ProfileContext) value));
                } else if (Response.TYPE.equals(entry.getKey()) && (value instanceof Response)) {
                    setResponse(new Response((Response) value));
                } else if (Spring.TYPE.equals(entry.getKey()) && (value instanceof Spring)) {
                    setSpring(new Spring((Spring) value));
                } else {
                    put(entry.getKey(), value);
                }
            }
        }
    }

    private <T> T toContextType(String str, Class<T> cls) {
        Object obj = get(str);
        if (cls.isInstance(obj)) {
            return cls.cast(obj);
        }
        return null;
    }

    public SpanContext getTrace() {
        return (SpanContext) toContextType("trace", SpanContext.class);
    }

    public void setTrace(SpanContext spanContext) {
        Objects.requireNonNull(spanContext, "traceContext is required");
        put("trace", spanContext);
    }

    public ProfileContext getProfile() {
        return (ProfileContext) toContextType("profile", ProfileContext.class);
    }

    public void setProfile(ProfileContext profileContext) {
        Objects.requireNonNull(profileContext, "profileContext is required");
        put("profile", profileContext);
    }

    public App getApp() {
        return (App) toContextType(App.TYPE, App.class);
    }

    public void setApp(App app) {
        put(App.TYPE, app);
    }

    public Browser getBrowser() {
        return (Browser) toContextType(Browser.TYPE, Browser.class);
    }

    public void setBrowser(Browser browser) {
        put(Browser.TYPE, browser);
    }

    public Device getDevice() {
        return (Device) toContextType(Device.TYPE, Device.class);
    }

    public void setDevice(Device device) {
        put(Device.TYPE, device);
    }

    public OperatingSystem getOperatingSystem() {
        return (OperatingSystem) toContextType(OperatingSystem.TYPE, OperatingSystem.class);
    }

    public void setOperatingSystem(OperatingSystem operatingSystem) {
        put(OperatingSystem.TYPE, operatingSystem);
    }

    public SentryRuntime getRuntime() {
        return (SentryRuntime) toContextType(SentryRuntime.TYPE, SentryRuntime.class);
    }

    public void setRuntime(SentryRuntime sentryRuntime) {
        put(SentryRuntime.TYPE, sentryRuntime);
    }

    public Feedback getFeedback() {
        return (Feedback) toContextType(Feedback.TYPE, Feedback.class);
    }

    public void setFeedback(Feedback feedback) {
        put(Feedback.TYPE, feedback);
    }

    public Gpu getGpu() {
        return (Gpu) toContextType(Gpu.TYPE, Gpu.class);
    }

    public void setGpu(Gpu gpu) {
        put(Gpu.TYPE, gpu);
    }

    public Response getResponse() {
        return (Response) toContextType(Response.TYPE, Response.class);
    }

    public void withResponse(HintUtils.SentryConsumer<Response> sentryConsumer) {
        ISentryLifecycleToken iSentryLifecycleTokenAcquire = this.responseLock.acquire();
        try {
            Response response = getResponse();
            if (response != null) {
                sentryConsumer.accept(response);
            } else {
                Response response2 = new Response();
                setResponse(response2);
                sentryConsumer.accept(response2);
            }
            if (iSentryLifecycleTokenAcquire != null) {
                iSentryLifecycleTokenAcquire.close();
            }
        } catch (Throwable th) {
            if (iSentryLifecycleTokenAcquire != null) {
                try {
                    iSentryLifecycleTokenAcquire.close();
                } catch (Throwable th2) {
                    th.addSuppressed(th2);
                }
            }
            throw th;
        }
    }

    public void setResponse(Response response) {
        ISentryLifecycleToken iSentryLifecycleTokenAcquire = this.responseLock.acquire();
        try {
            put(Response.TYPE, response);
            if (iSentryLifecycleTokenAcquire != null) {
                iSentryLifecycleTokenAcquire.close();
            }
        } catch (Throwable th) {
            if (iSentryLifecycleTokenAcquire != null) {
                try {
                    iSentryLifecycleTokenAcquire.close();
                } catch (Throwable th2) {
                    th.addSuppressed(th2);
                }
            }
            throw th;
        }
    }

    public Spring getSpring() {
        return (Spring) toContextType(Spring.TYPE, Spring.class);
    }

    public void setSpring(Spring spring) {
        put(Spring.TYPE, spring);
    }

    public FeatureFlags getFeatureFlags() {
        return (FeatureFlags) toContextType(FeatureFlags.TYPE, FeatureFlags.class);
    }

    public void setFeatureFlags(FeatureFlags featureFlags) {
        put(FeatureFlags.TYPE, featureFlags);
    }

    public int size() {
        return this.internalStorage.size();
    }

    public int getSize() {
        return size();
    }

    public boolean isEmpty() {
        return this.internalStorage.isEmpty();
    }

    public boolean containsKey(Object obj) {
        if (obj == null) {
            return false;
        }
        return this.internalStorage.containsKey(obj);
    }

    public Object get(Object obj) {
        if (obj == null) {
            return null;
        }
        return this.internalStorage.get(obj);
    }

    public Object put(String str, Object obj) {
        if (str == null) {
            return null;
        }
        if (obj == null) {
            return this.internalStorage.remove(str);
        }
        return this.internalStorage.put(str, obj);
    }

    public Object set(String str, Object obj) {
        return put(str, obj);
    }

    public Object remove(Object obj) {
        if (obj == null) {
            return null;
        }
        return this.internalStorage.remove(obj);
    }

    public Enumeration<String> keys() {
        return this.internalStorage.keys();
    }

    public Set<Map.Entry<String, Object>> entrySet() {
        return this.internalStorage.entrySet();
    }

    public void putAll(Map<? extends String, ? extends Object> map) {
        if (map == null) {
            return;
        }
        HashMap map2 = new HashMap();
        for (Map.Entry<? extends String, ? extends Object> entry : map.entrySet()) {
            if (entry.getKey() != null && entry.getValue() != null) {
                map2.put(entry.getKey(), entry.getValue());
            }
        }
        this.internalStorage.putAll(map2);
    }

    public void putAll(Contexts contexts) {
        if (contexts == null) {
            return;
        }
        this.internalStorage.putAll(contexts.internalStorage);
    }

    public boolean equals(Object obj) {
        if (obj == null || !(obj instanceof Contexts)) {
            return false;
        }
        return this.internalStorage.equals(((Contexts) obj).internalStorage);
    }

    public int hashCode() {
        return this.internalStorage.hashCode();
    }

    @Override // io.sentry.JsonSerializable
    public void serialize(ObjectWriter objectWriter, ILogger iLogger) throws IOException {
        objectWriter.beginObject();
        ArrayList<String> list = Collections.list(keys());
        Collections.sort(list);
        for (String str : list) {
            Object obj = get(str);
            if (obj != null) {
                objectWriter.name(str).value(iLogger, obj);
            }
        }
        objectWriter.endObject();
    }

    public static final class Deserializer implements JsonDeserializer<Contexts> {
        /* JADX WARN: Can't rename method to resolve collision */
        /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
        @Override // io.sentry.JsonDeserializer
        public Contexts deserialize(ObjectReader objectReader, ILogger iLogger) throws Exception {
            Contexts contexts = new Contexts();
            objectReader.beginObject();
            while (objectReader.peek() == JsonToken.NAME) {
                String strNextName = objectReader.nextName();
                strNextName.hashCode();
                byte b = -1;
                switch (strNextName.hashCode()) {
                    case -1335157162:
                        if (strNextName.equals(Device.TYPE)) {
                            b = 0;
                        }
                        break;
                    case -895679987:
                        if (strNextName.equals(Spring.TYPE)) {
                            b = 1;
                        }
                        break;
                    case -340323263:
                        if (strNextName.equals(Response.TYPE)) {
                            b = 2;
                        }
                        break;
                    case -309425751:
                        if (strNextName.equals("profile")) {
                            b = 3;
                        }
                        break;
                    case -191501435:
                        if (strNextName.equals(Feedback.TYPE)) {
                            b = 4;
                        }
                        break;
                    case 3556:
                        if (strNextName.equals(OperatingSystem.TYPE)) {
                            b = 5;
                        }
                        break;
                    case 96801:
                        if (strNextName.equals(App.TYPE)) {
                            b = 6;
                        }
                        break;
                    case 102572:
                        if (strNextName.equals(Gpu.TYPE)) {
                            b = 7;
                        }
                        break;
                    case 97513095:
                        if (strNextName.equals(FeatureFlags.TYPE)) {
                            b = 8;
                        }
                        break;
                    case 110620997:
                        if (strNextName.equals("trace")) {
                            b = 9;
                        }
                        break;
                    case 150940456:
                        if (strNextName.equals(Browser.TYPE)) {
                            b = 10;
                        }
                        break;
                    case 1550962648:
                        if (strNextName.equals(SentryRuntime.TYPE)) {
                            b = Ascii.VT;
                        }
                        break;
                }
                switch (b) {
                    case 0:
                        contexts.setDevice(new Device.Deserializer().deserialize(objectReader, iLogger));
                        break;
                    case 1:
                        contexts.setSpring(new Spring.Deserializer().deserialize(objectReader, iLogger));
                        break;
                    case 2:
                        contexts.setResponse(new Response.Deserializer().deserialize(objectReader, iLogger));
                        break;
                    case 3:
                        contexts.setProfile(new ProfileContext.Deserializer().deserialize(objectReader, iLogger));
                        break;
                    case 4:
                        contexts.setFeedback(new Feedback.Deserializer().deserialize(objectReader, iLogger));
                        break;
                    case 5:
                        contexts.setOperatingSystem(new OperatingSystem.Deserializer().deserialize(objectReader, iLogger));
                        break;
                    case 6:
                        contexts.setApp(new App.Deserializer().deserialize(objectReader, iLogger));
                        break;
                    case 7:
                        contexts.setGpu(new Gpu.Deserializer().deserialize(objectReader, iLogger));
                        break;
                    case 8:
                        contexts.setFeatureFlags(new FeatureFlags.Deserializer().deserialize(objectReader, iLogger));
                        break;
                    case 9:
                        contexts.setTrace(new SpanContext.Deserializer().deserialize(objectReader, iLogger));
                        break;
                    case 10:
                        contexts.setBrowser(new Browser.Deserializer().deserialize(objectReader, iLogger));
                        break;
                    case 11:
                        contexts.setRuntime(new SentryRuntime.Deserializer().deserialize(objectReader, iLogger));
                        break;
                    default:
                        Object objNextObjectOrNull = objectReader.nextObjectOrNull();
                        if (objNextObjectOrNull != null) {
                            contexts.put(strNextName, objNextObjectOrNull);
                        }
                        break;
                }
            }
            objectReader.endObject();
            return contexts;
        }
    }
}
