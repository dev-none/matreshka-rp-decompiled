package com.my.target.common.models;

import com.my.target.t5;

/* JADX INFO: loaded from: classes6.dex */
public final class AudioData extends t5 {
    public int e;

    public AudioData(String str) {
        super(str);
    }

    public static AudioData newAudioData(String str) {
        return new AudioData(str);
    }

    public int getBitrate() {
        return this.e;
    }

    public void setBitrate(int i) {
        this.e = i;
    }
}
