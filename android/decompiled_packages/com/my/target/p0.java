package com.my.target;

import android.bluetooth.BluetoothAdapter;
import android.bluetooth.BluetoothDevice;
import android.content.Context;
import android.text.TextUtils;
import android.util.Base64;
import com.my.target.common.MyTargetConfig;
import java.lang.reflect.Method;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

/* JADX INFO: loaded from: classes6.dex */
public final class p0 extends c2 {
    public static final int[] b = e0.a(260, 272, 268, 276, 516, 520, 532, 528, 524, 512, 264, 256, 280);

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public Method f4762a;

    public p0() {
        try {
            this.f4762a = BluetoothDevice.class.getMethod("isConnected", null);
        } catch (Throwable unused) {
        }
    }

    public static List a(BluetoothAdapter bluetoothAdapter, Method method) {
        ArrayList arrayList = new ArrayList();
        try {
            for (BluetoothDevice bluetoothDevice : bluetoothAdapter.getBondedDevices()) {
                if (Arrays.binarySearch(b, bluetoothDevice.getBluetoothClass().getDeviceClass()) < 0 && ((Boolean) method.invoke(bluetoothDevice, null)).booleanValue()) {
                    String name = bluetoothDevice.getName();
                    if (TextUtils.isEmpty(name)) {
                        continue;
                    } else {
                        arrayList.add(new String(Base64.encode(name.getBytes(), 2), "UTF-8"));
                    }
                }
            }
        } catch (Throwable unused) {
        }
        return arrayList;
    }

    public Map a(MyTargetConfig myTargetConfig, Context context) {
        BluetoothAdapter defaultAdapter;
        HashMap map = new HashMap();
        if (this.f4762a != null && c2.a("android.permission.BLUETOOTH", context) && (defaultAdapter = BluetoothAdapter.getDefaultAdapter()) != null && defaultAdapter.isEnabled()) {
            List listA = a(defaultAdapter, this.f4762a);
            if (!listA.isEmpty()) {
                map.put("bdn", e0.a(listA));
            }
        }
        return map;
    }
}
