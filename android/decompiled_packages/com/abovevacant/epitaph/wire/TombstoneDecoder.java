package com.abovevacant.epitaph.wire;

import com.abovevacant.epitaph.core.Architecture;
import com.abovevacant.epitaph.core.ArmMTEMetadata;
import com.abovevacant.epitaph.core.BacktraceFrame;
import com.abovevacant.epitaph.core.Cause;
import com.abovevacant.epitaph.core.CrashDetail;
import com.abovevacant.epitaph.core.FD;
import com.abovevacant.epitaph.core.HeapObject;
import com.abovevacant.epitaph.core.LogBuffer;
import com.abovevacant.epitaph.core.LogMessage;
import com.abovevacant.epitaph.core.MemoryDump;
import com.abovevacant.epitaph.core.MemoryError;
import com.abovevacant.epitaph.core.MemoryMapping;
import com.abovevacant.epitaph.core.Register;
import com.abovevacant.epitaph.core.Signal;
import com.abovevacant.epitaph.core.StackHistoryBuffer;
import com.abovevacant.epitaph.core.StackHistoryBufferEntry;
import com.abovevacant.epitaph.core.Tombstone;
import com.abovevacant.epitaph.core.TombstoneThread;
import com.abovevacant.epitaph.io.WireReader;
import java.io.IOException;
import java.io.InputStream;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Map;

/* JADX INFO: loaded from: classes4.dex */
public final class TombstoneDecoder {
    private static final int ARM_MTE_MEMORY_TAGS = 1;
    private static final int CAUSE_HUMAN_READABLE = 1;
    private static final int CAUSE_MEMORY_ERROR = 2;
    private static final int CRASH_DETAIL_DATA = 2;
    private static final int CRASH_DETAIL_NAME = 1;
    private static final int FD_FD = 1;
    private static final int FD_OWNER = 3;
    private static final int FD_PATH = 2;
    private static final int FD_TAG = 4;
    private static final int FRAME_BUILD_ID = 8;
    private static final int FRAME_FILE_MAP_OFFSET = 7;
    private static final int FRAME_FILE_NAME = 6;
    private static final int FRAME_FUNCTION_NAME = 4;
    private static final int FRAME_FUNCTION_OFFSET = 5;
    private static final int FRAME_PC = 2;
    private static final int FRAME_REL_PC = 1;
    private static final int FRAME_SP = 3;
    private static final int HEAP_OBJECT_ADDRESS = 1;
    private static final int HEAP_OBJECT_ALLOCATION_BACKTRACE = 4;
    private static final int HEAP_OBJECT_ALLOCATION_TID = 3;
    private static final int HEAP_OBJECT_DEALLOCATION_BACKTRACE = 6;
    private static final int HEAP_OBJECT_DEALLOCATION_TID = 5;
    private static final int HEAP_OBJECT_SIZE = 2;
    private static final int LOG_BUFFER_LOGS = 2;
    private static final int LOG_BUFFER_NAME = 1;
    private static final int LOG_MESSAGE_MESSAGE = 6;
    private static final int LOG_MESSAGE_PID = 2;
    private static final int LOG_MESSAGE_PRIORITY = 4;
    private static final int LOG_MESSAGE_TAG = 5;
    private static final int LOG_MESSAGE_TID = 3;
    private static final int LOG_MESSAGE_TIMESTAMP = 1;
    private static final int MAPPING_BEGIN_ADDRESS = 1;
    private static final int MAPPING_BUILD_ID = 8;
    private static final int MAPPING_END_ADDRESS = 2;
    private static final int MAPPING_EXECUTE = 6;
    private static final int MAPPING_LOAD_BIAS = 9;
    private static final int MAPPING_NAME = 7;
    private static final int MAPPING_OFFSET = 3;
    private static final int MAPPING_READ = 4;
    private static final int MAPPING_WRITE = 5;
    private static final int MAP_KEY = 1;
    private static final int MAP_VALUE = 2;
    private static final int MEMORY_DUMP_ARM_MTE_METADATA = 6;
    private static final int MEMORY_DUMP_BEGIN_ADDRESS = 3;
    private static final int MEMORY_DUMP_MAPPING_NAME = 2;
    private static final int MEMORY_DUMP_MEMORY = 4;
    private static final int MEMORY_DUMP_REGISTER_NAME = 1;
    private static final int MEMORY_ERROR_HEAP = 3;
    private static final int MEMORY_ERROR_TOOL = 1;
    private static final int MEMORY_ERROR_TYPE = 2;
    private static final int REGISTER_NAME = 1;
    private static final int REGISTER_U64 = 2;
    private static final int SIGNAL_CODE = 3;
    private static final int SIGNAL_CODE_NAME = 4;
    private static final int SIGNAL_FAULT_ADDRESS = 9;
    private static final int SIGNAL_FAULT_ADJACENT_METADATA = 10;
    private static final int SIGNAL_HAS_FAULT_ADDRESS = 8;
    private static final int SIGNAL_HAS_SENDER = 5;
    private static final int SIGNAL_NAME = 2;
    private static final int SIGNAL_NUMBER = 1;
    private static final int SIGNAL_SENDER_PID = 7;
    private static final int SIGNAL_SENDER_UID = 6;
    private static final int STACK_HISTORY_BUFFER_ENTRIES = 2;
    private static final int STACK_HISTORY_BUFFER_ENTRY_ADDR = 1;
    private static final int STACK_HISTORY_BUFFER_ENTRY_FP = 2;
    private static final int STACK_HISTORY_BUFFER_ENTRY_TAG = 3;
    private static final int STACK_HISTORY_BUFFER_TID = 1;
    private static final int THREAD_BACKTRACE_NOTE = 7;
    private static final int THREAD_CURRENT_BACKTRACE = 4;
    private static final int THREAD_ID = 1;
    private static final int THREAD_MEMORY_DUMP = 5;
    private static final int THREAD_NAME = 2;
    private static final int THREAD_PAC_ENABLED_KEYS = 8;
    private static final int THREAD_REGISTERS = 3;
    private static final int THREAD_TAGGED_ADDR_CTRL = 6;
    private static final int THREAD_UNREADABLE_ELF_FILES = 9;
    private static final int TOMBSTONE_ABORT_MESSAGE = 14;
    private static final int TOMBSTONE_ARCH = 1;
    private static final int TOMBSTONE_BUILD_FINGERPRINT = 2;
    private static final int TOMBSTONE_CAUSES = 15;
    private static final int TOMBSTONE_COMMAND_LINE = 9;
    private static final int TOMBSTONE_CRASH_DETAILS = 21;
    private static final int TOMBSTONE_GUEST_ARCH = 24;
    private static final int TOMBSTONE_GUEST_THREADS = 25;
    private static final int TOMBSTONE_HAS_BEEN_16KB_MODE = 23;
    private static final int TOMBSTONE_LOG_BUFFERS = 18;
    private static final int TOMBSTONE_MEMORY_MAPPINGS = 17;
    private static final int TOMBSTONE_OPEN_FDS = 19;
    private static final int TOMBSTONE_PAGE_SIZE = 22;
    private static final int TOMBSTONE_PID = 5;
    private static final int TOMBSTONE_PROCESS_UPTIME = 20;
    private static final int TOMBSTONE_REVISION = 3;
    private static final int TOMBSTONE_SELINUX_LABEL = 8;
    private static final int TOMBSTONE_SIGNAL_INFO = 10;
    private static final int TOMBSTONE_STACK_HISTORY_BUFFER = 26;
    private static final int TOMBSTONE_THREADS = 16;
    private static final int TOMBSTONE_TID = 6;
    private static final int TOMBSTONE_TIMESTAMP = 4;
    private static final int TOMBSTONE_UID = 7;

    private TombstoneDecoder() {
    }

    private static void expectVarint(final int fieldNumber, final int wireType) throws IOException {
        WireReader.expectWireType(fieldNumber, 0, wireType);
    }

    private static void expectBytes(final int fieldNumber, final int wireType) throws IOException {
        WireReader.expectWireType(fieldNumber, 2, wireType);
    }

    public static Tombstone decode(final InputStream input) throws IOException {
        return decode(WireReader.fromInputStream(input));
    }

    public static Tombstone decode(final byte[] data) throws IOException {
        return decode(new WireReader(data));
    }

    /* JADX WARN: Failed to find 'out' block for switch in B:6:0x0055. Please report as an issue. */
    private static Tombstone decode(final WireReader reader) throws IOException {
        Architecture architecture = Architecture.NONE;
        Architecture architectureFromValue = Architecture.NONE;
        ArrayList arrayList = new ArrayList();
        ArrayList arrayList2 = new ArrayList();
        ArrayList arrayList3 = new ArrayList();
        HashMap map = new HashMap();
        HashMap map2 = new HashMap();
        ArrayList arrayList4 = new ArrayList();
        ArrayList arrayList5 = new ArrayList();
        ArrayList arrayList6 = new ArrayList();
        String string = "";
        String string2 = "";
        String string3 = string2;
        int varInt32 = 0;
        int varInt33 = 0;
        int varInt34 = 0;
        int varInt35 = 0;
        int varInt36 = 0;
        boolean bool = false;
        Signal signalDecodeSignal = null;
        StackHistoryBuffer stackHistoryBufferDecodeStackHistoryBuffer = null;
        String string4 = string3;
        String string5 = string4;
        while (true) {
            int tag = reader.readTag();
            if (tag != 0) {
                Architecture architectureFromValue2 = architecture;
                int fieldNumber = WireReader.getFieldNumber(tag);
                Architecture architecture2 = architectureFromValue;
                int wireType = WireReader.getWireType(tag);
                switch (fieldNumber) {
                    case 1:
                        expectVarint(fieldNumber, wireType);
                        architectureFromValue2 = Architecture.fromValue(reader.readVarInt32());
                        architectureFromValue = architecture2;
                        break;
                    case 2:
                        expectBytes(fieldNumber, wireType);
                        string = reader.readString();
                        architectureFromValue = architecture2;
                        break;
                    case 3:
                        expectBytes(fieldNumber, wireType);
                        string4 = reader.readString();
                        architectureFromValue = architecture2;
                        break;
                    case 4:
                        expectBytes(fieldNumber, wireType);
                        string5 = reader.readString();
                        architectureFromValue = architecture2;
                        break;
                    case 5:
                        expectVarint(fieldNumber, wireType);
                        varInt32 = reader.readVarInt32();
                        architectureFromValue = architecture2;
                        break;
                    case 6:
                        expectVarint(fieldNumber, wireType);
                        varInt33 = reader.readVarInt32();
                        architectureFromValue = architecture2;
                        break;
                    case 7:
                        expectVarint(fieldNumber, wireType);
                        varInt34 = reader.readVarInt32();
                        architectureFromValue = architecture2;
                        break;
                    case 8:
                        expectBytes(fieldNumber, wireType);
                        string2 = reader.readString();
                        architectureFromValue = architecture2;
                        break;
                    case 9:
                        expectBytes(fieldNumber, wireType);
                        arrayList.add(reader.readString());
                        architectureFromValue = architecture2;
                        break;
                    case 10:
                        expectBytes(fieldNumber, wireType);
                        signalDecodeSignal = decodeSignal(reader.readMessage());
                        architectureFromValue = architecture2;
                        break;
                    case 11:
                    case 12:
                    case 13:
                    default:
                        reader.skipField(wireType);
                        architectureFromValue = architecture2;
                        break;
                    case 14:
                        expectBytes(fieldNumber, wireType);
                        string3 = reader.readString();
                        architectureFromValue = architecture2;
                        break;
                    case 15:
                        expectBytes(fieldNumber, wireType);
                        arrayList3.add(decodeCause(reader.readMessage()));
                        architectureFromValue = architecture2;
                        break;
                    case 16:
                        expectBytes(fieldNumber, wireType);
                        decodeThreadMapEntry(reader.readMessage(), map);
                        architectureFromValue = architecture2;
                        break;
                    case 17:
                        expectBytes(fieldNumber, wireType);
                        arrayList4.add(decodeMemoryMapping(reader.readMessage()));
                        architectureFromValue = architecture2;
                        break;
                    case 18:
                        expectBytes(fieldNumber, wireType);
                        arrayList5.add(decodeLogBuffer(reader.readMessage()));
                        architectureFromValue = architecture2;
                        break;
                    case 19:
                        expectBytes(fieldNumber, wireType);
                        arrayList6.add(decodeFD(reader.readMessage()));
                        architectureFromValue = architecture2;
                        break;
                    case 20:
                        expectVarint(fieldNumber, wireType);
                        varInt35 = reader.readVarInt32();
                        architectureFromValue = architecture2;
                        break;
                    case 21:
                        expectBytes(fieldNumber, wireType);
                        arrayList2.add(decodeCrashDetail(reader.readMessage()));
                        architectureFromValue = architecture2;
                        break;
                    case 22:
                        expectVarint(fieldNumber, wireType);
                        varInt36 = reader.readVarInt32();
                        architectureFromValue = architecture2;
                        break;
                    case 23:
                        expectVarint(fieldNumber, wireType);
                        bool = reader.readBool();
                        architectureFromValue = architecture2;
                        break;
                    case 24:
                        expectVarint(fieldNumber, wireType);
                        architectureFromValue = Architecture.fromValue(reader.readVarInt32());
                        break;
                    case 25:
                        expectBytes(fieldNumber, wireType);
                        decodeThreadMapEntry(reader.readMessage(), map2);
                        architectureFromValue = architecture2;
                        break;
                    case 26:
                        expectBytes(fieldNumber, wireType);
                        stackHistoryBufferDecodeStackHistoryBuffer = decodeStackHistoryBuffer(reader.readMessage());
                        architectureFromValue = architecture2;
                        break;
                }
                architecture = architectureFromValue2;
            } else {
                return new Tombstone(architecture, architectureFromValue, string, string4, string5, varInt32, varInt33, varInt34, string2, arrayList, varInt35, signalDecodeSignal, string3, arrayList2, arrayList3, map, map2, arrayList4, arrayList5, arrayList6, varInt36, bool, stackHistoryBufferDecodeStackHistoryBuffer);
            }
        }
    }

    static Signal decodeSignal(final WireReader reader) throws IOException {
        int varInt32 = 0;
        int varInt33 = 0;
        boolean bool = false;
        int varInt34 = 0;
        int varInt35 = 0;
        boolean bool2 = false;
        String string = "";
        String string2 = string;
        long varInt = 0;
        MemoryDump memoryDumpDecodeMemoryDump = null;
        while (true) {
            int tag = reader.readTag();
            if (tag != 0) {
                int fieldNumber = WireReader.getFieldNumber(tag);
                int wireType = WireReader.getWireType(tag);
                switch (fieldNumber) {
                    case 1:
                        expectVarint(fieldNumber, wireType);
                        varInt32 = reader.readVarInt32();
                        break;
                    case 2:
                        expectBytes(fieldNumber, wireType);
                        string = reader.readString();
                        break;
                    case 3:
                        expectVarint(fieldNumber, wireType);
                        varInt33 = reader.readVarInt32();
                        break;
                    case 4:
                        expectBytes(fieldNumber, wireType);
                        string2 = reader.readString();
                        break;
                    case 5:
                        expectVarint(fieldNumber, wireType);
                        bool = reader.readBool();
                        break;
                    case 6:
                        expectVarint(fieldNumber, wireType);
                        varInt34 = reader.readVarInt32();
                        break;
                    case 7:
                        expectVarint(fieldNumber, wireType);
                        varInt35 = reader.readVarInt32();
                        break;
                    case 8:
                        expectVarint(fieldNumber, wireType);
                        bool2 = reader.readBool();
                        break;
                    case 9:
                        expectVarint(fieldNumber, wireType);
                        varInt = reader.readVarInt();
                        break;
                    case 10:
                        expectBytes(fieldNumber, wireType);
                        memoryDumpDecodeMemoryDump = decodeMemoryDump(reader.readMessage());
                        break;
                    default:
                        reader.skipField(wireType);
                        break;
                }
            } else {
                return new Signal(varInt32, string, varInt33, string2, bool, varInt34, varInt35, bool2, varInt, memoryDumpDecodeMemoryDump);
            }
        }
    }

    static void decodeThreadMapEntry(final WireReader reader, final Map<Integer, TombstoneThread> threads) throws IOException {
        int varInt32 = 0;
        TombstoneThread tombstoneThreadDecodeThread = null;
        while (true) {
            int tag = reader.readTag();
            if (tag == 0) {
                break;
            }
            int fieldNumber = WireReader.getFieldNumber(tag);
            int wireType = WireReader.getWireType(tag);
            if (fieldNumber == 1) {
                expectVarint(fieldNumber, wireType);
                varInt32 = reader.readVarInt32();
            } else if (fieldNumber == 2) {
                expectBytes(fieldNumber, wireType);
                tombstoneThreadDecodeThread = decodeThread(reader.readMessage());
            } else {
                reader.skipField(wireType);
            }
        }
        if (tombstoneThreadDecodeThread != null) {
            threads.put(Integer.valueOf(varInt32), tombstoneThreadDecodeThread);
        }
    }

    static TombstoneThread decodeThread(final WireReader reader) throws IOException {
        int fieldNumber;
        int wireType;
        ArrayList arrayList = new ArrayList();
        ArrayList arrayList2 = new ArrayList();
        ArrayList arrayList3 = new ArrayList();
        ArrayList arrayList4 = new ArrayList();
        ArrayList arrayList5 = new ArrayList();
        int varInt32 = 0;
        long varInt = 0;
        String string = "";
        long varInt2 = 0;
        while (true) {
            int i = varInt32;
            while (true) {
                int tag = reader.readTag();
                if (tag != 0) {
                    fieldNumber = WireReader.getFieldNumber(tag);
                    wireType = WireReader.getWireType(tag);
                    switch (fieldNumber) {
                        case 1:
                            break;
                        case 2:
                            expectBytes(fieldNumber, wireType);
                            string = reader.readString();
                            break;
                        case 3:
                            expectBytes(fieldNumber, wireType);
                            arrayList.add(decodeRegister(reader.readMessage()));
                            break;
                        case 4:
                            expectBytes(fieldNumber, wireType);
                            arrayList4.add(decodeBacktraceFrame(reader.readMessage()));
                            break;
                        case 5:
                            expectBytes(fieldNumber, wireType);
                            arrayList5.add(decodeMemoryDump(reader.readMessage()));
                            break;
                        case 6:
                            expectVarint(fieldNumber, wireType);
                            varInt = reader.readVarInt();
                            break;
                        case 7:
                            expectBytes(fieldNumber, wireType);
                            arrayList2.add(reader.readString());
                            break;
                        case 8:
                            expectVarint(fieldNumber, wireType);
                            varInt2 = reader.readVarInt();
                            break;
                        case 9:
                            expectBytes(fieldNumber, wireType);
                            arrayList3.add(reader.readString());
                            break;
                        default:
                            reader.skipField(wireType);
                            break;
                    }
                } else {
                    return new TombstoneThread(i, string, arrayList, arrayList2, arrayList3, arrayList4, arrayList5, varInt, varInt2);
                }
            }
            expectVarint(fieldNumber, wireType);
            varInt32 = reader.readVarInt32();
        }
    }

    static BacktraceFrame decodeBacktraceFrame(final WireReader reader) throws IOException {
        long varInt = 0;
        long varInt2 = 0;
        long varInt3 = 0;
        long varInt4 = 0;
        long varInt5 = 0;
        String string = "";
        String string2 = string;
        String string3 = string2;
        while (true) {
            int tag = reader.readTag();
            if (tag != 0) {
                int fieldNumber = WireReader.getFieldNumber(tag);
                int wireType = WireReader.getWireType(tag);
                switch (fieldNumber) {
                    case 1:
                        expectVarint(fieldNumber, wireType);
                        varInt = reader.readVarInt();
                        break;
                    case 2:
                        expectVarint(fieldNumber, wireType);
                        varInt2 = reader.readVarInt();
                        break;
                    case 3:
                        expectVarint(fieldNumber, wireType);
                        varInt3 = reader.readVarInt();
                        break;
                    case 4:
                        expectBytes(fieldNumber, wireType);
                        string = reader.readString();
                        continue;
                    case 5:
                        expectVarint(fieldNumber, wireType);
                        varInt4 = reader.readVarInt();
                        break;
                    case 6:
                        expectBytes(fieldNumber, wireType);
                        string2 = reader.readString();
                        continue;
                    case 7:
                        expectVarint(fieldNumber, wireType);
                        varInt5 = reader.readVarInt();
                        break;
                    case 8:
                        expectBytes(fieldNumber, wireType);
                        string3 = reader.readString();
                        continue;
                    default:
                        reader.skipField(wireType);
                        continue;
                }
            } else {
                return new BacktraceFrame(varInt, varInt2, varInt3, string, varInt4, string2, varInt5, string3);
            }
        }
    }

    static Register decodeRegister(final WireReader reader) throws IOException {
        String string = "";
        long varInt = 0;
        while (true) {
            int tag = reader.readTag();
            if (tag != 0) {
                int fieldNumber = WireReader.getFieldNumber(tag);
                int wireType = WireReader.getWireType(tag);
                if (fieldNumber == 1) {
                    expectBytes(fieldNumber, wireType);
                    string = reader.readString();
                } else if (fieldNumber == 2) {
                    expectVarint(fieldNumber, wireType);
                    varInt = reader.readVarInt();
                } else {
                    reader.skipField(wireType);
                }
            } else {
                return new Register(string, varInt);
            }
        }
    }

    static MemoryMapping decodeMemoryMapping(final WireReader reader) throws IOException {
        long varInt = 0;
        long varInt2 = 0;
        long varInt3 = 0;
        long varInt4 = 0;
        boolean bool = false;
        boolean bool2 = false;
        boolean bool3 = false;
        String string = "";
        String string2 = string;
        while (true) {
            int tag = reader.readTag();
            if (tag != 0) {
                int fieldNumber = WireReader.getFieldNumber(tag);
                int wireType = WireReader.getWireType(tag);
                switch (fieldNumber) {
                    case 1:
                        expectVarint(fieldNumber, wireType);
                        varInt = reader.readVarInt();
                        break;
                    case 2:
                        expectVarint(fieldNumber, wireType);
                        varInt2 = reader.readVarInt();
                        break;
                    case 3:
                        expectVarint(fieldNumber, wireType);
                        varInt3 = reader.readVarInt();
                        break;
                    case 4:
                        expectVarint(fieldNumber, wireType);
                        bool = reader.readBool();
                        continue;
                    case 5:
                        expectVarint(fieldNumber, wireType);
                        bool2 = reader.readBool();
                        continue;
                    case 6:
                        expectVarint(fieldNumber, wireType);
                        bool3 = reader.readBool();
                        continue;
                    case 7:
                        expectBytes(fieldNumber, wireType);
                        string = reader.readString();
                        continue;
                    case 8:
                        expectBytes(fieldNumber, wireType);
                        string2 = reader.readString();
                        continue;
                    case 9:
                        expectVarint(fieldNumber, wireType);
                        varInt4 = reader.readVarInt();
                        break;
                    default:
                        reader.skipField(wireType);
                        continue;
                }
            } else {
                return new MemoryMapping(varInt, varInt2, varInt3, bool, bool2, bool3, string, string2, varInt4);
            }
        }
    }

    static MemoryDump decodeMemoryDump(final WireReader reader) throws IOException {
        byte[] bytes = new byte[0];
        String string = "";
        String string2 = string;
        long varInt = 0;
        ArmMTEMetadata armMTEMetadataDecodeArmMTEMetadata = null;
        while (true) {
            int tag = reader.readTag();
            if (tag != 0) {
                int fieldNumber = WireReader.getFieldNumber(tag);
                int wireType = WireReader.getWireType(tag);
                if (fieldNumber == 1) {
                    expectBytes(fieldNumber, wireType);
                    string = reader.readString();
                } else if (fieldNumber == 2) {
                    expectBytes(fieldNumber, wireType);
                    string2 = reader.readString();
                } else if (fieldNumber == 3) {
                    expectVarint(fieldNumber, wireType);
                    varInt = reader.readVarInt();
                } else if (fieldNumber == 4) {
                    expectBytes(fieldNumber, wireType);
                    bytes = reader.readBytes();
                } else if (fieldNumber == 6) {
                    expectBytes(fieldNumber, wireType);
                    armMTEMetadataDecodeArmMTEMetadata = decodeArmMTEMetadata(reader.readMessage());
                } else {
                    reader.skipField(wireType);
                }
            } else {
                return new MemoryDump(string, string2, varInt, bytes, armMTEMetadataDecodeArmMTEMetadata);
            }
        }
    }

    static ArmMTEMetadata decodeArmMTEMetadata(final WireReader reader) throws IOException {
        byte[] bytes = new byte[0];
        while (true) {
            int tag = reader.readTag();
            if (tag != 0) {
                int fieldNumber = WireReader.getFieldNumber(tag);
                int wireType = WireReader.getWireType(tag);
                if (fieldNumber == 1) {
                    expectBytes(fieldNumber, wireType);
                    bytes = reader.readBytes();
                } else {
                    reader.skipField(wireType);
                }
            } else {
                return new ArmMTEMetadata(bytes);
            }
        }
    }

    static Cause decodeCause(final WireReader reader) throws IOException {
        String string = "";
        MemoryError memoryErrorDecodeMemoryError = null;
        while (true) {
            int tag = reader.readTag();
            if (tag != 0) {
                int fieldNumber = WireReader.getFieldNumber(tag);
                int wireType = WireReader.getWireType(tag);
                if (fieldNumber == 1) {
                    expectBytes(fieldNumber, wireType);
                    string = reader.readString();
                } else if (fieldNumber == 2) {
                    expectBytes(fieldNumber, wireType);
                    memoryErrorDecodeMemoryError = decodeMemoryError(reader.readMessage());
                } else {
                    reader.skipField(wireType);
                }
            } else {
                return new Cause(string, memoryErrorDecodeMemoryError);
            }
        }
    }

    static MemoryError decodeMemoryError(final WireReader reader) throws IOException {
        MemoryError.Tool toolFromValue = MemoryError.Tool.GWP_ASAN;
        MemoryError.Type typeFromValue = MemoryError.Type.UNKNOWN;
        HeapObject heapObjectDecodeHeapObject = null;
        while (true) {
            int tag = reader.readTag();
            if (tag != 0) {
                int fieldNumber = WireReader.getFieldNumber(tag);
                int wireType = WireReader.getWireType(tag);
                if (fieldNumber == 1) {
                    expectVarint(fieldNumber, wireType);
                    toolFromValue = MemoryError.Tool.fromValue(reader.readVarInt32());
                } else if (fieldNumber == 2) {
                    expectVarint(fieldNumber, wireType);
                    typeFromValue = MemoryError.Type.fromValue(reader.readVarInt32());
                } else if (fieldNumber == 3) {
                    expectBytes(fieldNumber, wireType);
                    heapObjectDecodeHeapObject = decodeHeapObject(reader.readMessage());
                } else {
                    reader.skipField(wireType);
                }
            } else {
                return new MemoryError(toolFromValue, typeFromValue, heapObjectDecodeHeapObject);
            }
        }
    }

    static HeapObject decodeHeapObject(final WireReader reader) throws IOException {
        ArrayList arrayList = new ArrayList();
        ArrayList arrayList2 = new ArrayList();
        long varInt = 0;
        long varInt2 = 0;
        long varInt3 = 0;
        long varInt4 = 0;
        while (true) {
            int tag = reader.readTag();
            if (tag != 0) {
                int fieldNumber = WireReader.getFieldNumber(tag);
                int wireType = WireReader.getWireType(tag);
                switch (fieldNumber) {
                    case 1:
                        expectVarint(fieldNumber, wireType);
                        varInt4 = reader.readVarInt();
                        break;
                    case 2:
                        expectVarint(fieldNumber, wireType);
                        varInt = reader.readVarInt();
                        break;
                    case 3:
                        expectVarint(fieldNumber, wireType);
                        varInt2 = reader.readVarInt();
                        break;
                    case 4:
                        expectBytes(fieldNumber, wireType);
                        arrayList.add(decodeBacktraceFrame(reader.readMessage()));
                        break;
                    case 5:
                        expectVarint(fieldNumber, wireType);
                        varInt3 = reader.readVarInt();
                        break;
                    case 6:
                        expectBytes(fieldNumber, wireType);
                        arrayList2.add(decodeBacktraceFrame(reader.readMessage()));
                        break;
                    default:
                        reader.skipField(wireType);
                        break;
                }
            } else {
                return new HeapObject(varInt4, varInt, varInt2, arrayList, varInt3, arrayList2);
            }
        }
    }

    static FD decodeFD(final WireReader reader) throws IOException {
        int varInt32 = 0;
        String string = "";
        String string2 = string;
        long varInt = 0;
        while (true) {
            int tag = reader.readTag();
            if (tag != 0) {
                int fieldNumber = WireReader.getFieldNumber(tag);
                int wireType = WireReader.getWireType(tag);
                if (fieldNumber == 1) {
                    expectVarint(fieldNumber, wireType);
                    varInt32 = reader.readVarInt32();
                } else if (fieldNumber == 2) {
                    expectBytes(fieldNumber, wireType);
                    string = reader.readString();
                } else if (fieldNumber == 3) {
                    expectBytes(fieldNumber, wireType);
                    string2 = reader.readString();
                } else if (fieldNumber == 4) {
                    expectVarint(fieldNumber, wireType);
                    varInt = reader.readVarInt();
                } else {
                    reader.skipField(wireType);
                }
            } else {
                return new FD(varInt32, string, string2, varInt);
            }
        }
    }

    static LogBuffer decodeLogBuffer(final WireReader reader) throws IOException {
        ArrayList arrayList = new ArrayList();
        String string = "";
        while (true) {
            int tag = reader.readTag();
            if (tag != 0) {
                int fieldNumber = WireReader.getFieldNumber(tag);
                int wireType = WireReader.getWireType(tag);
                if (fieldNumber == 1) {
                    expectBytes(fieldNumber, wireType);
                    string = reader.readString();
                } else if (fieldNumber == 2) {
                    expectBytes(fieldNumber, wireType);
                    arrayList.add(decodeLogMessage(reader.readMessage()));
                } else {
                    reader.skipField(wireType);
                }
            } else {
                return new LogBuffer(string, arrayList);
            }
        }
    }

    static LogMessage decodeLogMessage(final WireReader reader) throws IOException {
        String string = "";
        String string2 = string;
        String string3 = string2;
        int varInt32 = 0;
        int varInt33 = 0;
        int varInt34 = 0;
        while (true) {
            int tag = reader.readTag();
            if (tag != 0) {
                int fieldNumber = WireReader.getFieldNumber(tag);
                int wireType = WireReader.getWireType(tag);
                switch (fieldNumber) {
                    case 1:
                        expectBytes(fieldNumber, wireType);
                        string = reader.readString();
                        break;
                    case 2:
                        expectVarint(fieldNumber, wireType);
                        varInt32 = reader.readVarInt32();
                        break;
                    case 3:
                        expectVarint(fieldNumber, wireType);
                        varInt33 = reader.readVarInt32();
                        break;
                    case 4:
                        expectVarint(fieldNumber, wireType);
                        varInt34 = reader.readVarInt32();
                        break;
                    case 5:
                        expectBytes(fieldNumber, wireType);
                        string2 = reader.readString();
                        break;
                    case 6:
                        expectBytes(fieldNumber, wireType);
                        string3 = reader.readString();
                        break;
                    default:
                        reader.skipField(wireType);
                        break;
                }
            } else {
                return new LogMessage(string, varInt32, varInt33, varInt34, string2, string3);
            }
        }
    }

    static CrashDetail decodeCrashDetail(final WireReader reader) throws IOException {
        byte[] bytes = new byte[0];
        byte[] bytes2 = new byte[0];
        while (true) {
            int tag = reader.readTag();
            if (tag != 0) {
                int fieldNumber = WireReader.getFieldNumber(tag);
                int wireType = WireReader.getWireType(tag);
                if (fieldNumber == 1) {
                    expectBytes(fieldNumber, wireType);
                    bytes = reader.readBytes();
                } else if (fieldNumber == 2) {
                    expectBytes(fieldNumber, wireType);
                    bytes2 = reader.readBytes();
                } else {
                    reader.skipField(wireType);
                }
            } else {
                return new CrashDetail(bytes, bytes2);
            }
        }
    }

    static StackHistoryBuffer decodeStackHistoryBuffer(final WireReader reader) throws IOException {
        ArrayList arrayList = new ArrayList();
        long varInt = 0;
        while (true) {
            int tag = reader.readTag();
            if (tag != 0) {
                int fieldNumber = WireReader.getFieldNumber(tag);
                int wireType = WireReader.getWireType(tag);
                if (fieldNumber == 1) {
                    expectVarint(fieldNumber, wireType);
                    varInt = reader.readVarInt();
                } else if (fieldNumber == 2) {
                    expectBytes(fieldNumber, wireType);
                    arrayList.add(decodeStackHistoryBufferEntry(reader.readMessage()));
                } else {
                    reader.skipField(wireType);
                }
            } else {
                return new StackHistoryBuffer(varInt, arrayList);
            }
        }
    }

    static StackHistoryBufferEntry decodeStackHistoryBufferEntry(final WireReader reader) throws IOException {
        BacktraceFrame backtraceFrameDecodeBacktraceFrame = null;
        long varInt = 0;
        long varInt2 = 0;
        while (true) {
            int tag = reader.readTag();
            if (tag != 0) {
                int fieldNumber = WireReader.getFieldNumber(tag);
                int wireType = WireReader.getWireType(tag);
                if (fieldNumber == 1) {
                    expectBytes(fieldNumber, wireType);
                    backtraceFrameDecodeBacktraceFrame = decodeBacktraceFrame(reader.readMessage());
                } else if (fieldNumber == 2) {
                    expectVarint(fieldNumber, wireType);
                    varInt = reader.readVarInt();
                } else if (fieldNumber == 3) {
                    expectVarint(fieldNumber, wireType);
                    varInt2 = reader.readVarInt();
                } else {
                    reader.skipField(wireType);
                }
            } else {
                return new StackHistoryBufferEntry(backtraceFrameDecodeBacktraceFrame, varInt, varInt2);
            }
        }
    }
}
