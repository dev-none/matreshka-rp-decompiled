package io.sentry.android.core;

import androidx.core.app.NotificationCompat;
import io.sentry.JsonObjectReader;
import io.sentry.SentryEnvelope;
import io.sentry.SentryEnvelopeItem;
import io.sentry.SentryEvent;
import io.sentry.SentryItemType;
import io.sentry.SentryLevel;
import io.sentry.cache.EnvelopeCache;
import io.sentry.vendor.gson.stream.JsonToken;
import java.io.BufferedInputStream;
import java.io.BufferedReader;
import java.io.ByteArrayInputStream;
import java.io.EOFException;
import java.io.File;
import java.io.FileInputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.nio.charset.StandardCharsets;
import java.util.ArrayList;
import java.util.Date;
import java.util.List;

/* JADX INFO: loaded from: classes7.dex */
public final class NativeEventCollector {
    private static final String NATIVE_PLATFORM = "native";
    private static final long TIMESTAMP_TOLERANCE_MS = 5000;
    private final SentryAndroidOptions options;
    private final List<NativeEnvelopeMetadata> nativeEnvelopes = new ArrayList();
    private boolean collected = false;

    public NativeEventCollector(SentryAndroidOptions sentryAndroidOptions) {
        this.options = sentryAndroidOptions;
    }

    static final class NativeEnvelopeMetadata {
        private final File file;
        private final long timestampMs;

        NativeEnvelopeMetadata(File file, long j) {
            this.file = file;
            this.timestampMs = j;
        }

        File getFile() {
            return this.file;
        }

        long getTimestampMs() {
            return this.timestampMs;
        }
    }

    public static final class NativeEventData {
        private final SentryEnvelope envelope;
        private final SentryEvent event;
        private final File file;

        NativeEventData(SentryEvent sentryEvent, File file, SentryEnvelope sentryEnvelope) {
            this.event = sentryEvent;
            this.file = file;
            this.envelope = sentryEnvelope;
        }

        public SentryEvent getEvent() {
            return this.event;
        }

        public File getFile() {
            return this.file;
        }

        public SentryEnvelope getEnvelope() {
            return this.envelope;
        }
    }

    public void collect() {
        NativeEnvelopeMetadata nativeEnvelopeMetadataExtractNativeEnvelopeMetadata;
        if (this.collected) {
            return;
        }
        this.collected = true;
        String outboxPath = this.options.getOutboxPath();
        if (outboxPath == null) {
            this.options.getLogger().log(SentryLevel.DEBUG, "Outbox path is null, skipping native event collection.", new Object[0]);
            return;
        }
        File[] fileArrListFiles = new File(outboxPath).listFiles();
        if (fileArrListFiles == null) {
            this.options.getLogger().log(SentryLevel.DEBUG, "Outbox path is not a directory or an I/O error occurred: %s", outboxPath);
            return;
        }
        if (fileArrListFiles.length == 0) {
            this.options.getLogger().log(SentryLevel.DEBUG, "No envelope files found in outbox.", new Object[0]);
            return;
        }
        this.options.getLogger().log(SentryLevel.DEBUG, "Scanning %d files in outbox for native events.", Integer.valueOf(fileArrListFiles.length));
        for (File file : fileArrListFiles) {
            if (file.isFile() && isRelevantFileName(file.getName()) && (nativeEnvelopeMetadataExtractNativeEnvelopeMetadata = extractNativeEnvelopeMetadata(file)) != null) {
                this.nativeEnvelopes.add(nativeEnvelopeMetadataExtractNativeEnvelopeMetadata);
                this.options.getLogger().log(SentryLevel.DEBUG, "Found native event in outbox: %s (timestamp: %d)", file.getName(), Long.valueOf(nativeEnvelopeMetadataExtractNativeEnvelopeMetadata.getTimestampMs()));
            }
        }
        this.options.getLogger().log(SentryLevel.DEBUG, "Collected %d native events from outbox.", Integer.valueOf(this.nativeEnvelopes.size()));
    }

    public NativeEventData findAndRemoveMatchingNativeEvent(long j) {
        collect();
        for (NativeEnvelopeMetadata nativeEnvelopeMetadata : this.nativeEnvelopes) {
            long jAbs = Math.abs(j - nativeEnvelopeMetadata.getTimestampMs());
            if (jAbs <= 5000) {
                this.options.getLogger().log(SentryLevel.DEBUG, "Matched native event by timestamp (diff: %d ms)", Long.valueOf(jAbs));
                this.nativeEnvelopes.remove(nativeEnvelopeMetadata);
                return loadFullNativeEventData(nativeEnvelopeMetadata.getFile());
            }
        }
        return null;
    }

    public boolean deleteNativeEventFile(NativeEventData nativeEventData) {
        File file = nativeEventData.getFile();
        try {
            if (file.delete()) {
                this.options.getLogger().log(SentryLevel.DEBUG, "Deleted native event file from outbox: %s", file.getName());
                return true;
            }
            this.options.getLogger().log(SentryLevel.WARNING, "Failed to delete native event file: %s", file.getAbsolutePath());
            return false;
        } catch (Throwable th) {
            this.options.getLogger().log(SentryLevel.ERROR, th, "Error deleting native event file: %s", file.getAbsolutePath());
            return false;
        }
    }

    private NativeEnvelopeMetadata extractNativeEnvelopeMetadata(File file) {
        String line;
        try {
            BufferedInputStream bufferedInputStream = new BufferedInputStream(new FileInputStream(file));
            try {
                int iSkipLine = skipLine(bufferedInputStream);
                if (iSkipLine >= 0) {
                    long j = iSkipLine;
                    while (j < 209715200 && (line = readLine(bufferedInputStream)) != null && !line.isEmpty()) {
                        long length = j + ((long) (line.length() + 1));
                        ItemHeaderInfo itemHeader = parseItemHeader(line);
                        if (itemHeader == null) {
                            break;
                        }
                        if (NotificationCompat.CATEGORY_EVENT.equals(itemHeader.type)) {
                            NativeEnvelopeMetadata nativeEnvelopeMetadataExtractMetadataFromEventPayload = extractMetadataFromEventPayload(bufferedInputStream, itemHeader.length, file);
                            if (nativeEnvelopeMetadataExtractMetadataFromEventPayload != null) {
                                bufferedInputStream.close();
                                return nativeEnvelopeMetadataExtractMetadataFromEventPayload;
                            }
                        } else {
                            skipBytes(bufferedInputStream, itemHeader.length);
                        }
                        long j2 = length + ((long) itemHeader.length);
                        int i = bufferedInputStream.read();
                        if (i == -1) {
                            break;
                        }
                        j = j2 + 1;
                        if (i != 10) {
                            break;
                        }
                    }
                    bufferedInputStream.close();
                    return null;
                }
                bufferedInputStream.close();
                return null;
            } catch (Throwable th) {
                try {
                    bufferedInputStream.close();
                } catch (Throwable th2) {
                    th.addSuppressed(th2);
                }
                throw th;
            }
        } catch (Throwable th3) {
            this.options.getLogger().log(SentryLevel.DEBUG, th3, "Error extracting metadata from envelope file: %s", file.getAbsolutePath());
        }
        this.options.getLogger().log(SentryLevel.DEBUG, th3, "Error extracting metadata from envelope file: %s", file.getAbsolutePath());
        return null;
    }

    /* JADX WARN: Code duplicated, block: B:19:0x0047  */
    private NativeEnvelopeMetadata extractMetadataFromEventPayload(InputStream inputStream, int i, File file) {
        byte b;
        NativeEnvelopeMetadata nativeEnvelopeMetadata = null;
        try {
            BoundedInputStream boundedInputStream = new BoundedInputStream(inputStream, i);
            try {
                InputStreamReader inputStreamReader = new InputStreamReader(boundedInputStream, StandardCharsets.UTF_8);
                try {
                    JsonObjectReader jsonObjectReader = new JsonObjectReader(inputStreamReader);
                    jsonObjectReader.beginObject();
                    String strNextStringOrNull = null;
                    Date dateNextDateOrNull = null;
                    while (jsonObjectReader.peek() == JsonToken.NAME) {
                        String strNextName = jsonObjectReader.nextName();
                        int iHashCode = strNextName.hashCode();
                        if (iHashCode != 55126294) {
                            if (iHashCode == 1874684019 && strNextName.equals("platform")) {
                                b = 0;
                            } else {
                                b = -1;
                            }
                        } else if (strNextName.equals("timestamp")) {
                            b = 1;
                        } else {
                            b = -1;
                        }
                        if (b == 0) {
                            strNextStringOrNull = jsonObjectReader.nextStringOrNull();
                        } else if (b == 1) {
                            dateNextDateOrNull = jsonObjectReader.nextDateOrNull(this.options.getLogger());
                        } else {
                            jsonObjectReader.skipValue();
                        }
                        if (strNextStringOrNull != null && dateNextDateOrNull != null) {
                            break;
                        }
                    }
                    if ("native".equals(strNextStringOrNull) && dateNextDateOrNull != null) {
                        nativeEnvelopeMetadata = new NativeEnvelopeMetadata(file, dateNextDateOrNull.getTime());
                    }
                    inputStreamReader.close();
                    boundedInputStream.close();
                    return nativeEnvelopeMetadata;
                } catch (Throwable th) {
                    try {
                        inputStreamReader.close();
                    } catch (Throwable th2) {
                        th.addSuppressed(th2);
                    }
                    throw th;
                }
            } catch (Throwable th3) {
                try {
                    boundedInputStream.close();
                } catch (Throwable th4) {
                    th3.addSuppressed(th4);
                }
                throw th3;
            }
        } catch (Throwable th5) {
            this.options.getLogger().log(SentryLevel.DEBUG, th5, "Error parsing event JSON from: %s", file.getName());
            return null;
        }
    }

    private NativeEventData loadFullNativeEventData(File file) {
        try {
            BufferedInputStream bufferedInputStream = new BufferedInputStream(new FileInputStream(file));
            try {
                SentryEnvelope sentryEnvelope = this.options.getEnvelopeReader().read(bufferedInputStream);
                if (sentryEnvelope != null) {
                    for (SentryEnvelopeItem sentryEnvelopeItem : sentryEnvelope.getItems()) {
                        if (SentryItemType.Event.equals(sentryEnvelopeItem.getHeader().getType())) {
                            BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(new ByteArrayInputStream(sentryEnvelopeItem.getData()), StandardCharsets.UTF_8));
                            try {
                                SentryEvent sentryEvent = (SentryEvent) this.options.getSerializer().deserialize(bufferedReader, SentryEvent.class);
                                if (sentryEvent != null && "native".equals(sentryEvent.getPlatform())) {
                                    NativeEventData nativeEventData = new NativeEventData(sentryEvent, file, sentryEnvelope);
                                    bufferedReader.close();
                                    bufferedInputStream.close();
                                    return nativeEventData;
                                }
                                bufferedReader.close();
                            } catch (Throwable th) {
                                try {
                                    bufferedReader.close();
                                } catch (Throwable th2) {
                                    th.addSuppressed(th2);
                                }
                                throw th;
                            }
                            try {
                                bufferedInputStream.close();
                            } catch (Throwable th3) {
                                th.addSuppressed(th3);
                            }
                            throw th;
                        }
                    }
                    bufferedInputStream.close();
                    return null;
                }
                bufferedInputStream.close();
                return null;
            } catch (Throwable th4) {
                bufferedInputStream.close();
                throw th4;
            }
        } catch (Throwable th5) {
            this.options.getLogger().log(SentryLevel.DEBUG, th5, "Error loading envelope file: %s", file.getAbsolutePath());
        }
        this.options.getLogger().log(SentryLevel.DEBUG, th5, "Error loading envelope file: %s", file.getAbsolutePath());
        return null;
    }

    private static final class ItemHeaderInfo {
        final int length;
        final String type;

        ItemHeaderInfo(String str, int i) {
            this.type = str;
            this.length = i;
        }
    }

    /* JADX WARN: Code duplicated, block: B:18:0x004f  */
    private ItemHeaderInfo parseItemHeader(String str) {
        byte b;
        try {
            InputStreamReader inputStreamReader = new InputStreamReader(new ByteArrayInputStream(str.getBytes(StandardCharsets.UTF_8)), StandardCharsets.UTF_8);
            try {
                JsonObjectReader jsonObjectReader = new JsonObjectReader(inputStreamReader);
                jsonObjectReader.beginObject();
                String strNextStringOrNull = null;
                int iNextInt = -1;
                while (jsonObjectReader.peek() == JsonToken.NAME) {
                    String strNextName = jsonObjectReader.nextName();
                    int iHashCode = strNextName.hashCode();
                    if (iHashCode != -1106363674) {
                        if (iHashCode == 3575610 && strNextName.equals("type")) {
                            b = 0;
                        } else {
                            b = -1;
                        }
                    } else if (strNextName.equals("length")) {
                        b = 1;
                    } else {
                        b = -1;
                    }
                    if (b == 0) {
                        strNextStringOrNull = jsonObjectReader.nextStringOrNull();
                    } else if (b == 1) {
                        iNextInt = jsonObjectReader.nextInt();
                    } else {
                        jsonObjectReader.skipValue();
                    }
                    if (strNextStringOrNull != null && iNextInt >= 0) {
                        break;
                    }
                }
                if (iNextInt < 0) {
                    inputStreamReader.close();
                    return null;
                }
                ItemHeaderInfo itemHeaderInfo = new ItemHeaderInfo(strNextStringOrNull, iNextInt);
                inputStreamReader.close();
                return itemHeaderInfo;
            } catch (Throwable th) {
                try {
                    inputStreamReader.close();
                } catch (Throwable th2) {
                    th.addSuppressed(th2);
                }
                throw th;
            }
        } catch (Throwable th3) {
            this.options.getLogger().log(SentryLevel.DEBUG, th3, "Error parsing item header", new Object[0]);
        }
        this.options.getLogger().log(SentryLevel.DEBUG, th3, "Error parsing item header", new Object[0]);
        return null;
    }

    private String readLine(InputStream inputStream) throws IOException {
        StringBuilder sb = new StringBuilder();
        while (true) {
            int i = inputStream.read();
            if (i == -1) {
                if (sb.length() > 0) {
                    return sb.toString();
                }
                return null;
            }
            if (i == 10) {
                return sb.toString();
            }
            sb.append((char) i);
        }
    }

    private int skipLine(InputStream inputStream) throws IOException {
        int i;
        int i2 = 0;
        do {
            i = inputStream.read();
            if (i == -1) {
                if (i2 > 0) {
                    return i2;
                }
                return -1;
            }
            i2++;
        } while (i != 10);
        return i2;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static void skipBytes(InputStream inputStream, long j) throws IOException {
        while (j > 0) {
            long jSkip = inputStream.skip(j);
            if (jSkip != 0) {
                j -= jSkip;
            } else {
                if (inputStream.read() == -1) {
                    throw new EOFException("Unexpected end of stream while skipping bytes");
                }
                j--;
            }
        }
    }

    private boolean isRelevantFileName(String str) {
        return (str == null || str.startsWith(EnvelopeCache.PREFIX_CURRENT_SESSION_FILE) || str.startsWith(EnvelopeCache.PREFIX_PREVIOUS_SESSION_FILE) || str.startsWith(EnvelopeCache.STARTUP_CRASH_MARKER_FILE)) ? false : true;
    }

    private static final class BoundedInputStream extends InputStream {
        private final InputStream inner;
        private long remaining;

        BoundedInputStream(InputStream inputStream, int i) {
            this.inner = inputStream;
            this.remaining = i;
        }

        @Override // java.io.InputStream
        public int read() throws IOException {
            if (this.remaining <= 0) {
                return -1;
            }
            int i = this.inner.read();
            if (i != -1) {
                this.remaining--;
            }
            return i;
        }

        @Override // java.io.InputStream
        public int read(byte[] bArr, int i, int i2) throws IOException {
            long j = this.remaining;
            if (j <= 0) {
                return -1;
            }
            int i3 = this.inner.read(bArr, i, Math.min(i2, (int) j));
            if (i3 > 0) {
                this.remaining -= (long) i3;
            }
            return i3;
        }

        @Override // java.io.InputStream
        public long skip(long j) throws IOException {
            long jSkip = this.inner.skip(Math.min(j, this.remaining));
            this.remaining -= jSkip;
            return jSkip;
        }

        @Override // java.io.InputStream
        public int available() throws IOException {
            return Math.min(this.inner.available(), (int) this.remaining);
        }

        @Override // java.io.InputStream, java.io.Closeable, java.lang.AutoCloseable
        public void close() throws IOException {
            NativeEventCollector.skipBytes(this.inner, this.remaining);
            this.remaining = 0L;
        }
    }
}
