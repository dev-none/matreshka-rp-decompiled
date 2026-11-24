package com.matreshkarp.core;

import android.bluetooth.BluetoothAdapter;
import android.content.Context;
import android.content.Intent;
import android.content.SharedPreferences;
import android.graphics.Rect;
import android.media.AudioDeviceCallback;
import android.media.AudioDeviceInfo;
import android.media.AudioManager;
import android.net.ConnectivityManager;
import android.net.LinkProperties;
import android.net.Uri;
import android.os.Build;
import android.os.Bundle;
import android.os.Environment;
import android.os.Handler;
import android.os.Looper;
import android.os.StatFs;
import android.os.SystemClock;
import android.provider.Settings;
import android.util.DisplayMetrics;
import android.util.Log;
import android.view.Display;
import android.view.DisplayCutout;
import android.view.MotionEvent;
import android.view.Surface;
import android.view.SurfaceHolder;
import android.view.SurfaceView;
import android.view.View;
import android.view.ViewGroup;
import android.view.WindowInsets;
import android.view.WindowManager;
import android.widget.FrameLayout;
import androidx.core.content.FileProvider;
import androidx.core.view.ViewCompat;
import com.adjust.sdk.Adjust;
import com.adjust.sdk.AdjustDeeplink;
import com.adjust.sdk.oaid.AdjustOaid;
import com.adjust.sdk.oaid.OnOaidReadListener;
import com.google.android.gms.common.GoogleApiAvailability;
import com.matreshkarp.core.keyboard.BindInfo;
import com.matreshkarp.core.keyboard.CmdDatabase;
import com.p003native.Main;
import io.flutter.embedding.android.FlutterActivity;
import io.flutter.embedding.android.FlutterSurfaceView;
import io.flutter.embedding.android.FlutterView;
import io.flutter.embedding.engine.FlutterEngine;
import io.flutter.embedding.engine.FlutterShellArgs;
import io.flutter.embedding.engine.renderer.FlutterRenderer;
import io.flutter.embedding.engine.systemchannels.AccessibilityChannel;
import io.flutter.plugin.common.BinaryMessenger;
import io.flutter.plugin.common.MethodCall;
import io.flutter.plugin.common.MethodChannel;
import io.sentry.Sentry;
import io.sentry.SentryEvent;
import io.sentry.SentryLevel;
import io.sentry.protocol.Message;
import io.sentry.protocol.User;
import java.io.File;
import java.net.InetAddress;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.Set;
import javax.microedition.khronos.egl.EGL;
import javax.microedition.khronos.egl.EGL10;
import javax.microedition.khronos.egl.EGLConfig;
import javax.microedition.khronos.egl.EGLContext;
import javax.microedition.khronos.egl.EGLDisplay;
import javax.microedition.khronos.egl.EGLSurface;
import javax.microedition.khronos.opengles.GL;
import javax.microedition.khronos.opengles.GL10;
import javax.microedition.khronos.opengles.GL11;
import kotlin.Metadata;
import kotlin.Pair;
import kotlin.Result;
import kotlin.TuplesKt;
import kotlin.Unit;
import kotlin.collections.ArraysKt;
import kotlin.collections.CollectionsKt;
import kotlin.collections.MapsKt;
import kotlin.collections.SetsKt;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.SafeContinuation;
import kotlin.coroutines.intrinsics.IntrinsicsKt;
import kotlin.coroutines.jvm.internal.DebugProbesKt;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.StringsKt;
import kotlinx.coroutines.BuildersKt__Builders_commonKt;
import kotlinx.coroutines.CoroutineScope;
import kotlinx.coroutines.CoroutineScopeKt;
import kotlinx.coroutines.DebugKt;
import kotlinx.coroutines.Dispatchers;
import kotlinx.coroutines.Job;
import kotlinx.coroutines.SupervisorKt;
import org.apache.commons.io.IOUtils;

/* JADX INFO: compiled from: MainActivity.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\u0082\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\b\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0004\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\u000b\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0006\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\n\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\u0006\n\u0002\u0018\u0002\n\u0002\b\t\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\t\n\u0000\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\u0018\u0002\n\u0002\b\u0017\n\u0002\u0010\u0015\n\u0002\b\b\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b(\n\u0002\u0010$\n\u0002\b\u0011\b\u0016\u0018\u0000 î\u00012\u00020\u0001:\u0002î\u0001B\u0007¢\u0006\u0004\b\u0002\u0010\u0003J\b\u0010>\u001a\u0004\u0018\u00010\nJ\b\u0010?\u001a\u00020@H\u0002J\u0010\u0010A\u001a\u00020@2\u0006\u0010B\u001a\u000205H\u0002J$\u0010C\u001a\u000e\u0012\u0004\u0012\u00020\r\u0012\u0004\u0012\u00020\r0D2\u0006\u0010E\u001a\u00020\r2\u0006\u0010F\u001a\u00020\rH\u0002J \u0010G\u001a\u00020@2\u0006\u0010H\u001a\u00020\u001b2\u0006\u0010I\u001a\u00020\r2\u0006\u0010J\u001a\u00020\rH\u0002J\"\u0010K\u001a\u00020@2\u0006\u0010L\u001a\u00020\r2\u0006\u0010M\u001a\u00020\r2\b\u0010N\u001a\u0004\u0018\u00010OH\u0014J\u0010\u0010P\u001a\u00020@2\u0006\u0010Q\u001a\u00020OH\u0014J\b\u0010R\u001a\u00020@H\u0014J\u0010\u0010S\u001a\u00020@2\u0006\u0010T\u001a\u00020UH\u0016J\b\u0010V\u001a\u00020WH\u0016J\b\u0010X\u001a\u00020@H\u0016J\b\u0010Y\u001a\u00020\nH\u0002J\u0012\u0010Z\u001a\u00020@2\b\u0010Q\u001a\u0004\u0018\u00010OH\u0002J\u0012\u0010[\u001a\u00020@2\b\u0010\\\u001a\u0004\u0018\u00010]H\u0015J\u0010\u0010^\u001a\u00020@2\u0006\u0010_\u001a\u00020\u0012H\u0002J\u0012\u0010`\u001a\u00020@2\b\b\u0002\u0010a\u001a\u00020\u0012H\u0003J\u0018\u0010b\u001a\u00020@2\u0006\u0010_\u001a\u00020\u00122\u0006\u0010c\u001a\u00020dH\u0002J\u0012\u0010e\u001a\u00020@2\b\b\u0002\u0010a\u001a\u00020\u0012H\u0002J\b\u0010f\u001a\u00020@H\u0002J\b\u0010g\u001a\u00020@H\u0002J\b\u0010i\u001a\u00020\u0012H\u0002J\b\u0010j\u001a\u00020@H\u0002J\b\u0010k\u001a\u00020@H\u0002J\u0018\u0010l\u001a\u0004\u0018\u00010\n2\u0006\u0010m\u001a\u00020nH\u0082@¢\u0006\u0002\u0010oJ\b\u0010p\u001a\u00020\u0012H\u0002J\b\u0010q\u001a\u00020rH\u0002J(\u0010s\u001a\"\u0012\u0004\u0012\u00020\n\u0012\u0006\u0012\u0004\u0018\u00010u0tj\u0010\u0012\u0004\u0012\u00020\n\u0012\u0006\u0012\u0004\u0018\u00010u`vH\u0002J\u0010\u0010w\u001a\u00020@2\u0006\u0010x\u001a\u00020\nH\u0002J\u0006\u0010y\u001a\u00020@J\t\u0010Ò\u0001\u001a\u00020\u0012H\u0004J\t\u0010Ó\u0001\u001a\u00020@H\u0004J\u0007\u0010Ô\u0001\u001a\u00020@J\u0007\u0010Õ\u0001\u001a\u00020\u0012J\u001c\u0010Ö\u0001\u001a\u00020@2\b\u0010×\u0001\u001a\u00030µ\u00012\u0007\u0010Ø\u0001\u001a\u00020\rH\u0002J\t\u0010Ù\u0001\u001a\u00020\u0012H\u0002J\t\u0010Ú\u0001\u001a\u00020@H\u0002J\u0014\u0010Û\u0001\u001a\u00020\u00122\t\u0010Ü\u0001\u001a\u0004\u0018\u00010\u0015H\u0002J\u0016\u0010Ý\u0001\u001a\u000f\u0012\u0004\u0012\u00020\n\u0012\u0004\u0012\u00020u0Þ\u0001H\u0002J\u0007\u0010ß\u0001\u001a\u00020\u0012J\u0007\u0010à\u0001\u001a\u00020\u0012J\u0007\u0010á\u0001\u001a\u00020\rJ\u0014\u0010â\u0001\u001a\u00020\u00122\t\u0010×\u0001\u001a\u0004\u0018\u00010\u0015H\u0004J\u0007\u0010ã\u0001\u001a\u00020@J\u0019\u0010ä\u0001\u001a\u00020@2\u0007\u0010å\u0001\u001a\u00020\n2\u0007\u0010æ\u0001\u001a\u00020\nJ\u0010\u0010ç\u0001\u001a\u00020@2\u0007\u0010è\u0001\u001a\u00020\nJ\u0019\u0010é\u0001\u001a\u00020@2\u0007\u0010ê\u0001\u001a\u00020\n2\u0007\u0010ë\u0001\u001a\u00020\nJ\u0019\u0010ì\u0001\u001a\u00020@2\u0007\u0010ê\u0001\u001a\u00020\n2\u0007\u0010ë\u0001\u001a\u00020\nJ\u0019\u0010í\u0001\u001a\u00020@2\u0007\u0010ê\u0001\u001a\u00020\n2\u0007\u0010ë\u0001\u001a\u00020\nR\u001c\u0010\u0004\u001a\u0004\u0018\u00010\u0000X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u0005\u0010\u0006\"\u0004\b\u0007\u0010\bR\u0010\u0010\t\u001a\u0004\u0018\u00010\nX\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010\u000b\u001a\u0004\u0018\u00010\nX\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\f\u001a\u00020\rX\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u000e\u001a\u00020\rX\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u000f\u001a\u00020\rX\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u0010\u001a\u00020\rX\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u0011\u001a\u00020\u0012X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u0013\u001a\u00020\u0012X\u0082\u000e¢\u0006\u0002\n\u0000R\u001c\u0010\u0014\u001a\u0004\u0018\u00010\u0015X\u0084\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u0016\u0010\u0017\"\u0004\b\u0018\u0010\u0019R\u0010\u0010\u001a\u001a\u0004\u0018\u00010\u001bX\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u001c\u001a\u00020\rX\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u001d\u001a\u00020\rX\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u001e\u001a\u00020\rX\u0082D¢\u0006\u0002\n\u0000R\u000e\u0010\u001f\u001a\u00020\rX\u0082D¢\u0006\u0002\n\u0000R\u0014\u0010 \u001a\u00020\rX\u0086D¢\u0006\b\n\u0000\u001a\u0004\b!\u0010\"R\u0014\u0010#\u001a\u00020\rX\u0086D¢\u0006\b\n\u0000\u001a\u0004\b$\u0010\"R\u000e\u0010%\u001a\u00020\rX\u0082D¢\u0006\u0002\n\u0000R\u0010\u0010&\u001a\u0004\u0018\u00010'X\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010(\u001a\u0004\u0018\u00010)X\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010*\u001a\u0004\u0018\u00010)X\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010+\u001a\u0004\u0018\u00010)X\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010,\u001a\u0004\u0018\u00010-X\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010.\u001a\u0004\u0018\u00010/X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u00100\u001a\u000201X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u00102\u001a\u00020\u0012X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u00103\u001a\u00020\u0012X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u00104\u001a\u000205X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u00106\u001a\u00020\u0012X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u00107\u001a\u00020\u0012X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u00108\u001a\u00020\u0012X\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u00109\u001a\u0004\u0018\u00010:X\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010;\u001a\u0004\u0018\u00010)X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010<\u001a\u00020=X\u0082\u0004¢\u0006\u0002\n\u0000R\u0010\u0010h\u001a\u0004\u0018\u00010:X\u0082\u000e¢\u0006\u0002\n\u0000R\u001a\u0010z\u001a\u00020\rX\u0084\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b{\u0010\"\"\u0004\b|\u0010}R\u001b\u0010~\u001a\u00020\rX\u0084\u000e¢\u0006\u000f\n\u0000\u001a\u0004\b\u007f\u0010\"\"\u0005\b\u0080\u0001\u0010}R\u001d\u0010\u0081\u0001\u001a\u00020\rX\u0084\u000e¢\u0006\u0010\n\u0000\u001a\u0005\b\u0082\u0001\u0010\"\"\u0005\b\u0083\u0001\u0010}R\u001d\u0010\u0084\u0001\u001a\u00020\rX\u0084\u000e¢\u0006\u0010\n\u0000\u001a\u0005\b\u0085\u0001\u0010\"\"\u0005\b\u0086\u0001\u0010}R\u001d\u0010\u0087\u0001\u001a\u00020\rX\u0084\u000e¢\u0006\u0010\n\u0000\u001a\u0005\b\u0088\u0001\u0010\"\"\u0005\b\u0089\u0001\u0010}R\u001d\u0010\u008a\u0001\u001a\u00020\rX\u0084\u000e¢\u0006\u0010\n\u0000\u001a\u0005\b\u008b\u0001\u0010\"\"\u0005\b\u008c\u0001\u0010}R\"\u0010\u008d\u0001\u001a\u0005\u0018\u00010\u008e\u0001X\u0084\u000e¢\u0006\u0012\n\u0000\u001a\u0006\b\u008f\u0001\u0010\u0090\u0001\"\u0006\b\u0091\u0001\u0010\u0092\u0001R\"\u0010\u0093\u0001\u001a\u0005\u0018\u00010\u008e\u0001X\u0084\u000e¢\u0006\u0012\n\u0000\u001a\u0006\b\u0094\u0001\u0010\u0090\u0001\"\u0006\b\u0095\u0001\u0010\u0092\u0001R\"\u0010\u0096\u0001\u001a\u0005\u0018\u00010\u0097\u0001X\u0086\u000e¢\u0006\u0012\n\u0000\u001a\u0006\b\u0098\u0001\u0010\u0099\u0001\"\u0006\b\u009a\u0001\u0010\u009b\u0001R\"\u0010\u009c\u0001\u001a\u0005\u0018\u00010\u009d\u0001X\u0086\u000e¢\u0006\u0012\n\u0000\u001a\u0006\b\u009e\u0001\u0010\u009f\u0001\"\u0006\b \u0001\u0010¡\u0001R\"\u0010¢\u0001\u001a\u0005\u0018\u00010£\u0001X\u0084\u000e¢\u0006\u0012\n\u0000\u001a\u0006\b¤\u0001\u0010¥\u0001\"\u0006\b¦\u0001\u0010§\u0001R\"\u0010¨\u0001\u001a\u0005\u0018\u00010©\u0001X\u0084\u000e¢\u0006\u0012\n\u0000\u001a\u0006\bª\u0001\u0010«\u0001\"\u0006\b¬\u0001\u0010\u00ad\u0001R\"\u0010®\u0001\u001a\u0005\u0018\u00010¯\u0001X\u0084\u000e¢\u0006\u0012\n\u0000\u001a\u0006\b°\u0001\u0010±\u0001\"\u0006\b²\u0001\u0010³\u0001R\"\u0010´\u0001\u001a\u0005\u0018\u00010µ\u0001X\u0084\u000e¢\u0006\u0012\n\u0000\u001a\u0006\b¶\u0001\u0010·\u0001\"\u0006\b¸\u0001\u0010¹\u0001R\u000f\u0010º\u0001\u001a\u00020\rX\u0082\u000e¢\u0006\u0002\n\u0000R\u000f\u0010»\u0001\u001a\u00020uX\u0082\u0004¢\u0006\u0002\n\u0000R\u000f\u0010¼\u0001\u001a\u00020\rX\u0082\u000e¢\u0006\u0002\n\u0000R\u000f\u0010½\u0001\u001a\u00020\u0012X\u0082\u000e¢\u0006\u0002\n\u0000R\u000f\u0010¾\u0001\u001a\u00020\u0012X\u0082\u000e¢\u0006\u0002\n\u0000R\u000f\u0010¿\u0001\u001a\u00020\rX\u0082\u000e¢\u0006\u0002\n\u0000R\u000f\u0010À\u0001\u001a\u00020rX\u0082\u000e¢\u0006\u0002\n\u0000R\u000f\u0010Á\u0001\u001a\u00020\nX\u0082\u000e¢\u0006\u0002\n\u0000R\u0011\u0010Â\u0001\u001a\u0004\u0018\u00010\nX\u0082\u000e¢\u0006\u0002\n\u0000R\u000f\u0010Ã\u0001\u001a\u00020\u0012X\u0082\u000e¢\u0006\u0002\n\u0000R!\u0010Ä\u0001\u001a\u0004\u0018\u00010\nX\u0086\u000e¢\u0006\u0012\n\u0000\u001a\u0006\bÅ\u0001\u0010Æ\u0001\"\u0006\bÇ\u0001\u0010È\u0001R!\u0010É\u0001\u001a\u0004\u0018\u00010\nX\u0086\u000e¢\u0006\u0012\n\u0000\u001a\u0006\bÊ\u0001\u0010Æ\u0001\"\u0006\bË\u0001\u0010È\u0001R!\u0010Ì\u0001\u001a\u0004\u0018\u00010\nX\u0086\u000e¢\u0006\u0012\n\u0000\u001a\u0006\bÍ\u0001\u0010Æ\u0001\"\u0006\bÎ\u0001\u0010È\u0001R\u000f\u0010Ï\u0001\u001a\u00020\rX\u0082D¢\u0006\u0002\n\u0000R\u000f\u0010Ð\u0001\u001a\u00020\rX\u0082D¢\u0006\u0002\n\u0000R\u000f\u0010Ñ\u0001\u001a\u00020\rX\u0082D¢\u0006\u0002\n\u0000¨\u0006ï\u0001"}, d2 = {"Lcom/matreshkarp/core/MainActivity;", "Lio/flutter/embedding/android/FlutterActivity;", "<init>", "()V", "Self", "getSelf", "()Lcom/matreshkarp/core/MainActivity;", "setSelf", "(Lcom/matreshkarp/core/MainActivity;)V", "baseDirectory", "", "baseDirectoryRoot", "safeLeft", "", "safeTop", "safeRight", "safeBottom", "ranInit", "", "viewIsActive", "cachedSurfaceHolder", "Landroid/view/SurfaceHolder;", "getCachedSurfaceHolder", "()Landroid/view/SurfaceHolder;", "setCachedSurfaceHolder", "(Landroid/view/SurfaceHolder;)V", "cachedSurfaceView", "Landroid/view/SurfaceView;", "surfaceWidth", "surfaceHeight", "fixedWidth", "fixedHeight", "APP_EVENT_PAUSE", "getAPP_EVENT_PAUSE", "()I", "APP_EVENT_RESUME", "getAPP_EVENT_RESUME", "EGL_CONTEXT_LOST", "flutterView", "Lio/flutter/embedding/android/FlutterView;", "channel", "Lio/flutter/plugin/common/MethodChannel;", "launcherChannel", "aspectRatioChannel", "huaweiCommentChannel", "Lcom/matreshkarp/core/HuaweiCommentChannel;", "keyboardHeightChannel", "Lcom/matreshkarp/core/KeyboardHeightChannel;", "coroutineScope", "Lkotlinx/coroutines/CoroutineScope;", "noFlutter", "flutterUsesSkia", "customAspectRatio", "", "voiceScoStarted", "voiceCommModeSet", "voicePreferHeadset", "voiceDeviceCallback", "Landroid/media/AudioDeviceCallback;", "voiceAudioChannel", "voiceMainHandler", "Landroid/os/Handler;", "GetGameBaseDirectory", "loadAspectRatio", "", "saveAspectRatio", "aspectRatio", "applyAspectRatio", "Lkotlin/Pair;", "width", "height", "applySurfaceViewAspectRatio", "surfaceView", "screenWidth", "screenHeight", "onActivityResult", "requestCode", "resultCode", "data", "Landroid/content/Intent;", "onNewIntent", "intent", "onDestroy", "configureFlutterEngine", "flutterEngine", "Lio/flutter/embedding/engine/FlutterEngine;", "getFlutterShellArgs", "Lio/flutter/embedding/engine/FlutterShellArgs;", "loadLogCatLogger", "getGpuInfoWithEgl", "processAdjustDeeplinkIntent", "onCreate", "savedInstanceState", "Landroid/os/Bundle;", "setVoicePreferHeadset", DebugKt.DEBUG_PROPERTY_VALUE_ON, "applyVoiceRoute", "forceBuiltin", "setCommMode", "am", "Landroid/media/AudioManager;", "pushVoiceInputDevice", "registerVoiceDeviceCallback", "unregisterVoiceDeviceCallback", "audioOutputCallback", "isHeadphonesOut", "pushAudioOutput", "registerAudioOutputCallback", "getOaidSuspend", "context", "Landroid/content/Context;", "(Landroid/content/Context;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "checkGooglePlayServices", "getAvailableSpace", "", "getDnsInfo", "Ljava/util/HashMap;", "", "Lkotlin/collections/HashMap;", "installApk", "apkPath", "startGame", "redSize", "getRedSize", "setRedSize", "(I)V", "greenSize", "getGreenSize", "setGreenSize", "blueSize", "getBlueSize", "setBlueSize", "alphaSize", "getAlphaSize", "setAlphaSize", "stencilSize", "getStencilSize", "setStencilSize", "depthSize", "getDepthSize", "setDepthSize", "configAttrs", "", "getConfigAttrs", "()[I", "setConfigAttrs", "([I)V", "contextAttrs", "getContextAttrs", "setContextAttrs", "egl", "Ljavax/microedition/khronos/egl/EGL10;", "getEgl", "()Ljavax/microedition/khronos/egl/EGL10;", "setEgl", "(Ljavax/microedition/khronos/egl/EGL10;)V", "gl", "Ljavax/microedition/khronos/opengles/GL11;", "getGl", "()Ljavax/microedition/khronos/opengles/GL11;", "setGl", "(Ljavax/microedition/khronos/opengles/GL11;)V", "eglDisplay", "Ljavax/microedition/khronos/egl/EGLDisplay;", "getEglDisplay", "()Ljavax/microedition/khronos/egl/EGLDisplay;", "setEglDisplay", "(Ljavax/microedition/khronos/egl/EGLDisplay;)V", "eglContext", "Ljavax/microedition/khronos/egl/EGLContext;", "getEglContext", "()Ljavax/microedition/khronos/egl/EGLContext;", "setEglContext", "(Ljavax/microedition/khronos/egl/EGLContext;)V", "eglConfig", "Ljavax/microedition/khronos/egl/EGLConfig;", "getEglConfig", "()Ljavax/microedition/khronos/egl/EGLConfig;", "setEglConfig", "(Ljavax/microedition/khronos/egl/EGLConfig;)V", "eglSurface", "Ljavax/microedition/khronos/egl/EGLSurface;", "getEglSurface", "()Ljavax/microedition/khronos/egl/EGLSurface;", "setEglSurface", "(Ljavax/microedition/khronos/egl/EGLSurface;)V", "SwapBufferSkip", "eglLock", "lastEglError", "eglSurfaceBroken", "eglContextLost", "eglSurfaceRecreated", "lastEglRecreateMs", "eglRecreateReason", "glVendor", "HasGLExtensions", "glExtensions", "getGlExtensions", "()Ljava/lang/String;", "setGlExtensions", "(Ljava/lang/String;)V", "glRenderer", "getGlRenderer", "setGlRenderer", "glVersion", "getGlVersion", "setGlVersion", "EGL_RENDERABLE_TYPE", "EGL_OPENGL_ES2_BIT", "EGL_CONTEXT_CLIENT_VERSION", "initEGL", "destroyEGLSurface", "GetGLExtensions", "makeCurrent", "onEGLSurfaceError", "surface", "error", "recreateLostEGLSurface", "reportEGLSurfaceRecreated", "createWindowSurface", "holder", "eglState", "", "unMakeCurrent", "swapBuffers", "getFrameLimit", "createEGLSurface", "InitEGLAndGLES2", "SentrySetExtra", "key", "value", "SentrySetUsername", "name", "SentryCaptureErrorMessage", "_logger", "_message", "SentryCaptureWarnMessage", "SentryCaptureInfoMessage", "Companion", "app_matreshkaProdRelease"}, k = 1, mv = {2, 2, 0}, xi = 48)
public class MainActivity extends FlutterActivity {
    private static final String KEY_ASPECT_RATIO = "custom_aspect_ratio";
    private static final String PREFS_NAME = "aspect_ratio_prefs";
    private boolean HasGLExtensions;
    private MainActivity Self;
    private int SwapBufferSkip;
    private MethodChannel aspectRatioChannel;
    private AudioDeviceCallback audioOutputCallback;
    private String baseDirectory;
    private String baseDirectoryRoot;
    private SurfaceHolder cachedSurfaceHolder;
    private SurfaceView cachedSurfaceView;
    private MethodChannel channel;
    private int[] configAttrs;
    private int[] contextAttrs;
    private double customAspectRatio;
    private EGL10 egl;
    private EGLConfig eglConfig;
    private EGLContext eglContext;
    private volatile boolean eglContextLost;
    private EGLDisplay eglDisplay;
    private EGLSurface eglSurface;
    private volatile boolean eglSurfaceBroken;
    private volatile int eglSurfaceRecreated;
    private final int fixedHeight;
    private final int fixedWidth;
    private boolean flutterUsesSkia;
    private FlutterView flutterView;
    private GL11 gl;
    private String glExtensions;
    private String glRenderer;
    private String glVendor;
    private String glVersion;
    private HuaweiCommentChannel huaweiCommentChannel;
    private KeyboardHeightChannel keyboardHeightChannel;
    private long lastEglRecreateMs;
    private MethodChannel launcherChannel;
    private boolean noFlutter;
    private boolean ranInit;
    private int safeBottom;
    private int safeLeft;
    private int safeRight;
    private int safeTop;
    private int stencilSize;
    private int surfaceHeight;
    private int surfaceWidth;
    private volatile boolean viewIsActive;
    private MethodChannel voiceAudioChannel;
    private boolean voiceCommModeSet;
    private AudioDeviceCallback voiceDeviceCallback;
    private boolean voicePreferHeadset;
    private boolean voiceScoStarted;
    private final int APP_EVENT_PAUSE = 8;
    private final int APP_EVENT_RESUME = 9;
    private final int EGL_CONTEXT_LOST = 12302;
    private final CoroutineScope coroutineScope = CoroutineScopeKt.CoroutineScope(Dispatchers.getMain().plus(SupervisorKt.SupervisorJob$default((Job) null, 1, (Object) null)));
    private final Handler voiceMainHandler = new Handler(Looper.getMainLooper());
    private int redSize = 8;
    private int greenSize = 8;
    private int blueSize = 8;
    private int alphaSize = 8;
    private int depthSize = 16;
    private final Object eglLock = new Object();
    private volatile int lastEglError = 12288;
    private String eglRecreateReason = "";
    private final int EGL_RENDERABLE_TYPE = 12352;
    private final int EGL_OPENGL_ES2_BIT = 4;
    private final int EGL_CONTEXT_CLIENT_VERSION = 12440;

    public final MainActivity getSelf() {
        return this.Self;
    }

    public final void setSelf(MainActivity mainActivity) {
        this.Self = mainActivity;
    }

    protected final SurfaceHolder getCachedSurfaceHolder() {
        return this.cachedSurfaceHolder;
    }

    protected final void setCachedSurfaceHolder(SurfaceHolder surfaceHolder) {
        this.cachedSurfaceHolder = surfaceHolder;
    }

    public final int getAPP_EVENT_PAUSE() {
        return this.APP_EVENT_PAUSE;
    }

    public final int getAPP_EVENT_RESUME() {
        return this.APP_EVENT_RESUME;
    }

    public final String GetGameBaseDirectory() {
        if (Intrinsics.areEqual(Environment.getExternalStorageState(), "mounted")) {
            try {
                File externalFilesDir = getExternalFilesDir(null);
                Intrinsics.checkNotNull(externalFilesDir);
                String absolutePath = externalFilesDir.getAbsolutePath();
                Intrinsics.checkNotNull(absolutePath);
                String strSubstring = absolutePath.substring(0, StringsKt.indexOf$default((CharSequence) absolutePath, "/Android", 0, false, 6, (Object) null));
                Intrinsics.checkNotNullExpressionValue(strSubstring, "substring(...)");
                this.baseDirectoryRoot = strSubstring;
                return externalFilesDir.getAbsolutePath() + IOUtils.DIR_SEPARATOR_UNIX;
            } catch (Exception unused) {
                return "";
            }
        }
        return "";
    }

    private final void loadAspectRatio() {
        this.customAspectRatio = getSharedPreferences(PREFS_NAME, 0).getFloat(KEY_ASPECT_RATIO, 0.0f);
        Log.d("AspectRatio", "Loaded aspect ratio: " + this.customAspectRatio);
    }

    private final void saveAspectRatio(double aspectRatio) {
        SharedPreferences sharedPreferences = getSharedPreferences(PREFS_NAME, 0);
        Intrinsics.checkNotNull(sharedPreferences);
        SharedPreferences.Editor editorEdit = sharedPreferences.edit();
        editorEdit.putFloat(KEY_ASPECT_RATIO, (float) aspectRatio);
        editorEdit.apply();
        this.customAspectRatio = aspectRatio;
        Log.d("AspectRatio", "Saved aspect ratio: " + this.customAspectRatio);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final Pair<Integer, Integer> applyAspectRatio(int width, int height) {
        double d = this.customAspectRatio;
        if (d <= 0.0d || d == -1.0d) {
            Log.d("AspectRatio", "Using native aspect ratio: " + width + 'x' + height);
            return new Pair<>(Integer.valueOf(width), Integer.valueOf(height));
        }
        double d2 = width;
        double d3 = height;
        double d4 = d2 / d3;
        Log.d("AspectRatio", "Target ratio: " + d + ", Current ratio: " + d4);
        if (d4 > d) {
            int i = (int) (d3 * d);
            Log.d("AspectRatio", "Pillarbox mode: " + i + 'x' + height + " (черные полосы по бокам)");
            return new Pair<>(Integer.valueOf(i), Integer.valueOf(height));
        }
        int i2 = (int) (d2 / d);
        Log.d("AspectRatio", "Letterbox mode: " + width + 'x' + i2 + " (черные полосы сверху/снизу)");
        return new Pair<>(Integer.valueOf(width), Integer.valueOf(i2));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void applySurfaceViewAspectRatio(SurfaceView surfaceView, int screenWidth, int screenHeight) {
        double d = this.customAspectRatio;
        if (d <= 0.0d || d == -1.0d) {
            FrameLayout.LayoutParams layoutParams = new FrameLayout.LayoutParams(-1, -1);
            layoutParams.gravity = 17;
            surfaceView.setLayoutParams(layoutParams);
            return;
        }
        Pair<Integer, Integer> pairApplyAspectRatio = applyAspectRatio(screenWidth, screenHeight);
        int iIntValue = pairApplyAspectRatio.component1().intValue();
        int iIntValue2 = pairApplyAspectRatio.component2().intValue();
        FrameLayout.LayoutParams layoutParams2 = new FrameLayout.LayoutParams(iIntValue, iIntValue2);
        layoutParams2.gravity = 17;
        surfaceView.setLayoutParams(layoutParams2);
        Log.d("AspectRatio", "SurfaceView размещен: " + iIntValue + 'x' + iIntValue2 + " в " + screenWidth + 'x' + screenHeight);
    }

    @Override // io.flutter.embedding.android.FlutterActivity, android.app.Activity
    protected void onActivityResult(int requestCode, int resultCode, Intent data) {
        MethodChannel methodChannel;
        if (requestCode == 228 && (methodChannel = this.launcherChannel) != null) {
            Intrinsics.checkNotNull(methodChannel);
            methodChannel.invokeMethod("onApkInstalled", null);
            return;
        }
        HuaweiCommentChannel huaweiCommentChannel = this.huaweiCommentChannel;
        if (huaweiCommentChannel == null || !huaweiCommentChannel.onActivityResult(requestCode, resultCode)) {
            super.onActivityResult(requestCode, resultCode, data);
        }
    }

    @Override // io.flutter.embedding.android.FlutterActivity, android.app.Activity
    protected void onNewIntent(Intent intent) {
        Intrinsics.checkNotNullParameter(intent, "intent");
        super.onNewIntent(intent);
        Log.d("AdjustBridge", "onNewIntent called: intent = " + intent + ", data = " + intent.getData());
        setIntent(intent);
        processAdjustDeeplinkIntent(intent);
    }

    @Override // io.flutter.embedding.android.FlutterActivity, android.app.Activity
    protected void onDestroy() {
        KeyboardHeightChannel keyboardHeightChannel = this.keyboardHeightChannel;
        if (keyboardHeightChannel != null) {
            keyboardHeightChannel.dispose();
        }
        unregisterVoiceDeviceCallback();
        this.voiceMainHandler.removeCallbacksAndMessages(null);
        if (this.voiceCommModeSet) {
            try {
                Object systemService = getSystemService("audio");
                Intrinsics.checkNotNull(systemService, "null cannot be cast to non-null type android.media.AudioManager");
                ((AudioManager) systemService).setMode(0);
            } catch (Exception unused) {
            }
            this.voiceCommModeSet = false;
        }
        super.onDestroy();
        try {
            Main.INSTANCE.activityDestroyed();
        } catch (UnsatisfiedLinkError unused2) {
        }
    }

    @Override // io.flutter.embedding.android.FlutterActivity, io.flutter.embedding.android.FlutterActivityAndFragmentDelegate.Host, io.flutter.embedding.android.FlutterEngineConfigurator
    public void configureFlutterEngine(FlutterEngine flutterEngine) {
        Intrinsics.checkNotNullParameter(flutterEngine, "flutterEngine");
        super.configureFlutterEngine(flutterEngine);
    }

    @Override // io.flutter.embedding.android.FlutterActivity, io.flutter.embedding.android.FlutterActivityAndFragmentDelegate.Host
    public FlutterShellArgs getFlutterShellArgs() {
        FlutterShellArgs flutterShellArgs = super.getFlutterShellArgs();
        Intrinsics.checkNotNullExpressionValue(flutterShellArgs, "getFlutterShellArgs(...)");
        if (!getIntent().hasExtra(FlutterShellArgs.ARG_KEY_TOGGLE_IMPELLER) && FlutterRendererGate.INSTANCE.shouldUseSkia(this)) {
            flutterShellArgs.add(FlutterShellArgs.ARG_DISABLE_IMPELLER);
        }
        String[] array = flutterShellArgs.toArray();
        Intrinsics.checkNotNullExpressionValue(array, "toArray(...)");
        this.flutterUsesSkia = ArraysKt.contains(array, FlutterShellArgs.ARG_DISABLE_IMPELLER);
        return flutterShellArgs;
    }

    public void loadLogCatLogger() {
        try {
            if (!new File(getExternalFilesDir(null), "matreshka").exists()) {
                new File(getExternalFilesDir(null), "matreshka").mkdirs();
            }
            File file = new File(getExternalFilesDir(null), "matreshka/logcat.txt");
            if (file.exists()) {
                file.delete();
            }
            file.createNewFile();
            Runtime.getRuntime().exec("logcat -c");
            Runtime.getRuntime().exec("logcat -f " + file.getAbsolutePath());
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    private final String getGpuInfoWithEgl() {
        try {
            EGL egl = EGLContext.getEGL();
            Intrinsics.checkNotNull(egl, "null cannot be cast to non-null type javax.microedition.khronos.egl.EGL10");
            EGL10 egl10 = (EGL10) egl;
            EGLDisplay eGLDisplayEglGetDisplay = egl10.eglGetDisplay(EGL10.EGL_DEFAULT_DISPLAY);
            egl10.eglInitialize(eGLDisplayEglGetDisplay, new int[2]);
            EGLConfig[] eGLConfigArr = new EGLConfig[1];
            egl10.eglChooseConfig(eGLDisplayEglGetDisplay, new int[]{12324, 8, 12323, 8, 12322, 8, 12352, 4, 12344}, eGLConfigArr, 1, new int[1]);
            EGLConfig eGLConfig = eGLConfigArr[0];
            EGLContext eGLContextEglCreateContext = egl10.eglCreateContext(eGLDisplayEglGetDisplay, eGLConfig, EGL10.EGL_NO_CONTEXT, new int[]{12440, 2, 12344});
            EGLSurface eGLSurfaceEglCreatePbufferSurface = egl10.eglCreatePbufferSurface(eGLDisplayEglGetDisplay, eGLConfig, new int[]{12375, 1, 12374, 1, 12344});
            egl10.eglMakeCurrent(eGLDisplayEglGetDisplay, eGLSurfaceEglCreatePbufferSurface, eGLSurfaceEglCreatePbufferSurface, eGLContextEglCreateContext);
            GL gl = eGLContextEglCreateContext.getGL();
            Intrinsics.checkNotNull(gl, "null cannot be cast to non-null type javax.microedition.khronos.opengles.GL10");
            GL10 gl10 = (GL10) gl;
            String strGlGetString = gl10.glGetString(7936);
            String strGlGetString2 = gl10.glGetString(7937);
            egl10.eglMakeCurrent(eGLDisplayEglGetDisplay, EGL10.EGL_NO_SURFACE, EGL10.EGL_NO_SURFACE, EGL10.EGL_NO_CONTEXT);
            egl10.eglDestroySurface(eGLDisplayEglGetDisplay, eGLSurfaceEglCreatePbufferSurface);
            egl10.eglDestroyContext(eGLDisplayEglGetDisplay, eGLContextEglCreateContext);
            egl10.eglTerminate(eGLDisplayEglGetDisplay);
            StringBuilder sb = new StringBuilder();
            if (strGlGetString == null) {
                strGlGetString = "Unknown";
            }
            sb.append(strGlGetString);
            sb.append(' ');
            if (strGlGetString2 == null) {
                strGlGetString2 = "Unknown";
            }
            sb.append(strGlGetString2);
            return sb.toString();
        } catch (Exception e) {
            e.printStackTrace();
            return "Unknown GPU";
        }
    }

    private final void processAdjustDeeplinkIntent(Intent intent) {
        Log.d("AdjustBridge", "processAdjustDeeplinkIntent called, intent: " + intent);
        if (intent == null) {
            Log.d("AdjustBridge", "Intent is null");
            return;
        }
        Uri data = intent.getData();
        Log.d("AdjustBridge", "Intent data: " + data);
        if (data == null) {
            Log.d("AdjustBridge", "Intent data is null");
            return;
        }
        String string = data.toString();
        Intrinsics.checkNotNullExpressionValue(string, "toString(...)");
        Log.d("AdjustBridge", "Deeplink string: " + string);
        String str = string;
        if (str.length() == 0) {
            Log.d("AdjustBridge", "Deeplink string is empty");
            return;
        }
        if (!StringsKt.contains$default((CharSequence) str, (CharSequence) "matrp.go.link", false, 2, (Object) null)) {
            Log.d("AdjustBridge", "Deeplink is not from matrp.go.link: " + string);
            return;
        }
        try {
            Log.d("AdjustBridge", "Processing Adjust deeplink: " + string);
            Adjust.processDeeplink(new AdjustDeeplink(data), getApplicationContext());
            Log.d("AdjustBridge", "Adjust.processDeeplink called successfully");
        } catch (Throwable th) {
            Log.e("AdjustBridge", "Failed to process Adjust deeplink", th);
        }
    }

    @Override // io.flutter.embedding.android.FlutterActivity, android.app.Activity
    protected void onCreate(Bundle savedInstanceState) {
        AccessibilityChannel accessibilityChannel;
        FlutterRenderer renderer;
        super.onCreate(savedInstanceState);
        MainActivity mainActivity = this;
        MainSentryKt.MainSentryPreInit(mainActivity);
        try {
            System.loadLibrary("matreshka");
            Main.INSTANCE.preInit(this);
            MainSentryKt.MainSentryInit(mainActivity);
            Sentry.setTag("gpu.renderer", FlutterRendererGate.INSTANCE.getRenderer());
            Sentry.setTag("flutter.renderer", this.flutterUsesSkia ? "skia" : "impeller");
            this.Self = this;
            this.baseDirectory = GetGameBaseDirectory();
            loadAspectRatio();
            this.noFlutter = false;
            Main.INSTANCE.hasFlutter(true);
            AdjustOaid.readOaid(getApplicationContext());
            StringBuilder sb = new StringBuilder("onCreate: intent = ");
            sb.append(getIntent());
            sb.append(", data = ");
            Intent intent = getIntent();
            sb.append(intent != null ? intent.getData() : null);
            Log.d("AdjustBridge", sb.toString());
            processAdjustDeeplinkIntent(getIntent());
            setContentView(com.matreshkarp.game.R.layout.main_render_screen);
            if (Build.VERSION.SDK_INT >= 28) {
                View viewFindViewById = findViewById(com.matreshkarp.game.R.id.main_fl_root);
                viewFindViewById.setOnApplyWindowInsetsListener(new View.OnApplyWindowInsetsListener() { // from class: com.matreshkarp.core.MainActivity$$ExternalSyntheticLambda15
                    @Override // android.view.View.OnApplyWindowInsetsListener
                    public final WindowInsets onApplyWindowInsets(View view, WindowInsets windowInsets) {
                        return MainActivity.onCreate$lambda$2(this.f$0, view, windowInsets);
                    }
                });
                viewFindViewById.requestApplyInsets();
            }
            FlutterSurfaceView flutterSurfaceView = new FlutterSurfaceView((Context) mainActivity, true);
            flutterSurfaceView.setImportantForAccessibility(4);
            this.flutterView = new NoSemanticsFlutterView(mainActivity, flutterSurfaceView);
            FlutterView flutterView = this.flutterView;
            if (flutterView == null) {
                return;
            }
            Intrinsics.checkNotNull(flutterView);
            flutterView.setImportantForAccessibility(4);
            FrameLayout frameLayout = (FrameLayout) findViewById(com.matreshkarp.game.R.id.main_fl_root);
            FlutterView flutterView2 = this.flutterView;
            Intrinsics.checkNotNull(flutterView2);
            flutterView2.setBackgroundColor(0);
            frameLayout.addView(this.flutterView, new ViewGroup.LayoutParams(-1, -1));
            FlutterView flutterView3 = this.flutterView;
            Intrinsics.checkNotNull(flutterView3);
            flutterView3.setZ(2.0f);
            FlutterEngine flutterEngine = getFlutterEngine();
            if (flutterEngine != null) {
                FlutterView flutterView4 = this.flutterView;
                Intrinsics.checkNotNull(flutterView4);
                flutterView4.attachToFlutterEngine(flutterEngine);
                FlutterView flutterView5 = this.flutterView;
                Intrinsics.checkNotNull(flutterView5);
                FlutterEngine attachedFlutterEngine = flutterView5.getAttachedFlutterEngine();
                if (attachedFlutterEngine != null && (renderer = attachedFlutterEngine.getRenderer()) != null) {
                    renderer.setSemanticsEnabled(false);
                }
                FlutterView flutterView6 = this.flutterView;
                Intrinsics.checkNotNull(flutterView6);
                FlutterEngine attachedFlutterEngine2 = flutterView6.getAttachedFlutterEngine();
                if (attachedFlutterEngine2 != null && (accessibilityChannel = attachedFlutterEngine2.getAccessibilityChannel()) != null) {
                    accessibilityChannel.setAccessibilityMessageHandler(null);
                }
                MethodChannel methodChannel = new MethodChannel(flutterEngine.getDartExecutor().getBinaryMessenger(), "device_info");
                this.launcherChannel = methodChannel;
                Intrinsics.checkNotNull(methodChannel);
                methodChannel.setMethodCallHandler(new MethodChannel.MethodCallHandler() { // from class: com.matreshkarp.core.MainActivity$$ExternalSyntheticLambda16
                    @Override // io.flutter.plugin.common.MethodChannel.MethodCallHandler
                    public final void onMethodCall(MethodCall methodCall, MethodChannel.Result result) {
                        MainActivity.onCreate$lambda$3$0(this.f$0, methodCall, result);
                    }
                });
                MethodChannel methodChannel2 = new MethodChannel(flutterEngine.getDartExecutor().getBinaryMessenger(), "gameChannel");
                this.channel = methodChannel2;
                Intrinsics.checkNotNull(methodChannel2);
                methodChannel2.setMethodCallHandler(new MethodChannel.MethodCallHandler() { // from class: com.matreshkarp.core.MainActivity$$ExternalSyntheticLambda17
                    @Override // io.flutter.plugin.common.MethodChannel.MethodCallHandler
                    public final void onMethodCall(MethodCall methodCall, MethodChannel.Result result) {
                        MainActivity.onCreate$lambda$3$1(this.f$0, methodCall, result);
                    }
                });
                new MethodChannel(flutterEngine.getDartExecutor().getBinaryMessenger(), "old_auth").setMethodCallHandler(new MethodChannel.MethodCallHandler() { // from class: com.matreshkarp.core.MainActivity$$ExternalSyntheticLambda18
                    @Override // io.flutter.plugin.common.MethodChannel.MethodCallHandler
                    public final void onMethodCall(MethodCall methodCall, MethodChannel.Result result) {
                        MainActivity.onCreate$lambda$3$2(this.f$0, methodCall, result);
                    }
                });
                new MethodChannel(flutterEngine.getDartExecutor().getBinaryMessenger(), "old_keyboard").setMethodCallHandler(new MethodChannel.MethodCallHandler() { // from class: com.matreshkarp.core.MainActivity$$ExternalSyntheticLambda19
                    @Override // io.flutter.plugin.common.MethodChannel.MethodCallHandler
                    public final void onMethodCall(MethodCall methodCall, MethodChannel.Result result) {
                        MainActivity.onCreate$lambda$3$3(this.f$0, methodCall, result);
                    }
                });
                new MethodChannel(flutterEngine.getDartExecutor().getBinaryMessenger(), "flavorChannel").setMethodCallHandler(new MethodChannel.MethodCallHandler() { // from class: com.matreshkarp.core.MainActivity$$ExternalSyntheticLambda20
                    @Override // io.flutter.plugin.common.MethodChannel.MethodCallHandler
                    public final void onMethodCall(MethodCall methodCall, MethodChannel.Result result) {
                        MainActivity.onCreate$lambda$3$4(this.f$0, methodCall, result);
                    }
                });
                MethodChannel methodChannel3 = new MethodChannel(flutterEngine.getDartExecutor().getBinaryMessenger(), "aspectRatioChannel");
                this.aspectRatioChannel = methodChannel3;
                Intrinsics.checkNotNull(methodChannel3);
                methodChannel3.setMethodCallHandler(new MethodChannel.MethodCallHandler() { // from class: com.matreshkarp.core.MainActivity$$ExternalSyntheticLambda21
                    @Override // io.flutter.plugin.common.MethodChannel.MethodCallHandler
                    public final void onMethodCall(MethodCall methodCall, MethodChannel.Result result) {
                        MainActivity.onCreate$lambda$3$5(this.f$0, methodCall, result);
                    }
                });
                MethodChannel methodChannel4 = new MethodChannel(flutterEngine.getDartExecutor().getBinaryMessenger(), "voice/audio");
                this.voiceAudioChannel = methodChannel4;
                Intrinsics.checkNotNull(methodChannel4);
                methodChannel4.setMethodCallHandler(new MethodChannel.MethodCallHandler() { // from class: com.matreshkarp.core.MainActivity$$ExternalSyntheticLambda22
                    @Override // io.flutter.plugin.common.MethodChannel.MethodCallHandler
                    public final void onMethodCall(MethodCall methodCall, MethodChannel.Result result) {
                        MainActivity.onCreate$lambda$3$6(this.f$0, methodCall, result);
                    }
                });
                registerAudioOutputCallback();
                Context applicationContext = getApplicationContext();
                Intrinsics.checkNotNullExpressionValue(applicationContext, "getApplicationContext(...)");
                BinaryMessenger binaryMessenger = flutterEngine.getDartExecutor().getBinaryMessenger();
                Intrinsics.checkNotNullExpressionValue(binaryMessenger, "getBinaryMessenger(...)");
                new EmailCodeClipboardChannel(applicationContext, binaryMessenger);
                BinaryMessenger binaryMessenger2 = flutterEngine.getDartExecutor().getBinaryMessenger();
                Intrinsics.checkNotNullExpressionValue(binaryMessenger2, "getBinaryMessenger(...)");
                FlutterRenderer renderer2 = flutterEngine.getRenderer();
                Intrinsics.checkNotNullExpressionValue(renderer2, "getRenderer(...)");
                new LivePreviewSurfaces(binaryMessenger2, renderer2);
                MainActivity mainActivity2 = this;
                BinaryMessenger binaryMessenger3 = flutterEngine.getDartExecutor().getBinaryMessenger();
                Intrinsics.checkNotNullExpressionValue(binaryMessenger3, "getBinaryMessenger(...)");
                this.huaweiCommentChannel = new HuaweiCommentChannel(mainActivity2, binaryMessenger3);
                BinaryMessenger binaryMessenger4 = flutterEngine.getDartExecutor().getBinaryMessenger();
                Intrinsics.checkNotNullExpressionValue(binaryMessenger4, "getBinaryMessenger(...)");
                this.keyboardHeightChannel = new KeyboardHeightChannel(mainActivity2, binaryMessenger4);
            }
        } catch (UnsatisfiedLinkError e) {
            Sentry.captureException(e);
            finish();
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final WindowInsets onCreate$lambda$0(MainActivity mainActivity, View view, WindowInsets wi) {
        Intrinsics.checkNotNullParameter(view, "<unused var>");
        Intrinsics.checkNotNullParameter(wi, "wi");
        DisplayCutout displayCutout = wi.getDisplayCutout();
        if (displayCutout != null) {
            mainActivity.safeLeft = displayCutout.getSafeInsetLeft();
            mainActivity.safeTop = displayCutout.getSafeInsetTop();
            mainActivity.safeRight = displayCutout.getSafeInsetRight();
            mainActivity.safeBottom = displayCutout.getSafeInsetBottom();
        } else {
            mainActivity.safeLeft = 0;
            mainActivity.safeTop = 0;
            mainActivity.safeRight = 0;
            mainActivity.safeBottom = 0;
        }
        SurfaceView surfaceView = mainActivity.cachedSurfaceView;
        if (surfaceView != null) {
            surfaceView.requestLayout();
        }
        return wi;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final boolean onCreate$lambda$1(View view, MotionEvent motionEvent) {
        int actionMasked = motionEvent.getActionMasked();
        if (actionMasked != 0) {
            if (actionMasked != 1) {
                if (actionMasked == 2) {
                    int pointerCount = motionEvent.getPointerCount();
                    for (int i = 0; i < pointerCount; i++) {
                        Main.INSTANCE.touchEvent(3, motionEvent.getPointerId(i), (int) motionEvent.getX(i), (int) motionEvent.getY(i));
                    }
                    return true;
                }
                if (actionMasked == 3) {
                    int actionIndex = motionEvent.getActionIndex();
                    Main.INSTANCE.touchEvent(4, motionEvent.getPointerId(actionIndex), (int) motionEvent.getX(actionIndex), (int) motionEvent.getY(actionIndex));
                    return true;
                }
                if (actionMasked != 5) {
                    if (actionMasked != 6) {
                        return false;
                    }
                }
            }
            int actionIndex2 = motionEvent.getActionIndex();
            Main.INSTANCE.touchEvent(1, motionEvent.getPointerId(actionIndex2), (int) motionEvent.getX(actionIndex2), (int) motionEvent.getY(actionIndex2));
            return true;
        }
        int actionIndex3 = motionEvent.getActionIndex();
        Main.INSTANCE.touchEvent(2, motionEvent.getPointerId(actionIndex3), (int) motionEvent.getX(actionIndex3), (int) motionEvent.getY(actionIndex3));
        return true;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final WindowInsets onCreate$lambda$2(MainActivity mainActivity, View view, WindowInsets wi) {
        Intrinsics.checkNotNullParameter(view, "<unused var>");
        Intrinsics.checkNotNullParameter(wi, "wi");
        DisplayCutout displayCutout = wi.getDisplayCutout();
        if (displayCutout != null) {
            mainActivity.safeLeft = displayCutout.getSafeInsetLeft();
            mainActivity.safeTop = displayCutout.getSafeInsetTop();
            mainActivity.safeRight = displayCutout.getSafeInsetRight();
            mainActivity.safeBottom = displayCutout.getSafeInsetBottom();
        } else {
            mainActivity.safeLeft = 0;
            mainActivity.safeTop = 0;
            mainActivity.safeRight = 0;
            mainActivity.safeBottom = 0;
        }
        SurfaceView surfaceView = mainActivity.cachedSurfaceView;
        if (surfaceView != null) {
            surfaceView.requestLayout();
        }
        return wi;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void onCreate$lambda$3$0(MainActivity mainActivity, MethodCall call, MethodChannel.Result result) {
        Intrinsics.checkNotNullParameter(call, "call");
        Intrinsics.checkNotNullParameter(result, "result");
        if (Intrinsics.areEqual(call.method, "getFreeSpace")) {
            result.success(String.valueOf(mainActivity.getAvailableSpace()));
        }
        if (Intrinsics.areEqual(call.method, "getGpuName")) {
            try {
                result.success(mainActivity.getGpuInfoWithEgl());
            } catch (Exception e) {
                String message = e.getMessage();
                if (message == null) {
                    message = "Unexpected error";
                }
                result.error("UNEXPECTED", message, null);
            }
        }
        if (Intrinsics.areEqual(call.method, "installApk")) {
            String str = (String) call.argument("apkPath");
            Intrinsics.checkNotNull(str);
            mainActivity.installApk(str);
            result.success(null);
        }
        if (Intrinsics.areEqual(call.method, "getDnsInfo")) {
            result.success(mainActivity.getDnsInfo());
        }
        if (Intrinsics.areEqual(call.method, "setSkiaGpus")) {
            FlutterRendererGate flutterRendererGate = FlutterRendererGate.INSTANCE;
            MainActivity mainActivity2 = mainActivity;
            Object obj = call.arguments;
            String str2 = obj instanceof String ? (String) obj : null;
            if (str2 == null) {
                str2 = "";
            }
            flutterRendererGate.saveSkiaGpus(mainActivity2, str2);
            result.success(null);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void onCreate$lambda$3$1(MainActivity mainActivity, MethodCall call, MethodChannel.Result result) {
        AccessibilityChannel accessibilityChannel;
        FlutterRenderer renderer;
        Intrinsics.checkNotNullParameter(call, "call");
        Intrinsics.checkNotNullParameter(result, "result");
        if (call.method.equals("startGame")) {
            FlutterView flutterView = mainActivity.flutterView;
            Intrinsics.checkNotNull(flutterView);
            FlutterEngine attachedFlutterEngine = flutterView.getAttachedFlutterEngine();
            if (attachedFlutterEngine != null && (renderer = attachedFlutterEngine.getRenderer()) != null) {
                renderer.setSemanticsEnabled(false);
            }
            FlutterView flutterView2 = mainActivity.flutterView;
            Intrinsics.checkNotNull(flutterView2);
            FlutterEngine attachedFlutterEngine2 = flutterView2.getAttachedFlutterEngine();
            if (attachedFlutterEngine2 != null && (accessibilityChannel = attachedFlutterEngine2.getAccessibilityChannel()) != null) {
                accessibilityChannel.setAccessibilityMessageHandler(null);
            }
            mainActivity.startGame();
            result.success(null);
            return;
        }
        if (Intrinsics.areEqual(call.method, "eglState")) {
            result.success(mainActivity.eglState());
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void onCreate$lambda$3$2(MainActivity mainActivity, MethodCall call, MethodChannel.Result result) {
        Intrinsics.checkNotNullParameter(call, "call");
        Intrinsics.checkNotNullParameter(result, "result");
        if (Intrinsics.areEqual(call.method, "getAuth")) {
            SharedPreferences sharedPreferences = mainActivity.getSharedPreferences("com.matreshkarp.game.LAUNCHER_AUTH", 0);
            Intrinsics.checkNotNullExpressionValue(sharedPreferences, "getSharedPreferences(...)");
            int i = sharedPreferences.getInt("account_id", -1);
            String string = sharedPreferences.getString("session_hash", "null");
            String string2 = Settings.Secure.getString(mainActivity.getContentResolver(), "android_id");
            SharedPreferences.Editor editorEdit = sharedPreferences.edit();
            editorEdit.remove("account_id");
            editorEdit.apply();
            if (i == -1) {
                result.success(MapsKt.hashMapOf(TuplesKt.to("valid", false)));
            } else {
                result.success(MapsKt.hashMapOf(TuplesKt.to("valid", true), TuplesKt.to("account_id", Integer.valueOf(i)), TuplesKt.to("session_hash", string), TuplesKt.to("old_device_hash", string2)));
            }
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void onCreate$lambda$3$3(MainActivity mainActivity, MethodCall call, MethodChannel.Result result) {
        Intrinsics.checkNotNullParameter(call, "call");
        Intrinsics.checkNotNullParameter(result, "result");
        if (Intrinsics.areEqual(call.method, "getBinds")) {
            Object objArgument = call.argument("severId");
            Intrinsics.checkNotNull(objArgument);
            int iIntValue = ((Number) objArgument).intValue();
            MainActivity mainActivity2 = mainActivity;
            ArrayList<BindInfo> arrayListGetBindList = CmdDatabase.GetBindList(mainActivity2, iIntValue);
            ArrayList arrayList = new ArrayList();
            Iterator<BindInfo> it = arrayListGetBindList.iterator();
            Intrinsics.checkNotNullExpressionValue(it, "iterator(...)");
            while (it.hasNext()) {
                BindInfo next = it.next();
                HashMap map = new HashMap();
                HashMap map2 = map;
                map2.put("id", Integer.valueOf(next.id));
                map2.put("name", next.name);
                map2.put("textsJsonArray", next.textsJsonArray);
                arrayList.add(map);
            }
            CmdDatabase.ClearBinds(mainActivity2, iIntValue);
            result.success(arrayList);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void onCreate$lambda$3$4(MainActivity mainActivity, MethodCall call, MethodChannel.Result result) {
        Intrinsics.checkNotNullParameter(call, "call");
        Intrinsics.checkNotNullParameter(result, "result");
        if (Intrinsics.areEqual(call.method, "getData")) {
            BuildersKt__Builders_commonKt.launch$default(mainActivity.coroutineScope, null, null, new MainActivity$onCreate$4$5$1(mainActivity, result, null), 3, null);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void onCreate$lambda$3$5(final MainActivity mainActivity, MethodCall call, MethodChannel.Result result) {
        Intrinsics.checkNotNullParameter(call, "call");
        Intrinsics.checkNotNullParameter(result, "result");
        String str = call.method;
        if (Intrinsics.areEqual(str, "setAspectRatio")) {
            try {
                Double d = (Double) call.argument("aspectRatio");
                if (d != null) {
                    mainActivity.saveAspectRatio(d.doubleValue());
                    if (mainActivity.cachedSurfaceView != null) {
                        mainActivity.runOnUiThread(new Runnable() { // from class: com.matreshkarp.core.MainActivity$$ExternalSyntheticLambda11
                            @Override // java.lang.Runnable
                            public final void run() {
                                MainActivity.onCreate$lambda$3$5$0(this.f$0);
                            }
                        });
                    }
                    result.success(true);
                    return;
                }
                result.error("INVALID_ARGUMENT", "aspectRatio cannot be null", null);
                return;
            } catch (Exception e) {
                result.error("ERROR", e.getMessage(), null);
                return;
            }
        }
        if (Intrinsics.areEqual(str, "getAspectRatio")) {
            result.success(Double.valueOf(mainActivity.customAspectRatio));
        } else {
            result.notImplemented();
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void onCreate$lambda$3$5$0(MainActivity mainActivity) {
        DisplayMetrics displayMetrics = mainActivity.getResources().getDisplayMetrics();
        int i = displayMetrics.widthPixels;
        int i2 = displayMetrics.heightPixels;
        SurfaceView surfaceView = mainActivity.cachedSurfaceView;
        if (surfaceView != null) {
            mainActivity.applySurfaceViewAspectRatio(surfaceView, i, i2);
        }
        Pair<Integer, Integer> pairApplyAspectRatio = mainActivity.applyAspectRatio(i, i2);
        int iIntValue = pairApplyAspectRatio.component1().intValue();
        int iIntValue2 = pairApplyAspectRatio.component2().intValue();
        mainActivity.surfaceWidth = iIntValue;
        mainActivity.surfaceHeight = iIntValue2;
        Main.INSTANCE.windowSize(mainActivity.surfaceWidth, mainActivity.surfaceHeight);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void onCreate$lambda$3$6(MainActivity mainActivity, MethodCall call, MethodChannel.Result result) {
        Intrinsics.checkNotNullParameter(call, "call");
        Intrinsics.checkNotNullParameter(result, "result");
        if (Intrinsics.areEqual(call.method, "setPreferHeadset")) {
            Boolean bool = (Boolean) call.argument(DebugKt.DEBUG_PROPERTY_VALUE_ON);
            mainActivity.setVoicePreferHeadset(bool != null ? bool.booleanValue() : false);
            result.success(null);
            return;
        }
        result.notImplemented();
    }

    private final void setVoicePreferHeadset(boolean on) {
        this.voicePreferHeadset = on;
        if (on) {
            registerVoiceDeviceCallback();
        } else {
            unregisterVoiceDeviceCallback();
        }
        applyVoiceRoute$default(this, false, 1, null);
    }

    static /* synthetic */ void applyVoiceRoute$default(MainActivity mainActivity, boolean z, int i, Object obj) {
        if (obj != null) {
            throw new UnsupportedOperationException("Super calls with default arguments not supported in this target, function: applyVoiceRoute");
        }
        if ((i & 1) != 0) {
            z = false;
        }
        mainActivity.applyVoiceRoute(z);
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Multi-variable type inference failed */
    public final void applyVoiceRoute(boolean forceBuiltin) {
        Object[] objArr = this.voicePreferHeadset && !forceBuiltin;
        Object systemService = getSystemService("audio");
        Intrinsics.checkNotNull(systemService, "null cannot be cast to non-null type android.media.AudioManager");
        AudioManager audioManager = (AudioManager) systemService;
        try {
            if (Build.VERSION.SDK_INT >= 31) {
                AudioDeviceInfo audioDeviceInfo = null;
                Object obj = null;
                if (objArr != false) {
                    List availableCommunicationDevices = audioManager.getAvailableCommunicationDevices();
                    Intrinsics.checkNotNullExpressionValue(availableCommunicationDevices, "getAvailableCommunicationDevices(...)");
                    for (Object obj2 : availableCommunicationDevices) {
                        if (((AudioDeviceInfo) obj2).getType() == 7) {
                            obj = obj2;
                            break;
                        }
                    }
                    audioDeviceInfo = (AudioDeviceInfo) obj;
                }
                if (audioDeviceInfo != null) {
                    setCommMode(true, audioManager);
                    audioManager.setCommunicationDevice(audioDeviceInfo);
                } else {
                    audioManager.clearCommunicationDevice();
                    setCommMode(false, audioManager);
                }
            } else {
                BluetoothAdapter defaultAdapter = BluetoothAdapter.getDefaultAdapter();
                Object[] objArr2 = objArr == true && defaultAdapter != null && defaultAdapter.getProfileConnectionState(1) == 2;
                if (objArr2 != false && !this.voiceScoStarted) {
                    setCommMode(true, audioManager);
                    audioManager.startBluetoothSco();
                    audioManager.setBluetoothScoOn(true);
                    this.voiceScoStarted = true;
                } else if (objArr2 == false && this.voiceScoStarted) {
                    audioManager.stopBluetoothSco();
                    audioManager.setBluetoothScoOn(false);
                    this.voiceScoStarted = false;
                    setCommMode(false, audioManager);
                }
            }
        } catch (Exception e) {
            Log.e("VoiceAudio", "applyVoiceRoute failed", e);
        }
        pushVoiceInputDevice(forceBuiltin);
        if (objArr == true) {
            this.voiceMainHandler.postDelayed(new Runnable() { // from class: com.matreshkarp.core.MainActivity$$ExternalSyntheticLambda10
                @Override // java.lang.Runnable
                public final void run() {
                    MainActivity.pushVoiceInputDevice$default(this.f$0, false, 1, null);
                }
            }, 800L);
        }
    }

    private final void setCommMode(boolean on, AudioManager am) {
        if (on) {
            am.setMode(3);
            this.voiceCommModeSet = true;
        } else if (this.voiceCommModeSet) {
            am.setMode(0);
            this.voiceCommModeSet = false;
        }
    }

    /* JADX INFO: Access modifiers changed from: package-private */
    public static /* synthetic */ void pushVoiceInputDevice$default(MainActivity mainActivity, boolean z, int i, Object obj) {
        if (obj != null) {
            throw new UnsupportedOperationException("Super calls with default arguments not supported in this target, function: pushVoiceInputDevice");
        }
        if ((i & 1) != 0) {
            z = false;
        }
        mainActivity.pushVoiceInputDevice(z);
    }

    private final void pushVoiceInputDevice(boolean forceBuiltin) {
        AudioDeviceInfo audioDeviceInfo;
        Object systemService = getSystemService("audio");
        Intrinsics.checkNotNull(systemService, "null cannot be cast to non-null type android.media.AudioManager");
        AudioManager audioManager = (AudioManager) systemService;
        int id = 0;
        if (this.voicePreferHeadset && !forceBuiltin) {
            AudioDeviceInfo[] devices = audioManager.getDevices(1);
            Intrinsics.checkNotNullExpressionValue(devices, "getDevices(...)");
            AudioDeviceInfo[] audioDeviceInfoArr = devices;
            int length = audioDeviceInfoArr.length;
            int i = 0;
            while (true) {
                if (i >= length) {
                    audioDeviceInfo = null;
                    break;
                }
                audioDeviceInfo = audioDeviceInfoArr[i];
                if (audioDeviceInfo.getType() == 7) {
                    break;
                } else {
                    i++;
                }
            }
            AudioDeviceInfo audioDeviceInfo2 = audioDeviceInfo;
            if (audioDeviceInfo2 != null) {
                id = audioDeviceInfo2.getId();
            }
        }
        MethodChannel methodChannel = this.voiceAudioChannel;
        if (methodChannel != null) {
            methodChannel.invokeMethod("onVoiceInputDevice", Integer.valueOf(id));
        }
    }

    private final void registerVoiceDeviceCallback() {
        if (this.voiceDeviceCallback != null) {
            return;
        }
        Object systemService = getSystemService("audio");
        Intrinsics.checkNotNull(systemService, "null cannot be cast to non-null type android.media.AudioManager");
        AudioDeviceCallback audioDeviceCallback = new AudioDeviceCallback() { // from class: com.matreshkarp.core.MainActivity$registerVoiceDeviceCallback$cb$1
            @Override // android.media.AudioDeviceCallback
            public void onAudioDevicesAdded(AudioDeviceInfo[] added) {
                if (added != null) {
                    for (AudioDeviceInfo audioDeviceInfo : added) {
                        if (audioDeviceInfo.getType() == 7) {
                            MainActivity.applyVoiceRoute$default(this.this$0, false, 1, null);
                            return;
                        }
                    }
                }
            }

            @Override // android.media.AudioDeviceCallback
            public void onAudioDevicesRemoved(AudioDeviceInfo[] removed) {
                if (removed != null) {
                    for (AudioDeviceInfo audioDeviceInfo : removed) {
                        if (audioDeviceInfo.getType() == 7) {
                            this.this$0.applyVoiceRoute(true);
                            return;
                        }
                    }
                }
            }
        };
        ((AudioManager) systemService).registerAudioDeviceCallback(audioDeviceCallback, this.voiceMainHandler);
        this.voiceDeviceCallback = audioDeviceCallback;
    }

    private final void unregisterVoiceDeviceCallback() {
        AudioDeviceCallback audioDeviceCallback = this.voiceDeviceCallback;
        if (audioDeviceCallback != null) {
            Object systemService = getSystemService("audio");
            Intrinsics.checkNotNull(systemService, "null cannot be cast to non-null type android.media.AudioManager");
            ((AudioManager) systemService).unregisterAudioDeviceCallback(audioDeviceCallback);
        }
        this.voiceDeviceCallback = null;
    }

    private final boolean isHeadphonesOut() {
        Object systemService = getSystemService("audio");
        Intrinsics.checkNotNull(systemService, "null cannot be cast to non-null type android.media.AudioManager");
        Set of = SetsKt.setOf((Object[]) new Integer[]{3, 4, 8, 7, 22, 11, 23});
        AudioDeviceInfo[] devices = ((AudioManager) systemService).getDevices(2);
        Intrinsics.checkNotNullExpressionValue(devices, "getDevices(...)");
        for (AudioDeviceInfo audioDeviceInfo : devices) {
            if (of.contains(Integer.valueOf(audioDeviceInfo.getType()))) {
                return true;
            }
        }
        return false;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void pushAudioOutput() {
        MethodChannel methodChannel = this.voiceAudioChannel;
        if (methodChannel != null) {
            methodChannel.invokeMethod("onAudioOutput", Boolean.valueOf(isHeadphonesOut()));
        }
    }

    private final void registerAudioOutputCallback() {
        if (this.audioOutputCallback != null) {
            return;
        }
        Object systemService = getSystemService("audio");
        Intrinsics.checkNotNull(systemService, "null cannot be cast to non-null type android.media.AudioManager");
        AudioDeviceCallback audioDeviceCallback = new AudioDeviceCallback() { // from class: com.matreshkarp.core.MainActivity$registerAudioOutputCallback$cb$1
            @Override // android.media.AudioDeviceCallback
            public void onAudioDevicesAdded(AudioDeviceInfo[] added) {
                this.this$0.pushAudioOutput();
            }

            @Override // android.media.AudioDeviceCallback
            public void onAudioDevicesRemoved(AudioDeviceInfo[] removed) {
                this.this$0.pushAudioOutput();
            }
        };
        ((AudioManager) systemService).registerAudioDeviceCallback(audioDeviceCallback, this.voiceMainHandler);
        this.audioOutputCallback = audioDeviceCallback;
        pushAudioOutput();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final Object getOaidSuspend(Context context, Continuation<? super String> continuation) throws Throwable {
        SafeContinuation safeContinuation = new SafeContinuation(IntrinsicsKt.intercepted(continuation));
        final SafeContinuation safeContinuation2 = safeContinuation;
        AdjustOaid.getOaid(context, new OnOaidReadListener() { // from class: com.matreshkarp.core.MainActivity$getOaidSuspend$2$1
            @Override // com.adjust.sdk.oaid.OnOaidReadListener
            public void onOaidRead(String oaid) {
                Intrinsics.checkNotNullParameter(oaid, "oaid");
                Continuation<String> continuation2 = safeContinuation2;
                Result.Companion companion = Result.INSTANCE;
                continuation2.resumeWith(Result.m9861constructorimpl(oaid));
            }

            @Override // com.adjust.sdk.oaid.OnOaidReadListener
            public void onFail(String error) {
                Intrinsics.checkNotNullParameter(error, "error");
                Continuation<String> continuation2 = safeContinuation2;
                Result.Companion companion = Result.INSTANCE;
                continuation2.resumeWith(Result.m9861constructorimpl(null));
            }
        });
        Object orThrow = safeContinuation.getOrThrow();
        if (orThrow == IntrinsicsKt.getCOROUTINE_SUSPENDED()) {
            DebugProbesKt.probeCoroutineSuspended(continuation);
        }
        return orThrow;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final boolean checkGooglePlayServices() {
        GoogleApiAvailability googleApiAvailability = GoogleApiAvailability.getInstance();
        Intrinsics.checkNotNullExpressionValue(googleApiAvailability, "getInstance(...)");
        return googleApiAvailability.isGooglePlayServicesAvailable(this) == 0;
    }

    private final long getAvailableSpace() {
        StatFs statFs = new StatFs(Environment.getDataDirectory().getPath());
        return statFs.getBlockSizeLong() * statFs.getAvailableBlocksLong();
    }

    private final HashMap<String, Object> getDnsInfo() {
        HashMap<String, Object> map = new HashMap<>();
        try {
            map.put("privateDnsMode", Settings.Global.getString(getContentResolver(), "private_dns_mode"));
            map.put("privateDnsSpecifier", Settings.Global.getString(getContentResolver(), "private_dns_specifier"));
        } catch (Throwable th) {
            map.put("settingsError", th.getClass().getSimpleName());
        }
        if (Build.VERSION.SDK_INT >= 28) {
            try {
                Object systemService = getSystemService("connectivity");
                ConnectivityManager connectivityManager = systemService instanceof ConnectivityManager ? (ConnectivityManager) systemService : null;
                LinkProperties linkProperties = connectivityManager != null ? connectivityManager.getLinkProperties(connectivityManager.getActiveNetwork()) : null;
                if (linkProperties != null) {
                    map.put("privateDnsActive", Boolean.valueOf(linkProperties.isPrivateDnsActive()));
                    map.put("privateDnsServer", linkProperties.getPrivateDnsServerName());
                    HashMap<String, Object> map2 = map;
                    List<InetAddress> dnsServers = linkProperties.getDnsServers();
                    Intrinsics.checkNotNullExpressionValue(dnsServers, "getDnsServers(...)");
                    ArrayList arrayList = new ArrayList();
                    Iterator<T> it = dnsServers.iterator();
                    while (it.hasNext()) {
                        String hostAddress = ((InetAddress) it.next()).getHostAddress();
                        if (hostAddress != null) {
                            arrayList.add(hostAddress);
                        }
                    }
                    map2.put("dnsServers", new ArrayList(arrayList));
                }
            } catch (Throwable th2) {
                map.put("linkError", th2.getClass().getSimpleName());
            }
        }
        return map;
    }

    private final void installApk(String apkPath) {
        File file = new File(apkPath);
        Intent intent = new Intent("android.intent.action.VIEW");
        intent.setFlags(67108864);
        intent.addFlags(1);
        intent.setData(FileProvider.getUriForFile(getApplicationContext(), getString(com.matreshkarp.game.R.string.provider), file));
        sendBroadcast(intent);
        startActivityForResult(intent, 228);
    }

    public final void startGame() {
        SurfaceView surfaceView = new SurfaceView(this);
        this.cachedSurfaceView = surfaceView;
        FrameLayout frameLayout = (FrameLayout) findViewById(com.matreshkarp.game.R.id.main_fl_root);
        frameLayout.setBackgroundColor(ViewCompat.MEASURED_STATE_MASK);
        frameLayout.addView(surfaceView, new ViewGroup.LayoutParams(-1, -1));
        surfaceView.setZ(1.0f);
        Object systemService = getSystemService("audio");
        Intrinsics.checkNotNull(systemService, "null cannot be cast to non-null type android.media.AudioManager");
        final AudioManager audioManager = (AudioManager) systemService;
        surfaceView.setFocusable(true);
        surfaceView.setFocusableInTouchMode(true);
        surfaceView.getHolder().setKeepScreenOn(true);
        surfaceView.getHolder().addCallback(new SurfaceHolder.Callback() { // from class: com.matreshkarp.core.MainActivity.startGame.1
            @Override // android.view.SurfaceHolder.Callback
            public void surfaceCreated(SurfaceHolder holder) {
                Intrinsics.checkNotNullParameter(holder, "holder");
                if (MainActivity.this.fixedWidth != 0 && MainActivity.this.fixedHeight != 0) {
                    holder.setFixedSize(MainActivity.this.fixedWidth, MainActivity.this.fixedHeight);
                }
                MainActivity.this.ranInit = true;
                Main.INSTANCE.windowSize(MainActivity.this.surfaceWidth, MainActivity.this.surfaceHeight);
            }

            @Override // android.view.SurfaceHolder.Callback
            public void surfaceChanged(SurfaceHolder holder, int format, int width, int height) {
                Intrinsics.checkNotNullParameter(holder, "holder");
                boolean z = MainActivity.this.getCachedSurfaceHolder() == null;
                MainActivity.this.setCachedSurfaceHolder(holder);
                Pair<Integer, Integer> windowSizePx = getWindowSizePx();
                int iIntValue = windowSizePx.component1().intValue();
                int iIntValue2 = windowSizePx.component2().intValue();
                int i = (iIntValue - MainActivity.this.safeLeft) - MainActivity.this.safeRight;
                int i2 = (iIntValue2 - MainActivity.this.safeTop) - MainActivity.this.safeBottom;
                SurfaceView surfaceView2 = MainActivity.this.cachedSurfaceView;
                if (surfaceView2 != null) {
                    MainActivity.this.applySurfaceViewAspectRatio(surfaceView2, i, i2);
                }
                Pair pairApplyAspectRatio = MainActivity.this.applyAspectRatio(i, i2);
                int iIntValue3 = ((Number) pairApplyAspectRatio.component1()).intValue();
                int iIntValue4 = ((Number) pairApplyAspectRatio.component2()).intValue();
                MainActivity.this.surfaceWidth = iIntValue3;
                MainActivity.this.surfaceHeight = iIntValue4;
                MainActivity.this.InitEGLAndGLES2();
                if (z) {
                    Main.Companion companion = Main.INSTANCE;
                    MainActivity self = MainActivity.this.getSelf();
                    Intrinsics.checkNotNull(self);
                    int i3 = MainActivity.this.surfaceWidth;
                    int i4 = MainActivity.this.surfaceHeight;
                    String str = MainActivity.this.baseDirectory;
                    Intrinsics.checkNotNull(str);
                    companion.load(self, i3, i4, str);
                    MethodChannel methodChannel = MainActivity.this.channel;
                    if (methodChannel != null) {
                        methodChannel.invokeMethod("onMainLoad", null);
                    }
                }
                Main.INSTANCE.windowSize(MainActivity.this.surfaceWidth, MainActivity.this.surfaceHeight);
                Main.INSTANCE.appEvent(MainActivity.this.getAPP_EVENT_RESUME());
                audioManager.adjustStreamVolume(3, 100, 0);
            }

            private final Pair<Integer, Integer> getWindowSizePx() {
                if (Build.VERSION.SDK_INT >= 30) {
                    Rect bounds = ((WindowManager) MainActivity.this.getSystemService(WindowManager.class)).getCurrentWindowMetrics().getBounds();
                    Intrinsics.checkNotNullExpressionValue(bounds, "getBounds(...)");
                    return new Pair<>(Integer.valueOf(bounds.width()), Integer.valueOf(bounds.height()));
                }
                DisplayMetrics displayMetrics = MainActivity.this.getResources().getDisplayMetrics();
                return new Pair<>(Integer.valueOf(displayMetrics.widthPixels), Integer.valueOf(displayMetrics.heightPixels));
            }

            @Override // android.view.SurfaceHolder.Callback
            public void surfaceDestroyed(SurfaceHolder holder) {
                Intrinsics.checkNotNullParameter(holder, "holder");
                MainActivity.this.viewIsActive = false;
                MainActivity.this.viewIsActive = false;
                Main.INSTANCE.appEvent(MainActivity.this.getAPP_EVENT_PAUSE());
                MainActivity.this.destroyEGLSurface();
                audioManager.adjustStreamVolume(3, -100, 0);
            }
        });
    }

    protected final int getRedSize() {
        return this.redSize;
    }

    protected final void setRedSize(int i) {
        this.redSize = i;
    }

    protected final int getGreenSize() {
        return this.greenSize;
    }

    protected final void setGreenSize(int i) {
        this.greenSize = i;
    }

    protected final int getBlueSize() {
        return this.blueSize;
    }

    protected final void setBlueSize(int i) {
        this.blueSize = i;
    }

    protected final int getAlphaSize() {
        return this.alphaSize;
    }

    protected final void setAlphaSize(int i) {
        this.alphaSize = i;
    }

    protected final int getStencilSize() {
        return this.stencilSize;
    }

    protected final void setStencilSize(int i) {
        this.stencilSize = i;
    }

    protected final int getDepthSize() {
        return this.depthSize;
    }

    protected final void setDepthSize(int i) {
        this.depthSize = i;
    }

    protected final int[] getConfigAttrs() {
        return this.configAttrs;
    }

    protected final void setConfigAttrs(int[] iArr) {
        this.configAttrs = iArr;
    }

    protected final int[] getContextAttrs() {
        return this.contextAttrs;
    }

    protected final void setContextAttrs(int[] iArr) {
        this.contextAttrs = iArr;
    }

    public final EGL10 getEgl() {
        return this.egl;
    }

    public final void setEgl(EGL10 egl10) {
        this.egl = egl10;
    }

    public final GL11 getGl() {
        return this.gl;
    }

    public final void setGl(GL11 gl11) {
        this.gl = gl11;
    }

    protected final EGLDisplay getEglDisplay() {
        return this.eglDisplay;
    }

    protected final void setEglDisplay(EGLDisplay eGLDisplay) {
        this.eglDisplay = eGLDisplay;
    }

    protected final EGLContext getEglContext() {
        return this.eglContext;
    }

    protected final void setEglContext(EGLContext eGLContext) {
        this.eglContext = eGLContext;
    }

    protected final EGLConfig getEglConfig() {
        return this.eglConfig;
    }

    protected final void setEglConfig(EGLConfig eGLConfig) {
        this.eglConfig = eGLConfig;
    }

    protected final EGLSurface getEglSurface() {
        return this.eglSurface;
    }

    protected final void setEglSurface(EGLSurface eGLSurface) {
        this.eglSurface = eGLSurface;
    }

    public final String getGlExtensions() {
        return this.glExtensions;
    }

    public final void setGlExtensions(String str) {
        this.glExtensions = str;
    }

    public final String getGlRenderer() {
        return this.glRenderer;
    }

    public final void setGlRenderer(String str) {
        this.glRenderer = str;
    }

    public final String getGlVersion() {
        return this.glVersion;
    }

    public final void setGlVersion(String str) {
        this.glVersion = str;
    }

    /* JADX WARN: Multi-variable type inference failed */
    protected final boolean initEGL() {
        int i;
        if (this.configAttrs == null) {
            this.configAttrs = new int[]{12344};
        }
        int[] iArr = this.configAttrs;
        Intrinsics.checkNotNull(iArr, "null cannot be cast to non-null type kotlin.IntArray");
        this.configAttrs = new int[iArr.length + 2];
        int i2 = 0;
        int i3 = 0;
        while (true) {
            i = 1;
            if (i3 >= iArr.length - 1) {
                break;
            }
            int[] iArr2 = this.configAttrs;
            Intrinsics.checkNotNull(iArr2);
            iArr2[i3] = iArr[i3];
            i3++;
        }
        int[] iArr3 = this.configAttrs;
        Intrinsics.checkNotNull(iArr3);
        iArr3[i3] = 12352;
        int[] iArr4 = this.configAttrs;
        Intrinsics.checkNotNull(iArr4);
        iArr4[i3 + 1] = this.EGL_OPENGL_ES2_BIT;
        int[] iArr5 = this.configAttrs;
        Intrinsics.checkNotNull(iArr5);
        iArr5[i3 + 2] = 12344;
        this.contextAttrs = new int[]{this.EGL_CONTEXT_CLIENT_VERSION, 3, 12344};
        if (this.configAttrs == null) {
            this.configAttrs = new int[]{12344};
        }
        int[] iArr6 = this.configAttrs;
        Intrinsics.checkNotNull(iArr6, "null cannot be cast to non-null type kotlin.IntArray");
        this.configAttrs = new int[iArr6.length + 16];
        int i4 = 0;
        while (i4 < iArr6.length - 1) {
            int[] iArr7 = this.configAttrs;
            Intrinsics.checkNotNull(iArr7);
            iArr7[i4] = iArr6[i4];
            i4++;
        }
        int[] iArr8 = this.configAttrs;
        Intrinsics.checkNotNull(iArr8);
        int i5 = 12324;
        iArr8[i4] = 12324;
        int[] iArr9 = this.configAttrs;
        Intrinsics.checkNotNull(iArr9);
        iArr9[i4 + 1] = this.redSize;
        int[] iArr10 = this.configAttrs;
        Intrinsics.checkNotNull(iArr10);
        int i6 = 12323;
        iArr10[i4 + 2] = 12323;
        int[] iArr11 = this.configAttrs;
        Intrinsics.checkNotNull(iArr11);
        iArr11[i4 + 3] = this.greenSize;
        int[] iArr12 = this.configAttrs;
        Intrinsics.checkNotNull(iArr12);
        int i7 = 12322;
        iArr12[i4 + 4] = 12322;
        int[] iArr13 = this.configAttrs;
        Intrinsics.checkNotNull(iArr13);
        iArr13[i4 + 5] = this.blueSize;
        int[] iArr14 = this.configAttrs;
        Intrinsics.checkNotNull(iArr14);
        int i8 = 12321;
        iArr14[i4 + 6] = 12321;
        int[] iArr15 = this.configAttrs;
        Intrinsics.checkNotNull(iArr15);
        iArr15[i4 + 7] = this.alphaSize;
        int[] iArr16 = this.configAttrs;
        Intrinsics.checkNotNull(iArr16);
        iArr16[i4 + 8] = 12326;
        int[] iArr17 = this.configAttrs;
        Intrinsics.checkNotNull(iArr17);
        iArr17[i4 + 9] = this.stencilSize;
        int[] iArr18 = this.configAttrs;
        Intrinsics.checkNotNull(iArr18);
        iArr18[i4 + 10] = 12325;
        int[] iArr19 = this.configAttrs;
        Intrinsics.checkNotNull(iArr19);
        iArr19[i4 + 11] = this.depthSize;
        int[] iArr20 = this.configAttrs;
        Intrinsics.checkNotNull(iArr20);
        iArr20[i4 + 12] = 12337;
        int[] iArr21 = this.configAttrs;
        Intrinsics.checkNotNull(iArr21);
        iArr21[i4 + 13] = 0;
        int[] iArr22 = this.configAttrs;
        Intrinsics.checkNotNull(iArr22);
        iArr22[i4 + 14] = 12338;
        int[] iArr23 = this.configAttrs;
        Intrinsics.checkNotNull(iArr23);
        iArr23[i4 + 15] = 0;
        int[] iArr24 = this.configAttrs;
        Intrinsics.checkNotNull(iArr24);
        iArr24[i4 + 16] = 12344;
        EGL egl = EGLContext.getEGL();
        Intrinsics.checkNotNull(egl, "null cannot be cast to non-null type javax.microedition.khronos.egl.EGL10");
        EGL10 egl10 = (EGL10) egl;
        this.egl = egl10;
        Intrinsics.checkNotNull(egl10);
        egl10.eglGetError();
        EGL10 egl11 = this.egl;
        Intrinsics.checkNotNull(egl11);
        this.eglDisplay = egl11.eglGetDisplay(EGL10.EGL_DEFAULT_DISPLAY);
        EGL10 egl12 = this.egl;
        Intrinsics.checkNotNull(egl12);
        if (!egl12.eglInitialize(this.eglDisplay, new int[2])) {
            return false;
        }
        EGL10 egl13 = this.egl;
        Intrinsics.checkNotNull(egl13);
        if (egl13.eglGetError() != 12288) {
            return false;
        }
        EGLConfig[] eGLConfigArr = new EGLConfig[20];
        int[] iArr25 = new int[1];
        EGL10 egl14 = this.egl;
        Intrinsics.checkNotNull(egl14);
        egl14.eglChooseConfig(this.eglDisplay, this.configAttrs, eGLConfigArr, 20, iArr25);
        int[] iArr26 = new int[1];
        int i9 = 16777216;
        int i10 = 0;
        while (i10 < iArr25[i2]) {
            int length = (iArr.length - i) >> i;
            int i11 = i2;
            while (true) {
                if (i11 < length) {
                    int i12 = i2;
                    EGL10 egl15 = this.egl;
                    Intrinsics.checkNotNull(egl15);
                    int i13 = i;
                    EGLDisplay eGLDisplay = this.eglDisplay;
                    EGLConfig eGLConfig = eGLConfigArr[i10];
                    int[] iArr27 = this.configAttrs;
                    Intrinsics.checkNotNull(iArr27);
                    int i14 = i11 * 2;
                    egl15.eglGetConfigAttrib(eGLDisplay, eGLConfig, iArr27[i14], iArr26);
                    int i15 = iArr26[i12];
                    int[] iArr28 = this.configAttrs;
                    Intrinsics.checkNotNull(iArr28);
                    int i16 = i14 + 1;
                    int i17 = i15 & iArr28[i16];
                    int[] iArr29 = this.configAttrs;
                    Intrinsics.checkNotNull(iArr29);
                    if (i17 != iArr29[i16]) {
                        i10++;
                        i2 = i12;
                        i = i13;
                        break;
                    }
                    i11++;
                    i2 = i12;
                    i = i13;
                } else {
                    int i18 = i2;
                    int i19 = i;
                    EGL10 egl16 = this.egl;
                    Intrinsics.checkNotNull(egl16);
                    egl16.eglGetConfigAttrib(this.eglDisplay, eGLConfigArr[i10], i5, iArr26);
                    int i20 = iArr26[i18];
                    EGL10 egl17 = this.egl;
                    Intrinsics.checkNotNull(egl17);
                    egl17.eglGetConfigAttrib(this.eglDisplay, eGLConfigArr[i10], i6, iArr26);
                    int i21 = iArr26[i18];
                    EGL10 egl18 = this.egl;
                    Intrinsics.checkNotNull(egl18);
                    egl18.eglGetConfigAttrib(this.eglDisplay, eGLConfigArr[i10], i7, iArr26);
                    int i22 = iArr26[i18];
                    EGL10 egl19 = this.egl;
                    Intrinsics.checkNotNull(egl19);
                    egl19.eglGetConfigAttrib(this.eglDisplay, eGLConfigArr[i10], i8, iArr26);
                    int i23 = iArr26[i18];
                    EGL10 egl110 = this.egl;
                    Intrinsics.checkNotNull(egl110);
                    egl110.eglGetConfigAttrib(this.eglDisplay, eGLConfigArr[i10], 12325, iArr26);
                    int i24 = iArr26[i18];
                    EGL10 egl111 = this.egl;
                    Intrinsics.checkNotNull(egl111);
                    egl111.eglGetConfigAttrib(this.eglDisplay, eGLConfigArr[i10], 12326, iArr26);
                    int i25 = iArr26[i18];
                    EGL10 egl112 = this.egl;
                    Intrinsics.checkNotNull(egl112);
                    egl112.eglGetConfigAttrib(this.eglDisplay, eGLConfigArr[i10], 12337, iArr26);
                    int i26 = iArr26[i18];
                    int iAbs = ((((Math.abs(i20 - this.redSize) + Math.abs(i21 - this.greenSize)) + Math.abs(i22 - this.blueSize)) + Math.abs(i23 - this.alphaSize)) << 16) + (Math.abs(i24 - this.depthSize) << 8) + Math.abs(i25 - this.stencilSize);
                    if (iAbs < i9) {
                        int[] iArr30 = this.configAttrs;
                        Intrinsics.checkNotNull(iArr30);
                        int length2 = (iArr30.length - 1) >> 1;
                        for (int i27 = i18; i27 < length2; i27++) {
                            EGL10 egl113 = this.egl;
                            Intrinsics.checkNotNull(egl113);
                            EGLDisplay eGLDisplay2 = this.eglDisplay;
                            EGLConfig eGLConfig2 = eGLConfigArr[i10];
                            int[] iArr31 = this.configAttrs;
                            Intrinsics.checkNotNull(iArr31);
                            egl113.eglGetConfigAttrib(eGLDisplay2, eGLConfig2, iArr31[i27 * 2], iArr26);
                        }
                        this.eglConfig = eGLConfigArr[i10];
                        i9 = iAbs;
                    }
                    i10++;
                    i2 = i18;
                    i = i19;
                    i5 = 12324;
                    i6 = 12323;
                    i7 = 12322;
                    i8 = 12321;
                    break;
                }
            }
        }
        boolean z = i;
        EGL10 egl114 = this.egl;
        Intrinsics.checkNotNull(egl114);
        this.eglContext = egl114.eglCreateContext(this.eglDisplay, this.eglConfig, EGL10.EGL_NO_CONTEXT, this.contextAttrs);
        StringBuilder sb = new StringBuilder("eglCreateContext: ");
        EGL10 egl115 = this.egl;
        Intrinsics.checkNotNull(egl115);
        sb.append(egl115.eglGetError());
        Log.i("CLIENT", sb.toString());
        EGLContext eGLContext = this.eglContext;
        Intrinsics.checkNotNull(eGLContext);
        GL gl = eGLContext.getGL();
        Intrinsics.checkNotNull(gl, "null cannot be cast to non-null type javax.microedition.khronos.opengles.GL11");
        this.gl = (GL11) gl;
        return z;
    }

    protected final void destroyEGLSurface() {
        synchronized (this.eglLock) {
            if (this.eglDisplay != null && this.eglSurface != null) {
                EGL10 egl10 = this.egl;
                Intrinsics.checkNotNull(egl10);
                egl10.eglMakeCurrent(this.eglDisplay, EGL10.EGL_NO_SURFACE, EGL10.EGL_NO_SURFACE, EGL10.EGL_NO_CONTEXT);
            }
            if (this.eglSurface != null) {
                EGL10 egl11 = this.egl;
                Intrinsics.checkNotNull(egl11);
                egl11.eglDestroySurface(this.eglDisplay, this.eglSurface);
            }
            this.eglSurface = null;
            this.eglSurfaceBroken = false;
            Unit unit = Unit.INSTANCE;
        }
    }

    public final void GetGLExtensions() {
        GL11 gl11;
        if (this.HasGLExtensions || (gl11 = this.gl) == null || this.cachedSurfaceHolder == null) {
            return;
        }
        Intrinsics.checkNotNull(gl11);
        this.glVendor = gl11.glGetString(7936);
        GL11 gl12 = this.gl;
        Intrinsics.checkNotNull(gl12);
        this.glExtensions = gl12.glGetString(7939);
        GL11 gl13 = this.gl;
        Intrinsics.checkNotNull(gl13);
        this.glRenderer = gl13.glGetString(7937);
        GL11 gl14 = this.gl;
        Intrinsics.checkNotNull(gl14);
        this.glVersion = gl14.glGetString(7938);
        if (this.glVendor != null) {
            this.HasGLExtensions = true;
        }
    }

    public final boolean makeCurrent() {
        synchronized (this.eglLock) {
            if (this.eglContext == null) {
                return false;
            }
            if (this.eglContextLost) {
                return false;
            }
            boolean z = (this.eglSurface == null || this.eglSurfaceBroken) && recreateLostEGLSurface();
            if (this.eglSurfaceBroken) {
                return false;
            }
            EGLSurface eGLSurface = this.eglSurface;
            if (eGLSurface == null) {
                return false;
            }
            Unit unit = Unit.INSTANCE;
            EGL10 egl10 = this.egl;
            Intrinsics.checkNotNull(egl10);
            if (!egl10.eglMakeCurrent(this.eglDisplay, eGLSurface, eGLSurface, this.eglContext)) {
                EGL10 egl11 = this.egl;
                Intrinsics.checkNotNull(egl11);
                if (!egl11.eglMakeCurrent(this.eglDisplay, eGLSurface, eGLSurface, this.eglContext)) {
                    EGL10 egl12 = this.egl;
                    Intrinsics.checkNotNull(egl12);
                    onEGLSurfaceError(eGLSurface, egl12.eglGetError());
                    return false;
                }
            }
            this.lastEglError = 12288;
            if (z) {
                reportEGLSurfaceRecreated();
            }
            GetGLExtensions();
            return true;
        }
    }

    private final void onEGLSurfaceError(EGLSurface surface, int error) {
        this.lastEglError = error;
        if (error == this.EGL_CONTEXT_LOST) {
            this.eglContextLost = true;
        }
        if (error == 12301 || error == 12299 || error == 12291) {
            synchronized (this.eglLock) {
                if (this.eglSurface == surface) {
                    this.eglSurfaceBroken = true;
                }
                Unit unit = Unit.INSTANCE;
            }
        }
    }

    private final boolean recreateLostEGLSurface() {
        String str;
        SurfaceHolder surfaceHolder = this.cachedSurfaceHolder;
        if (this.viewIsActive && surfaceHolder != null && surfaceHolder.getSurface().isValid()) {
            long jUptimeMillis = SystemClock.uptimeMillis();
            if (jUptimeMillis - this.lastEglRecreateMs < 500) {
                return false;
            }
            this.lastEglRecreateMs = jUptimeMillis;
            if (this.eglSurface == null) {
                str = "no surface";
            } else {
                str = "0x" + Integer.toHexString(this.lastEglError);
            }
            this.eglRecreateReason = str;
            destroyEGLSurface();
            if (createWindowSurface(surfaceHolder)) {
                return true;
            }
            Log.w("CLIENT", "EGL surface recreate failed: 0x" + Integer.toHexString(this.lastEglError));
        }
        return false;
    }

    private final void reportEGLSurfaceRecreated() {
        this.eglSurfaceRecreated++;
        final String str = "EGL surface recreated after " + this.eglRecreateReason;
        Log.i("CLIENT", str);
        runOnUiThread(new Runnable() { // from class: com.matreshkarp.core.MainActivity$$ExternalSyntheticLambda12
            @Override // java.lang.Runnable
            public final void run() {
                MainActivity.reportEGLSurfaceRecreated$lambda$0(str);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void reportEGLSurfaceRecreated$lambda$0(String str) {
        Sentry.captureMessage(str, SentryLevel.WARNING);
    }

    private final boolean createWindowSurface(SurfaceHolder holder) {
        try {
            EGL10 egl10 = this.egl;
            Intrinsics.checkNotNull(egl10);
            EGLSurface eGLSurfaceEglCreateWindowSurface = egl10.eglCreateWindowSurface(this.eglDisplay, this.eglConfig, holder, null);
            if (eGLSurfaceEglCreateWindowSurface == null || Intrinsics.areEqual(eGLSurfaceEglCreateWindowSurface, EGL10.EGL_NO_SURFACE)) {
                EGL10 egl11 = this.egl;
                Intrinsics.checkNotNull(egl11);
                this.lastEglError = egl11.eglGetError();
                this.eglSurface = null;
                return false;
            }
            this.eglSurface = eGLSurfaceEglCreateWindowSurface;
            this.eglSurfaceBroken = false;
            return true;
        } catch (IllegalArgumentException e) {
            Log.w("CLIENT", "eglCreateWindowSurface: " + e.getMessage());
            this.lastEglError = 12299;
            this.eglSurface = null;
            return false;
        }
    }

    private final Map<String, Object> eglState() {
        Surface surface;
        Pair[] pairArr = new Pair[5];
        boolean z = false;
        pairArr[0] = TuplesKt.to("error", Integer.valueOf(this.eglContextLost ? this.EGL_CONTEXT_LOST : this.lastEglError));
        pairArr[1] = TuplesKt.to("surface", Boolean.valueOf(this.eglSurface != null));
        SurfaceHolder surfaceHolder = this.cachedSurfaceHolder;
        if (surfaceHolder != null && (surface = surfaceHolder.getSurface()) != null && surface.isValid()) {
            z = true;
        }
        pairArr[2] = TuplesKt.to("holder", Boolean.valueOf(z));
        pairArr[3] = TuplesKt.to("viewActive", Boolean.valueOf(this.viewIsActive));
        pairArr[4] = TuplesKt.to("recreated", Integer.valueOf(this.eglSurfaceRecreated));
        return MapsKt.mapOf(pairArr);
    }

    public final boolean unMakeCurrent() {
        EGL10 egl10 = this.egl;
        Intrinsics.checkNotNull(egl10);
        return egl10.eglMakeCurrent(this.eglDisplay, EGL10.EGL_NO_SURFACE, EGL10.EGL_NO_SURFACE, EGL10.EGL_NO_CONTEXT);
    }

    public final boolean swapBuffers() {
        int i = this.SwapBufferSkip;
        if (i > 0) {
            this.SwapBufferSkip = i - 1;
            return true;
        }
        EGLSurface eGLSurface = this.eglSurface;
        if (eGLSurface == null) {
            return false;
        }
        EGL10 egl10 = this.egl;
        Intrinsics.checkNotNull(egl10);
        if (egl10.eglSwapBuffers(this.eglDisplay, eGLSurface)) {
            return true;
        }
        EGL10 egl11 = this.egl;
        Intrinsics.checkNotNull(egl11);
        onEGLSurfaceError(eGLSurface, egl11.eglGetError());
        return false;
    }

    /* JADX WARN: Code duplicated, block: B:15:0x0050  */
    public final int getFrameLimit() {
        Display defaultDisplay;
        float refreshRate;
        Object systemService = getSystemService("window");
        Intrinsics.checkNotNull(systemService, "null cannot be cast to non-null type android.view.WindowManager");
        WindowManager windowManager = (WindowManager) systemService;
        if (Build.VERSION.SDK_INT >= 30) {
            defaultDisplay = getDisplay();
        } else {
            defaultDisplay = windowManager.getDefaultDisplay();
        }
        if (defaultDisplay == null) {
            return 60;
        }
        Display.Mode[] supportedModes = defaultDisplay.getSupportedModes();
        if (supportedModes == null) {
            refreshRate = defaultDisplay.getRefreshRate();
        } else {
            ArrayList arrayList = new ArrayList(supportedModes.length);
            for (Display.Mode mode : supportedModes) {
                arrayList.add(Float.valueOf(mode.getRefreshRate()));
            }
            Float fMaxOrNull = CollectionsKt.maxOrNull((Iterable<? extends Float>) arrayList);
            if (fMaxOrNull != null) {
                refreshRate = fMaxOrNull.floatValue();
            } else {
                refreshRate = defaultDisplay.getRefreshRate();
            }
        }
        return (int) refreshRate;
    }

    protected final boolean createEGLSurface(SurfaceHolder surface) {
        synchronized (this.eglLock) {
            if (!createWindowSurface(surface)) {
                Log.w("CLIENT", "eglCreateWindowSurface failed: 0x" + Integer.toHexString(this.lastEglError));
                return false;
            }
            int[] iArr = new int[1];
            EGL10 egl10 = this.egl;
            Intrinsics.checkNotNull(egl10);
            egl10.eglQuerySurface(this.eglDisplay, this.eglSurface, 12375, iArr);
            this.surfaceWidth = iArr[0];
            EGL10 egl11 = this.egl;
            Intrinsics.checkNotNull(egl11);
            egl11.eglQuerySurface(this.eglDisplay, this.eglSurface, 12374, iArr);
            this.surfaceHeight = iArr[0];
            if (this.glVendor == null) {
                makeCurrent();
                unMakeCurrent();
            }
            return true;
        }
    }

    public final void InitEGLAndGLES2() {
        if (this.cachedSurfaceHolder == null) {
            return;
        }
        if (this.eglContext == null ? initEGL() : true) {
            if (!this.viewIsActive) {
                createEGLSurface(this.cachedSurfaceHolder);
            }
            this.viewIsActive = true;
            this.SwapBufferSkip = 1;
        }
    }

    public final void SentrySetExtra(String key, String value) {
        Intrinsics.checkNotNullParameter(key, "key");
        Intrinsics.checkNotNullParameter(value, "value");
        Sentry.setExtra(key, value);
    }

    public final void SentrySetUsername(String name) {
        Intrinsics.checkNotNullParameter(name, "name");
        User user = new User();
        user.setUsername(name);
        Sentry.setUser(user);
    }

    public final void SentryCaptureErrorMessage(String _logger, String _message) {
        Intrinsics.checkNotNullParameter(_logger, "_logger");
        Intrinsics.checkNotNullParameter(_message, "_message");
        SentryEvent sentryEvent = new SentryEvent();
        Message message = new Message();
        message.setMessage(_message);
        sentryEvent.setMessage(message);
        sentryEvent.setLevel(SentryLevel.ERROR);
        sentryEvent.setLogger(_logger);
        Sentry.captureEvent(sentryEvent);
    }

    public final void SentryCaptureWarnMessage(String _logger, String _message) {
        Intrinsics.checkNotNullParameter(_logger, "_logger");
        Intrinsics.checkNotNullParameter(_message, "_message");
        SentryEvent sentryEvent = new SentryEvent();
        Message message = new Message();
        message.setMessage(_message);
        sentryEvent.setMessage(message);
        sentryEvent.setLevel(SentryLevel.WARNING);
        sentryEvent.setLogger(_logger);
        Sentry.captureEvent(sentryEvent);
    }

    public final void SentryCaptureInfoMessage(String _logger, String _message) {
        Intrinsics.checkNotNullParameter(_logger, "_logger");
        Intrinsics.checkNotNullParameter(_message, "_message");
        SentryEvent sentryEvent = new SentryEvent();
        Message message = new Message();
        message.setMessage(_message);
        sentryEvent.setMessage(message);
        sentryEvent.setLevel(SentryLevel.INFO);
        sentryEvent.setLogger(_logger);
        Sentry.captureEvent(sentryEvent);
    }
}
