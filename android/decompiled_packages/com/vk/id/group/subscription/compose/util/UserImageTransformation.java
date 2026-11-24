package com.vk.id.group.subscription.compose.util;

import android.graphics.Bitmap;
import android.graphics.Canvas;
import android.graphics.Paint;
import android.graphics.PorterDuff;
import android.graphics.PorterDuffXfermode;
import androidx.media3.extractor.text.ttml.TtmlNode;
import coil.size.Size;
import coil.transform.Transformation;
import io.sentry.rrweb.RRWebVideoEvent;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: UserImageTransformation.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000F\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0010\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0007\n\u0002\b\u0002\b\u0001\u0018\u0000 \u00192\u00020\u0001:\u0001\u0019B\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\u001e\u0010\n\u001a\u00020\u000b2\u0006\u0010\f\u001a\u00020\u000b2\u0006\u0010\r\u001a\u00020\u000eH\u0096@¢\u0006\u0002\u0010\u000fJ&\u0010\u0010\u001a\u00020\u000b*\u00020\u000b2\u0017\u0010\u0011\u001a\u0013\u0012\u0004\u0012\u00020\u0013\u0012\u0004\u0012\u00020\u00140\u0012¢\u0006\u0002\b\u0015H\u0082\bJ\u001c\u0010\u0016\u001a\u00020\u0014*\u00020\u00132\u0006\u0010\f\u001a\u00020\u000b2\u0006\u0010\u0017\u001a\u00020\u0018H\u0002R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u0014\u0010\u0006\u001a\u00020\u00078VX\u0096\u0004¢\u0006\u0006\u001a\u0004\b\b\u0010\t¨\u0006\u001a"}, d2 = {"Lcom/vk/id/group/subscription/compose/util/UserImageTransformation;", "Lcoil/transform/Transformation;", TtmlNode.ATTR_TTS_BACKGROUND_COLOR, "", "<init>", "(I)V", "cacheKey", "", "getCacheKey", "()Ljava/lang/String;", "transform", "Landroid/graphics/Bitmap;", "input", RRWebVideoEvent.JsonKeys.SIZE, "Lcoil/size/Size;", "(Landroid/graphics/Bitmap;Lcoil/size/Size;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "applyCanvas", "block", "Lkotlin/Function1;", "Landroid/graphics/Canvas;", "", "Lkotlin/ExtensionFunctionType;", "drawSurroundingCircle", "radius", "", "Companion", "group-subscription-compose_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final class UserImageTransformation implements Transformation {
    public static final int $stable = 0;
    private static final int IMAGE_WIDTH_DP = 24;
    private static final int WHITE_CIRCLE_OFFSET_DP = 9;
    private final int backgroundColor;

    public UserImageTransformation(int i) {
        this.backgroundColor = i;
    }

    @Override // coil.transform.Transformation
    public String getCacheKey() {
        return String.valueOf(this.backgroundColor);
    }

    @Override // coil.transform.Transformation
    public Object transform(Bitmap bitmap, Size size, Continuation<? super Bitmap> continuation) {
        Paint paint = new Paint(3);
        int iMin = Math.min(bitmap.getWidth(), bitmap.getHeight());
        float f = iMin / 2.0f;
        Bitmap bitmapCreateBitmap = Bitmap.createBitmap(iMin, iMin, bitmap.getConfig());
        Intrinsics.checkNotNullExpressionValue(bitmapCreateBitmap, "createBitmap(...)");
        Canvas canvas = new Canvas(bitmapCreateBitmap);
        canvas.drawCircle(f, f, f, paint);
        paint.setXfermode(new PorterDuffXfermode(PorterDuff.Mode.SRC_IN));
        canvas.drawBitmap(bitmap, f - (bitmap.getWidth() / 2.0f), f - (bitmap.getHeight() / 2.0f), paint);
        drawSurroundingCircle(canvas, bitmap, f);
        return bitmapCreateBitmap;
    }

    private final Bitmap applyCanvas(Bitmap bitmap, Function1<? super Canvas, Unit> function1) {
        function1.invoke(new Canvas(bitmap));
        return bitmap;
    }

    private final void drawSurroundingCircle(Canvas canvas, Bitmap bitmap, float f) {
        float f2 = ((-bitmap.getWidth()) / 24.0f) * 9;
        float height = bitmap.getHeight() / 2.0f;
        Paint paint = new Paint();
        paint.setColor(this.backgroundColor);
        paint.setStyle(Paint.Style.FILL);
        Unit unit = Unit.INSTANCE;
        canvas.drawCircle(f2, height, f, paint);
    }
}
