package com.pushwoosh.notification.builder;

import android.content.Context;
import android.content.pm.PackageManager;
import android.graphics.Bitmap;
import android.graphics.Canvas;
import android.graphics.drawable.AdaptiveIconDrawable;
import android.graphics.drawable.BitmapDrawable;
import android.graphics.drawable.Drawable;
import android.graphics.drawable.Icon;
import android.graphics.drawable.LayerDrawable;
import com.pushwoosh.internal.utils.PWLog;

/* JADX INFO: loaded from: classes6.dex */
public class AppIconHelper {
    public static Icon getAppIcon(Context context, String str) {
        if (context == null || context.getApplicationInfo() == null) {
            return null;
        }
        try {
            Drawable applicationIcon = context.getPackageManager().getApplicationIcon(str);
            if (applicationIcon instanceof BitmapDrawable) {
                return Icon.createWithBitmap(((BitmapDrawable) applicationIcon).getBitmap());
            }
            if (applicationIcon instanceof AdaptiveIconDrawable) {
                LayerDrawable layerDrawable = new LayerDrawable(new Drawable[]{((AdaptiveIconDrawable) applicationIcon).getForeground()});
                Bitmap bitmapCreateBitmap = Bitmap.createBitmap(layerDrawable.getIntrinsicWidth(), layerDrawable.getIntrinsicHeight(), Bitmap.Config.ARGB_8888);
                Canvas canvas = new Canvas(bitmapCreateBitmap);
                layerDrawable.setBounds(0, 0, canvas.getWidth(), canvas.getHeight());
                layerDrawable.draw(canvas);
                return Icon.createWithAdaptiveBitmap(bitmapCreateBitmap);
            }
            return null;
        } catch (PackageManager.NameNotFoundException e) {
            PWLog.error("Failed to create icon", e);
        }
    }

    public static int getAppIconResId(Context context) {
        return context.getApplicationInfo().icon;
    }
}
