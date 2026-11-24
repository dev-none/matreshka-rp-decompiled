package com.abovevacant.epitaph.core;

/* JADX INFO: loaded from: classes4.dex */
public final class MemoryError {
    public final HeapObject heap;
    public final Tool tool;
    public final Type type;

    public enum Tool {
        GWP_ASAN(0),
        SCUDO(1);

        private final int value;

        Tool(int value) {
            this.value = value;
        }

        public int getValue() {
            return this.value;
        }

        public static Tool fromValue(int value) {
            for (Tool tool : values()) {
                if (tool.value == value) {
                    return tool;
                }
            }
            return GWP_ASAN;
        }
    }

    public enum Type {
        UNKNOWN(0),
        USE_AFTER_FREE(1),
        DOUBLE_FREE(2),
        INVALID_FREE(3),
        BUFFER_OVERFLOW(4),
        BUFFER_UNDERFLOW(5);

        private final int value;

        Type(int value) {
            this.value = value;
        }

        public int getValue() {
            return this.value;
        }

        public static Type fromValue(int value) {
            for (Type type : values()) {
                if (type.value == value) {
                    return type;
                }
            }
            return UNKNOWN;
        }
    }

    public MemoryError(final Tool tool, final Type type, final HeapObject heap) {
        this.tool = tool;
        this.type = type;
        this.heap = heap;
    }
}
