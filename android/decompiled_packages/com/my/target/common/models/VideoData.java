package com.my.target.common.models;

import androidx.media3.extractor.text.ttml.TtmlNode;
import com.my.target.gb;
import com.my.target.t5;
import java.util.List;

/* JADX INFO: loaded from: classes6.dex */
public final class VideoData extends t5 {
    public static final String M3U8 = ".m3u8";
    public final boolean e;
    public int f;

    public VideoData(String str, int i, int i2) {
        super(str);
        this.b = i;
        this.c = i2;
        this.e = !this.f4824a.endsWith(M3U8);
    }

    public static VideoData chooseBest(List<VideoData> list, int i) {
        VideoData videoData = null;
        int i2 = 0;
        for (VideoData videoData2 : list) {
            int height = videoData2.getHeight();
            if (videoData == null || ((height <= i && i2 > i) || ((height <= i && height > i2) || (height > i && height < i2)))) {
                videoData = videoData2;
                i2 = height;
            }
        }
        gb.a("VideoData: Accepted videoData quality = " + i2 + TtmlNode.TAG_P);
        return videoData;
    }

    public static VideoData newVideoData(String str, int i, int i2) {
        return new VideoData(str, i, i2);
    }

    public int getBitrate() {
        return this.f;
    }

    public boolean isCacheable() {
        return this.e;
    }

    public void setBitrate(int i) {
        this.f = i;
    }
}
