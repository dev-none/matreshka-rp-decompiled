package io.flutter.plugins.firebase.auth;

import android.net.Uri;
import androidx.autofill.HintConstants;
import com.google.firebase.auth.ActionCodeEmailInfo;
import com.google.firebase.auth.ActionCodeInfo;
import com.google.firebase.auth.ActionCodeResult;
import com.google.firebase.auth.ActionCodeSettings;
import com.google.firebase.auth.AdditionalUserInfo;
import com.google.firebase.auth.AuthCredential;
import com.google.firebase.auth.AuthResult;
import com.google.firebase.auth.EmailAuthProvider;
import com.google.firebase.auth.FacebookAuthProvider;
import com.google.firebase.auth.FirebaseUser;
import com.google.firebase.auth.GetTokenResult;
import com.google.firebase.auth.GithubAuthProvider;
import com.google.firebase.auth.GoogleAuthProvider;
import com.google.firebase.auth.MultiFactorInfo;
import com.google.firebase.auth.OAuthCredential;
import com.google.firebase.auth.OAuthProvider;
import com.google.firebase.auth.PhoneAuthProvider;
import com.google.firebase.auth.PhoneMultiFactorInfo;
import com.google.firebase.auth.PlayGamesAuthProvider;
import com.google.firebase.auth.TwitterAuthProvider;
import com.google.firebase.auth.UserInfo;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.Objects;

/* JADX INFO: loaded from: classes7.dex */
public class PigeonParser {
    static List<Object> manuallyToList(GeneratedAndroidFirebaseAuth.InternalUserDetails internalUserDetails) {
        ArrayList arrayList = new ArrayList();
        arrayList.add(internalUserDetails.getUserInfo().toList());
        arrayList.add(internalUserDetails.getProviderData());
        return arrayList;
    }

    static GeneratedAndroidFirebaseAuth.InternalUserCredential parseAuthResult(AuthResult authResult) {
        GeneratedAndroidFirebaseAuth.InternalUserCredential.Builder builder = new GeneratedAndroidFirebaseAuth.InternalUserCredential.Builder();
        builder.setAdditionalUserInfo(parseAdditionalUserInfo(authResult.getAdditionalUserInfo()));
        builder.setCredential(parseAuthCredential(authResult.getCredential()));
        builder.setUser(parseFirebaseUser(authResult.getUser()));
        return builder.build();
    }

    private static GeneratedAndroidFirebaseAuth.InternalAdditionalUserInfo parseAdditionalUserInfo(AdditionalUserInfo additionalUserInfo) {
        if (additionalUserInfo == null) {
            return null;
        }
        GeneratedAndroidFirebaseAuth.InternalAdditionalUserInfo.Builder builder = new GeneratedAndroidFirebaseAuth.InternalAdditionalUserInfo.Builder();
        builder.setIsNewUser(Boolean.valueOf(additionalUserInfo.isNewUser()));
        builder.setProfile(additionalUserInfo.getProfile());
        builder.setProviderId(additionalUserInfo.getProviderId());
        builder.setUsername(additionalUserInfo.getUsername());
        return builder.build();
    }

    static GeneratedAndroidFirebaseAuth.InternalAuthCredential parseAuthCredential(AuthCredential authCredential) {
        if (authCredential == null) {
            return null;
        }
        int iHashCode = authCredential.hashCode();
        FlutterFirebaseAuthPlugin.authCredentials.put(Integer.valueOf(iHashCode), authCredential);
        GeneratedAndroidFirebaseAuth.InternalAuthCredential.Builder builder = new GeneratedAndroidFirebaseAuth.InternalAuthCredential.Builder();
        builder.setProviderId(authCredential.getProvider());
        builder.setSignInMethod(authCredential.getSignInMethod());
        builder.setNativeId(Long.valueOf(iHashCode));
        if (authCredential instanceof OAuthCredential) {
            builder.setAccessToken(((OAuthCredential) authCredential).getAccessToken());
        }
        return builder.build();
    }

    static GeneratedAndroidFirebaseAuth.InternalUserDetails parseFirebaseUser(FirebaseUser firebaseUser) {
        if (firebaseUser == null) {
            return null;
        }
        GeneratedAndroidFirebaseAuth.InternalUserDetails.Builder builder = new GeneratedAndroidFirebaseAuth.InternalUserDetails.Builder();
        GeneratedAndroidFirebaseAuth.InternalUserInfo.Builder builder2 = new GeneratedAndroidFirebaseAuth.InternalUserInfo.Builder();
        builder2.setDisplayName(firebaseUser.getDisplayName());
        builder2.setEmail(firebaseUser.getEmail());
        builder2.setIsEmailVerified(Boolean.valueOf(firebaseUser.isEmailVerified()));
        builder2.setIsAnonymous(Boolean.valueOf(firebaseUser.isAnonymous()));
        if (firebaseUser.getMetadata() != null) {
            builder2.setCreationTimestamp(Long.valueOf(firebaseUser.getMetadata().getCreationTimestamp()));
            builder2.setLastSignInTimestamp(Long.valueOf(firebaseUser.getMetadata().getLastSignInTimestamp()));
        }
        builder2.setPhoneNumber(firebaseUser.getPhoneNumber());
        builder2.setPhotoUrl(parsePhotoUrl(firebaseUser.getPhotoUrl()));
        builder2.setUid(firebaseUser.getUid());
        builder2.setTenantId(firebaseUser.getTenantId());
        builder.setUserInfo(builder2.build());
        builder.setProviderData(parseUserInfoList(firebaseUser.getProviderData()));
        return builder.build();
    }

    private static List<Map<Object, Object>> parseUserInfoList(List<? extends UserInfo> list) {
        ArrayList arrayList = new ArrayList();
        if (list == null) {
            return null;
        }
        for (UserInfo userInfo : new ArrayList(list)) {
            if (userInfo != null && !"firebase".equals(userInfo.getProviderId())) {
                arrayList.add(parseUserInfoToMap(userInfo));
            }
        }
        return arrayList;
    }

    private static Map<Object, Object> parseUserInfoToMap(UserInfo userInfo) {
        HashMap map = new HashMap();
        map.put("displayName", userInfo.getDisplayName());
        map.put("email", userInfo.getEmail());
        map.put("isEmailVerified", Boolean.valueOf(userInfo.isEmailVerified()));
        map.put(HintConstants.AUTOFILL_HINT_PHONE_NUMBER, userInfo.getPhoneNumber());
        map.put("photoUrl", parsePhotoUrl(userInfo.getPhotoUrl()));
        map.put("uid", userInfo.getUid() == null ? "" : userInfo.getUid());
        map.put(Constants.PROVIDER_ID, userInfo.getProviderId());
        map.put("isAnonymous", false);
        return map;
    }

    private static String parsePhotoUrl(Uri uri) {
        if (uri == null) {
            return null;
        }
        String string = uri.toString();
        if ("".equals(string)) {
            return null;
        }
        return string;
    }

    static AuthCredential getCredential(Map<String, Object> map) {
        if (map.get("token") != null) {
            AuthCredential authCredential = FlutterFirebaseAuthPlugin.authCredentials.get(Integer.valueOf(((Number) map.get("token")).intValue()));
            if (authCredential != null) {
                return authCredential;
            }
            throw FlutterFirebaseAuthPluginException.invalidCredential();
        }
        String str = (String) Objects.requireNonNull(map.get(Constants.SIGN_IN_METHOD));
        String str2 = (String) map.get(Constants.SECRET);
        String str3 = (String) map.get(Constants.ID_TOKEN);
        String str4 = (String) map.get(Constants.ACCESS_TOKEN);
        String str5 = (String) map.get(Constants.RAW_NONCE);
        str.hashCode();
        switch (str) {
            case "twitter.com":
                return TwitterAuthProvider.getCredential((String) Objects.requireNonNull(str4), (String) Objects.requireNonNull(str2));
            case "playgames.google.com":
                return PlayGamesAuthProvider.getCredential((String) Objects.requireNonNull(map.get(Constants.SERVER_AUTH_CODE)));
            case "google.com":
                return GoogleAuthProvider.getCredential(str3, str4);
            case "facebook.com":
                return FacebookAuthProvider.getCredential((String) Objects.requireNonNull(str4));
            case "oauth":
                OAuthProvider.CredentialBuilder credentialBuilderNewCredentialBuilder = OAuthProvider.newCredentialBuilder((String) Objects.requireNonNull(map.get(Constants.PROVIDER_ID)));
                if (str4 != null) {
                    credentialBuilderNewCredentialBuilder.setAccessToken(str4);
                }
                if (str5 == null) {
                    credentialBuilderNewCredentialBuilder.setIdToken((String) Objects.requireNonNull(str3));
                } else {
                    credentialBuilderNewCredentialBuilder.setIdTokenWithRawNonce((String) Objects.requireNonNull(str3), str5);
                }
                return credentialBuilderNewCredentialBuilder.build();
            case "phone":
                return PhoneAuthProvider.getCredential((String) Objects.requireNonNull(map.get(Constants.VERIFICATION_ID)), (String) Objects.requireNonNull(map.get(Constants.SMS_CODE)));
            case "password":
                return EmailAuthProvider.getCredential((String) Objects.requireNonNull(map.get("email")), (String) Objects.requireNonNull(str2));
            case "github.com":
                return GithubAuthProvider.getCredential((String) Objects.requireNonNull(str4));
            case "emailLink":
                return EmailAuthProvider.getCredentialWithLink((String) Objects.requireNonNull(map.get("email")), (String) Objects.requireNonNull(map.get("emailLink")));
            default:
                return null;
        }
    }

    static ActionCodeSettings getActionCodeSettings(GeneratedAndroidFirebaseAuth.InternalActionCodeSettings internalActionCodeSettings) {
        ActionCodeSettings.Builder builderNewBuilder = ActionCodeSettings.newBuilder();
        builderNewBuilder.setUrl(internalActionCodeSettings.getUrl());
        if (internalActionCodeSettings.getDynamicLinkDomain() != null) {
            builderNewBuilder.setDynamicLinkDomain(internalActionCodeSettings.getDynamicLinkDomain());
        }
        if (internalActionCodeSettings.getLinkDomain() != null) {
            builderNewBuilder.setLinkDomain(internalActionCodeSettings.getLinkDomain());
        }
        builderNewBuilder.setHandleCodeInApp(internalActionCodeSettings.getHandleCodeInApp().booleanValue());
        if (internalActionCodeSettings.getAndroidPackageName() != null) {
            builderNewBuilder.setAndroidPackageName(internalActionCodeSettings.getAndroidPackageName(), internalActionCodeSettings.getAndroidInstallApp().booleanValue(), internalActionCodeSettings.getAndroidMinimumVersion());
        }
        if (internalActionCodeSettings.getIOSBundleId() != null) {
            builderNewBuilder.setIOSBundleId(internalActionCodeSettings.getIOSBundleId());
        }
        return builderNewBuilder.build();
    }

    static List<GeneratedAndroidFirebaseAuth.InternalMultiFactorInfo> multiFactorInfoToPigeon(List<MultiFactorInfo> list) {
        ArrayList arrayList = new ArrayList();
        for (MultiFactorInfo multiFactorInfo : list) {
            if (multiFactorInfo instanceof PhoneMultiFactorInfo) {
                arrayList.add(new GeneratedAndroidFirebaseAuth.InternalMultiFactorInfo.Builder().setPhoneNumber(((PhoneMultiFactorInfo) multiFactorInfo).getPhoneNumber()).setDisplayName(multiFactorInfo.getDisplayName()).setEnrollmentTimestamp(Double.valueOf(multiFactorInfo.getEnrollmentTimestamp())).setUid(multiFactorInfo.getUid()).setFactorId(multiFactorInfo.getFactorId()).build());
            } else {
                arrayList.add(new GeneratedAndroidFirebaseAuth.InternalMultiFactorInfo.Builder().setDisplayName(multiFactorInfo.getDisplayName()).setEnrollmentTimestamp(Double.valueOf(multiFactorInfo.getEnrollmentTimestamp())).setUid(multiFactorInfo.getUid()).setFactorId(multiFactorInfo.getFactorId()).build());
            }
        }
        return arrayList;
    }

    static List<List<Object>> multiFactorInfoToMap(List<MultiFactorInfo> list) {
        ArrayList arrayList = new ArrayList();
        Iterator<GeneratedAndroidFirebaseAuth.InternalMultiFactorInfo> it = multiFactorInfoToPigeon(list).iterator();
        while (it.hasNext()) {
            arrayList.add(it.next().toList());
        }
        return arrayList;
    }

    static GeneratedAndroidFirebaseAuth.InternalActionCodeInfo parseActionCodeResult(ActionCodeResult actionCodeResult) {
        GeneratedAndroidFirebaseAuth.InternalActionCodeInfo.Builder builder = new GeneratedAndroidFirebaseAuth.InternalActionCodeInfo.Builder();
        GeneratedAndroidFirebaseAuth.InternalActionCodeInfoData.Builder builder2 = new GeneratedAndroidFirebaseAuth.InternalActionCodeInfoData.Builder();
        int operation = actionCodeResult.getOperation();
        if (operation == 0) {
            builder.setOperation(GeneratedAndroidFirebaseAuth.ActionCodeInfoOperation.PASSWORD_RESET);
        } else if (operation == 1) {
            builder.setOperation(GeneratedAndroidFirebaseAuth.ActionCodeInfoOperation.VERIFY_EMAIL);
        } else if (operation == 2) {
            builder.setOperation(GeneratedAndroidFirebaseAuth.ActionCodeInfoOperation.RECOVER_EMAIL);
        } else if (operation == 4) {
            builder.setOperation(GeneratedAndroidFirebaseAuth.ActionCodeInfoOperation.EMAIL_SIGN_IN);
        } else if (operation == 5) {
            builder.setOperation(GeneratedAndroidFirebaseAuth.ActionCodeInfoOperation.VERIFY_AND_CHANGE_EMAIL);
        } else if (operation == 6) {
            builder.setOperation(GeneratedAndroidFirebaseAuth.ActionCodeInfoOperation.REVERT_SECOND_FACTOR_ADDITION);
        }
        ActionCodeInfo info = actionCodeResult.getInfo();
        if ((info != null && operation == 1) || operation == 0) {
            builder2.setEmail(info.getEmail());
        } else if (operation == 2 || operation == 5) {
            ActionCodeEmailInfo actionCodeEmailInfo = (ActionCodeEmailInfo) Objects.requireNonNull(info);
            builder2.setEmail(actionCodeEmailInfo.getEmail());
            builder2.setPreviousEmail(actionCodeEmailInfo.getPreviousEmail());
        }
        builder.setData(builder2.build());
        return builder.build();
    }

    static GeneratedAndroidFirebaseAuth.InternalIdTokenResult parseTokenResult(GetTokenResult getTokenResult) {
        GeneratedAndroidFirebaseAuth.InternalIdTokenResult.Builder builder = new GeneratedAndroidFirebaseAuth.InternalIdTokenResult.Builder();
        builder.setToken(getTokenResult.getToken());
        builder.setSignInProvider(getTokenResult.getSignInProvider());
        builder.setAuthTimestamp(Long.valueOf(getTokenResult.getAuthTimestamp() * 1000));
        builder.setExpirationTimestamp(Long.valueOf(getTokenResult.getExpirationTimestamp() * 1000));
        builder.setIssuedAtTimestamp(Long.valueOf(getTokenResult.getIssuedAtTimestamp() * 1000));
        builder.setClaims(getTokenResult.getClaims());
        builder.setSignInSecondFactor(getTokenResult.getSignInSecondFactor());
        return builder.build();
    }
}
