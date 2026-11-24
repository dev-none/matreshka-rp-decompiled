package com.abovevacant.epitaph.core;

import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

/* JADX INFO: loaded from: classes4.dex */
public final class Tombstone {
    public final String abortMessage;
    public final Architecture arch;
    public final String buildFingerprint;
    public final List<Cause> causes;
    public final List<String> commandLine;
    public final List<CrashDetail> crashDetails;
    public final Architecture guestArch;
    public final Map<Integer, TombstoneThread> guestThreads;
    public final boolean hasBeen16kbMode;
    public final List<LogBuffer> logBuffers;
    public final List<MemoryMapping> memoryMappings;
    public final List<FD> openFds;
    public final int pageSize;
    public final int pid;
    public final int processUptime;
    public final String revision;
    public final String selinuxLabel;
    public final Signal signal;
    public final StackHistoryBuffer stackHistoryBuffer;
    public final Map<Integer, TombstoneThread> threads;
    public final int tid;
    public final String timestamp;
    public final int uid;

    public Tombstone(final Architecture arch, final Architecture guestArch, final String buildFingerprint, final String revision, final String timestamp, final int pid, final int tid, final int uid, final String selinuxLabel, final List<String> commandLine, final int processUptime, final Signal signal, final String abortMessage, final List<CrashDetail> crashDetails, final List<Cause> causes, final Map<Integer, TombstoneThread> threads, final Map<Integer, TombstoneThread> guestThreads, final List<MemoryMapping> memoryMappings, final List<LogBuffer> logBuffers, final List<FD> openFds, final int pageSize, final boolean hasBeen16kbMode, final StackHistoryBuffer stackHistoryBuffer) {
        this.arch = arch;
        this.guestArch = guestArch;
        this.buildFingerprint = buildFingerprint;
        this.revision = revision;
        this.timestamp = timestamp;
        this.pid = pid;
        this.tid = tid;
        this.uid = uid;
        this.selinuxLabel = selinuxLabel;
        this.commandLine = Collections.unmodifiableList(commandLine);
        this.processUptime = processUptime;
        this.signal = signal;
        this.abortMessage = abortMessage;
        this.crashDetails = Collections.unmodifiableList(crashDetails);
        this.causes = Collections.unmodifiableList(causes);
        this.threads = Collections.unmodifiableMap(threads);
        this.guestThreads = Collections.unmodifiableMap(guestThreads);
        this.memoryMappings = Collections.unmodifiableList(memoryMappings);
        this.logBuffers = Collections.unmodifiableList(logBuffers);
        this.openFds = Collections.unmodifiableList(openFds);
        this.pageSize = pageSize;
        this.hasBeen16kbMode = hasBeen16kbMode;
        this.stackHistoryBuffer = stackHistoryBuffer;
    }

    public boolean hasSignal() {
        return this.signal != null;
    }

    public static final class Builder {
        private boolean hasBeen16kbMode;
        private int pageSize;
        private int pid;
        private int processUptime;
        private Signal signal;
        private StackHistoryBuffer stackHistoryBuffer;
        private int tid;
        private int uid;
        private Architecture arch = Architecture.NONE;
        private Architecture guestArch = Architecture.NONE;
        private String buildFingerprint = "";
        private String revision = "";
        private String timestamp = "";
        private String selinuxLabel = "";
        private List<String> commandLine = new ArrayList();
        private String abortMessage = "";
        private List<CrashDetail> crashDetails = new ArrayList();
        private List<Cause> causes = new ArrayList();
        private Map<Integer, TombstoneThread> threads = new HashMap();
        private Map<Integer, TombstoneThread> guestThreads = new HashMap();
        private List<MemoryMapping> memoryMappings = new ArrayList();
        private List<LogBuffer> logBuffers = new ArrayList();
        private List<FD> openFds = new ArrayList();

        public Builder pid(int pid) {
            this.pid = pid;
            return this;
        }

        public Builder tid(int tid) {
            this.tid = tid;
            return this;
        }

        public Builder uid(int uid) {
            this.uid = uid;
            return this;
        }

        public Builder arch(Architecture arch) {
            this.arch = arch;
            return this;
        }

        public Builder guestArch(Architecture guestArch) {
            this.guestArch = guestArch;
            return this;
        }

        public Builder buildFingerprint(String buildFingerprint) {
            this.buildFingerprint = buildFingerprint;
            return this;
        }

        public Builder revision(String revision) {
            this.revision = revision;
            return this;
        }

        public Builder timestamp(String timestamp) {
            this.timestamp = timestamp;
            return this;
        }

        public Builder selinuxLabel(String selinuxLabel) {
            this.selinuxLabel = selinuxLabel;
            return this;
        }

        public Builder commandLine(List<String> commandLine) {
            this.commandLine = commandLine;
            return this;
        }

        public Builder processUptime(int processUptime) {
            this.processUptime = processUptime;
            return this;
        }

        public Builder signal(Signal signal) {
            this.signal = signal;
            return this;
        }

        public Builder abortMessage(String abortMessage) {
            this.abortMessage = abortMessage;
            return this;
        }

        public Builder crashDetails(List<CrashDetail> crashDetails) {
            this.crashDetails = crashDetails;
            return this;
        }

        public Builder causes(List<Cause> causes) {
            this.causes = causes;
            return this;
        }

        public Builder threads(Map<Integer, TombstoneThread> threads) {
            this.threads = threads;
            return this;
        }

        public Builder guestThreads(Map<Integer, TombstoneThread> guestThreads) {
            this.guestThreads = guestThreads;
            return this;
        }

        public Builder memoryMappings(List<MemoryMapping> memoryMappings) {
            this.memoryMappings = memoryMappings;
            return this;
        }

        public Builder logBuffers(List<LogBuffer> logBuffers) {
            this.logBuffers = logBuffers;
            return this;
        }

        public Builder openFds(List<FD> openFds) {
            this.openFds = openFds;
            return this;
        }

        public Builder pageSize(int pageSize) {
            this.pageSize = pageSize;
            return this;
        }

        public Builder hasBeen16kbMode(boolean hasBeen16kbMode) {
            this.hasBeen16kbMode = hasBeen16kbMode;
            return this;
        }

        public Builder stackHistoryBuffer(StackHistoryBuffer stackHistoryBuffer) {
            this.stackHistoryBuffer = stackHistoryBuffer;
            return this;
        }

        public Builder addThread(TombstoneThread thread) {
            this.threads.put(Integer.valueOf(thread.id), thread);
            return this;
        }

        public Builder addMemoryMapping(MemoryMapping mapping) {
            this.memoryMappings.add(mapping);
            return this;
        }

        public Tombstone build() {
            return new Tombstone(this.arch, this.guestArch, this.buildFingerprint, this.revision, this.timestamp, this.pid, this.tid, this.uid, this.selinuxLabel, new ArrayList(this.commandLine), this.processUptime, this.signal, this.abortMessage, new ArrayList(this.crashDetails), new ArrayList(this.causes), new HashMap(this.threads), new HashMap(this.guestThreads), new ArrayList(this.memoryMappings), new ArrayList(this.logBuffers), new ArrayList(this.openFds), this.pageSize, this.hasBeen16kbMode, this.stackHistoryBuffer);
        }
    }
}
