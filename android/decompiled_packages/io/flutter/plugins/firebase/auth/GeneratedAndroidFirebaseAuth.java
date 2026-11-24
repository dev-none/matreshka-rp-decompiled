package io.flutter.plugins.firebase.auth;

import android.util.Log;
import androidx.compose.runtime.ComposerKt;
import androidx.media3.common.PlaybackException;
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
import java.util.Arrays;
import java.util.Iterator;
import java.util.List;
import java.util.Map;

/* JADX INFO: loaded from: classes7.dex */
public class GeneratedAndroidFirebaseAuth {

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

    static boolean pigeonDoubleEquals(double d, double d2) {
        if ((d == 0.0d ? 0.0d : d) != (d2 != 0.0d ? d2 : 0.0d)) {
            return Double.isNaN(d) && Double.isNaN(d2);
        }
        return true;
    }

    static boolean pigeonFloatEquals(float f, float f2) {
        if ((f == 0.0f ? 0.0f : f) != (f2 != 0.0f ? f2 : 0.0f)) {
            return Float.isNaN(f) && Float.isNaN(f2);
        }
        return true;
    }

    static int pigeonDoubleHashCode(double d) {
        if (d == 0.0d) {
            d = 0.0d;
        }
        long jDoubleToLongBits = Double.doubleToLongBits(d);
        return (int) (jDoubleToLongBits ^ (jDoubleToLongBits >>> 32));
    }

    static int pigeonFloatHashCode(float f) {
        if (f == 0.0f) {
            f = 0.0f;
        }
        return Float.floatToIntBits(f);
    }

    static boolean pigeonDeepEquals(Object obj, Object obj2) {
        if (obj == obj2) {
            return true;
        }
        if (obj == null || obj2 == null) {
            return false;
        }
        if ((obj instanceof byte[]) && (obj2 instanceof byte[])) {
            return Arrays.equals((byte[]) obj, (byte[]) obj2);
        }
        if ((obj instanceof int[]) && (obj2 instanceof int[])) {
            return Arrays.equals((int[]) obj, (int[]) obj2);
        }
        if ((obj instanceof long[]) && (obj2 instanceof long[])) {
            return Arrays.equals((long[]) obj, (long[]) obj2);
        }
        if ((obj instanceof double[]) && (obj2 instanceof double[])) {
            double[] dArr = (double[]) obj;
            double[] dArr2 = (double[]) obj2;
            if (dArr.length != dArr2.length) {
                return false;
            }
            for (int i = 0; i < dArr.length; i++) {
                if (!pigeonDoubleEquals(dArr[i], dArr2[i])) {
                    return false;
                }
            }
            return true;
        }
        if ((obj instanceof List) && (obj2 instanceof List)) {
            List list = (List) obj;
            List list2 = (List) obj2;
            if (list.size() != list2.size()) {
                return false;
            }
            for (int i2 = 0; i2 < list.size(); i2++) {
                if (!pigeonDeepEquals(list.get(i2), list2.get(i2))) {
                    return false;
                }
            }
            return true;
        }
        if ((obj instanceof Map) && (obj2 instanceof Map)) {
            Map map = (Map) obj;
            Map map2 = (Map) obj2;
            if (map.size() != map2.size()) {
                return false;
            }
            loop2: for (Map.Entry entry : map.entrySet()) {
                Object key = entry.getKey();
                Object value = entry.getValue();
                for (Map.Entry entry2 : map2.entrySet()) {
                    if (pigeonDeepEquals(key, entry2.getKey())) {
                        if (!pigeonDeepEquals(value, entry2.getValue())) {
                            break loop2;
                        }
                    }
                }
                return false;
            }
            return true;
        }
        if ((obj instanceof Double) && (obj2 instanceof Double)) {
            return pigeonDoubleEquals(((Double) obj).doubleValue(), ((Double) obj2).doubleValue());
        }
        if ((obj instanceof Float) && (obj2 instanceof Float)) {
            return pigeonFloatEquals(((Float) obj).floatValue(), ((Float) obj2).floatValue());
        }
        return obj.equals(obj2);
    }

    static int pigeonDeepHashCode(Object obj) {
        int iPigeonDeepHashCode = 0;
        if (obj == null) {
            return 0;
        }
        if (obj instanceof byte[]) {
            return Arrays.hashCode((byte[]) obj);
        }
        if (obj instanceof int[]) {
            return Arrays.hashCode((int[]) obj);
        }
        if (obj instanceof long[]) {
            return Arrays.hashCode((long[]) obj);
        }
        int iPigeonDeepHashCode2 = 1;
        if (obj instanceof double[]) {
            double[] dArr = (double[]) obj;
            int length = dArr.length;
            while (iPigeonDeepHashCode < length) {
                iPigeonDeepHashCode2 = (iPigeonDeepHashCode2 * 31) + pigeonDoubleHashCode(dArr[iPigeonDeepHashCode]);
                iPigeonDeepHashCode++;
            }
            return iPigeonDeepHashCode2;
        }
        if (obj instanceof List) {
            Iterator it = ((List) obj).iterator();
            while (it.hasNext()) {
                iPigeonDeepHashCode2 = (iPigeonDeepHashCode2 * 31) + pigeonDeepHashCode(it.next());
            }
            return iPigeonDeepHashCode2;
        }
        if (obj instanceof Map) {
            for (Map.Entry entry : ((Map) obj).entrySet()) {
                iPigeonDeepHashCode += pigeonDeepHashCode(entry.getValue()) ^ (pigeonDeepHashCode(entry.getKey()) * 31);
            }
            return iPigeonDeepHashCode;
        }
        if (obj instanceof Object[]) {
            Object[] objArr = (Object[]) obj;
            int length2 = objArr.length;
            while (iPigeonDeepHashCode < length2) {
                iPigeonDeepHashCode2 = (iPigeonDeepHashCode2 * 31) + pigeonDeepHashCode(objArr[iPigeonDeepHashCode]);
                iPigeonDeepHashCode++;
            }
            return iPigeonDeepHashCode2;
        }
        if (obj instanceof Double) {
            return pigeonDoubleHashCode(((Double) obj).doubleValue());
        }
        if (obj instanceof Float) {
            return pigeonFloatHashCode(((Float) obj).floatValue());
        }
        return obj.hashCode();
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

    public enum ActionCodeInfoOperation {
        UNKNOWN(0),
        PASSWORD_RESET(1),
        VERIFY_EMAIL(2),
        RECOVER_EMAIL(3),
        EMAIL_SIGN_IN(4),
        VERIFY_AND_CHANGE_EMAIL(5),
        REVERT_SECOND_FACTOR_ADDITION(6);

        final int index;

        ActionCodeInfoOperation(int i) {
            this.index = i;
        }
    }

    public static final class InternalMultiFactorSession {
        private String id;

        public String getId() {
            return this.id;
        }

        public void setId(String str) {
            if (str == null) {
                throw new IllegalStateException("Nonnull field \"id\" is null.");
            }
            this.id = str;
        }

        InternalMultiFactorSession() {
        }

        public boolean equals(Object obj) {
            if (this == obj) {
                return true;
            }
            if (obj == null || getClass() != obj.getClass()) {
                return false;
            }
            return GeneratedAndroidFirebaseAuth.pigeonDeepEquals(this.id, ((InternalMultiFactorSession) obj).id);
        }

        public int hashCode() {
            return GeneratedAndroidFirebaseAuth.pigeonDeepHashCode(new Object[]{getClass(), this.id});
        }

        public static final class Builder {
            private String id;

            public Builder setId(String str) {
                this.id = str;
                return this;
            }

            public InternalMultiFactorSession build() {
                InternalMultiFactorSession internalMultiFactorSession = new InternalMultiFactorSession();
                internalMultiFactorSession.setId(this.id);
                return internalMultiFactorSession;
            }
        }

        public ArrayList<Object> toList() {
            ArrayList<Object> arrayList = new ArrayList<>(1);
            arrayList.add(this.id);
            return arrayList;
        }

        static InternalMultiFactorSession fromList(ArrayList<Object> arrayList) {
            InternalMultiFactorSession internalMultiFactorSession = new InternalMultiFactorSession();
            internalMultiFactorSession.setId((String) arrayList.get(0));
            return internalMultiFactorSession;
        }
    }

    public static final class InternalPhoneMultiFactorAssertion {
        private String verificationCode;
        private String verificationId;

        public String getVerificationId() {
            return this.verificationId;
        }

        public void setVerificationId(String str) {
            if (str == null) {
                throw new IllegalStateException("Nonnull field \"verificationId\" is null.");
            }
            this.verificationId = str;
        }

        public String getVerificationCode() {
            return this.verificationCode;
        }

        public void setVerificationCode(String str) {
            if (str == null) {
                throw new IllegalStateException("Nonnull field \"verificationCode\" is null.");
            }
            this.verificationCode = str;
        }

        InternalPhoneMultiFactorAssertion() {
        }

        public boolean equals(Object obj) {
            if (this == obj) {
                return true;
            }
            if (obj != null && getClass() == obj.getClass()) {
                InternalPhoneMultiFactorAssertion internalPhoneMultiFactorAssertion = (InternalPhoneMultiFactorAssertion) obj;
                if (GeneratedAndroidFirebaseAuth.pigeonDeepEquals(this.verificationId, internalPhoneMultiFactorAssertion.verificationId) && GeneratedAndroidFirebaseAuth.pigeonDeepEquals(this.verificationCode, internalPhoneMultiFactorAssertion.verificationCode)) {
                    return true;
                }
            }
            return false;
        }

        public int hashCode() {
            return GeneratedAndroidFirebaseAuth.pigeonDeepHashCode(new Object[]{getClass(), this.verificationId, this.verificationCode});
        }

        public static final class Builder {
            private String verificationCode;
            private String verificationId;

            public Builder setVerificationId(String str) {
                this.verificationId = str;
                return this;
            }

            public Builder setVerificationCode(String str) {
                this.verificationCode = str;
                return this;
            }

            public InternalPhoneMultiFactorAssertion build() {
                InternalPhoneMultiFactorAssertion internalPhoneMultiFactorAssertion = new InternalPhoneMultiFactorAssertion();
                internalPhoneMultiFactorAssertion.setVerificationId(this.verificationId);
                internalPhoneMultiFactorAssertion.setVerificationCode(this.verificationCode);
                return internalPhoneMultiFactorAssertion;
            }
        }

        public ArrayList<Object> toList() {
            ArrayList<Object> arrayList = new ArrayList<>(2);
            arrayList.add(this.verificationId);
            arrayList.add(this.verificationCode);
            return arrayList;
        }

        static InternalPhoneMultiFactorAssertion fromList(ArrayList<Object> arrayList) {
            InternalPhoneMultiFactorAssertion internalPhoneMultiFactorAssertion = new InternalPhoneMultiFactorAssertion();
            internalPhoneMultiFactorAssertion.setVerificationId((String) arrayList.get(0));
            internalPhoneMultiFactorAssertion.setVerificationCode((String) arrayList.get(1));
            return internalPhoneMultiFactorAssertion;
        }
    }

    public static final class InternalMultiFactorInfo {
        private String displayName;
        private Double enrollmentTimestamp;
        private String factorId;
        private String phoneNumber;
        private String uid;

        public String getDisplayName() {
            return this.displayName;
        }

        public void setDisplayName(String str) {
            this.displayName = str;
        }

        public Double getEnrollmentTimestamp() {
            return this.enrollmentTimestamp;
        }

        public void setEnrollmentTimestamp(Double d) {
            if (d == null) {
                throw new IllegalStateException("Nonnull field \"enrollmentTimestamp\" is null.");
            }
            this.enrollmentTimestamp = d;
        }

        public String getFactorId() {
            return this.factorId;
        }

        public void setFactorId(String str) {
            this.factorId = str;
        }

        public String getUid() {
            return this.uid;
        }

        public void setUid(String str) {
            if (str == null) {
                throw new IllegalStateException("Nonnull field \"uid\" is null.");
            }
            this.uid = str;
        }

        public String getPhoneNumber() {
            return this.phoneNumber;
        }

        public void setPhoneNumber(String str) {
            this.phoneNumber = str;
        }

        InternalMultiFactorInfo() {
        }

        public boolean equals(Object obj) {
            if (this == obj) {
                return true;
            }
            if (obj != null && getClass() == obj.getClass()) {
                InternalMultiFactorInfo internalMultiFactorInfo = (InternalMultiFactorInfo) obj;
                if (GeneratedAndroidFirebaseAuth.pigeonDeepEquals(this.displayName, internalMultiFactorInfo.displayName) && GeneratedAndroidFirebaseAuth.pigeonDeepEquals(this.enrollmentTimestamp, internalMultiFactorInfo.enrollmentTimestamp) && GeneratedAndroidFirebaseAuth.pigeonDeepEquals(this.factorId, internalMultiFactorInfo.factorId) && GeneratedAndroidFirebaseAuth.pigeonDeepEquals(this.uid, internalMultiFactorInfo.uid) && GeneratedAndroidFirebaseAuth.pigeonDeepEquals(this.phoneNumber, internalMultiFactorInfo.phoneNumber)) {
                    return true;
                }
            }
            return false;
        }

        public int hashCode() {
            return GeneratedAndroidFirebaseAuth.pigeonDeepHashCode(new Object[]{getClass(), this.displayName, this.enrollmentTimestamp, this.factorId, this.uid, this.phoneNumber});
        }

        public static final class Builder {
            private String displayName;
            private Double enrollmentTimestamp;
            private String factorId;
            private String phoneNumber;
            private String uid;

            public Builder setDisplayName(String str) {
                this.displayName = str;
                return this;
            }

            public Builder setEnrollmentTimestamp(Double d) {
                this.enrollmentTimestamp = d;
                return this;
            }

            public Builder setFactorId(String str) {
                this.factorId = str;
                return this;
            }

            public Builder setUid(String str) {
                this.uid = str;
                return this;
            }

            public Builder setPhoneNumber(String str) {
                this.phoneNumber = str;
                return this;
            }

            public InternalMultiFactorInfo build() {
                InternalMultiFactorInfo internalMultiFactorInfo = new InternalMultiFactorInfo();
                internalMultiFactorInfo.setDisplayName(this.displayName);
                internalMultiFactorInfo.setEnrollmentTimestamp(this.enrollmentTimestamp);
                internalMultiFactorInfo.setFactorId(this.factorId);
                internalMultiFactorInfo.setUid(this.uid);
                internalMultiFactorInfo.setPhoneNumber(this.phoneNumber);
                return internalMultiFactorInfo;
            }
        }

        public ArrayList<Object> toList() {
            ArrayList<Object> arrayList = new ArrayList<>(5);
            arrayList.add(this.displayName);
            arrayList.add(this.enrollmentTimestamp);
            arrayList.add(this.factorId);
            arrayList.add(this.uid);
            arrayList.add(this.phoneNumber);
            return arrayList;
        }

        static InternalMultiFactorInfo fromList(ArrayList<Object> arrayList) {
            InternalMultiFactorInfo internalMultiFactorInfo = new InternalMultiFactorInfo();
            internalMultiFactorInfo.setDisplayName((String) arrayList.get(0));
            internalMultiFactorInfo.setEnrollmentTimestamp((Double) arrayList.get(1));
            internalMultiFactorInfo.setFactorId((String) arrayList.get(2));
            internalMultiFactorInfo.setUid((String) arrayList.get(3));
            internalMultiFactorInfo.setPhoneNumber((String) arrayList.get(4));
            return internalMultiFactorInfo;
        }
    }

    public static final class AuthPigeonFirebaseApp {
        private String appName;
        private String customAuthDomain;
        private String tenantId;

        public String getAppName() {
            return this.appName;
        }

        public void setAppName(String str) {
            if (str == null) {
                throw new IllegalStateException("Nonnull field \"appName\" is null.");
            }
            this.appName = str;
        }

        public String getTenantId() {
            return this.tenantId;
        }

        public void setTenantId(String str) {
            this.tenantId = str;
        }

        public String getCustomAuthDomain() {
            return this.customAuthDomain;
        }

        public void setCustomAuthDomain(String str) {
            this.customAuthDomain = str;
        }

        AuthPigeonFirebaseApp() {
        }

        public boolean equals(Object obj) {
            if (this == obj) {
                return true;
            }
            if (obj != null && getClass() == obj.getClass()) {
                AuthPigeonFirebaseApp authPigeonFirebaseApp = (AuthPigeonFirebaseApp) obj;
                if (GeneratedAndroidFirebaseAuth.pigeonDeepEquals(this.appName, authPigeonFirebaseApp.appName) && GeneratedAndroidFirebaseAuth.pigeonDeepEquals(this.tenantId, authPigeonFirebaseApp.tenantId) && GeneratedAndroidFirebaseAuth.pigeonDeepEquals(this.customAuthDomain, authPigeonFirebaseApp.customAuthDomain)) {
                    return true;
                }
            }
            return false;
        }

        public int hashCode() {
            return GeneratedAndroidFirebaseAuth.pigeonDeepHashCode(new Object[]{getClass(), this.appName, this.tenantId, this.customAuthDomain});
        }

        public static final class Builder {
            private String appName;
            private String customAuthDomain;
            private String tenantId;

            public Builder setAppName(String str) {
                this.appName = str;
                return this;
            }

            public Builder setTenantId(String str) {
                this.tenantId = str;
                return this;
            }

            public Builder setCustomAuthDomain(String str) {
                this.customAuthDomain = str;
                return this;
            }

            public AuthPigeonFirebaseApp build() {
                AuthPigeonFirebaseApp authPigeonFirebaseApp = new AuthPigeonFirebaseApp();
                authPigeonFirebaseApp.setAppName(this.appName);
                authPigeonFirebaseApp.setTenantId(this.tenantId);
                authPigeonFirebaseApp.setCustomAuthDomain(this.customAuthDomain);
                return authPigeonFirebaseApp;
            }
        }

        public ArrayList<Object> toList() {
            ArrayList<Object> arrayList = new ArrayList<>(3);
            arrayList.add(this.appName);
            arrayList.add(this.tenantId);
            arrayList.add(this.customAuthDomain);
            return arrayList;
        }

        static AuthPigeonFirebaseApp fromList(ArrayList<Object> arrayList) {
            AuthPigeonFirebaseApp authPigeonFirebaseApp = new AuthPigeonFirebaseApp();
            authPigeonFirebaseApp.setAppName((String) arrayList.get(0));
            authPigeonFirebaseApp.setTenantId((String) arrayList.get(1));
            authPigeonFirebaseApp.setCustomAuthDomain((String) arrayList.get(2));
            return authPigeonFirebaseApp;
        }
    }

    public static final class InternalActionCodeInfoData {
        private String email;
        private String previousEmail;

        public String getEmail() {
            return this.email;
        }

        public void setEmail(String str) {
            this.email = str;
        }

        public String getPreviousEmail() {
            return this.previousEmail;
        }

        public void setPreviousEmail(String str) {
            this.previousEmail = str;
        }

        public boolean equals(Object obj) {
            if (this == obj) {
                return true;
            }
            if (obj != null && getClass() == obj.getClass()) {
                InternalActionCodeInfoData internalActionCodeInfoData = (InternalActionCodeInfoData) obj;
                if (GeneratedAndroidFirebaseAuth.pigeonDeepEquals(this.email, internalActionCodeInfoData.email) && GeneratedAndroidFirebaseAuth.pigeonDeepEquals(this.previousEmail, internalActionCodeInfoData.previousEmail)) {
                    return true;
                }
            }
            return false;
        }

        public int hashCode() {
            return GeneratedAndroidFirebaseAuth.pigeonDeepHashCode(new Object[]{getClass(), this.email, this.previousEmail});
        }

        public static final class Builder {
            private String email;
            private String previousEmail;

            public Builder setEmail(String str) {
                this.email = str;
                return this;
            }

            public Builder setPreviousEmail(String str) {
                this.previousEmail = str;
                return this;
            }

            public InternalActionCodeInfoData build() {
                InternalActionCodeInfoData internalActionCodeInfoData = new InternalActionCodeInfoData();
                internalActionCodeInfoData.setEmail(this.email);
                internalActionCodeInfoData.setPreviousEmail(this.previousEmail);
                return internalActionCodeInfoData;
            }
        }

        public ArrayList<Object> toList() {
            ArrayList<Object> arrayList = new ArrayList<>(2);
            arrayList.add(this.email);
            arrayList.add(this.previousEmail);
            return arrayList;
        }

        static InternalActionCodeInfoData fromList(ArrayList<Object> arrayList) {
            InternalActionCodeInfoData internalActionCodeInfoData = new InternalActionCodeInfoData();
            internalActionCodeInfoData.setEmail((String) arrayList.get(0));
            internalActionCodeInfoData.setPreviousEmail((String) arrayList.get(1));
            return internalActionCodeInfoData;
        }
    }

    public static final class InternalActionCodeInfo {
        private InternalActionCodeInfoData data;
        private ActionCodeInfoOperation operation;

        public ActionCodeInfoOperation getOperation() {
            return this.operation;
        }

        public void setOperation(ActionCodeInfoOperation actionCodeInfoOperation) {
            if (actionCodeInfoOperation == null) {
                throw new IllegalStateException("Nonnull field \"operation\" is null.");
            }
            this.operation = actionCodeInfoOperation;
        }

        public InternalActionCodeInfoData getData() {
            return this.data;
        }

        public void setData(InternalActionCodeInfoData internalActionCodeInfoData) {
            if (internalActionCodeInfoData == null) {
                throw new IllegalStateException("Nonnull field \"data\" is null.");
            }
            this.data = internalActionCodeInfoData;
        }

        InternalActionCodeInfo() {
        }

        public boolean equals(Object obj) {
            if (this == obj) {
                return true;
            }
            if (obj != null && getClass() == obj.getClass()) {
                InternalActionCodeInfo internalActionCodeInfo = (InternalActionCodeInfo) obj;
                if (GeneratedAndroidFirebaseAuth.pigeonDeepEquals(this.operation, internalActionCodeInfo.operation) && GeneratedAndroidFirebaseAuth.pigeonDeepEquals(this.data, internalActionCodeInfo.data)) {
                    return true;
                }
            }
            return false;
        }

        public int hashCode() {
            return GeneratedAndroidFirebaseAuth.pigeonDeepHashCode(new Object[]{getClass(), this.operation, this.data});
        }

        public static final class Builder {
            private InternalActionCodeInfoData data;
            private ActionCodeInfoOperation operation;

            public Builder setOperation(ActionCodeInfoOperation actionCodeInfoOperation) {
                this.operation = actionCodeInfoOperation;
                return this;
            }

            public Builder setData(InternalActionCodeInfoData internalActionCodeInfoData) {
                this.data = internalActionCodeInfoData;
                return this;
            }

            public InternalActionCodeInfo build() {
                InternalActionCodeInfo internalActionCodeInfo = new InternalActionCodeInfo();
                internalActionCodeInfo.setOperation(this.operation);
                internalActionCodeInfo.setData(this.data);
                return internalActionCodeInfo;
            }
        }

        public ArrayList<Object> toList() {
            ArrayList<Object> arrayList = new ArrayList<>(2);
            arrayList.add(this.operation);
            arrayList.add(this.data);
            return arrayList;
        }

        static InternalActionCodeInfo fromList(ArrayList<Object> arrayList) {
            InternalActionCodeInfo internalActionCodeInfo = new InternalActionCodeInfo();
            internalActionCodeInfo.setOperation((ActionCodeInfoOperation) arrayList.get(0));
            internalActionCodeInfo.setData((InternalActionCodeInfoData) arrayList.get(1));
            return internalActionCodeInfo;
        }
    }

    public static final class InternalAdditionalUserInfo {
        private String authorizationCode;
        private Boolean isNewUser;
        private Map<String, Object> profile;
        private String providerId;
        private String username;

        public Boolean getIsNewUser() {
            return this.isNewUser;
        }

        public void setIsNewUser(Boolean bool) {
            if (bool == null) {
                throw new IllegalStateException("Nonnull field \"isNewUser\" is null.");
            }
            this.isNewUser = bool;
        }

        public String getProviderId() {
            return this.providerId;
        }

        public void setProviderId(String str) {
            this.providerId = str;
        }

        public String getUsername() {
            return this.username;
        }

        public void setUsername(String str) {
            this.username = str;
        }

        public String getAuthorizationCode() {
            return this.authorizationCode;
        }

        public void setAuthorizationCode(String str) {
            this.authorizationCode = str;
        }

        public Map<String, Object> getProfile() {
            return this.profile;
        }

        public void setProfile(Map<String, Object> map) {
            this.profile = map;
        }

        InternalAdditionalUserInfo() {
        }

        public boolean equals(Object obj) {
            if (this == obj) {
                return true;
            }
            if (obj != null && getClass() == obj.getClass()) {
                InternalAdditionalUserInfo internalAdditionalUserInfo = (InternalAdditionalUserInfo) obj;
                if (GeneratedAndroidFirebaseAuth.pigeonDeepEquals(this.isNewUser, internalAdditionalUserInfo.isNewUser) && GeneratedAndroidFirebaseAuth.pigeonDeepEquals(this.providerId, internalAdditionalUserInfo.providerId) && GeneratedAndroidFirebaseAuth.pigeonDeepEquals(this.username, internalAdditionalUserInfo.username) && GeneratedAndroidFirebaseAuth.pigeonDeepEquals(this.authorizationCode, internalAdditionalUserInfo.authorizationCode) && GeneratedAndroidFirebaseAuth.pigeonDeepEquals(this.profile, internalAdditionalUserInfo.profile)) {
                    return true;
                }
            }
            return false;
        }

        public int hashCode() {
            return GeneratedAndroidFirebaseAuth.pigeonDeepHashCode(new Object[]{getClass(), this.isNewUser, this.providerId, this.username, this.authorizationCode, this.profile});
        }

        public static final class Builder {
            private String authorizationCode;
            private Boolean isNewUser;
            private Map<String, Object> profile;
            private String providerId;
            private String username;

            public Builder setIsNewUser(Boolean bool) {
                this.isNewUser = bool;
                return this;
            }

            public Builder setProviderId(String str) {
                this.providerId = str;
                return this;
            }

            public Builder setUsername(String str) {
                this.username = str;
                return this;
            }

            public Builder setAuthorizationCode(String str) {
                this.authorizationCode = str;
                return this;
            }

            public Builder setProfile(Map<String, Object> map) {
                this.profile = map;
                return this;
            }

            public InternalAdditionalUserInfo build() {
                InternalAdditionalUserInfo internalAdditionalUserInfo = new InternalAdditionalUserInfo();
                internalAdditionalUserInfo.setIsNewUser(this.isNewUser);
                internalAdditionalUserInfo.setProviderId(this.providerId);
                internalAdditionalUserInfo.setUsername(this.username);
                internalAdditionalUserInfo.setAuthorizationCode(this.authorizationCode);
                internalAdditionalUserInfo.setProfile(this.profile);
                return internalAdditionalUserInfo;
            }
        }

        public ArrayList<Object> toList() {
            ArrayList<Object> arrayList = new ArrayList<>(5);
            arrayList.add(this.isNewUser);
            arrayList.add(this.providerId);
            arrayList.add(this.username);
            arrayList.add(this.authorizationCode);
            arrayList.add(this.profile);
            return arrayList;
        }

        static InternalAdditionalUserInfo fromList(ArrayList<Object> arrayList) {
            InternalAdditionalUserInfo internalAdditionalUserInfo = new InternalAdditionalUserInfo();
            internalAdditionalUserInfo.setIsNewUser((Boolean) arrayList.get(0));
            internalAdditionalUserInfo.setProviderId((String) arrayList.get(1));
            internalAdditionalUserInfo.setUsername((String) arrayList.get(2));
            internalAdditionalUserInfo.setAuthorizationCode((String) arrayList.get(3));
            internalAdditionalUserInfo.setProfile((Map) arrayList.get(4));
            return internalAdditionalUserInfo;
        }
    }

    public static final class InternalAuthCredential {
        private String accessToken;
        private Long nativeId;
        private String providerId;
        private String signInMethod;

        public String getProviderId() {
            return this.providerId;
        }

        public void setProviderId(String str) {
            if (str == null) {
                throw new IllegalStateException("Nonnull field \"providerId\" is null.");
            }
            this.providerId = str;
        }

        public String getSignInMethod() {
            return this.signInMethod;
        }

        public void setSignInMethod(String str) {
            if (str == null) {
                throw new IllegalStateException("Nonnull field \"signInMethod\" is null.");
            }
            this.signInMethod = str;
        }

        public Long getNativeId() {
            return this.nativeId;
        }

        public void setNativeId(Long l) {
            if (l == null) {
                throw new IllegalStateException("Nonnull field \"nativeId\" is null.");
            }
            this.nativeId = l;
        }

        public String getAccessToken() {
            return this.accessToken;
        }

        public void setAccessToken(String str) {
            this.accessToken = str;
        }

        InternalAuthCredential() {
        }

        public boolean equals(Object obj) {
            if (this == obj) {
                return true;
            }
            if (obj != null && getClass() == obj.getClass()) {
                InternalAuthCredential internalAuthCredential = (InternalAuthCredential) obj;
                if (GeneratedAndroidFirebaseAuth.pigeonDeepEquals(this.providerId, internalAuthCredential.providerId) && GeneratedAndroidFirebaseAuth.pigeonDeepEquals(this.signInMethod, internalAuthCredential.signInMethod) && GeneratedAndroidFirebaseAuth.pigeonDeepEquals(this.nativeId, internalAuthCredential.nativeId) && GeneratedAndroidFirebaseAuth.pigeonDeepEquals(this.accessToken, internalAuthCredential.accessToken)) {
                    return true;
                }
            }
            return false;
        }

        public int hashCode() {
            return GeneratedAndroidFirebaseAuth.pigeonDeepHashCode(new Object[]{getClass(), this.providerId, this.signInMethod, this.nativeId, this.accessToken});
        }

        public static final class Builder {
            private String accessToken;
            private Long nativeId;
            private String providerId;
            private String signInMethod;

            public Builder setProviderId(String str) {
                this.providerId = str;
                return this;
            }

            public Builder setSignInMethod(String str) {
                this.signInMethod = str;
                return this;
            }

            public Builder setNativeId(Long l) {
                this.nativeId = l;
                return this;
            }

            public Builder setAccessToken(String str) {
                this.accessToken = str;
                return this;
            }

            public InternalAuthCredential build() {
                InternalAuthCredential internalAuthCredential = new InternalAuthCredential();
                internalAuthCredential.setProviderId(this.providerId);
                internalAuthCredential.setSignInMethod(this.signInMethod);
                internalAuthCredential.setNativeId(this.nativeId);
                internalAuthCredential.setAccessToken(this.accessToken);
                return internalAuthCredential;
            }
        }

        public ArrayList<Object> toList() {
            ArrayList<Object> arrayList = new ArrayList<>(4);
            arrayList.add(this.providerId);
            arrayList.add(this.signInMethod);
            arrayList.add(this.nativeId);
            arrayList.add(this.accessToken);
            return arrayList;
        }

        static InternalAuthCredential fromList(ArrayList<Object> arrayList) {
            InternalAuthCredential internalAuthCredential = new InternalAuthCredential();
            internalAuthCredential.setProviderId((String) arrayList.get(0));
            internalAuthCredential.setSignInMethod((String) arrayList.get(1));
            internalAuthCredential.setNativeId((Long) arrayList.get(2));
            internalAuthCredential.setAccessToken((String) arrayList.get(3));
            return internalAuthCredential;
        }
    }

    public static final class InternalUserInfo {
        private Long creationTimestamp;
        private String displayName;
        private String email;
        private Boolean isAnonymous;
        private Boolean isEmailVerified;
        private Long lastSignInTimestamp;
        private String phoneNumber;
        private String photoUrl;
        private String providerId;
        private String refreshToken;
        private String tenantId;
        private String uid;

        public String getUid() {
            return this.uid;
        }

        public void setUid(String str) {
            if (str == null) {
                throw new IllegalStateException("Nonnull field \"uid\" is null.");
            }
            this.uid = str;
        }

        public String getEmail() {
            return this.email;
        }

        public void setEmail(String str) {
            this.email = str;
        }

        public String getDisplayName() {
            return this.displayName;
        }

        public void setDisplayName(String str) {
            this.displayName = str;
        }

        public String getPhotoUrl() {
            return this.photoUrl;
        }

        public void setPhotoUrl(String str) {
            this.photoUrl = str;
        }

        public String getPhoneNumber() {
            return this.phoneNumber;
        }

        public void setPhoneNumber(String str) {
            this.phoneNumber = str;
        }

        public Boolean getIsAnonymous() {
            return this.isAnonymous;
        }

        public void setIsAnonymous(Boolean bool) {
            if (bool == null) {
                throw new IllegalStateException("Nonnull field \"isAnonymous\" is null.");
            }
            this.isAnonymous = bool;
        }

        public Boolean getIsEmailVerified() {
            return this.isEmailVerified;
        }

        public void setIsEmailVerified(Boolean bool) {
            if (bool == null) {
                throw new IllegalStateException("Nonnull field \"isEmailVerified\" is null.");
            }
            this.isEmailVerified = bool;
        }

        public String getProviderId() {
            return this.providerId;
        }

        public void setProviderId(String str) {
            this.providerId = str;
        }

        public String getTenantId() {
            return this.tenantId;
        }

        public void setTenantId(String str) {
            this.tenantId = str;
        }

        public String getRefreshToken() {
            return this.refreshToken;
        }

        public void setRefreshToken(String str) {
            this.refreshToken = str;
        }

        public Long getCreationTimestamp() {
            return this.creationTimestamp;
        }

        public void setCreationTimestamp(Long l) {
            this.creationTimestamp = l;
        }

        public Long getLastSignInTimestamp() {
            return this.lastSignInTimestamp;
        }

        public void setLastSignInTimestamp(Long l) {
            this.lastSignInTimestamp = l;
        }

        InternalUserInfo() {
        }

        public boolean equals(Object obj) {
            if (this == obj) {
                return true;
            }
            if (obj != null && getClass() == obj.getClass()) {
                InternalUserInfo internalUserInfo = (InternalUserInfo) obj;
                if (GeneratedAndroidFirebaseAuth.pigeonDeepEquals(this.uid, internalUserInfo.uid) && GeneratedAndroidFirebaseAuth.pigeonDeepEquals(this.email, internalUserInfo.email) && GeneratedAndroidFirebaseAuth.pigeonDeepEquals(this.displayName, internalUserInfo.displayName) && GeneratedAndroidFirebaseAuth.pigeonDeepEquals(this.photoUrl, internalUserInfo.photoUrl) && GeneratedAndroidFirebaseAuth.pigeonDeepEquals(this.phoneNumber, internalUserInfo.phoneNumber) && GeneratedAndroidFirebaseAuth.pigeonDeepEquals(this.isAnonymous, internalUserInfo.isAnonymous) && GeneratedAndroidFirebaseAuth.pigeonDeepEquals(this.isEmailVerified, internalUserInfo.isEmailVerified) && GeneratedAndroidFirebaseAuth.pigeonDeepEquals(this.providerId, internalUserInfo.providerId) && GeneratedAndroidFirebaseAuth.pigeonDeepEquals(this.tenantId, internalUserInfo.tenantId) && GeneratedAndroidFirebaseAuth.pigeonDeepEquals(this.refreshToken, internalUserInfo.refreshToken) && GeneratedAndroidFirebaseAuth.pigeonDeepEquals(this.creationTimestamp, internalUserInfo.creationTimestamp) && GeneratedAndroidFirebaseAuth.pigeonDeepEquals(this.lastSignInTimestamp, internalUserInfo.lastSignInTimestamp)) {
                    return true;
                }
            }
            return false;
        }

        public int hashCode() {
            return GeneratedAndroidFirebaseAuth.pigeonDeepHashCode(new Object[]{getClass(), this.uid, this.email, this.displayName, this.photoUrl, this.phoneNumber, this.isAnonymous, this.isEmailVerified, this.providerId, this.tenantId, this.refreshToken, this.creationTimestamp, this.lastSignInTimestamp});
        }

        public static final class Builder {
            private Long creationTimestamp;
            private String displayName;
            private String email;
            private Boolean isAnonymous;
            private Boolean isEmailVerified;
            private Long lastSignInTimestamp;
            private String phoneNumber;
            private String photoUrl;
            private String providerId;
            private String refreshToken;
            private String tenantId;
            private String uid;

            public Builder setUid(String str) {
                this.uid = str;
                return this;
            }

            public Builder setEmail(String str) {
                this.email = str;
                return this;
            }

            public Builder setDisplayName(String str) {
                this.displayName = str;
                return this;
            }

            public Builder setPhotoUrl(String str) {
                this.photoUrl = str;
                return this;
            }

            public Builder setPhoneNumber(String str) {
                this.phoneNumber = str;
                return this;
            }

            public Builder setIsAnonymous(Boolean bool) {
                this.isAnonymous = bool;
                return this;
            }

            public Builder setIsEmailVerified(Boolean bool) {
                this.isEmailVerified = bool;
                return this;
            }

            public Builder setProviderId(String str) {
                this.providerId = str;
                return this;
            }

            public Builder setTenantId(String str) {
                this.tenantId = str;
                return this;
            }

            public Builder setRefreshToken(String str) {
                this.refreshToken = str;
                return this;
            }

            public Builder setCreationTimestamp(Long l) {
                this.creationTimestamp = l;
                return this;
            }

            public Builder setLastSignInTimestamp(Long l) {
                this.lastSignInTimestamp = l;
                return this;
            }

            public InternalUserInfo build() {
                InternalUserInfo internalUserInfo = new InternalUserInfo();
                internalUserInfo.setUid(this.uid);
                internalUserInfo.setEmail(this.email);
                internalUserInfo.setDisplayName(this.displayName);
                internalUserInfo.setPhotoUrl(this.photoUrl);
                internalUserInfo.setPhoneNumber(this.phoneNumber);
                internalUserInfo.setIsAnonymous(this.isAnonymous);
                internalUserInfo.setIsEmailVerified(this.isEmailVerified);
                internalUserInfo.setProviderId(this.providerId);
                internalUserInfo.setTenantId(this.tenantId);
                internalUserInfo.setRefreshToken(this.refreshToken);
                internalUserInfo.setCreationTimestamp(this.creationTimestamp);
                internalUserInfo.setLastSignInTimestamp(this.lastSignInTimestamp);
                return internalUserInfo;
            }
        }

        public ArrayList<Object> toList() {
            ArrayList<Object> arrayList = new ArrayList<>(12);
            arrayList.add(this.uid);
            arrayList.add(this.email);
            arrayList.add(this.displayName);
            arrayList.add(this.photoUrl);
            arrayList.add(this.phoneNumber);
            arrayList.add(this.isAnonymous);
            arrayList.add(this.isEmailVerified);
            arrayList.add(this.providerId);
            arrayList.add(this.tenantId);
            arrayList.add(this.refreshToken);
            arrayList.add(this.creationTimestamp);
            arrayList.add(this.lastSignInTimestamp);
            return arrayList;
        }

        static InternalUserInfo fromList(ArrayList<Object> arrayList) {
            InternalUserInfo internalUserInfo = new InternalUserInfo();
            internalUserInfo.setUid((String) arrayList.get(0));
            internalUserInfo.setEmail((String) arrayList.get(1));
            internalUserInfo.setDisplayName((String) arrayList.get(2));
            internalUserInfo.setPhotoUrl((String) arrayList.get(3));
            internalUserInfo.setPhoneNumber((String) arrayList.get(4));
            internalUserInfo.setIsAnonymous((Boolean) arrayList.get(5));
            internalUserInfo.setIsEmailVerified((Boolean) arrayList.get(6));
            internalUserInfo.setProviderId((String) arrayList.get(7));
            internalUserInfo.setTenantId((String) arrayList.get(8));
            internalUserInfo.setRefreshToken((String) arrayList.get(9));
            internalUserInfo.setCreationTimestamp((Long) arrayList.get(10));
            internalUserInfo.setLastSignInTimestamp((Long) arrayList.get(11));
            return internalUserInfo;
        }
    }

    public static final class InternalUserDetails {
        private List<Map<Object, Object>> providerData;
        private InternalUserInfo userInfo;

        public InternalUserInfo getUserInfo() {
            return this.userInfo;
        }

        public void setUserInfo(InternalUserInfo internalUserInfo) {
            if (internalUserInfo == null) {
                throw new IllegalStateException("Nonnull field \"userInfo\" is null.");
            }
            this.userInfo = internalUserInfo;
        }

        public List<Map<Object, Object>> getProviderData() {
            return this.providerData;
        }

        public void setProviderData(List<Map<Object, Object>> list) {
            if (list == null) {
                throw new IllegalStateException("Nonnull field \"providerData\" is null.");
            }
            this.providerData = list;
        }

        InternalUserDetails() {
        }

        public boolean equals(Object obj) {
            if (this == obj) {
                return true;
            }
            if (obj != null && getClass() == obj.getClass()) {
                InternalUserDetails internalUserDetails = (InternalUserDetails) obj;
                if (GeneratedAndroidFirebaseAuth.pigeonDeepEquals(this.userInfo, internalUserDetails.userInfo) && GeneratedAndroidFirebaseAuth.pigeonDeepEquals(this.providerData, internalUserDetails.providerData)) {
                    return true;
                }
            }
            return false;
        }

        public int hashCode() {
            return GeneratedAndroidFirebaseAuth.pigeonDeepHashCode(new Object[]{getClass(), this.userInfo, this.providerData});
        }

        public static final class Builder {
            private List<Map<Object, Object>> providerData;
            private InternalUserInfo userInfo;

            public Builder setUserInfo(InternalUserInfo internalUserInfo) {
                this.userInfo = internalUserInfo;
                return this;
            }

            public Builder setProviderData(List<Map<Object, Object>> list) {
                this.providerData = list;
                return this;
            }

            public InternalUserDetails build() {
                InternalUserDetails internalUserDetails = new InternalUserDetails();
                internalUserDetails.setUserInfo(this.userInfo);
                internalUserDetails.setProviderData(this.providerData);
                return internalUserDetails;
            }
        }

        public ArrayList<Object> toList() {
            ArrayList<Object> arrayList = new ArrayList<>(2);
            arrayList.add(this.userInfo);
            arrayList.add(this.providerData);
            return arrayList;
        }

        static InternalUserDetails fromList(ArrayList<Object> arrayList) {
            InternalUserDetails internalUserDetails = new InternalUserDetails();
            internalUserDetails.setUserInfo((InternalUserInfo) arrayList.get(0));
            internalUserDetails.setProviderData((List) arrayList.get(1));
            return internalUserDetails;
        }
    }

    public static final class InternalUserCredential {
        private InternalAdditionalUserInfo additionalUserInfo;
        private InternalAuthCredential credential;
        private InternalUserDetails user;

        public InternalUserDetails getUser() {
            return this.user;
        }

        public void setUser(InternalUserDetails internalUserDetails) {
            this.user = internalUserDetails;
        }

        public InternalAdditionalUserInfo getAdditionalUserInfo() {
            return this.additionalUserInfo;
        }

        public void setAdditionalUserInfo(InternalAdditionalUserInfo internalAdditionalUserInfo) {
            this.additionalUserInfo = internalAdditionalUserInfo;
        }

        public InternalAuthCredential getCredential() {
            return this.credential;
        }

        public void setCredential(InternalAuthCredential internalAuthCredential) {
            this.credential = internalAuthCredential;
        }

        public boolean equals(Object obj) {
            if (this == obj) {
                return true;
            }
            if (obj != null && getClass() == obj.getClass()) {
                InternalUserCredential internalUserCredential = (InternalUserCredential) obj;
                if (GeneratedAndroidFirebaseAuth.pigeonDeepEquals(this.user, internalUserCredential.user) && GeneratedAndroidFirebaseAuth.pigeonDeepEquals(this.additionalUserInfo, internalUserCredential.additionalUserInfo) && GeneratedAndroidFirebaseAuth.pigeonDeepEquals(this.credential, internalUserCredential.credential)) {
                    return true;
                }
            }
            return false;
        }

        public int hashCode() {
            return GeneratedAndroidFirebaseAuth.pigeonDeepHashCode(new Object[]{getClass(), this.user, this.additionalUserInfo, this.credential});
        }

        public static final class Builder {
            private InternalAdditionalUserInfo additionalUserInfo;
            private InternalAuthCredential credential;
            private InternalUserDetails user;

            public Builder setUser(InternalUserDetails internalUserDetails) {
                this.user = internalUserDetails;
                return this;
            }

            public Builder setAdditionalUserInfo(InternalAdditionalUserInfo internalAdditionalUserInfo) {
                this.additionalUserInfo = internalAdditionalUserInfo;
                return this;
            }

            public Builder setCredential(InternalAuthCredential internalAuthCredential) {
                this.credential = internalAuthCredential;
                return this;
            }

            public InternalUserCredential build() {
                InternalUserCredential internalUserCredential = new InternalUserCredential();
                internalUserCredential.setUser(this.user);
                internalUserCredential.setAdditionalUserInfo(this.additionalUserInfo);
                internalUserCredential.setCredential(this.credential);
                return internalUserCredential;
            }
        }

        public ArrayList<Object> toList() {
            ArrayList<Object> arrayList = new ArrayList<>(3);
            arrayList.add(this.user);
            arrayList.add(this.additionalUserInfo);
            arrayList.add(this.credential);
            return arrayList;
        }

        static InternalUserCredential fromList(ArrayList<Object> arrayList) {
            InternalUserCredential internalUserCredential = new InternalUserCredential();
            internalUserCredential.setUser((InternalUserDetails) arrayList.get(0));
            internalUserCredential.setAdditionalUserInfo((InternalAdditionalUserInfo) arrayList.get(1));
            internalUserCredential.setCredential((InternalAuthCredential) arrayList.get(2));
            return internalUserCredential;
        }
    }

    public static final class InternalAuthCredentialInput {
        private String accessToken;
        private String providerId;
        private String signInMethod;
        private String token;

        public String getProviderId() {
            return this.providerId;
        }

        public void setProviderId(String str) {
            if (str == null) {
                throw new IllegalStateException("Nonnull field \"providerId\" is null.");
            }
            this.providerId = str;
        }

        public String getSignInMethod() {
            return this.signInMethod;
        }

        public void setSignInMethod(String str) {
            if (str == null) {
                throw new IllegalStateException("Nonnull field \"signInMethod\" is null.");
            }
            this.signInMethod = str;
        }

        public String getToken() {
            return this.token;
        }

        public void setToken(String str) {
            this.token = str;
        }

        public String getAccessToken() {
            return this.accessToken;
        }

        public void setAccessToken(String str) {
            this.accessToken = str;
        }

        InternalAuthCredentialInput() {
        }

        public boolean equals(Object obj) {
            if (this == obj) {
                return true;
            }
            if (obj != null && getClass() == obj.getClass()) {
                InternalAuthCredentialInput internalAuthCredentialInput = (InternalAuthCredentialInput) obj;
                if (GeneratedAndroidFirebaseAuth.pigeonDeepEquals(this.providerId, internalAuthCredentialInput.providerId) && GeneratedAndroidFirebaseAuth.pigeonDeepEquals(this.signInMethod, internalAuthCredentialInput.signInMethod) && GeneratedAndroidFirebaseAuth.pigeonDeepEquals(this.token, internalAuthCredentialInput.token) && GeneratedAndroidFirebaseAuth.pigeonDeepEquals(this.accessToken, internalAuthCredentialInput.accessToken)) {
                    return true;
                }
            }
            return false;
        }

        public int hashCode() {
            return GeneratedAndroidFirebaseAuth.pigeonDeepHashCode(new Object[]{getClass(), this.providerId, this.signInMethod, this.token, this.accessToken});
        }

        public static final class Builder {
            private String accessToken;
            private String providerId;
            private String signInMethod;
            private String token;

            public Builder setProviderId(String str) {
                this.providerId = str;
                return this;
            }

            public Builder setSignInMethod(String str) {
                this.signInMethod = str;
                return this;
            }

            public Builder setToken(String str) {
                this.token = str;
                return this;
            }

            public Builder setAccessToken(String str) {
                this.accessToken = str;
                return this;
            }

            public InternalAuthCredentialInput build() {
                InternalAuthCredentialInput internalAuthCredentialInput = new InternalAuthCredentialInput();
                internalAuthCredentialInput.setProviderId(this.providerId);
                internalAuthCredentialInput.setSignInMethod(this.signInMethod);
                internalAuthCredentialInput.setToken(this.token);
                internalAuthCredentialInput.setAccessToken(this.accessToken);
                return internalAuthCredentialInput;
            }
        }

        public ArrayList<Object> toList() {
            ArrayList<Object> arrayList = new ArrayList<>(4);
            arrayList.add(this.providerId);
            arrayList.add(this.signInMethod);
            arrayList.add(this.token);
            arrayList.add(this.accessToken);
            return arrayList;
        }

        static InternalAuthCredentialInput fromList(ArrayList<Object> arrayList) {
            InternalAuthCredentialInput internalAuthCredentialInput = new InternalAuthCredentialInput();
            internalAuthCredentialInput.setProviderId((String) arrayList.get(0));
            internalAuthCredentialInput.setSignInMethod((String) arrayList.get(1));
            internalAuthCredentialInput.setToken((String) arrayList.get(2));
            internalAuthCredentialInput.setAccessToken((String) arrayList.get(3));
            return internalAuthCredentialInput;
        }
    }

    public static final class InternalActionCodeSettings {
        private Boolean androidInstallApp;
        private String androidMinimumVersion;
        private String androidPackageName;
        private String dynamicLinkDomain;
        private Boolean handleCodeInApp;
        private String iOSBundleId;
        private String linkDomain;
        private String url;

        public String getUrl() {
            return this.url;
        }

        public void setUrl(String str) {
            if (str == null) {
                throw new IllegalStateException("Nonnull field \"url\" is null.");
            }
            this.url = str;
        }

        public String getDynamicLinkDomain() {
            return this.dynamicLinkDomain;
        }

        public void setDynamicLinkDomain(String str) {
            this.dynamicLinkDomain = str;
        }

        public Boolean getHandleCodeInApp() {
            return this.handleCodeInApp;
        }

        public void setHandleCodeInApp(Boolean bool) {
            if (bool == null) {
                throw new IllegalStateException("Nonnull field \"handleCodeInApp\" is null.");
            }
            this.handleCodeInApp = bool;
        }

        public String getIOSBundleId() {
            return this.iOSBundleId;
        }

        public void setIOSBundleId(String str) {
            this.iOSBundleId = str;
        }

        public String getAndroidPackageName() {
            return this.androidPackageName;
        }

        public void setAndroidPackageName(String str) {
            this.androidPackageName = str;
        }

        public Boolean getAndroidInstallApp() {
            return this.androidInstallApp;
        }

        public void setAndroidInstallApp(Boolean bool) {
            if (bool == null) {
                throw new IllegalStateException("Nonnull field \"androidInstallApp\" is null.");
            }
            this.androidInstallApp = bool;
        }

        public String getAndroidMinimumVersion() {
            return this.androidMinimumVersion;
        }

        public void setAndroidMinimumVersion(String str) {
            this.androidMinimumVersion = str;
        }

        public String getLinkDomain() {
            return this.linkDomain;
        }

        public void setLinkDomain(String str) {
            this.linkDomain = str;
        }

        InternalActionCodeSettings() {
        }

        public boolean equals(Object obj) {
            if (this == obj) {
                return true;
            }
            if (obj != null && getClass() == obj.getClass()) {
                InternalActionCodeSettings internalActionCodeSettings = (InternalActionCodeSettings) obj;
                if (GeneratedAndroidFirebaseAuth.pigeonDeepEquals(this.url, internalActionCodeSettings.url) && GeneratedAndroidFirebaseAuth.pigeonDeepEquals(this.dynamicLinkDomain, internalActionCodeSettings.dynamicLinkDomain) && GeneratedAndroidFirebaseAuth.pigeonDeepEquals(this.handleCodeInApp, internalActionCodeSettings.handleCodeInApp) && GeneratedAndroidFirebaseAuth.pigeonDeepEquals(this.iOSBundleId, internalActionCodeSettings.iOSBundleId) && GeneratedAndroidFirebaseAuth.pigeonDeepEquals(this.androidPackageName, internalActionCodeSettings.androidPackageName) && GeneratedAndroidFirebaseAuth.pigeonDeepEquals(this.androidInstallApp, internalActionCodeSettings.androidInstallApp) && GeneratedAndroidFirebaseAuth.pigeonDeepEquals(this.androidMinimumVersion, internalActionCodeSettings.androidMinimumVersion) && GeneratedAndroidFirebaseAuth.pigeonDeepEquals(this.linkDomain, internalActionCodeSettings.linkDomain)) {
                    return true;
                }
            }
            return false;
        }

        public int hashCode() {
            return GeneratedAndroidFirebaseAuth.pigeonDeepHashCode(new Object[]{getClass(), this.url, this.dynamicLinkDomain, this.handleCodeInApp, this.iOSBundleId, this.androidPackageName, this.androidInstallApp, this.androidMinimumVersion, this.linkDomain});
        }

        public static final class Builder {
            private Boolean androidInstallApp;
            private String androidMinimumVersion;
            private String androidPackageName;
            private String dynamicLinkDomain;
            private Boolean handleCodeInApp;
            private String iOSBundleId;
            private String linkDomain;
            private String url;

            public Builder setUrl(String str) {
                this.url = str;
                return this;
            }

            public Builder setDynamicLinkDomain(String str) {
                this.dynamicLinkDomain = str;
                return this;
            }

            public Builder setHandleCodeInApp(Boolean bool) {
                this.handleCodeInApp = bool;
                return this;
            }

            public Builder setIOSBundleId(String str) {
                this.iOSBundleId = str;
                return this;
            }

            public Builder setAndroidPackageName(String str) {
                this.androidPackageName = str;
                return this;
            }

            public Builder setAndroidInstallApp(Boolean bool) {
                this.androidInstallApp = bool;
                return this;
            }

            public Builder setAndroidMinimumVersion(String str) {
                this.androidMinimumVersion = str;
                return this;
            }

            public Builder setLinkDomain(String str) {
                this.linkDomain = str;
                return this;
            }

            public InternalActionCodeSettings build() {
                InternalActionCodeSettings internalActionCodeSettings = new InternalActionCodeSettings();
                internalActionCodeSettings.setUrl(this.url);
                internalActionCodeSettings.setDynamicLinkDomain(this.dynamicLinkDomain);
                internalActionCodeSettings.setHandleCodeInApp(this.handleCodeInApp);
                internalActionCodeSettings.setIOSBundleId(this.iOSBundleId);
                internalActionCodeSettings.setAndroidPackageName(this.androidPackageName);
                internalActionCodeSettings.setAndroidInstallApp(this.androidInstallApp);
                internalActionCodeSettings.setAndroidMinimumVersion(this.androidMinimumVersion);
                internalActionCodeSettings.setLinkDomain(this.linkDomain);
                return internalActionCodeSettings;
            }
        }

        public ArrayList<Object> toList() {
            ArrayList<Object> arrayList = new ArrayList<>(8);
            arrayList.add(this.url);
            arrayList.add(this.dynamicLinkDomain);
            arrayList.add(this.handleCodeInApp);
            arrayList.add(this.iOSBundleId);
            arrayList.add(this.androidPackageName);
            arrayList.add(this.androidInstallApp);
            arrayList.add(this.androidMinimumVersion);
            arrayList.add(this.linkDomain);
            return arrayList;
        }

        static InternalActionCodeSettings fromList(ArrayList<Object> arrayList) {
            InternalActionCodeSettings internalActionCodeSettings = new InternalActionCodeSettings();
            internalActionCodeSettings.setUrl((String) arrayList.get(0));
            internalActionCodeSettings.setDynamicLinkDomain((String) arrayList.get(1));
            internalActionCodeSettings.setHandleCodeInApp((Boolean) arrayList.get(2));
            internalActionCodeSettings.setIOSBundleId((String) arrayList.get(3));
            internalActionCodeSettings.setAndroidPackageName((String) arrayList.get(4));
            internalActionCodeSettings.setAndroidInstallApp((Boolean) arrayList.get(5));
            internalActionCodeSettings.setAndroidMinimumVersion((String) arrayList.get(6));
            internalActionCodeSettings.setLinkDomain((String) arrayList.get(7));
            return internalActionCodeSettings;
        }
    }

    public static final class InternalFirebaseAuthSettings {
        private Boolean appVerificationDisabledForTesting;
        private Boolean forceRecaptchaFlow;
        private String phoneNumber;
        private String smsCode;
        private String userAccessGroup;

        public Boolean getAppVerificationDisabledForTesting() {
            return this.appVerificationDisabledForTesting;
        }

        public void setAppVerificationDisabledForTesting(Boolean bool) {
            if (bool == null) {
                throw new IllegalStateException("Nonnull field \"appVerificationDisabledForTesting\" is null.");
            }
            this.appVerificationDisabledForTesting = bool;
        }

        public String getUserAccessGroup() {
            return this.userAccessGroup;
        }

        public void setUserAccessGroup(String str) {
            this.userAccessGroup = str;
        }

        public String getPhoneNumber() {
            return this.phoneNumber;
        }

        public void setPhoneNumber(String str) {
            this.phoneNumber = str;
        }

        public String getSmsCode() {
            return this.smsCode;
        }

        public void setSmsCode(String str) {
            this.smsCode = str;
        }

        public Boolean getForceRecaptchaFlow() {
            return this.forceRecaptchaFlow;
        }

        public void setForceRecaptchaFlow(Boolean bool) {
            this.forceRecaptchaFlow = bool;
        }

        InternalFirebaseAuthSettings() {
        }

        public boolean equals(Object obj) {
            if (this == obj) {
                return true;
            }
            if (obj != null && getClass() == obj.getClass()) {
                InternalFirebaseAuthSettings internalFirebaseAuthSettings = (InternalFirebaseAuthSettings) obj;
                if (GeneratedAndroidFirebaseAuth.pigeonDeepEquals(this.appVerificationDisabledForTesting, internalFirebaseAuthSettings.appVerificationDisabledForTesting) && GeneratedAndroidFirebaseAuth.pigeonDeepEquals(this.userAccessGroup, internalFirebaseAuthSettings.userAccessGroup) && GeneratedAndroidFirebaseAuth.pigeonDeepEquals(this.phoneNumber, internalFirebaseAuthSettings.phoneNumber) && GeneratedAndroidFirebaseAuth.pigeonDeepEquals(this.smsCode, internalFirebaseAuthSettings.smsCode) && GeneratedAndroidFirebaseAuth.pigeonDeepEquals(this.forceRecaptchaFlow, internalFirebaseAuthSettings.forceRecaptchaFlow)) {
                    return true;
                }
            }
            return false;
        }

        public int hashCode() {
            return GeneratedAndroidFirebaseAuth.pigeonDeepHashCode(new Object[]{getClass(), this.appVerificationDisabledForTesting, this.userAccessGroup, this.phoneNumber, this.smsCode, this.forceRecaptchaFlow});
        }

        public static final class Builder {
            private Boolean appVerificationDisabledForTesting;
            private Boolean forceRecaptchaFlow;
            private String phoneNumber;
            private String smsCode;
            private String userAccessGroup;

            public Builder setAppVerificationDisabledForTesting(Boolean bool) {
                this.appVerificationDisabledForTesting = bool;
                return this;
            }

            public Builder setUserAccessGroup(String str) {
                this.userAccessGroup = str;
                return this;
            }

            public Builder setPhoneNumber(String str) {
                this.phoneNumber = str;
                return this;
            }

            public Builder setSmsCode(String str) {
                this.smsCode = str;
                return this;
            }

            public Builder setForceRecaptchaFlow(Boolean bool) {
                this.forceRecaptchaFlow = bool;
                return this;
            }

            public InternalFirebaseAuthSettings build() {
                InternalFirebaseAuthSettings internalFirebaseAuthSettings = new InternalFirebaseAuthSettings();
                internalFirebaseAuthSettings.setAppVerificationDisabledForTesting(this.appVerificationDisabledForTesting);
                internalFirebaseAuthSettings.setUserAccessGroup(this.userAccessGroup);
                internalFirebaseAuthSettings.setPhoneNumber(this.phoneNumber);
                internalFirebaseAuthSettings.setSmsCode(this.smsCode);
                internalFirebaseAuthSettings.setForceRecaptchaFlow(this.forceRecaptchaFlow);
                return internalFirebaseAuthSettings;
            }
        }

        public ArrayList<Object> toList() {
            ArrayList<Object> arrayList = new ArrayList<>(5);
            arrayList.add(this.appVerificationDisabledForTesting);
            arrayList.add(this.userAccessGroup);
            arrayList.add(this.phoneNumber);
            arrayList.add(this.smsCode);
            arrayList.add(this.forceRecaptchaFlow);
            return arrayList;
        }

        static InternalFirebaseAuthSettings fromList(ArrayList<Object> arrayList) {
            InternalFirebaseAuthSettings internalFirebaseAuthSettings = new InternalFirebaseAuthSettings();
            internalFirebaseAuthSettings.setAppVerificationDisabledForTesting((Boolean) arrayList.get(0));
            internalFirebaseAuthSettings.setUserAccessGroup((String) arrayList.get(1));
            internalFirebaseAuthSettings.setPhoneNumber((String) arrayList.get(2));
            internalFirebaseAuthSettings.setSmsCode((String) arrayList.get(3));
            internalFirebaseAuthSettings.setForceRecaptchaFlow((Boolean) arrayList.get(4));
            return internalFirebaseAuthSettings;
        }
    }

    public static final class InternalSignInProvider {
        private Map<String, String> customParameters;
        private String providerId;
        private List<String> scopes;

        public String getProviderId() {
            return this.providerId;
        }

        public void setProviderId(String str) {
            if (str == null) {
                throw new IllegalStateException("Nonnull field \"providerId\" is null.");
            }
            this.providerId = str;
        }

        public List<String> getScopes() {
            return this.scopes;
        }

        public void setScopes(List<String> list) {
            this.scopes = list;
        }

        public Map<String, String> getCustomParameters() {
            return this.customParameters;
        }

        public void setCustomParameters(Map<String, String> map) {
            this.customParameters = map;
        }

        InternalSignInProvider() {
        }

        public boolean equals(Object obj) {
            if (this == obj) {
                return true;
            }
            if (obj != null && getClass() == obj.getClass()) {
                InternalSignInProvider internalSignInProvider = (InternalSignInProvider) obj;
                if (GeneratedAndroidFirebaseAuth.pigeonDeepEquals(this.providerId, internalSignInProvider.providerId) && GeneratedAndroidFirebaseAuth.pigeonDeepEquals(this.scopes, internalSignInProvider.scopes) && GeneratedAndroidFirebaseAuth.pigeonDeepEquals(this.customParameters, internalSignInProvider.customParameters)) {
                    return true;
                }
            }
            return false;
        }

        public int hashCode() {
            return GeneratedAndroidFirebaseAuth.pigeonDeepHashCode(new Object[]{getClass(), this.providerId, this.scopes, this.customParameters});
        }

        public static final class Builder {
            private Map<String, String> customParameters;
            private String providerId;
            private List<String> scopes;

            public Builder setProviderId(String str) {
                this.providerId = str;
                return this;
            }

            public Builder setScopes(List<String> list) {
                this.scopes = list;
                return this;
            }

            public Builder setCustomParameters(Map<String, String> map) {
                this.customParameters = map;
                return this;
            }

            public InternalSignInProvider build() {
                InternalSignInProvider internalSignInProvider = new InternalSignInProvider();
                internalSignInProvider.setProviderId(this.providerId);
                internalSignInProvider.setScopes(this.scopes);
                internalSignInProvider.setCustomParameters(this.customParameters);
                return internalSignInProvider;
            }
        }

        public ArrayList<Object> toList() {
            ArrayList<Object> arrayList = new ArrayList<>(3);
            arrayList.add(this.providerId);
            arrayList.add(this.scopes);
            arrayList.add(this.customParameters);
            return arrayList;
        }

        static InternalSignInProvider fromList(ArrayList<Object> arrayList) {
            InternalSignInProvider internalSignInProvider = new InternalSignInProvider();
            internalSignInProvider.setProviderId((String) arrayList.get(0));
            internalSignInProvider.setScopes((List) arrayList.get(1));
            internalSignInProvider.setCustomParameters((Map) arrayList.get(2));
            return internalSignInProvider;
        }
    }

    public static final class InternalVerifyPhoneNumberRequest {
        private String autoRetrievedSmsCodeForTesting;
        private Long forceResendingToken;
        private String multiFactorInfoId;
        private String multiFactorSessionId;
        private String phoneNumber;
        private Long timeout;

        public String getPhoneNumber() {
            return this.phoneNumber;
        }

        public void setPhoneNumber(String str) {
            this.phoneNumber = str;
        }

        public Long getTimeout() {
            return this.timeout;
        }

        public void setTimeout(Long l) {
            if (l == null) {
                throw new IllegalStateException("Nonnull field \"timeout\" is null.");
            }
            this.timeout = l;
        }

        public Long getForceResendingToken() {
            return this.forceResendingToken;
        }

        public void setForceResendingToken(Long l) {
            this.forceResendingToken = l;
        }

        public String getAutoRetrievedSmsCodeForTesting() {
            return this.autoRetrievedSmsCodeForTesting;
        }

        public void setAutoRetrievedSmsCodeForTesting(String str) {
            this.autoRetrievedSmsCodeForTesting = str;
        }

        public String getMultiFactorInfoId() {
            return this.multiFactorInfoId;
        }

        public void setMultiFactorInfoId(String str) {
            this.multiFactorInfoId = str;
        }

        public String getMultiFactorSessionId() {
            return this.multiFactorSessionId;
        }

        public void setMultiFactorSessionId(String str) {
            this.multiFactorSessionId = str;
        }

        InternalVerifyPhoneNumberRequest() {
        }

        public boolean equals(Object obj) {
            if (this == obj) {
                return true;
            }
            if (obj != null && getClass() == obj.getClass()) {
                InternalVerifyPhoneNumberRequest internalVerifyPhoneNumberRequest = (InternalVerifyPhoneNumberRequest) obj;
                if (GeneratedAndroidFirebaseAuth.pigeonDeepEquals(this.phoneNumber, internalVerifyPhoneNumberRequest.phoneNumber) && GeneratedAndroidFirebaseAuth.pigeonDeepEquals(this.timeout, internalVerifyPhoneNumberRequest.timeout) && GeneratedAndroidFirebaseAuth.pigeonDeepEquals(this.forceResendingToken, internalVerifyPhoneNumberRequest.forceResendingToken) && GeneratedAndroidFirebaseAuth.pigeonDeepEquals(this.autoRetrievedSmsCodeForTesting, internalVerifyPhoneNumberRequest.autoRetrievedSmsCodeForTesting) && GeneratedAndroidFirebaseAuth.pigeonDeepEquals(this.multiFactorInfoId, internalVerifyPhoneNumberRequest.multiFactorInfoId) && GeneratedAndroidFirebaseAuth.pigeonDeepEquals(this.multiFactorSessionId, internalVerifyPhoneNumberRequest.multiFactorSessionId)) {
                    return true;
                }
            }
            return false;
        }

        public int hashCode() {
            return GeneratedAndroidFirebaseAuth.pigeonDeepHashCode(new Object[]{getClass(), this.phoneNumber, this.timeout, this.forceResendingToken, this.autoRetrievedSmsCodeForTesting, this.multiFactorInfoId, this.multiFactorSessionId});
        }

        public static final class Builder {
            private String autoRetrievedSmsCodeForTesting;
            private Long forceResendingToken;
            private String multiFactorInfoId;
            private String multiFactorSessionId;
            private String phoneNumber;
            private Long timeout;

            public Builder setPhoneNumber(String str) {
                this.phoneNumber = str;
                return this;
            }

            public Builder setTimeout(Long l) {
                this.timeout = l;
                return this;
            }

            public Builder setForceResendingToken(Long l) {
                this.forceResendingToken = l;
                return this;
            }

            public Builder setAutoRetrievedSmsCodeForTesting(String str) {
                this.autoRetrievedSmsCodeForTesting = str;
                return this;
            }

            public Builder setMultiFactorInfoId(String str) {
                this.multiFactorInfoId = str;
                return this;
            }

            public Builder setMultiFactorSessionId(String str) {
                this.multiFactorSessionId = str;
                return this;
            }

            public InternalVerifyPhoneNumberRequest build() {
                InternalVerifyPhoneNumberRequest internalVerifyPhoneNumberRequest = new InternalVerifyPhoneNumberRequest();
                internalVerifyPhoneNumberRequest.setPhoneNumber(this.phoneNumber);
                internalVerifyPhoneNumberRequest.setTimeout(this.timeout);
                internalVerifyPhoneNumberRequest.setForceResendingToken(this.forceResendingToken);
                internalVerifyPhoneNumberRequest.setAutoRetrievedSmsCodeForTesting(this.autoRetrievedSmsCodeForTesting);
                internalVerifyPhoneNumberRequest.setMultiFactorInfoId(this.multiFactorInfoId);
                internalVerifyPhoneNumberRequest.setMultiFactorSessionId(this.multiFactorSessionId);
                return internalVerifyPhoneNumberRequest;
            }
        }

        public ArrayList<Object> toList() {
            ArrayList<Object> arrayList = new ArrayList<>(6);
            arrayList.add(this.phoneNumber);
            arrayList.add(this.timeout);
            arrayList.add(this.forceResendingToken);
            arrayList.add(this.autoRetrievedSmsCodeForTesting);
            arrayList.add(this.multiFactorInfoId);
            arrayList.add(this.multiFactorSessionId);
            return arrayList;
        }

        static InternalVerifyPhoneNumberRequest fromList(ArrayList<Object> arrayList) {
            InternalVerifyPhoneNumberRequest internalVerifyPhoneNumberRequest = new InternalVerifyPhoneNumberRequest();
            internalVerifyPhoneNumberRequest.setPhoneNumber((String) arrayList.get(0));
            internalVerifyPhoneNumberRequest.setTimeout((Long) arrayList.get(1));
            internalVerifyPhoneNumberRequest.setForceResendingToken((Long) arrayList.get(2));
            internalVerifyPhoneNumberRequest.setAutoRetrievedSmsCodeForTesting((String) arrayList.get(3));
            internalVerifyPhoneNumberRequest.setMultiFactorInfoId((String) arrayList.get(4));
            internalVerifyPhoneNumberRequest.setMultiFactorSessionId((String) arrayList.get(5));
            return internalVerifyPhoneNumberRequest;
        }
    }

    public static final class InternalIdTokenResult {
        private Long authTimestamp;
        private Map<String, Object> claims;
        private Long expirationTimestamp;
        private Long issuedAtTimestamp;
        private String signInProvider;
        private String signInSecondFactor;
        private String token;

        public String getToken() {
            return this.token;
        }

        public void setToken(String str) {
            this.token = str;
        }

        public Long getExpirationTimestamp() {
            return this.expirationTimestamp;
        }

        public void setExpirationTimestamp(Long l) {
            this.expirationTimestamp = l;
        }

        public Long getAuthTimestamp() {
            return this.authTimestamp;
        }

        public void setAuthTimestamp(Long l) {
            this.authTimestamp = l;
        }

        public Long getIssuedAtTimestamp() {
            return this.issuedAtTimestamp;
        }

        public void setIssuedAtTimestamp(Long l) {
            this.issuedAtTimestamp = l;
        }

        public String getSignInProvider() {
            return this.signInProvider;
        }

        public void setSignInProvider(String str) {
            this.signInProvider = str;
        }

        public Map<String, Object> getClaims() {
            return this.claims;
        }

        public void setClaims(Map<String, Object> map) {
            this.claims = map;
        }

        public String getSignInSecondFactor() {
            return this.signInSecondFactor;
        }

        public void setSignInSecondFactor(String str) {
            this.signInSecondFactor = str;
        }

        public boolean equals(Object obj) {
            if (this == obj) {
                return true;
            }
            if (obj != null && getClass() == obj.getClass()) {
                InternalIdTokenResult internalIdTokenResult = (InternalIdTokenResult) obj;
                if (GeneratedAndroidFirebaseAuth.pigeonDeepEquals(this.token, internalIdTokenResult.token) && GeneratedAndroidFirebaseAuth.pigeonDeepEquals(this.expirationTimestamp, internalIdTokenResult.expirationTimestamp) && GeneratedAndroidFirebaseAuth.pigeonDeepEquals(this.authTimestamp, internalIdTokenResult.authTimestamp) && GeneratedAndroidFirebaseAuth.pigeonDeepEquals(this.issuedAtTimestamp, internalIdTokenResult.issuedAtTimestamp) && GeneratedAndroidFirebaseAuth.pigeonDeepEquals(this.signInProvider, internalIdTokenResult.signInProvider) && GeneratedAndroidFirebaseAuth.pigeonDeepEquals(this.claims, internalIdTokenResult.claims) && GeneratedAndroidFirebaseAuth.pigeonDeepEquals(this.signInSecondFactor, internalIdTokenResult.signInSecondFactor)) {
                    return true;
                }
            }
            return false;
        }

        public int hashCode() {
            return GeneratedAndroidFirebaseAuth.pigeonDeepHashCode(new Object[]{getClass(), this.token, this.expirationTimestamp, this.authTimestamp, this.issuedAtTimestamp, this.signInProvider, this.claims, this.signInSecondFactor});
        }

        public static final class Builder {
            private Long authTimestamp;
            private Map<String, Object> claims;
            private Long expirationTimestamp;
            private Long issuedAtTimestamp;
            private String signInProvider;
            private String signInSecondFactor;
            private String token;

            public Builder setToken(String str) {
                this.token = str;
                return this;
            }

            public Builder setExpirationTimestamp(Long l) {
                this.expirationTimestamp = l;
                return this;
            }

            public Builder setAuthTimestamp(Long l) {
                this.authTimestamp = l;
                return this;
            }

            public Builder setIssuedAtTimestamp(Long l) {
                this.issuedAtTimestamp = l;
                return this;
            }

            public Builder setSignInProvider(String str) {
                this.signInProvider = str;
                return this;
            }

            public Builder setClaims(Map<String, Object> map) {
                this.claims = map;
                return this;
            }

            public Builder setSignInSecondFactor(String str) {
                this.signInSecondFactor = str;
                return this;
            }

            public InternalIdTokenResult build() {
                InternalIdTokenResult internalIdTokenResult = new InternalIdTokenResult();
                internalIdTokenResult.setToken(this.token);
                internalIdTokenResult.setExpirationTimestamp(this.expirationTimestamp);
                internalIdTokenResult.setAuthTimestamp(this.authTimestamp);
                internalIdTokenResult.setIssuedAtTimestamp(this.issuedAtTimestamp);
                internalIdTokenResult.setSignInProvider(this.signInProvider);
                internalIdTokenResult.setClaims(this.claims);
                internalIdTokenResult.setSignInSecondFactor(this.signInSecondFactor);
                return internalIdTokenResult;
            }
        }

        public ArrayList<Object> toList() {
            ArrayList<Object> arrayList = new ArrayList<>(7);
            arrayList.add(this.token);
            arrayList.add(this.expirationTimestamp);
            arrayList.add(this.authTimestamp);
            arrayList.add(this.issuedAtTimestamp);
            arrayList.add(this.signInProvider);
            arrayList.add(this.claims);
            arrayList.add(this.signInSecondFactor);
            return arrayList;
        }

        static InternalIdTokenResult fromList(ArrayList<Object> arrayList) {
            InternalIdTokenResult internalIdTokenResult = new InternalIdTokenResult();
            internalIdTokenResult.setToken((String) arrayList.get(0));
            internalIdTokenResult.setExpirationTimestamp((Long) arrayList.get(1));
            internalIdTokenResult.setAuthTimestamp((Long) arrayList.get(2));
            internalIdTokenResult.setIssuedAtTimestamp((Long) arrayList.get(3));
            internalIdTokenResult.setSignInProvider((String) arrayList.get(4));
            internalIdTokenResult.setClaims((Map) arrayList.get(5));
            internalIdTokenResult.setSignInSecondFactor((String) arrayList.get(6));
            return internalIdTokenResult;
        }
    }

    public static final class InternalUserProfile {
        private String displayName;
        private Boolean displayNameChanged;
        private String photoUrl;
        private Boolean photoUrlChanged;

        public String getDisplayName() {
            return this.displayName;
        }

        public void setDisplayName(String str) {
            this.displayName = str;
        }

        public String getPhotoUrl() {
            return this.photoUrl;
        }

        public void setPhotoUrl(String str) {
            this.photoUrl = str;
        }

        public Boolean getDisplayNameChanged() {
            return this.displayNameChanged;
        }

        public void setDisplayNameChanged(Boolean bool) {
            if (bool == null) {
                throw new IllegalStateException("Nonnull field \"displayNameChanged\" is null.");
            }
            this.displayNameChanged = bool;
        }

        public Boolean getPhotoUrlChanged() {
            return this.photoUrlChanged;
        }

        public void setPhotoUrlChanged(Boolean bool) {
            if (bool == null) {
                throw new IllegalStateException("Nonnull field \"photoUrlChanged\" is null.");
            }
            this.photoUrlChanged = bool;
        }

        InternalUserProfile() {
        }

        public boolean equals(Object obj) {
            if (this == obj) {
                return true;
            }
            if (obj != null && getClass() == obj.getClass()) {
                InternalUserProfile internalUserProfile = (InternalUserProfile) obj;
                if (GeneratedAndroidFirebaseAuth.pigeonDeepEquals(this.displayName, internalUserProfile.displayName) && GeneratedAndroidFirebaseAuth.pigeonDeepEquals(this.photoUrl, internalUserProfile.photoUrl) && GeneratedAndroidFirebaseAuth.pigeonDeepEquals(this.displayNameChanged, internalUserProfile.displayNameChanged) && GeneratedAndroidFirebaseAuth.pigeonDeepEquals(this.photoUrlChanged, internalUserProfile.photoUrlChanged)) {
                    return true;
                }
            }
            return false;
        }

        public int hashCode() {
            return GeneratedAndroidFirebaseAuth.pigeonDeepHashCode(new Object[]{getClass(), this.displayName, this.photoUrl, this.displayNameChanged, this.photoUrlChanged});
        }

        public static final class Builder {
            private String displayName;
            private Boolean displayNameChanged;
            private String photoUrl;
            private Boolean photoUrlChanged;

            public Builder setDisplayName(String str) {
                this.displayName = str;
                return this;
            }

            public Builder setPhotoUrl(String str) {
                this.photoUrl = str;
                return this;
            }

            public Builder setDisplayNameChanged(Boolean bool) {
                this.displayNameChanged = bool;
                return this;
            }

            public Builder setPhotoUrlChanged(Boolean bool) {
                this.photoUrlChanged = bool;
                return this;
            }

            public InternalUserProfile build() {
                InternalUserProfile internalUserProfile = new InternalUserProfile();
                internalUserProfile.setDisplayName(this.displayName);
                internalUserProfile.setPhotoUrl(this.photoUrl);
                internalUserProfile.setDisplayNameChanged(this.displayNameChanged);
                internalUserProfile.setPhotoUrlChanged(this.photoUrlChanged);
                return internalUserProfile;
            }
        }

        public ArrayList<Object> toList() {
            ArrayList<Object> arrayList = new ArrayList<>(4);
            arrayList.add(this.displayName);
            arrayList.add(this.photoUrl);
            arrayList.add(this.displayNameChanged);
            arrayList.add(this.photoUrlChanged);
            return arrayList;
        }

        static InternalUserProfile fromList(ArrayList<Object> arrayList) {
            InternalUserProfile internalUserProfile = new InternalUserProfile();
            internalUserProfile.setDisplayName((String) arrayList.get(0));
            internalUserProfile.setPhotoUrl((String) arrayList.get(1));
            internalUserProfile.setDisplayNameChanged((Boolean) arrayList.get(2));
            internalUserProfile.setPhotoUrlChanged((Boolean) arrayList.get(3));
            return internalUserProfile;
        }
    }

    public static final class InternalTotpSecret {
        private Long codeIntervalSeconds;
        private Long codeLength;
        private Long enrollmentCompletionDeadline;
        private String hashingAlgorithm;
        private String secretKey;

        public Long getCodeIntervalSeconds() {
            return this.codeIntervalSeconds;
        }

        public void setCodeIntervalSeconds(Long l) {
            this.codeIntervalSeconds = l;
        }

        public Long getCodeLength() {
            return this.codeLength;
        }

        public void setCodeLength(Long l) {
            this.codeLength = l;
        }

        public Long getEnrollmentCompletionDeadline() {
            return this.enrollmentCompletionDeadline;
        }

        public void setEnrollmentCompletionDeadline(Long l) {
            this.enrollmentCompletionDeadline = l;
        }

        public String getHashingAlgorithm() {
            return this.hashingAlgorithm;
        }

        public void setHashingAlgorithm(String str) {
            this.hashingAlgorithm = str;
        }

        public String getSecretKey() {
            return this.secretKey;
        }

        public void setSecretKey(String str) {
            if (str == null) {
                throw new IllegalStateException("Nonnull field \"secretKey\" is null.");
            }
            this.secretKey = str;
        }

        InternalTotpSecret() {
        }

        public boolean equals(Object obj) {
            if (this == obj) {
                return true;
            }
            if (obj != null && getClass() == obj.getClass()) {
                InternalTotpSecret internalTotpSecret = (InternalTotpSecret) obj;
                if (GeneratedAndroidFirebaseAuth.pigeonDeepEquals(this.codeIntervalSeconds, internalTotpSecret.codeIntervalSeconds) && GeneratedAndroidFirebaseAuth.pigeonDeepEquals(this.codeLength, internalTotpSecret.codeLength) && GeneratedAndroidFirebaseAuth.pigeonDeepEquals(this.enrollmentCompletionDeadline, internalTotpSecret.enrollmentCompletionDeadline) && GeneratedAndroidFirebaseAuth.pigeonDeepEquals(this.hashingAlgorithm, internalTotpSecret.hashingAlgorithm) && GeneratedAndroidFirebaseAuth.pigeonDeepEquals(this.secretKey, internalTotpSecret.secretKey)) {
                    return true;
                }
            }
            return false;
        }

        public int hashCode() {
            return GeneratedAndroidFirebaseAuth.pigeonDeepHashCode(new Object[]{getClass(), this.codeIntervalSeconds, this.codeLength, this.enrollmentCompletionDeadline, this.hashingAlgorithm, this.secretKey});
        }

        public static final class Builder {
            private Long codeIntervalSeconds;
            private Long codeLength;
            private Long enrollmentCompletionDeadline;
            private String hashingAlgorithm;
            private String secretKey;

            public Builder setCodeIntervalSeconds(Long l) {
                this.codeIntervalSeconds = l;
                return this;
            }

            public Builder setCodeLength(Long l) {
                this.codeLength = l;
                return this;
            }

            public Builder setEnrollmentCompletionDeadline(Long l) {
                this.enrollmentCompletionDeadline = l;
                return this;
            }

            public Builder setHashingAlgorithm(String str) {
                this.hashingAlgorithm = str;
                return this;
            }

            public Builder setSecretKey(String str) {
                this.secretKey = str;
                return this;
            }

            public InternalTotpSecret build() {
                InternalTotpSecret internalTotpSecret = new InternalTotpSecret();
                internalTotpSecret.setCodeIntervalSeconds(this.codeIntervalSeconds);
                internalTotpSecret.setCodeLength(this.codeLength);
                internalTotpSecret.setEnrollmentCompletionDeadline(this.enrollmentCompletionDeadline);
                internalTotpSecret.setHashingAlgorithm(this.hashingAlgorithm);
                internalTotpSecret.setSecretKey(this.secretKey);
                return internalTotpSecret;
            }
        }

        public ArrayList<Object> toList() {
            ArrayList<Object> arrayList = new ArrayList<>(5);
            arrayList.add(this.codeIntervalSeconds);
            arrayList.add(this.codeLength);
            arrayList.add(this.enrollmentCompletionDeadline);
            arrayList.add(this.hashingAlgorithm);
            arrayList.add(this.secretKey);
            return arrayList;
        }

        static InternalTotpSecret fromList(ArrayList<Object> arrayList) {
            InternalTotpSecret internalTotpSecret = new InternalTotpSecret();
            internalTotpSecret.setCodeIntervalSeconds((Long) arrayList.get(0));
            internalTotpSecret.setCodeLength((Long) arrayList.get(1));
            internalTotpSecret.setEnrollmentCompletionDeadline((Long) arrayList.get(2));
            internalTotpSecret.setHashingAlgorithm((String) arrayList.get(3));
            internalTotpSecret.setSecretKey((String) arrayList.get(4));
            return internalTotpSecret;
        }
    }

    private static class PigeonCodec extends StandardMessageCodec {
        public static final PigeonCodec INSTANCE = new PigeonCodec();

        private PigeonCodec() {
        }

        @Override // io.flutter.plugin.common.StandardMessageCodec
        protected Object readValueOfType(byte b, ByteBuffer byteBuffer) {
            switch (b) {
                case ComposerKt.defaultsKey /* -127 */:
                    Object value = readValue(byteBuffer);
                    if (value == null) {
                        return null;
                    }
                    return ActionCodeInfoOperation.values()[((Long) value).intValue()];
                case -126:
                    return InternalMultiFactorSession.fromList((ArrayList) readValue(byteBuffer));
                case -125:
                    return InternalPhoneMultiFactorAssertion.fromList((ArrayList) readValue(byteBuffer));
                case -124:
                    return InternalMultiFactorInfo.fromList((ArrayList) readValue(byteBuffer));
                case -123:
                    return AuthPigeonFirebaseApp.fromList((ArrayList) readValue(byteBuffer));
                case -122:
                    return InternalActionCodeInfoData.fromList((ArrayList) readValue(byteBuffer));
                case -121:
                    return InternalActionCodeInfo.fromList((ArrayList) readValue(byteBuffer));
                case -120:
                    return InternalAdditionalUserInfo.fromList((ArrayList) readValue(byteBuffer));
                case -119:
                    return InternalAuthCredential.fromList((ArrayList) readValue(byteBuffer));
                case -118:
                    return InternalUserInfo.fromList((ArrayList) readValue(byteBuffer));
                case -117:
                    return InternalUserDetails.fromList((ArrayList) readValue(byteBuffer));
                case -116:
                    return InternalUserCredential.fromList((ArrayList) readValue(byteBuffer));
                case -115:
                    return InternalAuthCredentialInput.fromList((ArrayList) readValue(byteBuffer));
                case -114:
                    return InternalActionCodeSettings.fromList((ArrayList) readValue(byteBuffer));
                case -113:
                    return InternalFirebaseAuthSettings.fromList((ArrayList) readValue(byteBuffer));
                case -112:
                    return InternalSignInProvider.fromList((ArrayList) readValue(byteBuffer));
                case -111:
                    return InternalVerifyPhoneNumberRequest.fromList((ArrayList) readValue(byteBuffer));
                case PlaybackException.ERROR_CODE_CONTENT_ALREADY_PLAYING /* -110 */:
                    return InternalIdTokenResult.fromList((ArrayList) readValue(byteBuffer));
                case PlaybackException.ERROR_CODE_END_OF_PLAYLIST /* -109 */:
                    return InternalUserProfile.fromList((ArrayList) readValue(byteBuffer));
                case PlaybackException.ERROR_CODE_SETUP_REQUIRED /* -108 */:
                    return InternalTotpSecret.fromList((ArrayList) readValue(byteBuffer));
                default:
                    return super.readValueOfType(b, byteBuffer);
            }
        }

        @Override // io.flutter.plugin.common.StandardMessageCodec
        protected void writeValue(ByteArrayOutputStream byteArrayOutputStream, Object obj) {
            if (obj instanceof ActionCodeInfoOperation) {
                byteArrayOutputStream.write(TsExtractor.TS_STREAM_TYPE_AC3);
                writeValue(byteArrayOutputStream, obj == null ? null : Integer.valueOf(((ActionCodeInfoOperation) obj).index));
                return;
            }
            if (obj instanceof InternalMultiFactorSession) {
                byteArrayOutputStream.write(TsExtractor.TS_STREAM_TYPE_HDMV_DTS);
                writeValue(byteArrayOutputStream, ((InternalMultiFactorSession) obj).toList());
                return;
            }
            if (obj instanceof InternalPhoneMultiFactorAssertion) {
                byteArrayOutputStream.write(131);
                writeValue(byteArrayOutputStream, ((InternalPhoneMultiFactorAssertion) obj).toList());
                return;
            }
            if (obj instanceof InternalMultiFactorInfo) {
                byteArrayOutputStream.write(132);
                writeValue(byteArrayOutputStream, ((InternalMultiFactorInfo) obj).toList());
                return;
            }
            if (obj instanceof AuthPigeonFirebaseApp) {
                byteArrayOutputStream.write(133);
                writeValue(byteArrayOutputStream, ((AuthPigeonFirebaseApp) obj).toList());
                return;
            }
            if (obj instanceof InternalActionCodeInfoData) {
                byteArrayOutputStream.write(TsExtractor.TS_STREAM_TYPE_SPLICE_INFO);
                writeValue(byteArrayOutputStream, ((InternalActionCodeInfoData) obj).toList());
                return;
            }
            if (obj instanceof InternalActionCodeInfo) {
                byteArrayOutputStream.write(TsExtractor.TS_STREAM_TYPE_E_AC3);
                writeValue(byteArrayOutputStream, ((InternalActionCodeInfo) obj).toList());
                return;
            }
            if (obj instanceof InternalAdditionalUserInfo) {
                byteArrayOutputStream.write(TsExtractor.TS_STREAM_TYPE_DTS_HD);
                writeValue(byteArrayOutputStream, ((InternalAdditionalUserInfo) obj).toList());
                return;
            }
            if (obj instanceof InternalAuthCredential) {
                byteArrayOutputStream.write(137);
                writeValue(byteArrayOutputStream, ((InternalAuthCredential) obj).toList());
                return;
            }
            if (obj instanceof InternalUserInfo) {
                byteArrayOutputStream.write(TsExtractor.TS_STREAM_TYPE_DTS);
                writeValue(byteArrayOutputStream, ((InternalUserInfo) obj).toList());
                return;
            }
            if (obj instanceof InternalUserDetails) {
                byteArrayOutputStream.write(TsExtractor.TS_STREAM_TYPE_DTS_UHD);
                writeValue(byteArrayOutputStream, ((InternalUserDetails) obj).toList());
                return;
            }
            if (obj instanceof InternalUserCredential) {
                byteArrayOutputStream.write(140);
                writeValue(byteArrayOutputStream, ((InternalUserCredential) obj).toList());
                return;
            }
            if (obj instanceof InternalAuthCredentialInput) {
                byteArrayOutputStream.write(141);
                writeValue(byteArrayOutputStream, ((InternalAuthCredentialInput) obj).toList());
                return;
            }
            if (obj instanceof InternalActionCodeSettings) {
                byteArrayOutputStream.write(142);
                writeValue(byteArrayOutputStream, ((InternalActionCodeSettings) obj).toList());
                return;
            }
            if (obj instanceof InternalFirebaseAuthSettings) {
                byteArrayOutputStream.write(143);
                writeValue(byteArrayOutputStream, ((InternalFirebaseAuthSettings) obj).toList());
                return;
            }
            if (obj instanceof InternalSignInProvider) {
                byteArrayOutputStream.write(144);
                writeValue(byteArrayOutputStream, ((InternalSignInProvider) obj).toList());
                return;
            }
            if (obj instanceof InternalVerifyPhoneNumberRequest) {
                byteArrayOutputStream.write(145);
                writeValue(byteArrayOutputStream, ((InternalVerifyPhoneNumberRequest) obj).toList());
                return;
            }
            if (obj instanceof InternalIdTokenResult) {
                byteArrayOutputStream.write(146);
                writeValue(byteArrayOutputStream, ((InternalIdTokenResult) obj).toList());
            } else if (obj instanceof InternalUserProfile) {
                byteArrayOutputStream.write(147);
                writeValue(byteArrayOutputStream, ((InternalUserProfile) obj).toList());
            } else if (obj instanceof InternalTotpSecret) {
                byteArrayOutputStream.write(148);
                writeValue(byteArrayOutputStream, ((InternalTotpSecret) obj).toList());
            } else {
                super.writeValue(byteArrayOutputStream, obj);
            }
        }
    }

    public interface FirebaseAuthHostApi {
        void applyActionCode(AuthPigeonFirebaseApp authPigeonFirebaseApp, String str, VoidResult voidResult);

        void checkActionCode(AuthPigeonFirebaseApp authPigeonFirebaseApp, String str, Result<InternalActionCodeInfo> result);

        void confirmPasswordReset(AuthPigeonFirebaseApp authPigeonFirebaseApp, String str, String str2, VoidResult voidResult);

        void createUserWithEmailAndPassword(AuthPigeonFirebaseApp authPigeonFirebaseApp, String str, String str2, Result<InternalUserCredential> result);

        void fetchSignInMethodsForEmail(AuthPigeonFirebaseApp authPigeonFirebaseApp, String str, Result<List<String>> result);

        void initializeRecaptchaConfig(AuthPigeonFirebaseApp authPigeonFirebaseApp, VoidResult voidResult);

        void registerAuthStateListener(AuthPigeonFirebaseApp authPigeonFirebaseApp, Result<String> result);

        void registerIdTokenListener(AuthPigeonFirebaseApp authPigeonFirebaseApp, Result<String> result);

        void revokeAccessToken(AuthPigeonFirebaseApp authPigeonFirebaseApp, String str, VoidResult voidResult);

        void revokeTokenWithAuthorizationCode(AuthPigeonFirebaseApp authPigeonFirebaseApp, String str, VoidResult voidResult);

        void sendPasswordResetEmail(AuthPigeonFirebaseApp authPigeonFirebaseApp, String str, InternalActionCodeSettings internalActionCodeSettings, VoidResult voidResult);

        void sendSignInLinkToEmail(AuthPigeonFirebaseApp authPigeonFirebaseApp, String str, InternalActionCodeSettings internalActionCodeSettings, VoidResult voidResult);

        void setLanguageCode(AuthPigeonFirebaseApp authPigeonFirebaseApp, String str, Result<String> result);

        void setSettings(AuthPigeonFirebaseApp authPigeonFirebaseApp, InternalFirebaseAuthSettings internalFirebaseAuthSettings, VoidResult voidResult);

        void signInAnonymously(AuthPigeonFirebaseApp authPigeonFirebaseApp, Result<InternalUserCredential> result);

        void signInWithCredential(AuthPigeonFirebaseApp authPigeonFirebaseApp, Map<String, Object> map, Result<InternalUserCredential> result);

        void signInWithCustomToken(AuthPigeonFirebaseApp authPigeonFirebaseApp, String str, Result<InternalUserCredential> result);

        void signInWithEmailAndPassword(AuthPigeonFirebaseApp authPigeonFirebaseApp, String str, String str2, Result<InternalUserCredential> result);

        void signInWithEmailLink(AuthPigeonFirebaseApp authPigeonFirebaseApp, String str, String str2, Result<InternalUserCredential> result);

        void signInWithProvider(AuthPigeonFirebaseApp authPigeonFirebaseApp, InternalSignInProvider internalSignInProvider, Result<InternalUserCredential> result);

        void signOut(AuthPigeonFirebaseApp authPigeonFirebaseApp, VoidResult voidResult);

        void useEmulator(AuthPigeonFirebaseApp authPigeonFirebaseApp, String str, Long l, VoidResult voidResult);

        void verifyPasswordResetCode(AuthPigeonFirebaseApp authPigeonFirebaseApp, String str, Result<String> result);

        void verifyPhoneNumber(AuthPigeonFirebaseApp authPigeonFirebaseApp, InternalVerifyPhoneNumberRequest internalVerifyPhoneNumberRequest, Result<String> result);

        static MessageCodec<Object> getCodec() {
            return PigeonCodec.INSTANCE;
        }

        static void setUp(BinaryMessenger binaryMessenger, FirebaseAuthHostApi firebaseAuthHostApi) {
            setUp(binaryMessenger, "", firebaseAuthHostApi);
        }

        static void setUp(BinaryMessenger binaryMessenger, String str, final FirebaseAuthHostApi firebaseAuthHostApi) {
            String str2;
            if (str.isEmpty()) {
                str2 = "";
            } else {
                str2 = "." + str;
            }
            BasicMessageChannel basicMessageChannel = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.firebase_auth_platform_interface.FirebaseAuthHostApi.registerIdTokenListener" + str2, getCodec());
            if (firebaseAuthHostApi != null) {
                basicMessageChannel.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth$FirebaseAuthHostApi$$ExternalSyntheticLambda0
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        GeneratedAndroidFirebaseAuth.FirebaseAuthHostApi.lambda$setUp$0(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel2 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.firebase_auth_platform_interface.FirebaseAuthHostApi.registerAuthStateListener" + str2, getCodec());
            if (firebaseAuthHostApi != null) {
                basicMessageChannel2.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth$FirebaseAuthHostApi$$ExternalSyntheticLambda2
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        GeneratedAndroidFirebaseAuth.FirebaseAuthHostApi.lambda$setUp$1(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel2.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel3 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.firebase_auth_platform_interface.FirebaseAuthHostApi.useEmulator" + str2, getCodec());
            if (firebaseAuthHostApi != null) {
                basicMessageChannel3.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth$FirebaseAuthHostApi$$ExternalSyntheticLambda7
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        GeneratedAndroidFirebaseAuth.FirebaseAuthHostApi.lambda$setUp$2(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel3.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel4 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.firebase_auth_platform_interface.FirebaseAuthHostApi.applyActionCode" + str2, getCodec());
            if (firebaseAuthHostApi != null) {
                basicMessageChannel4.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth$FirebaseAuthHostApi$$ExternalSyntheticLambda8
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        GeneratedAndroidFirebaseAuth.FirebaseAuthHostApi.lambda$setUp$3(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel4.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel5 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.firebase_auth_platform_interface.FirebaseAuthHostApi.checkActionCode" + str2, getCodec());
            if (firebaseAuthHostApi != null) {
                basicMessageChannel5.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth$FirebaseAuthHostApi$$ExternalSyntheticLambda9
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        GeneratedAndroidFirebaseAuth.FirebaseAuthHostApi.lambda$setUp$4(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel5.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel6 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.firebase_auth_platform_interface.FirebaseAuthHostApi.confirmPasswordReset" + str2, getCodec());
            if (firebaseAuthHostApi != null) {
                basicMessageChannel6.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth$FirebaseAuthHostApi$$ExternalSyntheticLambda10
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        GeneratedAndroidFirebaseAuth.FirebaseAuthHostApi.lambda$setUp$5(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel6.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel7 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.firebase_auth_platform_interface.FirebaseAuthHostApi.createUserWithEmailAndPassword" + str2, getCodec());
            if (firebaseAuthHostApi != null) {
                basicMessageChannel7.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth$FirebaseAuthHostApi$$ExternalSyntheticLambda12
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        GeneratedAndroidFirebaseAuth.FirebaseAuthHostApi.lambda$setUp$6(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel7.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel8 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.firebase_auth_platform_interface.FirebaseAuthHostApi.signInAnonymously" + str2, getCodec());
            if (firebaseAuthHostApi != null) {
                basicMessageChannel8.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth$FirebaseAuthHostApi$$ExternalSyntheticLambda13
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        GeneratedAndroidFirebaseAuth.FirebaseAuthHostApi.lambda$setUp$7(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel8.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel9 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.firebase_auth_platform_interface.FirebaseAuthHostApi.signInWithCredential" + str2, getCodec());
            if (firebaseAuthHostApi != null) {
                basicMessageChannel9.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth$FirebaseAuthHostApi$$ExternalSyntheticLambda14
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        GeneratedAndroidFirebaseAuth.FirebaseAuthHostApi.lambda$setUp$8(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel9.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel10 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.firebase_auth_platform_interface.FirebaseAuthHostApi.signInWithCustomToken" + str2, getCodec());
            if (firebaseAuthHostApi != null) {
                basicMessageChannel10.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth$FirebaseAuthHostApi$$ExternalSyntheticLambda15
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        GeneratedAndroidFirebaseAuth.FirebaseAuthHostApi.lambda$setUp$9(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel10.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel11 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.firebase_auth_platform_interface.FirebaseAuthHostApi.signInWithEmailAndPassword" + str2, getCodec());
            if (firebaseAuthHostApi != null) {
                basicMessageChannel11.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth$FirebaseAuthHostApi$$ExternalSyntheticLambda11
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        GeneratedAndroidFirebaseAuth.FirebaseAuthHostApi.lambda$setUp$10(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel11.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel12 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.firebase_auth_platform_interface.FirebaseAuthHostApi.signInWithEmailLink" + str2, getCodec());
            if (firebaseAuthHostApi != null) {
                basicMessageChannel12.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth$FirebaseAuthHostApi$$ExternalSyntheticLambda16
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        GeneratedAndroidFirebaseAuth.FirebaseAuthHostApi.lambda$setUp$11(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel12.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel13 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.firebase_auth_platform_interface.FirebaseAuthHostApi.signInWithProvider" + str2, getCodec());
            if (firebaseAuthHostApi != null) {
                basicMessageChannel13.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth$FirebaseAuthHostApi$$ExternalSyntheticLambda17
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        GeneratedAndroidFirebaseAuth.FirebaseAuthHostApi.lambda$setUp$12(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel13.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel14 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.firebase_auth_platform_interface.FirebaseAuthHostApi.signOut" + str2, getCodec());
            if (firebaseAuthHostApi != null) {
                basicMessageChannel14.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth$FirebaseAuthHostApi$$ExternalSyntheticLambda18
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        GeneratedAndroidFirebaseAuth.FirebaseAuthHostApi.lambda$setUp$13(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel14.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel15 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.firebase_auth_platform_interface.FirebaseAuthHostApi.fetchSignInMethodsForEmail" + str2, getCodec());
            if (firebaseAuthHostApi != null) {
                basicMessageChannel15.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth$FirebaseAuthHostApi$$ExternalSyntheticLambda19
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        GeneratedAndroidFirebaseAuth.FirebaseAuthHostApi.lambda$setUp$14(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel15.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel16 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.firebase_auth_platform_interface.FirebaseAuthHostApi.sendPasswordResetEmail" + str2, getCodec());
            if (firebaseAuthHostApi != null) {
                basicMessageChannel16.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth$FirebaseAuthHostApi$$ExternalSyntheticLambda20
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        GeneratedAndroidFirebaseAuth.FirebaseAuthHostApi.lambda$setUp$15(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel16.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel17 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.firebase_auth_platform_interface.FirebaseAuthHostApi.sendSignInLinkToEmail" + str2, getCodec());
            if (firebaseAuthHostApi != null) {
                basicMessageChannel17.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth$FirebaseAuthHostApi$$ExternalSyntheticLambda21
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        GeneratedAndroidFirebaseAuth.FirebaseAuthHostApi.lambda$setUp$16(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel17.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel18 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.firebase_auth_platform_interface.FirebaseAuthHostApi.setLanguageCode" + str2, getCodec());
            if (firebaseAuthHostApi != null) {
                basicMessageChannel18.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth$FirebaseAuthHostApi$$ExternalSyntheticLambda22
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        GeneratedAndroidFirebaseAuth.FirebaseAuthHostApi.lambda$setUp$17(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel18.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel19 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.firebase_auth_platform_interface.FirebaseAuthHostApi.setSettings" + str2, getCodec());
            if (firebaseAuthHostApi != null) {
                basicMessageChannel19.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth$FirebaseAuthHostApi$$ExternalSyntheticLambda23
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        GeneratedAndroidFirebaseAuth.FirebaseAuthHostApi.lambda$setUp$18(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel19.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel20 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.firebase_auth_platform_interface.FirebaseAuthHostApi.verifyPasswordResetCode" + str2, getCodec());
            if (firebaseAuthHostApi != null) {
                basicMessageChannel20.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth$FirebaseAuthHostApi$$ExternalSyntheticLambda1
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        GeneratedAndroidFirebaseAuth.FirebaseAuthHostApi.lambda$setUp$19(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel20.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel21 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.firebase_auth_platform_interface.FirebaseAuthHostApi.verifyPhoneNumber" + str2, getCodec());
            if (firebaseAuthHostApi != null) {
                basicMessageChannel21.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth$FirebaseAuthHostApi$$ExternalSyntheticLambda3
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        GeneratedAndroidFirebaseAuth.FirebaseAuthHostApi.lambda$setUp$20(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel21.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel22 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.firebase_auth_platform_interface.FirebaseAuthHostApi.revokeTokenWithAuthorizationCode" + str2, getCodec());
            if (firebaseAuthHostApi != null) {
                basicMessageChannel22.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth$FirebaseAuthHostApi$$ExternalSyntheticLambda4
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        GeneratedAndroidFirebaseAuth.FirebaseAuthHostApi.lambda$setUp$21(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel22.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel23 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.firebase_auth_platform_interface.FirebaseAuthHostApi.revokeAccessToken" + str2, getCodec());
            if (firebaseAuthHostApi != null) {
                basicMessageChannel23.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth$FirebaseAuthHostApi$$ExternalSyntheticLambda5
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        GeneratedAndroidFirebaseAuth.FirebaseAuthHostApi.lambda$setUp$22(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel23.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel24 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.firebase_auth_platform_interface.FirebaseAuthHostApi.initializeRecaptchaConfig" + str2, getCodec());
            if (firebaseAuthHostApi != null) {
                basicMessageChannel24.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth$FirebaseAuthHostApi$$ExternalSyntheticLambda6
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        GeneratedAndroidFirebaseAuth.FirebaseAuthHostApi.lambda$setUp$23(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel24.setMessageHandler(null);
            }
        }

        static /* synthetic */ void lambda$setUp$0(FirebaseAuthHostApi firebaseAuthHostApi, Object obj, final BasicMessageChannel.Reply reply) {
            final ArrayList arrayList = new ArrayList();
            firebaseAuthHostApi.registerIdTokenListener((AuthPigeonFirebaseApp) ((ArrayList) obj).get(0), new Result<String>() { // from class: io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.FirebaseAuthHostApi.1
                @Override // io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.Result
                public void success(String str) {
                    arrayList.add(0, str);
                    reply.reply(arrayList);
                }

                @Override // io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.Result
                public void error(Throwable th) {
                    reply.reply(GeneratedAndroidFirebaseAuth.wrapError(th));
                }
            });
        }

        static /* synthetic */ void lambda$setUp$1(FirebaseAuthHostApi firebaseAuthHostApi, Object obj, final BasicMessageChannel.Reply reply) {
            final ArrayList arrayList = new ArrayList();
            firebaseAuthHostApi.registerAuthStateListener((AuthPigeonFirebaseApp) ((ArrayList) obj).get(0), new Result<String>() { // from class: io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.FirebaseAuthHostApi.2
                @Override // io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.Result
                public void success(String str) {
                    arrayList.add(0, str);
                    reply.reply(arrayList);
                }

                @Override // io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.Result
                public void error(Throwable th) {
                    reply.reply(GeneratedAndroidFirebaseAuth.wrapError(th));
                }
            });
        }

        static /* synthetic */ void lambda$setUp$2(FirebaseAuthHostApi firebaseAuthHostApi, Object obj, final BasicMessageChannel.Reply reply) {
            final ArrayList arrayList = new ArrayList();
            ArrayList arrayList2 = (ArrayList) obj;
            firebaseAuthHostApi.useEmulator((AuthPigeonFirebaseApp) arrayList2.get(0), (String) arrayList2.get(1), (Long) arrayList2.get(2), new VoidResult() { // from class: io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.FirebaseAuthHostApi.3
                @Override // io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.VoidResult
                public void success() {
                    arrayList.add(0, null);
                    reply.reply(arrayList);
                }

                @Override // io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.VoidResult
                public void error(Throwable th) {
                    reply.reply(GeneratedAndroidFirebaseAuth.wrapError(th));
                }
            });
        }

        static /* synthetic */ void lambda$setUp$3(FirebaseAuthHostApi firebaseAuthHostApi, Object obj, final BasicMessageChannel.Reply reply) {
            final ArrayList arrayList = new ArrayList();
            ArrayList arrayList2 = (ArrayList) obj;
            firebaseAuthHostApi.applyActionCode((AuthPigeonFirebaseApp) arrayList2.get(0), (String) arrayList2.get(1), new VoidResult() { // from class: io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.FirebaseAuthHostApi.4
                @Override // io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.VoidResult
                public void success() {
                    arrayList.add(0, null);
                    reply.reply(arrayList);
                }

                @Override // io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.VoidResult
                public void error(Throwable th) {
                    reply.reply(GeneratedAndroidFirebaseAuth.wrapError(th));
                }
            });
        }

        static /* synthetic */ void lambda$setUp$4(FirebaseAuthHostApi firebaseAuthHostApi, Object obj, final BasicMessageChannel.Reply reply) {
            final ArrayList arrayList = new ArrayList();
            ArrayList arrayList2 = (ArrayList) obj;
            firebaseAuthHostApi.checkActionCode((AuthPigeonFirebaseApp) arrayList2.get(0), (String) arrayList2.get(1), new Result<InternalActionCodeInfo>() { // from class: io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.FirebaseAuthHostApi.5
                @Override // io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.Result
                public void success(InternalActionCodeInfo internalActionCodeInfo) {
                    arrayList.add(0, internalActionCodeInfo);
                    reply.reply(arrayList);
                }

                @Override // io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.Result
                public void error(Throwable th) {
                    reply.reply(GeneratedAndroidFirebaseAuth.wrapError(th));
                }
            });
        }

        static /* synthetic */ void lambda$setUp$5(FirebaseAuthHostApi firebaseAuthHostApi, Object obj, final BasicMessageChannel.Reply reply) {
            final ArrayList arrayList = new ArrayList();
            ArrayList arrayList2 = (ArrayList) obj;
            firebaseAuthHostApi.confirmPasswordReset((AuthPigeonFirebaseApp) arrayList2.get(0), (String) arrayList2.get(1), (String) arrayList2.get(2), new VoidResult() { // from class: io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.FirebaseAuthHostApi.6
                @Override // io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.VoidResult
                public void success() {
                    arrayList.add(0, null);
                    reply.reply(arrayList);
                }

                @Override // io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.VoidResult
                public void error(Throwable th) {
                    reply.reply(GeneratedAndroidFirebaseAuth.wrapError(th));
                }
            });
        }

        static /* synthetic */ void lambda$setUp$6(FirebaseAuthHostApi firebaseAuthHostApi, Object obj, final BasicMessageChannel.Reply reply) {
            final ArrayList arrayList = new ArrayList();
            ArrayList arrayList2 = (ArrayList) obj;
            firebaseAuthHostApi.createUserWithEmailAndPassword((AuthPigeonFirebaseApp) arrayList2.get(0), (String) arrayList2.get(1), (String) arrayList2.get(2), new Result<InternalUserCredential>() { // from class: io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.FirebaseAuthHostApi.7
                @Override // io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.Result
                public void success(InternalUserCredential internalUserCredential) {
                    arrayList.add(0, internalUserCredential);
                    reply.reply(arrayList);
                }

                @Override // io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.Result
                public void error(Throwable th) {
                    reply.reply(GeneratedAndroidFirebaseAuth.wrapError(th));
                }
            });
        }

        static /* synthetic */ void lambda$setUp$7(FirebaseAuthHostApi firebaseAuthHostApi, Object obj, final BasicMessageChannel.Reply reply) {
            final ArrayList arrayList = new ArrayList();
            firebaseAuthHostApi.signInAnonymously((AuthPigeonFirebaseApp) ((ArrayList) obj).get(0), new Result<InternalUserCredential>() { // from class: io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.FirebaseAuthHostApi.8
                @Override // io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.Result
                public void success(InternalUserCredential internalUserCredential) {
                    arrayList.add(0, internalUserCredential);
                    reply.reply(arrayList);
                }

                @Override // io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.Result
                public void error(Throwable th) {
                    reply.reply(GeneratedAndroidFirebaseAuth.wrapError(th));
                }
            });
        }

        static /* synthetic */ void lambda$setUp$8(FirebaseAuthHostApi firebaseAuthHostApi, Object obj, final BasicMessageChannel.Reply reply) {
            final ArrayList arrayList = new ArrayList();
            ArrayList arrayList2 = (ArrayList) obj;
            firebaseAuthHostApi.signInWithCredential((AuthPigeonFirebaseApp) arrayList2.get(0), (Map) arrayList2.get(1), new Result<InternalUserCredential>() { // from class: io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.FirebaseAuthHostApi.9
                @Override // io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.Result
                public void success(InternalUserCredential internalUserCredential) {
                    arrayList.add(0, internalUserCredential);
                    reply.reply(arrayList);
                }

                @Override // io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.Result
                public void error(Throwable th) {
                    reply.reply(GeneratedAndroidFirebaseAuth.wrapError(th));
                }
            });
        }

        static /* synthetic */ void lambda$setUp$9(FirebaseAuthHostApi firebaseAuthHostApi, Object obj, final BasicMessageChannel.Reply reply) {
            final ArrayList arrayList = new ArrayList();
            ArrayList arrayList2 = (ArrayList) obj;
            firebaseAuthHostApi.signInWithCustomToken((AuthPigeonFirebaseApp) arrayList2.get(0), (String) arrayList2.get(1), new Result<InternalUserCredential>() { // from class: io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.FirebaseAuthHostApi.10
                @Override // io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.Result
                public void success(InternalUserCredential internalUserCredential) {
                    arrayList.add(0, internalUserCredential);
                    reply.reply(arrayList);
                }

                @Override // io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.Result
                public void error(Throwable th) {
                    reply.reply(GeneratedAndroidFirebaseAuth.wrapError(th));
                }
            });
        }

        static /* synthetic */ void lambda$setUp$10(FirebaseAuthHostApi firebaseAuthHostApi, Object obj, final BasicMessageChannel.Reply reply) {
            final ArrayList arrayList = new ArrayList();
            ArrayList arrayList2 = (ArrayList) obj;
            firebaseAuthHostApi.signInWithEmailAndPassword((AuthPigeonFirebaseApp) arrayList2.get(0), (String) arrayList2.get(1), (String) arrayList2.get(2), new Result<InternalUserCredential>() { // from class: io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.FirebaseAuthHostApi.11
                @Override // io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.Result
                public void success(InternalUserCredential internalUserCredential) {
                    arrayList.add(0, internalUserCredential);
                    reply.reply(arrayList);
                }

                @Override // io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.Result
                public void error(Throwable th) {
                    reply.reply(GeneratedAndroidFirebaseAuth.wrapError(th));
                }
            });
        }

        static /* synthetic */ void lambda$setUp$11(FirebaseAuthHostApi firebaseAuthHostApi, Object obj, final BasicMessageChannel.Reply reply) {
            final ArrayList arrayList = new ArrayList();
            ArrayList arrayList2 = (ArrayList) obj;
            firebaseAuthHostApi.signInWithEmailLink((AuthPigeonFirebaseApp) arrayList2.get(0), (String) arrayList2.get(1), (String) arrayList2.get(2), new Result<InternalUserCredential>() { // from class: io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.FirebaseAuthHostApi.12
                @Override // io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.Result
                public void success(InternalUserCredential internalUserCredential) {
                    arrayList.add(0, internalUserCredential);
                    reply.reply(arrayList);
                }

                @Override // io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.Result
                public void error(Throwable th) {
                    reply.reply(GeneratedAndroidFirebaseAuth.wrapError(th));
                }
            });
        }

        static /* synthetic */ void lambda$setUp$12(FirebaseAuthHostApi firebaseAuthHostApi, Object obj, final BasicMessageChannel.Reply reply) {
            final ArrayList arrayList = new ArrayList();
            ArrayList arrayList2 = (ArrayList) obj;
            firebaseAuthHostApi.signInWithProvider((AuthPigeonFirebaseApp) arrayList2.get(0), (InternalSignInProvider) arrayList2.get(1), new Result<InternalUserCredential>() { // from class: io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.FirebaseAuthHostApi.13
                @Override // io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.Result
                public void success(InternalUserCredential internalUserCredential) {
                    arrayList.add(0, internalUserCredential);
                    reply.reply(arrayList);
                }

                @Override // io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.Result
                public void error(Throwable th) {
                    reply.reply(GeneratedAndroidFirebaseAuth.wrapError(th));
                }
            });
        }

        static /* synthetic */ void lambda$setUp$13(FirebaseAuthHostApi firebaseAuthHostApi, Object obj, final BasicMessageChannel.Reply reply) {
            final ArrayList arrayList = new ArrayList();
            firebaseAuthHostApi.signOut((AuthPigeonFirebaseApp) ((ArrayList) obj).get(0), new VoidResult() { // from class: io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.FirebaseAuthHostApi.14
                @Override // io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.VoidResult
                public void success() {
                    arrayList.add(0, null);
                    reply.reply(arrayList);
                }

                @Override // io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.VoidResult
                public void error(Throwable th) {
                    reply.reply(GeneratedAndroidFirebaseAuth.wrapError(th));
                }
            });
        }

        static /* synthetic */ void lambda$setUp$14(FirebaseAuthHostApi firebaseAuthHostApi, Object obj, final BasicMessageChannel.Reply reply) {
            final ArrayList arrayList = new ArrayList();
            ArrayList arrayList2 = (ArrayList) obj;
            firebaseAuthHostApi.fetchSignInMethodsForEmail((AuthPigeonFirebaseApp) arrayList2.get(0), (String) arrayList2.get(1), new Result<List<String>>() { // from class: io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.FirebaseAuthHostApi.15
                @Override // io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.Result
                public void success(List<String> list) {
                    arrayList.add(0, list);
                    reply.reply(arrayList);
                }

                @Override // io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.Result
                public void error(Throwable th) {
                    reply.reply(GeneratedAndroidFirebaseAuth.wrapError(th));
                }
            });
        }

        static /* synthetic */ void lambda$setUp$15(FirebaseAuthHostApi firebaseAuthHostApi, Object obj, final BasicMessageChannel.Reply reply) {
            final ArrayList arrayList = new ArrayList();
            ArrayList arrayList2 = (ArrayList) obj;
            firebaseAuthHostApi.sendPasswordResetEmail((AuthPigeonFirebaseApp) arrayList2.get(0), (String) arrayList2.get(1), (InternalActionCodeSettings) arrayList2.get(2), new VoidResult() { // from class: io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.FirebaseAuthHostApi.16
                @Override // io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.VoidResult
                public void success() {
                    arrayList.add(0, null);
                    reply.reply(arrayList);
                }

                @Override // io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.VoidResult
                public void error(Throwable th) {
                    reply.reply(GeneratedAndroidFirebaseAuth.wrapError(th));
                }
            });
        }

        static /* synthetic */ void lambda$setUp$16(FirebaseAuthHostApi firebaseAuthHostApi, Object obj, final BasicMessageChannel.Reply reply) {
            final ArrayList arrayList = new ArrayList();
            ArrayList arrayList2 = (ArrayList) obj;
            firebaseAuthHostApi.sendSignInLinkToEmail((AuthPigeonFirebaseApp) arrayList2.get(0), (String) arrayList2.get(1), (InternalActionCodeSettings) arrayList2.get(2), new VoidResult() { // from class: io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.FirebaseAuthHostApi.17
                @Override // io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.VoidResult
                public void success() {
                    arrayList.add(0, null);
                    reply.reply(arrayList);
                }

                @Override // io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.VoidResult
                public void error(Throwable th) {
                    reply.reply(GeneratedAndroidFirebaseAuth.wrapError(th));
                }
            });
        }

        static /* synthetic */ void lambda$setUp$17(FirebaseAuthHostApi firebaseAuthHostApi, Object obj, final BasicMessageChannel.Reply reply) {
            final ArrayList arrayList = new ArrayList();
            ArrayList arrayList2 = (ArrayList) obj;
            firebaseAuthHostApi.setLanguageCode((AuthPigeonFirebaseApp) arrayList2.get(0), (String) arrayList2.get(1), new Result<String>() { // from class: io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.FirebaseAuthHostApi.18
                @Override // io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.Result
                public void success(String str) {
                    arrayList.add(0, str);
                    reply.reply(arrayList);
                }

                @Override // io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.Result
                public void error(Throwable th) {
                    reply.reply(GeneratedAndroidFirebaseAuth.wrapError(th));
                }
            });
        }

        static /* synthetic */ void lambda$setUp$18(FirebaseAuthHostApi firebaseAuthHostApi, Object obj, final BasicMessageChannel.Reply reply) {
            final ArrayList arrayList = new ArrayList();
            ArrayList arrayList2 = (ArrayList) obj;
            firebaseAuthHostApi.setSettings((AuthPigeonFirebaseApp) arrayList2.get(0), (InternalFirebaseAuthSettings) arrayList2.get(1), new VoidResult() { // from class: io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.FirebaseAuthHostApi.19
                @Override // io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.VoidResult
                public void success() {
                    arrayList.add(0, null);
                    reply.reply(arrayList);
                }

                @Override // io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.VoidResult
                public void error(Throwable th) {
                    reply.reply(GeneratedAndroidFirebaseAuth.wrapError(th));
                }
            });
        }

        static /* synthetic */ void lambda$setUp$19(FirebaseAuthHostApi firebaseAuthHostApi, Object obj, final BasicMessageChannel.Reply reply) {
            final ArrayList arrayList = new ArrayList();
            ArrayList arrayList2 = (ArrayList) obj;
            firebaseAuthHostApi.verifyPasswordResetCode((AuthPigeonFirebaseApp) arrayList2.get(0), (String) arrayList2.get(1), new Result<String>() { // from class: io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.FirebaseAuthHostApi.20
                @Override // io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.Result
                public void success(String str) {
                    arrayList.add(0, str);
                    reply.reply(arrayList);
                }

                @Override // io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.Result
                public void error(Throwable th) {
                    reply.reply(GeneratedAndroidFirebaseAuth.wrapError(th));
                }
            });
        }

        static /* synthetic */ void lambda$setUp$20(FirebaseAuthHostApi firebaseAuthHostApi, Object obj, final BasicMessageChannel.Reply reply) {
            final ArrayList arrayList = new ArrayList();
            ArrayList arrayList2 = (ArrayList) obj;
            firebaseAuthHostApi.verifyPhoneNumber((AuthPigeonFirebaseApp) arrayList2.get(0), (InternalVerifyPhoneNumberRequest) arrayList2.get(1), new Result<String>() { // from class: io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.FirebaseAuthHostApi.21
                @Override // io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.Result
                public void success(String str) {
                    arrayList.add(0, str);
                    reply.reply(arrayList);
                }

                @Override // io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.Result
                public void error(Throwable th) {
                    reply.reply(GeneratedAndroidFirebaseAuth.wrapError(th));
                }
            });
        }

        static /* synthetic */ void lambda$setUp$21(FirebaseAuthHostApi firebaseAuthHostApi, Object obj, final BasicMessageChannel.Reply reply) {
            final ArrayList arrayList = new ArrayList();
            ArrayList arrayList2 = (ArrayList) obj;
            firebaseAuthHostApi.revokeTokenWithAuthorizationCode((AuthPigeonFirebaseApp) arrayList2.get(0), (String) arrayList2.get(1), new VoidResult() { // from class: io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.FirebaseAuthHostApi.22
                @Override // io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.VoidResult
                public void success() {
                    arrayList.add(0, null);
                    reply.reply(arrayList);
                }

                @Override // io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.VoidResult
                public void error(Throwable th) {
                    reply.reply(GeneratedAndroidFirebaseAuth.wrapError(th));
                }
            });
        }

        static /* synthetic */ void lambda$setUp$22(FirebaseAuthHostApi firebaseAuthHostApi, Object obj, final BasicMessageChannel.Reply reply) {
            final ArrayList arrayList = new ArrayList();
            ArrayList arrayList2 = (ArrayList) obj;
            firebaseAuthHostApi.revokeAccessToken((AuthPigeonFirebaseApp) arrayList2.get(0), (String) arrayList2.get(1), new VoidResult() { // from class: io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.FirebaseAuthHostApi.23
                @Override // io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.VoidResult
                public void success() {
                    arrayList.add(0, null);
                    reply.reply(arrayList);
                }

                @Override // io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.VoidResult
                public void error(Throwable th) {
                    reply.reply(GeneratedAndroidFirebaseAuth.wrapError(th));
                }
            });
        }

        static /* synthetic */ void lambda$setUp$23(FirebaseAuthHostApi firebaseAuthHostApi, Object obj, final BasicMessageChannel.Reply reply) {
            final ArrayList arrayList = new ArrayList();
            firebaseAuthHostApi.initializeRecaptchaConfig((AuthPigeonFirebaseApp) ((ArrayList) obj).get(0), new VoidResult() { // from class: io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.FirebaseAuthHostApi.24
                @Override // io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.VoidResult
                public void success() {
                    arrayList.add(0, null);
                    reply.reply(arrayList);
                }

                @Override // io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.VoidResult
                public void error(Throwable th) {
                    reply.reply(GeneratedAndroidFirebaseAuth.wrapError(th));
                }
            });
        }
    }

    public interface FirebaseAuthUserHostApi {
        void delete(AuthPigeonFirebaseApp authPigeonFirebaseApp, VoidResult voidResult);

        void getIdToken(AuthPigeonFirebaseApp authPigeonFirebaseApp, Boolean bool, Result<InternalIdTokenResult> result);

        void linkWithCredential(AuthPigeonFirebaseApp authPigeonFirebaseApp, Map<String, Object> map, Result<InternalUserCredential> result);

        void linkWithProvider(AuthPigeonFirebaseApp authPigeonFirebaseApp, InternalSignInProvider internalSignInProvider, Result<InternalUserCredential> result);

        void reauthenticateWithCredential(AuthPigeonFirebaseApp authPigeonFirebaseApp, Map<String, Object> map, Result<InternalUserCredential> result);

        void reauthenticateWithProvider(AuthPigeonFirebaseApp authPigeonFirebaseApp, InternalSignInProvider internalSignInProvider, Result<InternalUserCredential> result);

        void reload(AuthPigeonFirebaseApp authPigeonFirebaseApp, Result<InternalUserDetails> result);

        void sendEmailVerification(AuthPigeonFirebaseApp authPigeonFirebaseApp, InternalActionCodeSettings internalActionCodeSettings, VoidResult voidResult);

        void unlink(AuthPigeonFirebaseApp authPigeonFirebaseApp, String str, Result<InternalUserCredential> result);

        void updateEmail(AuthPigeonFirebaseApp authPigeonFirebaseApp, String str, Result<InternalUserDetails> result);

        void updatePassword(AuthPigeonFirebaseApp authPigeonFirebaseApp, String str, Result<InternalUserDetails> result);

        void updatePhoneNumber(AuthPigeonFirebaseApp authPigeonFirebaseApp, Map<String, Object> map, Result<InternalUserDetails> result);

        void updateProfile(AuthPigeonFirebaseApp authPigeonFirebaseApp, InternalUserProfile internalUserProfile, Result<InternalUserDetails> result);

        void verifyBeforeUpdateEmail(AuthPigeonFirebaseApp authPigeonFirebaseApp, String str, InternalActionCodeSettings internalActionCodeSettings, VoidResult voidResult);

        static MessageCodec<Object> getCodec() {
            return PigeonCodec.INSTANCE;
        }

        static void setUp(BinaryMessenger binaryMessenger, FirebaseAuthUserHostApi firebaseAuthUserHostApi) {
            setUp(binaryMessenger, "", firebaseAuthUserHostApi);
        }

        static void setUp(BinaryMessenger binaryMessenger, String str, final FirebaseAuthUserHostApi firebaseAuthUserHostApi) {
            String str2;
            if (str.isEmpty()) {
                str2 = "";
            } else {
                str2 = "." + str;
            }
            BasicMessageChannel basicMessageChannel = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.firebase_auth_platform_interface.FirebaseAuthUserHostApi.delete" + str2, getCodec());
            if (firebaseAuthUserHostApi != null) {
                basicMessageChannel.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth$FirebaseAuthUserHostApi$$ExternalSyntheticLambda0
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        GeneratedAndroidFirebaseAuth.FirebaseAuthUserHostApi.lambda$setUp$0(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel2 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.firebase_auth_platform_interface.FirebaseAuthUserHostApi.getIdToken" + str2, getCodec());
            if (firebaseAuthUserHostApi != null) {
                basicMessageChannel2.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth$FirebaseAuthUserHostApi$$ExternalSyntheticLambda9
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        GeneratedAndroidFirebaseAuth.FirebaseAuthUserHostApi.lambda$setUp$1(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel2.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel3 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.firebase_auth_platform_interface.FirebaseAuthUserHostApi.linkWithCredential" + str2, getCodec());
            if (firebaseAuthUserHostApi != null) {
                basicMessageChannel3.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth$FirebaseAuthUserHostApi$$ExternalSyntheticLambda10
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        GeneratedAndroidFirebaseAuth.FirebaseAuthUserHostApi.lambda$setUp$2(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel3.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel4 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.firebase_auth_platform_interface.FirebaseAuthUserHostApi.linkWithProvider" + str2, getCodec());
            if (firebaseAuthUserHostApi != null) {
                basicMessageChannel4.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth$FirebaseAuthUserHostApi$$ExternalSyntheticLambda11
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        GeneratedAndroidFirebaseAuth.FirebaseAuthUserHostApi.lambda$setUp$3(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel4.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel5 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.firebase_auth_platform_interface.FirebaseAuthUserHostApi.reauthenticateWithCredential" + str2, getCodec());
            if (firebaseAuthUserHostApi != null) {
                basicMessageChannel5.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth$FirebaseAuthUserHostApi$$ExternalSyntheticLambda12
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        GeneratedAndroidFirebaseAuth.FirebaseAuthUserHostApi.lambda$setUp$4(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel5.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel6 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.firebase_auth_platform_interface.FirebaseAuthUserHostApi.reauthenticateWithProvider" + str2, getCodec());
            if (firebaseAuthUserHostApi != null) {
                basicMessageChannel6.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth$FirebaseAuthUserHostApi$$ExternalSyntheticLambda13
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        GeneratedAndroidFirebaseAuth.FirebaseAuthUserHostApi.lambda$setUp$5(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel6.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel7 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.firebase_auth_platform_interface.FirebaseAuthUserHostApi.reload" + str2, getCodec());
            if (firebaseAuthUserHostApi != null) {
                basicMessageChannel7.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth$FirebaseAuthUserHostApi$$ExternalSyntheticLambda1
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        GeneratedAndroidFirebaseAuth.FirebaseAuthUserHostApi.lambda$setUp$6(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel7.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel8 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.firebase_auth_platform_interface.FirebaseAuthUserHostApi.sendEmailVerification" + str2, getCodec());
            if (firebaseAuthUserHostApi != null) {
                basicMessageChannel8.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth$FirebaseAuthUserHostApi$$ExternalSyntheticLambda2
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        GeneratedAndroidFirebaseAuth.FirebaseAuthUserHostApi.lambda$setUp$7(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel8.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel9 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.firebase_auth_platform_interface.FirebaseAuthUserHostApi.unlink" + str2, getCodec());
            if (firebaseAuthUserHostApi != null) {
                basicMessageChannel9.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth$FirebaseAuthUserHostApi$$ExternalSyntheticLambda3
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        GeneratedAndroidFirebaseAuth.FirebaseAuthUserHostApi.lambda$setUp$8(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel9.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel10 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.firebase_auth_platform_interface.FirebaseAuthUserHostApi.updateEmail" + str2, getCodec());
            if (firebaseAuthUserHostApi != null) {
                basicMessageChannel10.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth$FirebaseAuthUserHostApi$$ExternalSyntheticLambda4
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        GeneratedAndroidFirebaseAuth.FirebaseAuthUserHostApi.lambda$setUp$9(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel10.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel11 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.firebase_auth_platform_interface.FirebaseAuthUserHostApi.updatePassword" + str2, getCodec());
            if (firebaseAuthUserHostApi != null) {
                basicMessageChannel11.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth$FirebaseAuthUserHostApi$$ExternalSyntheticLambda5
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        GeneratedAndroidFirebaseAuth.FirebaseAuthUserHostApi.lambda$setUp$10(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel11.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel12 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.firebase_auth_platform_interface.FirebaseAuthUserHostApi.updatePhoneNumber" + str2, getCodec());
            if (firebaseAuthUserHostApi != null) {
                basicMessageChannel12.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth$FirebaseAuthUserHostApi$$ExternalSyntheticLambda6
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        GeneratedAndroidFirebaseAuth.FirebaseAuthUserHostApi.lambda$setUp$11(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel12.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel13 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.firebase_auth_platform_interface.FirebaseAuthUserHostApi.updateProfile" + str2, getCodec());
            if (firebaseAuthUserHostApi != null) {
                basicMessageChannel13.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth$FirebaseAuthUserHostApi$$ExternalSyntheticLambda7
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        GeneratedAndroidFirebaseAuth.FirebaseAuthUserHostApi.lambda$setUp$12(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel13.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel14 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.firebase_auth_platform_interface.FirebaseAuthUserHostApi.verifyBeforeUpdateEmail" + str2, getCodec());
            if (firebaseAuthUserHostApi != null) {
                basicMessageChannel14.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth$FirebaseAuthUserHostApi$$ExternalSyntheticLambda8
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        GeneratedAndroidFirebaseAuth.FirebaseAuthUserHostApi.lambda$setUp$13(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel14.setMessageHandler(null);
            }
        }

        static /* synthetic */ void lambda$setUp$0(FirebaseAuthUserHostApi firebaseAuthUserHostApi, Object obj, final BasicMessageChannel.Reply reply) {
            final ArrayList arrayList = new ArrayList();
            firebaseAuthUserHostApi.delete((AuthPigeonFirebaseApp) ((ArrayList) obj).get(0), new VoidResult() { // from class: io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.FirebaseAuthUserHostApi.1
                @Override // io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.VoidResult
                public void success() {
                    arrayList.add(0, null);
                    reply.reply(arrayList);
                }

                @Override // io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.VoidResult
                public void error(Throwable th) {
                    reply.reply(GeneratedAndroidFirebaseAuth.wrapError(th));
                }
            });
        }

        static /* synthetic */ void lambda$setUp$1(FirebaseAuthUserHostApi firebaseAuthUserHostApi, Object obj, final BasicMessageChannel.Reply reply) {
            final ArrayList arrayList = new ArrayList();
            ArrayList arrayList2 = (ArrayList) obj;
            firebaseAuthUserHostApi.getIdToken((AuthPigeonFirebaseApp) arrayList2.get(0), (Boolean) arrayList2.get(1), new Result<InternalIdTokenResult>() { // from class: io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.FirebaseAuthUserHostApi.2
                @Override // io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.Result
                public void success(InternalIdTokenResult internalIdTokenResult) {
                    arrayList.add(0, internalIdTokenResult);
                    reply.reply(arrayList);
                }

                @Override // io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.Result
                public void error(Throwable th) {
                    reply.reply(GeneratedAndroidFirebaseAuth.wrapError(th));
                }
            });
        }

        static /* synthetic */ void lambda$setUp$2(FirebaseAuthUserHostApi firebaseAuthUserHostApi, Object obj, final BasicMessageChannel.Reply reply) {
            final ArrayList arrayList = new ArrayList();
            ArrayList arrayList2 = (ArrayList) obj;
            firebaseAuthUserHostApi.linkWithCredential((AuthPigeonFirebaseApp) arrayList2.get(0), (Map) arrayList2.get(1), new Result<InternalUserCredential>() { // from class: io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.FirebaseAuthUserHostApi.3
                @Override // io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.Result
                public void success(InternalUserCredential internalUserCredential) {
                    arrayList.add(0, internalUserCredential);
                    reply.reply(arrayList);
                }

                @Override // io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.Result
                public void error(Throwable th) {
                    reply.reply(GeneratedAndroidFirebaseAuth.wrapError(th));
                }
            });
        }

        static /* synthetic */ void lambda$setUp$3(FirebaseAuthUserHostApi firebaseAuthUserHostApi, Object obj, final BasicMessageChannel.Reply reply) {
            final ArrayList arrayList = new ArrayList();
            ArrayList arrayList2 = (ArrayList) obj;
            firebaseAuthUserHostApi.linkWithProvider((AuthPigeonFirebaseApp) arrayList2.get(0), (InternalSignInProvider) arrayList2.get(1), new Result<InternalUserCredential>() { // from class: io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.FirebaseAuthUserHostApi.4
                @Override // io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.Result
                public void success(InternalUserCredential internalUserCredential) {
                    arrayList.add(0, internalUserCredential);
                    reply.reply(arrayList);
                }

                @Override // io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.Result
                public void error(Throwable th) {
                    reply.reply(GeneratedAndroidFirebaseAuth.wrapError(th));
                }
            });
        }

        static /* synthetic */ void lambda$setUp$4(FirebaseAuthUserHostApi firebaseAuthUserHostApi, Object obj, final BasicMessageChannel.Reply reply) {
            final ArrayList arrayList = new ArrayList();
            ArrayList arrayList2 = (ArrayList) obj;
            firebaseAuthUserHostApi.reauthenticateWithCredential((AuthPigeonFirebaseApp) arrayList2.get(0), (Map) arrayList2.get(1), new Result<InternalUserCredential>() { // from class: io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.FirebaseAuthUserHostApi.5
                @Override // io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.Result
                public void success(InternalUserCredential internalUserCredential) {
                    arrayList.add(0, internalUserCredential);
                    reply.reply(arrayList);
                }

                @Override // io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.Result
                public void error(Throwable th) {
                    reply.reply(GeneratedAndroidFirebaseAuth.wrapError(th));
                }
            });
        }

        static /* synthetic */ void lambda$setUp$5(FirebaseAuthUserHostApi firebaseAuthUserHostApi, Object obj, final BasicMessageChannel.Reply reply) {
            final ArrayList arrayList = new ArrayList();
            ArrayList arrayList2 = (ArrayList) obj;
            firebaseAuthUserHostApi.reauthenticateWithProvider((AuthPigeonFirebaseApp) arrayList2.get(0), (InternalSignInProvider) arrayList2.get(1), new Result<InternalUserCredential>() { // from class: io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.FirebaseAuthUserHostApi.6
                @Override // io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.Result
                public void success(InternalUserCredential internalUserCredential) {
                    arrayList.add(0, internalUserCredential);
                    reply.reply(arrayList);
                }

                @Override // io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.Result
                public void error(Throwable th) {
                    reply.reply(GeneratedAndroidFirebaseAuth.wrapError(th));
                }
            });
        }

        static /* synthetic */ void lambda$setUp$6(FirebaseAuthUserHostApi firebaseAuthUserHostApi, Object obj, final BasicMessageChannel.Reply reply) {
            final ArrayList arrayList = new ArrayList();
            firebaseAuthUserHostApi.reload((AuthPigeonFirebaseApp) ((ArrayList) obj).get(0), new Result<InternalUserDetails>() { // from class: io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.FirebaseAuthUserHostApi.7
                @Override // io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.Result
                public void success(InternalUserDetails internalUserDetails) {
                    arrayList.add(0, internalUserDetails);
                    reply.reply(arrayList);
                }

                @Override // io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.Result
                public void error(Throwable th) {
                    reply.reply(GeneratedAndroidFirebaseAuth.wrapError(th));
                }
            });
        }

        static /* synthetic */ void lambda$setUp$7(FirebaseAuthUserHostApi firebaseAuthUserHostApi, Object obj, final BasicMessageChannel.Reply reply) {
            final ArrayList arrayList = new ArrayList();
            ArrayList arrayList2 = (ArrayList) obj;
            firebaseAuthUserHostApi.sendEmailVerification((AuthPigeonFirebaseApp) arrayList2.get(0), (InternalActionCodeSettings) arrayList2.get(1), new VoidResult() { // from class: io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.FirebaseAuthUserHostApi.8
                @Override // io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.VoidResult
                public void success() {
                    arrayList.add(0, null);
                    reply.reply(arrayList);
                }

                @Override // io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.VoidResult
                public void error(Throwable th) {
                    reply.reply(GeneratedAndroidFirebaseAuth.wrapError(th));
                }
            });
        }

        static /* synthetic */ void lambda$setUp$8(FirebaseAuthUserHostApi firebaseAuthUserHostApi, Object obj, final BasicMessageChannel.Reply reply) {
            final ArrayList arrayList = new ArrayList();
            ArrayList arrayList2 = (ArrayList) obj;
            firebaseAuthUserHostApi.unlink((AuthPigeonFirebaseApp) arrayList2.get(0), (String) arrayList2.get(1), new Result<InternalUserCredential>() { // from class: io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.FirebaseAuthUserHostApi.9
                @Override // io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.Result
                public void success(InternalUserCredential internalUserCredential) {
                    arrayList.add(0, internalUserCredential);
                    reply.reply(arrayList);
                }

                @Override // io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.Result
                public void error(Throwable th) {
                    reply.reply(GeneratedAndroidFirebaseAuth.wrapError(th));
                }
            });
        }

        static /* synthetic */ void lambda$setUp$9(FirebaseAuthUserHostApi firebaseAuthUserHostApi, Object obj, final BasicMessageChannel.Reply reply) {
            final ArrayList arrayList = new ArrayList();
            ArrayList arrayList2 = (ArrayList) obj;
            firebaseAuthUserHostApi.updateEmail((AuthPigeonFirebaseApp) arrayList2.get(0), (String) arrayList2.get(1), new Result<InternalUserDetails>() { // from class: io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.FirebaseAuthUserHostApi.10
                @Override // io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.Result
                public void success(InternalUserDetails internalUserDetails) {
                    arrayList.add(0, internalUserDetails);
                    reply.reply(arrayList);
                }

                @Override // io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.Result
                public void error(Throwable th) {
                    reply.reply(GeneratedAndroidFirebaseAuth.wrapError(th));
                }
            });
        }

        static /* synthetic */ void lambda$setUp$10(FirebaseAuthUserHostApi firebaseAuthUserHostApi, Object obj, final BasicMessageChannel.Reply reply) {
            final ArrayList arrayList = new ArrayList();
            ArrayList arrayList2 = (ArrayList) obj;
            firebaseAuthUserHostApi.updatePassword((AuthPigeonFirebaseApp) arrayList2.get(0), (String) arrayList2.get(1), new Result<InternalUserDetails>() { // from class: io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.FirebaseAuthUserHostApi.11
                @Override // io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.Result
                public void success(InternalUserDetails internalUserDetails) {
                    arrayList.add(0, internalUserDetails);
                    reply.reply(arrayList);
                }

                @Override // io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.Result
                public void error(Throwable th) {
                    reply.reply(GeneratedAndroidFirebaseAuth.wrapError(th));
                }
            });
        }

        static /* synthetic */ void lambda$setUp$11(FirebaseAuthUserHostApi firebaseAuthUserHostApi, Object obj, final BasicMessageChannel.Reply reply) {
            final ArrayList arrayList = new ArrayList();
            ArrayList arrayList2 = (ArrayList) obj;
            firebaseAuthUserHostApi.updatePhoneNumber((AuthPigeonFirebaseApp) arrayList2.get(0), (Map) arrayList2.get(1), new Result<InternalUserDetails>() { // from class: io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.FirebaseAuthUserHostApi.12
                @Override // io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.Result
                public void success(InternalUserDetails internalUserDetails) {
                    arrayList.add(0, internalUserDetails);
                    reply.reply(arrayList);
                }

                @Override // io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.Result
                public void error(Throwable th) {
                    reply.reply(GeneratedAndroidFirebaseAuth.wrapError(th));
                }
            });
        }

        static /* synthetic */ void lambda$setUp$12(FirebaseAuthUserHostApi firebaseAuthUserHostApi, Object obj, final BasicMessageChannel.Reply reply) {
            final ArrayList arrayList = new ArrayList();
            ArrayList arrayList2 = (ArrayList) obj;
            firebaseAuthUserHostApi.updateProfile((AuthPigeonFirebaseApp) arrayList2.get(0), (InternalUserProfile) arrayList2.get(1), new Result<InternalUserDetails>() { // from class: io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.FirebaseAuthUserHostApi.13
                @Override // io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.Result
                public void success(InternalUserDetails internalUserDetails) {
                    arrayList.add(0, internalUserDetails);
                    reply.reply(arrayList);
                }

                @Override // io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.Result
                public void error(Throwable th) {
                    reply.reply(GeneratedAndroidFirebaseAuth.wrapError(th));
                }
            });
        }

        static /* synthetic */ void lambda$setUp$13(FirebaseAuthUserHostApi firebaseAuthUserHostApi, Object obj, final BasicMessageChannel.Reply reply) {
            final ArrayList arrayList = new ArrayList();
            ArrayList arrayList2 = (ArrayList) obj;
            firebaseAuthUserHostApi.verifyBeforeUpdateEmail((AuthPigeonFirebaseApp) arrayList2.get(0), (String) arrayList2.get(1), (InternalActionCodeSettings) arrayList2.get(2), new VoidResult() { // from class: io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.FirebaseAuthUserHostApi.14
                @Override // io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.VoidResult
                public void success() {
                    arrayList.add(0, null);
                    reply.reply(arrayList);
                }

                @Override // io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.VoidResult
                public void error(Throwable th) {
                    reply.reply(GeneratedAndroidFirebaseAuth.wrapError(th));
                }
            });
        }
    }

    public interface MultiFactorUserHostApi {
        void enrollPhone(AuthPigeonFirebaseApp authPigeonFirebaseApp, InternalPhoneMultiFactorAssertion internalPhoneMultiFactorAssertion, String str, VoidResult voidResult);

        void enrollTotp(AuthPigeonFirebaseApp authPigeonFirebaseApp, String str, String str2, VoidResult voidResult);

        void getEnrolledFactors(AuthPigeonFirebaseApp authPigeonFirebaseApp, Result<List<InternalMultiFactorInfo>> result);

        void getSession(AuthPigeonFirebaseApp authPigeonFirebaseApp, Result<InternalMultiFactorSession> result);

        void unenroll(AuthPigeonFirebaseApp authPigeonFirebaseApp, String str, VoidResult voidResult);

        static MessageCodec<Object> getCodec() {
            return PigeonCodec.INSTANCE;
        }

        static void setUp(BinaryMessenger binaryMessenger, MultiFactorUserHostApi multiFactorUserHostApi) {
            setUp(binaryMessenger, "", multiFactorUserHostApi);
        }

        static void setUp(BinaryMessenger binaryMessenger, String str, final MultiFactorUserHostApi multiFactorUserHostApi) {
            String str2;
            if (str.isEmpty()) {
                str2 = "";
            } else {
                str2 = "." + str;
            }
            BasicMessageChannel basicMessageChannel = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.firebase_auth_platform_interface.MultiFactorUserHostApi.enrollPhone" + str2, getCodec());
            if (multiFactorUserHostApi != null) {
                basicMessageChannel.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth$MultiFactorUserHostApi$$ExternalSyntheticLambda0
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        GeneratedAndroidFirebaseAuth.MultiFactorUserHostApi.lambda$setUp$0(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel2 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.firebase_auth_platform_interface.MultiFactorUserHostApi.enrollTotp" + str2, getCodec());
            if (multiFactorUserHostApi != null) {
                basicMessageChannel2.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth$MultiFactorUserHostApi$$ExternalSyntheticLambda1
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        GeneratedAndroidFirebaseAuth.MultiFactorUserHostApi.lambda$setUp$1(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel2.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel3 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.firebase_auth_platform_interface.MultiFactorUserHostApi.getSession" + str2, getCodec());
            if (multiFactorUserHostApi != null) {
                basicMessageChannel3.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth$MultiFactorUserHostApi$$ExternalSyntheticLambda2
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        GeneratedAndroidFirebaseAuth.MultiFactorUserHostApi.lambda$setUp$2(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel3.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel4 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.firebase_auth_platform_interface.MultiFactorUserHostApi.unenroll" + str2, getCodec());
            if (multiFactorUserHostApi != null) {
                basicMessageChannel4.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth$MultiFactorUserHostApi$$ExternalSyntheticLambda3
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        GeneratedAndroidFirebaseAuth.MultiFactorUserHostApi.lambda$setUp$3(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel4.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel5 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.firebase_auth_platform_interface.MultiFactorUserHostApi.getEnrolledFactors" + str2, getCodec());
            if (multiFactorUserHostApi != null) {
                basicMessageChannel5.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth$MultiFactorUserHostApi$$ExternalSyntheticLambda4
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        GeneratedAndroidFirebaseAuth.MultiFactorUserHostApi.lambda$setUp$4(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel5.setMessageHandler(null);
            }
        }

        static /* synthetic */ void lambda$setUp$0(MultiFactorUserHostApi multiFactorUserHostApi, Object obj, final BasicMessageChannel.Reply reply) {
            final ArrayList arrayList = new ArrayList();
            ArrayList arrayList2 = (ArrayList) obj;
            multiFactorUserHostApi.enrollPhone((AuthPigeonFirebaseApp) arrayList2.get(0), (InternalPhoneMultiFactorAssertion) arrayList2.get(1), (String) arrayList2.get(2), new VoidResult() { // from class: io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.MultiFactorUserHostApi.1
                @Override // io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.VoidResult
                public void success() {
                    arrayList.add(0, null);
                    reply.reply(arrayList);
                }

                @Override // io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.VoidResult
                public void error(Throwable th) {
                    reply.reply(GeneratedAndroidFirebaseAuth.wrapError(th));
                }
            });
        }

        static /* synthetic */ void lambda$setUp$1(MultiFactorUserHostApi multiFactorUserHostApi, Object obj, final BasicMessageChannel.Reply reply) {
            final ArrayList arrayList = new ArrayList();
            ArrayList arrayList2 = (ArrayList) obj;
            multiFactorUserHostApi.enrollTotp((AuthPigeonFirebaseApp) arrayList2.get(0), (String) arrayList2.get(1), (String) arrayList2.get(2), new VoidResult() { // from class: io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.MultiFactorUserHostApi.2
                @Override // io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.VoidResult
                public void success() {
                    arrayList.add(0, null);
                    reply.reply(arrayList);
                }

                @Override // io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.VoidResult
                public void error(Throwable th) {
                    reply.reply(GeneratedAndroidFirebaseAuth.wrapError(th));
                }
            });
        }

        static /* synthetic */ void lambda$setUp$2(MultiFactorUserHostApi multiFactorUserHostApi, Object obj, final BasicMessageChannel.Reply reply) {
            final ArrayList arrayList = new ArrayList();
            multiFactorUserHostApi.getSession((AuthPigeonFirebaseApp) ((ArrayList) obj).get(0), new Result<InternalMultiFactorSession>() { // from class: io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.MultiFactorUserHostApi.3
                @Override // io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.Result
                public void success(InternalMultiFactorSession internalMultiFactorSession) {
                    arrayList.add(0, internalMultiFactorSession);
                    reply.reply(arrayList);
                }

                @Override // io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.Result
                public void error(Throwable th) {
                    reply.reply(GeneratedAndroidFirebaseAuth.wrapError(th));
                }
            });
        }

        static /* synthetic */ void lambda$setUp$3(MultiFactorUserHostApi multiFactorUserHostApi, Object obj, final BasicMessageChannel.Reply reply) {
            final ArrayList arrayList = new ArrayList();
            ArrayList arrayList2 = (ArrayList) obj;
            multiFactorUserHostApi.unenroll((AuthPigeonFirebaseApp) arrayList2.get(0), (String) arrayList2.get(1), new VoidResult() { // from class: io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.MultiFactorUserHostApi.4
                @Override // io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.VoidResult
                public void success() {
                    arrayList.add(0, null);
                    reply.reply(arrayList);
                }

                @Override // io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.VoidResult
                public void error(Throwable th) {
                    reply.reply(GeneratedAndroidFirebaseAuth.wrapError(th));
                }
            });
        }

        static /* synthetic */ void lambda$setUp$4(MultiFactorUserHostApi multiFactorUserHostApi, Object obj, final BasicMessageChannel.Reply reply) {
            final ArrayList arrayList = new ArrayList();
            multiFactorUserHostApi.getEnrolledFactors((AuthPigeonFirebaseApp) ((ArrayList) obj).get(0), new Result<List<InternalMultiFactorInfo>>() { // from class: io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.MultiFactorUserHostApi.5
                @Override // io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.Result
                public void success(List<InternalMultiFactorInfo> list) {
                    arrayList.add(0, list);
                    reply.reply(arrayList);
                }

                @Override // io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.Result
                public void error(Throwable th) {
                    reply.reply(GeneratedAndroidFirebaseAuth.wrapError(th));
                }
            });
        }
    }

    public interface MultiFactoResolverHostApi {
        void resolveSignIn(String str, InternalPhoneMultiFactorAssertion internalPhoneMultiFactorAssertion, String str2, Result<InternalUserCredential> result);

        static MessageCodec<Object> getCodec() {
            return PigeonCodec.INSTANCE;
        }

        static void setUp(BinaryMessenger binaryMessenger, MultiFactoResolverHostApi multiFactoResolverHostApi) {
            setUp(binaryMessenger, "", multiFactoResolverHostApi);
        }

        static void setUp(BinaryMessenger binaryMessenger, String str, final MultiFactoResolverHostApi multiFactoResolverHostApi) {
            String str2;
            if (str.isEmpty()) {
                str2 = "";
            } else {
                str2 = "." + str;
            }
            BasicMessageChannel basicMessageChannel = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.firebase_auth_platform_interface.MultiFactoResolverHostApi.resolveSignIn" + str2, getCodec());
            if (multiFactoResolverHostApi != null) {
                basicMessageChannel.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth$MultiFactoResolverHostApi$$ExternalSyntheticLambda0
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        GeneratedAndroidFirebaseAuth.MultiFactoResolverHostApi.lambda$setUp$0(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel.setMessageHandler(null);
            }
        }

        static /* synthetic */ void lambda$setUp$0(MultiFactoResolverHostApi multiFactoResolverHostApi, Object obj, final BasicMessageChannel.Reply reply) {
            final ArrayList arrayList = new ArrayList();
            ArrayList arrayList2 = (ArrayList) obj;
            multiFactoResolverHostApi.resolveSignIn((String) arrayList2.get(0), (InternalPhoneMultiFactorAssertion) arrayList2.get(1), (String) arrayList2.get(2), new Result<InternalUserCredential>() { // from class: io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.MultiFactoResolverHostApi.1
                @Override // io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.Result
                public void success(InternalUserCredential internalUserCredential) {
                    arrayList.add(0, internalUserCredential);
                    reply.reply(arrayList);
                }

                @Override // io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.Result
                public void error(Throwable th) {
                    reply.reply(GeneratedAndroidFirebaseAuth.wrapError(th));
                }
            });
        }
    }

    public interface MultiFactorTotpHostApi {
        void generateSecret(String str, Result<InternalTotpSecret> result);

        void getAssertionForEnrollment(String str, String str2, Result<String> result);

        void getAssertionForSignIn(String str, String str2, Result<String> result);

        static MessageCodec<Object> getCodec() {
            return PigeonCodec.INSTANCE;
        }

        static void setUp(BinaryMessenger binaryMessenger, MultiFactorTotpHostApi multiFactorTotpHostApi) {
            setUp(binaryMessenger, "", multiFactorTotpHostApi);
        }

        static void setUp(BinaryMessenger binaryMessenger, String str, final MultiFactorTotpHostApi multiFactorTotpHostApi) {
            String str2;
            if (str.isEmpty()) {
                str2 = "";
            } else {
                str2 = "." + str;
            }
            BasicMessageChannel basicMessageChannel = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.firebase_auth_platform_interface.MultiFactorTotpHostApi.generateSecret" + str2, getCodec());
            if (multiFactorTotpHostApi != null) {
                basicMessageChannel.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth$MultiFactorTotpHostApi$$ExternalSyntheticLambda0
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        GeneratedAndroidFirebaseAuth.MultiFactorTotpHostApi.lambda$setUp$0(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel2 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.firebase_auth_platform_interface.MultiFactorTotpHostApi.getAssertionForEnrollment" + str2, getCodec());
            if (multiFactorTotpHostApi != null) {
                basicMessageChannel2.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth$MultiFactorTotpHostApi$$ExternalSyntheticLambda1
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        GeneratedAndroidFirebaseAuth.MultiFactorTotpHostApi.lambda$setUp$1(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel2.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel3 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.firebase_auth_platform_interface.MultiFactorTotpHostApi.getAssertionForSignIn" + str2, getCodec());
            if (multiFactorTotpHostApi != null) {
                basicMessageChannel3.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth$MultiFactorTotpHostApi$$ExternalSyntheticLambda2
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        GeneratedAndroidFirebaseAuth.MultiFactorTotpHostApi.lambda$setUp$2(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel3.setMessageHandler(null);
            }
        }

        static /* synthetic */ void lambda$setUp$0(MultiFactorTotpHostApi multiFactorTotpHostApi, Object obj, final BasicMessageChannel.Reply reply) {
            final ArrayList arrayList = new ArrayList();
            multiFactorTotpHostApi.generateSecret((String) ((ArrayList) obj).get(0), new Result<InternalTotpSecret>() { // from class: io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.MultiFactorTotpHostApi.1
                @Override // io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.Result
                public void success(InternalTotpSecret internalTotpSecret) {
                    arrayList.add(0, internalTotpSecret);
                    reply.reply(arrayList);
                }

                @Override // io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.Result
                public void error(Throwable th) {
                    reply.reply(GeneratedAndroidFirebaseAuth.wrapError(th));
                }
            });
        }

        static /* synthetic */ void lambda$setUp$1(MultiFactorTotpHostApi multiFactorTotpHostApi, Object obj, final BasicMessageChannel.Reply reply) {
            final ArrayList arrayList = new ArrayList();
            ArrayList arrayList2 = (ArrayList) obj;
            multiFactorTotpHostApi.getAssertionForEnrollment((String) arrayList2.get(0), (String) arrayList2.get(1), new Result<String>() { // from class: io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.MultiFactorTotpHostApi.2
                @Override // io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.Result
                public void success(String str) {
                    arrayList.add(0, str);
                    reply.reply(arrayList);
                }

                @Override // io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.Result
                public void error(Throwable th) {
                    reply.reply(GeneratedAndroidFirebaseAuth.wrapError(th));
                }
            });
        }

        static /* synthetic */ void lambda$setUp$2(MultiFactorTotpHostApi multiFactorTotpHostApi, Object obj, final BasicMessageChannel.Reply reply) {
            final ArrayList arrayList = new ArrayList();
            ArrayList arrayList2 = (ArrayList) obj;
            multiFactorTotpHostApi.getAssertionForSignIn((String) arrayList2.get(0), (String) arrayList2.get(1), new Result<String>() { // from class: io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.MultiFactorTotpHostApi.3
                @Override // io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.Result
                public void success(String str) {
                    arrayList.add(0, str);
                    reply.reply(arrayList);
                }

                @Override // io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.Result
                public void error(Throwable th) {
                    reply.reply(GeneratedAndroidFirebaseAuth.wrapError(th));
                }
            });
        }
    }

    public interface MultiFactorTotpSecretHostApi {
        void generateQrCodeUrl(String str, String str2, String str3, Result<String> result);

        void openInOtpApp(String str, String str2, VoidResult voidResult);

        static MessageCodec<Object> getCodec() {
            return PigeonCodec.INSTANCE;
        }

        static void setUp(BinaryMessenger binaryMessenger, MultiFactorTotpSecretHostApi multiFactorTotpSecretHostApi) {
            setUp(binaryMessenger, "", multiFactorTotpSecretHostApi);
        }

        static void setUp(BinaryMessenger binaryMessenger, String str, final MultiFactorTotpSecretHostApi multiFactorTotpSecretHostApi) {
            String str2;
            if (str.isEmpty()) {
                str2 = "";
            } else {
                str2 = "." + str;
            }
            BasicMessageChannel basicMessageChannel = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.firebase_auth_platform_interface.MultiFactorTotpSecretHostApi.generateQrCodeUrl" + str2, getCodec());
            if (multiFactorTotpSecretHostApi != null) {
                basicMessageChannel.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth$MultiFactorTotpSecretHostApi$$ExternalSyntheticLambda0
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        GeneratedAndroidFirebaseAuth.MultiFactorTotpSecretHostApi.lambda$setUp$0(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel.setMessageHandler(null);
            }
            BasicMessageChannel basicMessageChannel2 = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.firebase_auth_platform_interface.MultiFactorTotpSecretHostApi.openInOtpApp" + str2, getCodec());
            if (multiFactorTotpSecretHostApi != null) {
                basicMessageChannel2.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth$MultiFactorTotpSecretHostApi$$ExternalSyntheticLambda1
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        GeneratedAndroidFirebaseAuth.MultiFactorTotpSecretHostApi.lambda$setUp$1(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel2.setMessageHandler(null);
            }
        }

        static /* synthetic */ void lambda$setUp$0(MultiFactorTotpSecretHostApi multiFactorTotpSecretHostApi, Object obj, final BasicMessageChannel.Reply reply) {
            final ArrayList arrayList = new ArrayList();
            ArrayList arrayList2 = (ArrayList) obj;
            multiFactorTotpSecretHostApi.generateQrCodeUrl((String) arrayList2.get(0), (String) arrayList2.get(1), (String) arrayList2.get(2), new Result<String>() { // from class: io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.MultiFactorTotpSecretHostApi.1
                @Override // io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.Result
                public void success(String str) {
                    arrayList.add(0, str);
                    reply.reply(arrayList);
                }

                @Override // io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.Result
                public void error(Throwable th) {
                    reply.reply(GeneratedAndroidFirebaseAuth.wrapError(th));
                }
            });
        }

        static /* synthetic */ void lambda$setUp$1(MultiFactorTotpSecretHostApi multiFactorTotpSecretHostApi, Object obj, final BasicMessageChannel.Reply reply) {
            final ArrayList arrayList = new ArrayList();
            ArrayList arrayList2 = (ArrayList) obj;
            multiFactorTotpSecretHostApi.openInOtpApp((String) arrayList2.get(0), (String) arrayList2.get(1), new VoidResult() { // from class: io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.MultiFactorTotpSecretHostApi.2
                @Override // io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.VoidResult
                public void success() {
                    arrayList.add(0, null);
                    reply.reply(arrayList);
                }

                @Override // io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth.VoidResult
                public void error(Throwable th) {
                    reply.reply(GeneratedAndroidFirebaseAuth.wrapError(th));
                }
            });
        }
    }

    public interface GenerateInterfaces {
        void pigeonInterface(InternalMultiFactorInfo internalMultiFactorInfo);

        static MessageCodec<Object> getCodec() {
            return PigeonCodec.INSTANCE;
        }

        static void setUp(BinaryMessenger binaryMessenger, GenerateInterfaces generateInterfaces) {
            setUp(binaryMessenger, "", generateInterfaces);
        }

        static void setUp(BinaryMessenger binaryMessenger, String str, final GenerateInterfaces generateInterfaces) {
            String str2;
            if (str.isEmpty()) {
                str2 = "";
            } else {
                str2 = "." + str;
            }
            BasicMessageChannel basicMessageChannel = new BasicMessageChannel(binaryMessenger, "dev.flutter.pigeon.firebase_auth_platform_interface.GenerateInterfaces.pigeonInterface" + str2, getCodec());
            if (generateInterfaces != null) {
                basicMessageChannel.setMessageHandler(new BasicMessageChannel.MessageHandler() { // from class: io.flutter.plugins.firebase.auth.GeneratedAndroidFirebaseAuth$GenerateInterfaces$$ExternalSyntheticLambda0
                    @Override // io.flutter.plugin.common.BasicMessageChannel.MessageHandler
                    public final void onMessage(Object obj, BasicMessageChannel.Reply reply) {
                        GeneratedAndroidFirebaseAuth.GenerateInterfaces.lambda$setUp$0(this.f$0, obj, reply);
                    }
                });
            } else {
                basicMessageChannel.setMessageHandler(null);
            }
        }

        static /* synthetic */ void lambda$setUp$0(GenerateInterfaces generateInterfaces, Object obj, BasicMessageChannel.Reply reply) {
            ArrayList<Object> arrayList = new ArrayList<>();
            try {
                generateInterfaces.pigeonInterface((InternalMultiFactorInfo) ((ArrayList) obj).get(0));
                arrayList.add(0, null);
            } catch (Throwable th) {
                arrayList = GeneratedAndroidFirebaseAuth.wrapError(th);
            }
            reply.reply(arrayList);
        }
    }
}
