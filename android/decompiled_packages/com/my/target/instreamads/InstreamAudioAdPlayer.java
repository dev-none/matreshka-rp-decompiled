package com.my.target.instreamads;

import android.content.Context;
import android.net.Uri;

/* JADX INFO: loaded from: classes6.dex */
public interface InstreamAudioAdPlayer {

    public interface AdPlayerListener {
        void onAdAudioCompleted();

        void onAdAudioError(String str);

        void onAdAudioPaused();

        void onAdAudioResumed();

        void onAdAudioStarted();

        void onAdAudioStopped();

        void onVolumeChanged(float f);
    }

    void destroy();

    float getAdAudioDuration();

    float getAdAudioPosition();

    AdPlayerListener getAdPlayerListener();

    Context getCurrentContext();

    void pauseAdAudio();

    void playAdAudio(Uri uri);

    void resumeAdAudio();

    void setAdPlayerListener(AdPlayerListener adPlayerListener);

    void setVolume(float f);

    void stopAdAudio();
}
