package ru.rustore.flutter_rustore_review.pigeons;

import android.util.Log;
import androidx.media3.extractor.ts.TsExtractor;
import io.flutter.plugin.common.BasicMessageChannel;
import io.flutter.plugin.common.BinaryMessenger;
import io.flutter.plugin.common.MessageCodec;
import io.flutter.plugin.common.StandardMessageCodec;
import java.io.ByteArrayOutputStream;
import java.lang.annotation.ElementType;
import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;
import java.lang.annotation.Target;
import java.nio.ByteBuffer;
import java.util.ArrayList;
import java.util.Objects;

/* JADX INFO: loaded from: classes8.dex */
public class Rustore {

    @Target({ElementType.METHOD})
    @Retention(RetentionPolicy.CLASS)
    @interface CanIgnoreReturnValue {
    }

    public interface NullableResult<T> {
        void error(Throwable th);

        void success(T t);
    }

    public interface Result<T> {
        void error(Throwable th);

        void success(T t);
    }

    public interface VoidResult {
        void error(Throwable th);

        void success();
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

    public static final class ReviewInfo {
        private String appDescription;

        public String getAppDescription() {
            return this.appDescription;
        }

        public void setAppDescription(String str) {
            if (str == null) {
                throw new IllegalStateException("Nonnull field \"appDescription\" is null.");
            }
            this.appDescription = str;
        }

        ReviewInfo() {
        }

        public boolean equals(Object obj) {
            if (this == obj) {
                return true;
            }
            if (obj == null || getClass() != obj.getClass()) {
                return false;
            }
            return this.appDescription.equals(((ReviewInfo) obj).appDescription);
        }

        public int hashCode() {
            return Objects.hash(this.appDescription);
        }

        public static final class Builder {
            private String appDescription;

            public Builder setAppDescription(String str) {
                this.appDescription = str;
                return this;
            }

            public ReviewInfo build() {
                ReviewInfo reviewInfo = new ReviewInfo();
                reviewInfo.setAppDescription(this.appDescription);
                return reviewInfo;
            }
        }

        ArrayList<Object> toList() {
            ArrayList<Object> arrayList = new ArrayList<>(1);
            arrayList.add(this.appDescription);
            return arrayList;
        }

        static ReviewInfo fromList(ArrayList<Object> arrayList) {
            ReviewInfo reviewInfo = new ReviewInfo();
            reviewInfo.setAppDescription((String) arrayList.get(0));
            return reviewInfo;
        }
    }

    private static class PigeonCodec extends StandardMessageCodec {
        public static final PigeonCodec INSTANCE = new PigeonCodec();

        private PigeonCodec() {
        }

        @Override // io.flutter.plugin.common.StandardMessageCodec
        protected Object readValueOfType(byte b, ByteBuffer byteBuffer) {
            if (b == -127) {
                return ReviewInfo.fromList((ArrayList) readValue(byteBuffer));
            }
            return super.readValueOfType(b, byteBuffer);
        }

        @Override // io.flutter.plugin.common.StandardMessageCodec
        protected void writeValue(ByteArrayOutputStream byteArrayOutputStream, Object obj) {
            if (obj instanceof ReviewInfo) {
                byteArrayOutputStream.write(TsExtractor.TS_STREAM_TYPE_AC3);
                writeValue(byteArrayOutputStream, ((ReviewInfo) obj).toList());
            } else {
                super.writeValue(byteArrayOutputStream, obj);
            }
        }
    }

    public interface RustoreReview {
        void initialize(VoidResult voidResult);

        void request(VoidResult voidResult);

        void review(VoidResult voidResult);

        static MessageCodec<Object> getCodec() {
            return PigeonCodec.INSTANCE;
        }

        static void setUp(BinaryMessenger binaryMessenger, RustoreReview rustoreReview) {
            setUp(binaryMessenger, "", rustoreReview);
        }

        static void setUp(BinaryMessenger binaryMessenger, String str, final RustoreReview rustoreReview) {
            String str2;
            if (str.isEmpty()) {
                str2 = "";
            } else {
                str2 = "." + str;
            }
            BasicMessageChannel basicMessageChannel = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.flutter_rustore_review.RustoreReview.initialize" + str2, getCodec());
            if (rustoreReview != null) {
                basicMessageChannel.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: ru.rustore.flutter_rustore_review.pigeons.Rustore$RustoreReview$$ExternalSyntheticLambda0
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        Rustore.RustoreReview.lambda$setUp$0(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel2 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.flutter_rustore_review.RustoreReview.request" + str2, getCodec());
            if (rustoreReview != null) {
                basicMessageChannel2.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: ru.rustore.flutter_rustore_review.pigeons.Rustore$RustoreReview$$ExternalSyntheticLambda1
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        Rustore.RustoreReview.lambda$setUp$1(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel2.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel3 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.flutter_rustore_review.RustoreReview.review" + str2, getCodec());
            if (rustoreReview != null) {
                basicMessageChannel3.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: ru.rustore.flutter_rustore_review.pigeons.Rustore$RustoreReview$$ExternalSyntheticLambda2
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        Rustore.RustoreReview.lambda$setUp$2(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel3.setMessageHandler(null);
            }
        }

        static /* synthetic */ void lambda$setUp$0(RustoreReview rustoreReview, Object obj, final BasicMessageChannel.Reply reply) {
            final ArrayList arrayList = new ArrayList();
            rustoreReview.initialize(new VoidResult() { // from class: ru.rustore.flutter_rustore_review.pigeons.Rustore.RustoreReview.1
                @Override // ru.rustore.flutter_rustore_review.pigeons.Rustore.VoidResult
                public void success() {
                    arrayList.add(0, null);
                    reply.reply(arrayList);
                }

                @Override // ru.rustore.flutter_rustore_review.pigeons.Rustore.VoidResult
                public void error(Throwable th) {
                    reply.reply(Rustore.wrapError(th));
                }
            });
        }

        static /* synthetic */ void lambda$setUp$1(RustoreReview rustoreReview, Object obj, final BasicMessageChannel.Reply reply) {
            final ArrayList arrayList = new ArrayList();
            rustoreReview.request(new VoidResult() { // from class: ru.rustore.flutter_rustore_review.pigeons.Rustore.RustoreReview.2
                @Override // ru.rustore.flutter_rustore_review.pigeons.Rustore.VoidResult
                public void success() {
                    arrayList.add(0, null);
                    reply.reply(arrayList);
                }

                @Override // ru.rustore.flutter_rustore_review.pigeons.Rustore.VoidResult
                public void error(Throwable th) {
                    reply.reply(Rustore.wrapError(th));
                }
            });
        }

        static /* synthetic */ void lambda$setUp$2(RustoreReview rustoreReview, Object obj, final BasicMessageChannel.Reply reply) {
            final ArrayList arrayList = new ArrayList();
            rustoreReview.review(new VoidResult() { // from class: ru.rustore.flutter_rustore_review.pigeons.Rustore.RustoreReview.3
                @Override // ru.rustore.flutter_rustore_review.pigeons.Rustore.VoidResult
                public void success() {
                    arrayList.add(0, null);
                    reply.reply(arrayList);
                }

                @Override // ru.rustore.flutter_rustore_review.pigeons.Rustore.VoidResult
                public void error(Throwable th) {
                    reply.reply(Rustore.wrapError(th));
                }
            });
        }
    }
}
