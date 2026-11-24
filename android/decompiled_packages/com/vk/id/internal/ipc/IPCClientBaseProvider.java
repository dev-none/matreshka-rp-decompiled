package com.vk.id.internal.ipc;

import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.ServiceConnection;
import android.content.pm.Signature;
import android.os.IBinder;
import androidx.core.app.NotificationCompat;
import androidx.exifinterface.media.ExifInterface;
import com.vk.id.logger.InternalVKIDLog;
import com.vk.id.logger.InternalVKIDLogger;
import io.sentry.SentryEvent;
import java.util.Comparator;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.CountDownLatch;
import java.util.concurrent.TimeUnit;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.collections.ArraysKt;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Ref;

/* JADX INFO: compiled from: IPCClientBaseProvider.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000l\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0010\u000e\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0010\t\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u000b\n\u0002\b\u0002\b!\u0018\u0000*\u0004\b\u0000\u0010\u00012\u00020\u0002B\t\b\u0007¢\u0006\u0004\b\u0003\u0010\u0004J\"\u0010\u0012\u001a\u00020\u00132\u000e\u0010\u0014\u001a\n\u0012\u0004\u0012\u00028\u0000\u0018\u00010\u00152\b\u0010\u0016\u001a\u0004\u0018\u00010\u0017H&J'\u0010$\u001a\u0004\u0018\u00018\u00002\u0006\u0010%\u001a\u00020\u001e2\u0006\u0010&\u001a\u00020'2\u0006\u0010(\u001a\u00020'H\u0004¢\u0006\u0002\u0010)J\n\u0010*\u001a\u0004\u0018\u00010+H\u0004J\u0018\u0010,\u001a\n\u0012\u0004\u0012\u00028\u0000\u0018\u00010\u00152\u0006\u0010%\u001a\u00020\u001eH\u0004J,\u0010-\u001a\u00020.\"\u0004\b\u0001\u0010\u00012\f\u0010\u0014\u001a\b\u0012\u0004\u0012\u0002H\u00010\u00152\u0006\u0010&\u001a\u00020'2\u0006\u0010(\u001a\u00020'H\u0002J\u0018\u0010/\u001a\u00020'2\u0006\u0010&\u001a\u00020'2\u0006\u0010(\u001a\u00020'H\u0002R\u0014\u0010\u0005\u001a\u00020\u0006X\u0082\u0004¢\u0006\b\n\u0000\u0012\u0004\b\u0007\u0010\u0004R\u001a\u0010\b\u001a\u00020\tX\u0096.¢\u0006\u000e\n\u0000\u001a\u0004\b\n\u0010\u000b\"\u0004\b\f\u0010\rR\u0012\u0010\u000e\u001a\u00020\u000fX¦\u0004¢\u0006\u0006\u001a\u0004\b\u0010\u0010\u0011R$\u0010\u0018\u001a\u0012\u0012\u0004\u0012\u00020\u000f0\u0019j\b\u0012\u0004\u0012\u00020\u000f`\u001aX\u0084\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u001b\u0010\u001cR\u001a\u0010\u001d\u001a\b\u0012\u0004\u0012\u00020\u001e0\u0019X\u0084\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u001f\u0010\u001cR&\u0010 \u001a\u0014\u0012\u0004\u0012\u00020\u001e\u0012\n\u0012\b\u0012\u0004\u0012\u00028\u00000\u00150!X\u0084\u0004¢\u0006\b\n\u0000\u001a\u0004\b\"\u0010#¨\u00060"}, d2 = {"Lcom/vk/id/internal/ipc/IPCClientBaseProvider;", ExifInterface.GPS_DIRECTION_TRUE, "", "<init>", "()V", SentryEvent.JsonKeys.LOGGER, "Lcom/vk/id/logger/InternalVKIDLogger;", "getLogger$annotations", "appContext", "Landroid/content/Context;", "getAppContext", "()Landroid/content/Context;", "setAppContext", "(Landroid/content/Context;)V", "intentName", "", "getIntentName", "()Ljava/lang/String;", "setProvider", "", "connectionInfo", "Lcom/vk/id/internal/ipc/ConnectionInfo;", NotificationCompat.CATEGORY_SERVICE, "Landroid/os/IBinder;", "providerComparator", "Ljava/util/Comparator;", "Lkotlin/Comparator;", "getProviderComparator", "()Ljava/util/Comparator;", "componentComparator", "Landroid/content/ComponentName;", "getComponentComparator", "connectionsMap", "Ljava/util/concurrent/ConcurrentHashMap;", "getConnectionsMap", "()Ljava/util/concurrent/ConcurrentHashMap;", "getProvider", "component", "startTime", "", "timeout", "(Landroid/content/ComponentName;JJ)Ljava/lang/Object;", "getSignature", "Landroid/content/pm/Signature;", "prepareSpecificApp", "waitForConnection", "", "calculateActualTimeout", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public abstract class IPCClientBaseProvider<T> {
    public static final int $stable = 8;
    public Context appContext;
    private final Comparator<ComponentName> componentComparator;
    private final ConcurrentHashMap<ComponentName, ConnectionInfo<T>> connectionsMap;
    private final InternalVKIDLogger logger;
    private final Comparator<String> providerComparator;

    private static /* synthetic */ void getLogger$annotations() {
    }

    public abstract String getIntentName();

    public abstract void setProvider(ConnectionInfo<T> connectionInfo, IBinder service);

    public IPCClientBaseProvider() {
        InternalVKIDLog internalVKIDLog = InternalVKIDLog.INSTANCE;
        Intrinsics.checkNotNullExpressionValue("IPCClientBaseProvider", "getSimpleName(...)");
        this.logger = internalVKIDLog.createLoggerForTag("IPCClientBaseProvider");
        this.providerComparator = new Comparator() { // from class: com.vk.id.internal.ipc.IPCClientBaseProvider$$ExternalSyntheticLambda0
            @Override // java.util.Comparator
            public final int compare(Object obj, Object obj2) {
                return IPCClientBaseProvider.providerComparator$lambda$0((String) obj, (String) obj2);
            }
        };
        this.componentComparator = new Comparator() { // from class: com.vk.id.internal.ipc.IPCClientBaseProvider$$ExternalSyntheticLambda1
            @Override // java.util.Comparator
            public final int compare(Object obj, Object obj2) {
                return IPCClientBaseProvider.componentComparator$lambda$1(this.f$0, (ComponentName) obj, (ComponentName) obj2);
            }
        };
        this.connectionsMap = new ConcurrentHashMap<>();
    }

    public Context getAppContext() {
        Context context = this.appContext;
        if (context != null) {
            return context;
        }
        Intrinsics.throwUninitializedPropertyAccessException("appContext");
        return null;
    }

    public void setAppContext(Context context) {
        Intrinsics.checkNotNullParameter(context, "<set-?>");
        this.appContext = context;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final int providerComparator$lambda$0(String str, String str2) {
        Intrinsics.checkNotNull(str2);
        return str.compareTo(str2);
    }

    protected final Comparator<String> getProviderComparator() {
        return this.providerComparator;
    }

    protected final Comparator<ComponentName> getComponentComparator() {
        return this.componentComparator;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final int componentComparator$lambda$1(IPCClientBaseProvider iPCClientBaseProvider, ComponentName componentName, ComponentName componentName2) {
        return iPCClientBaseProvider.providerComparator.compare(componentName != null ? componentName.getPackageName() : null, componentName2 != null ? componentName2.getPackageName() : null);
    }

    protected final ConcurrentHashMap<ComponentName, ConnectionInfo<T>> getConnectionsMap() {
        return this.connectionsMap;
    }

    protected final T getProvider(ComponentName component, long startTime, long timeout) {
        Intrinsics.checkNotNullParameter(component, "component");
        int i = 3;
        T t = null;
        while (t == null) {
            i--;
            if (i <= 0) {
                break;
            }
            ConnectionInfo<T> connectionInfoPrepareSpecificApp = prepareSpecificApp(component);
            if (connectionInfoPrepareSpecificApp != null) {
                T provider = connectionInfoPrepareSpecificApp.getProvider();
                if (provider != null) {
                    return provider;
                }
                long j = startTime;
                long j2 = timeout;
                if (!waitForConnection(connectionInfoPrepareSpecificApp, j, j2)) {
                    return null;
                }
                T provider2 = connectionInfoPrepareSpecificApp.getProvider();
                if (provider2 != null) {
                    t = provider2;
                } else {
                    ConnectionInfo<T> connectionInfo = this.connectionsMap.get(component);
                    if (connectionInfo != null) {
                        provider2 = connectionInfo.getProvider();
                        t = provider2;
                    } else {
                        t = null;
                    }
                }
                startTime = j;
                timeout = j2;
            }
        }
        return t;
    }

    protected final Signature getSignature() {
        Signature[] signatures = getAppContext().getPackageManager().getPackageInfo(getAppContext().getPackageName(), 64).signatures;
        Intrinsics.checkNotNullExpressionValue(signatures, "signatures");
        return (Signature) ArraysKt.firstOrNull(signatures);
    }

    protected final ConnectionInfo<T> prepareSpecificApp(final ComponentName component) {
        boolean zBindService;
        Intrinsics.checkNotNullParameter(component, "component");
        final Ref.ObjectRef objectRef = new Ref.ObjectRef();
        objectRef.element = this.connectionsMap.get(component);
        ConnectionInfo connectionInfo = (ConnectionInfo) objectRef.element;
        if ((connectionInfo != null ? connectionInfo.getProvider() : null) != null) {
            return (ConnectionInfo) objectRef.element;
        }
        CountDownLatch countDownLatch = new CountDownLatch(1);
        if (objectRef.element == null) {
            objectRef.element = (T) new ConnectionInfo(countDownLatch, new ServiceConnection(this) { // from class: com.vk.id.internal.ipc.IPCClientBaseProvider$prepareSpecificApp$connection$1
                final /* synthetic */ IPCClientBaseProvider<T> this$0;

                {
                    this.this$0 = this;
                }

                /* JADX WARN: Type inference incomplete: some casts might be missing */
                @Override // android.content.ServiceConnection
                public void onServiceConnected(ComponentName name, IBinder service) {
                    ConnectionInfo connectionInfo2 = (ConnectionInfo) this.this$0.getConnectionsMap().get(component);
                    if (connectionInfo2 != null) {
                        IPCClientBaseProvider<T> iPCClientBaseProvider = this.this$0;
                        Ref.ObjectRef<ConnectionInfo<T>> objectRef2 = objectRef;
                        synchronized (connectionInfo2.getLock()) {
                            iPCClientBaseProvider.setProvider((ConnectionInfo<T>) ((ConnectionInfo) objectRef2.element), service);
                            connectionInfo2.setConnectionState(1);
                            connectionInfo2.getLatch().countDown();
                            Unit unit = Unit.INSTANCE;
                        }
                    }
                }

                @Override // android.content.ServiceConnection
                public void onServiceDisconnected(ComponentName name) {
                    ConnectionInfo connectionInfo2 = (ConnectionInfo) this.this$0.getConnectionsMap().get(component);
                    if (connectionInfo2 != null) {
                        synchronized (connectionInfo2.getLock()) {
                            connectionInfo2.setProvider(null);
                            connectionInfo2.setConnectionState(2);
                            Unit unit = Unit.INSTANCE;
                        }
                    }
                }
            });
            this.connectionsMap.put(component, objectRef.element);
        } else {
            synchronized (((ConnectionInfo) objectRef.element).getLock()) {
                if (((ConnectionInfo) objectRef.element).getConnectionState() != 0 && ((ConnectionInfo) objectRef.element).getConnectionState() != 1 && ((ConnectionInfo) objectRef.element).getConnectionState() == 2) {
                    ((ConnectionInfo) objectRef.element).getLatch().countDown();
                    ((ConnectionInfo) objectRef.element).setLatch(countDownLatch);
                }
                Unit unit = Unit.INSTANCE;
            }
        }
        synchronized (((ConnectionInfo) objectRef.element).getLock()) {
            zBindService = false;
            ((ConnectionInfo) objectRef.element).setConnectionState(0);
            Unit unit2 = Unit.INSTANCE;
        }
        Intent component2 = new Intent(getIntentName()).setComponent(component);
        Intrinsics.checkNotNullExpressionValue(component2, "setComponent(...)");
        try {
            zBindService = getAppContext().bindService(component2, ((ConnectionInfo) objectRef.element).getConnection(), 1);
        } catch (Exception e) {
            this.logger.error("Error while binding to " + component.getPackageName(), e);
        }
        if (zBindService) {
            return (ConnectionInfo) objectRef.element;
        }
        return null;
    }

    private final <T> boolean waitForConnection(ConnectionInfo<T> connectionInfo, long startTime, long timeout) {
        try {
            return connectionInfo.getLatch().await(calculateActualTimeout(startTime, timeout), TimeUnit.MILLISECONDS);
        } catch (InterruptedException e) {
            this.logger.error("Interrupted wait for connection", e);
            return false;
        }
    }

    private final long calculateActualTimeout(long startTime, long timeout) {
        return Math.max(timeout - (System.currentTimeMillis() - startTime), 0L);
    }
}
