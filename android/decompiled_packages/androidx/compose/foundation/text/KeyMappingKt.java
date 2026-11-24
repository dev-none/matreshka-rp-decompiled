package androidx.compose.foundation.text;

import androidx.compose.ui.input.key.Key;
import androidx.compose.ui.input.key.KeyEvent;
import androidx.compose.ui.input.key.KeyEvent_androidKt;
import kotlin.Metadata;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.PropertyReference1Impl;

/* JADX INFO: compiled from: KeyMapping.kt */
/* JADX INFO: loaded from: classes.dex */
@Metadata(d1 = {"\u0000\u0018\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0010\u000b\n\u0000\u001a\u001c\u0010\u0004\u001a\u00020\u00012\u0012\u0010\u0005\u001a\u000e\u0012\u0004\u0012\u00020\u0007\u0012\u0004\u0012\u00020\b0\u0006H\u0000\"\u0014\u0010\u0000\u001a\u00020\u0001X\u0080\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u0002\u0010\u0003¨\u0006\t"}, d2 = {"defaultKeyMapping", "Landroidx/compose/foundation/text/KeyMapping;", "getDefaultKeyMapping", "()Landroidx/compose/foundation/text/KeyMapping;", "commonKeyMapping", "shortcutModifier", "Lkotlin/Function1;", "Landroidx/compose/ui/input/key/KeyEvent;", "", "foundation_release"}, k = 2, mv = {1, 8, 0}, xi = 48)
public final class KeyMappingKt {
    private static final KeyMapping defaultKeyMapping;

    public static final KeyMapping commonKeyMapping(final Function1<? super KeyEvent, Boolean> function1) {
        return new KeyMapping() { // from class: androidx.compose.foundation.text.KeyMappingKt.commonKeyMapping.1
            @Override // androidx.compose.foundation.text.KeyMapping
            /* JADX INFO: renamed from: map-ZmokQxo */
            public KeyCommand mo1037mapZmokQxo(android.view.KeyEvent event) {
                if (function1.invoke(KeyEvent.m5262boximpl(event)).booleanValue() && KeyEvent_androidKt.m5285isShiftPressedZmokQxo(event)) {
                    if (Key.m4971equalsimpl0(KeyEvent_androidKt.m5279getKeyZmokQxo(event), MappedKeys.INSTANCE.m1091getZEK5gGoQ())) {
                        return KeyCommand.REDO;
                    }
                    return null;
                }
                if (function1.invoke(KeyEvent.m5262boximpl(event)).booleanValue()) {
                    long jM5279getKeyZmokQxo = KeyEvent_androidKt.m5279getKeyZmokQxo(event);
                    if (Key.m4971equalsimpl0(jM5279getKeyZmokQxo, MappedKeys.INSTANCE.m1071getCEK5gGoQ()) ? true : Key.m4971equalsimpl0(jM5279getKeyZmokQxo, MappedKeys.INSTANCE.m1081getInsertEK5gGoQ())) {
                        return KeyCommand.COPY;
                    }
                    if (Key.m4971equalsimpl0(jM5279getKeyZmokQxo, MappedKeys.INSTANCE.m1088getVEK5gGoQ())) {
                        return KeyCommand.PASTE;
                    }
                    if (Key.m4971equalsimpl0(jM5279getKeyZmokQxo, MappedKeys.INSTANCE.m1089getXEK5gGoQ())) {
                        return KeyCommand.CUT;
                    }
                    if (Key.m4971equalsimpl0(jM5279getKeyZmokQxo, MappedKeys.INSTANCE.m1068getAEK5gGoQ())) {
                        return KeyCommand.SELECT_ALL;
                    }
                    if (Key.m4971equalsimpl0(jM5279getKeyZmokQxo, MappedKeys.INSTANCE.m1090getYEK5gGoQ())) {
                        return KeyCommand.REDO;
                    }
                    if (Key.m4971equalsimpl0(jM5279getKeyZmokQxo, MappedKeys.INSTANCE.m1091getZEK5gGoQ())) {
                        return KeyCommand.UNDO;
                    }
                    return null;
                }
                if (KeyEvent_androidKt.m5283isCtrlPressedZmokQxo(event)) {
                    return null;
                }
                if (KeyEvent_androidKt.m5285isShiftPressedZmokQxo(event)) {
                    long jM5279getKeyZmokQxo2 = KeyEvent_androidKt.m5279getKeyZmokQxo(event);
                    if (Key.m4971equalsimpl0(jM5279getKeyZmokQxo2, MappedKeys.INSTANCE.m1076getDirectionLeftEK5gGoQ())) {
                        return KeyCommand.SELECT_LEFT_CHAR;
                    }
                    if (Key.m4971equalsimpl0(jM5279getKeyZmokQxo2, MappedKeys.INSTANCE.m1077getDirectionRightEK5gGoQ())) {
                        return KeyCommand.SELECT_RIGHT_CHAR;
                    }
                    if (Key.m4971equalsimpl0(jM5279getKeyZmokQxo2, MappedKeys.INSTANCE.m1078getDirectionUpEK5gGoQ())) {
                        return KeyCommand.SELECT_UP;
                    }
                    if (Key.m4971equalsimpl0(jM5279getKeyZmokQxo2, MappedKeys.INSTANCE.m1075getDirectionDownEK5gGoQ())) {
                        return KeyCommand.SELECT_DOWN;
                    }
                    if (Key.m4971equalsimpl0(jM5279getKeyZmokQxo2, MappedKeys.INSTANCE.m1085getPageUpEK5gGoQ())) {
                        return KeyCommand.SELECT_PAGE_UP;
                    }
                    if (Key.m4971equalsimpl0(jM5279getKeyZmokQxo2, MappedKeys.INSTANCE.m1084getPageDownEK5gGoQ())) {
                        return KeyCommand.SELECT_PAGE_DOWN;
                    }
                    if (Key.m4971equalsimpl0(jM5279getKeyZmokQxo2, MappedKeys.INSTANCE.m1083getMoveHomeEK5gGoQ())) {
                        return KeyCommand.SELECT_LINE_START;
                    }
                    if (Key.m4971equalsimpl0(jM5279getKeyZmokQxo2, MappedKeys.INSTANCE.m1082getMoveEndEK5gGoQ())) {
                        return KeyCommand.SELECT_LINE_END;
                    }
                    if (Key.m4971equalsimpl0(jM5279getKeyZmokQxo2, MappedKeys.INSTANCE.m1081getInsertEK5gGoQ())) {
                        return KeyCommand.PASTE;
                    }
                    return null;
                }
                long jM5279getKeyZmokQxo3 = KeyEvent_androidKt.m5279getKeyZmokQxo(event);
                if (Key.m4971equalsimpl0(jM5279getKeyZmokQxo3, MappedKeys.INSTANCE.m1076getDirectionLeftEK5gGoQ())) {
                    return KeyCommand.LEFT_CHAR;
                }
                if (Key.m4971equalsimpl0(jM5279getKeyZmokQxo3, MappedKeys.INSTANCE.m1077getDirectionRightEK5gGoQ())) {
                    return KeyCommand.RIGHT_CHAR;
                }
                if (Key.m4971equalsimpl0(jM5279getKeyZmokQxo3, MappedKeys.INSTANCE.m1078getDirectionUpEK5gGoQ())) {
                    return KeyCommand.UP;
                }
                if (Key.m4971equalsimpl0(jM5279getKeyZmokQxo3, MappedKeys.INSTANCE.m1075getDirectionDownEK5gGoQ())) {
                    return KeyCommand.DOWN;
                }
                if (Key.m4971equalsimpl0(jM5279getKeyZmokQxo3, MappedKeys.INSTANCE.m1085getPageUpEK5gGoQ())) {
                    return KeyCommand.PAGE_UP;
                }
                if (Key.m4971equalsimpl0(jM5279getKeyZmokQxo3, MappedKeys.INSTANCE.m1084getPageDownEK5gGoQ())) {
                    return KeyCommand.PAGE_DOWN;
                }
                if (Key.m4971equalsimpl0(jM5279getKeyZmokQxo3, MappedKeys.INSTANCE.m1083getMoveHomeEK5gGoQ())) {
                    return KeyCommand.LINE_START;
                }
                if (Key.m4971equalsimpl0(jM5279getKeyZmokQxo3, MappedKeys.INSTANCE.m1082getMoveEndEK5gGoQ())) {
                    return KeyCommand.LINE_END;
                }
                if (Key.m4971equalsimpl0(jM5279getKeyZmokQxo3, MappedKeys.INSTANCE.m1079getEnterEK5gGoQ())) {
                    return KeyCommand.NEW_LINE;
                }
                if (Key.m4971equalsimpl0(jM5279getKeyZmokQxo3, MappedKeys.INSTANCE.m1070getBackspaceEK5gGoQ())) {
                    return KeyCommand.DELETE_PREV_CHAR;
                }
                if (Key.m4971equalsimpl0(jM5279getKeyZmokQxo3, MappedKeys.INSTANCE.m1074getDeleteEK5gGoQ())) {
                    return KeyCommand.DELETE_NEXT_CHAR;
                }
                if (Key.m4971equalsimpl0(jM5279getKeyZmokQxo3, MappedKeys.INSTANCE.m1086getPasteEK5gGoQ())) {
                    return KeyCommand.PASTE;
                }
                if (Key.m4971equalsimpl0(jM5279getKeyZmokQxo3, MappedKeys.INSTANCE.m1073getCutEK5gGoQ())) {
                    return KeyCommand.CUT;
                }
                if (Key.m4971equalsimpl0(jM5279getKeyZmokQxo3, MappedKeys.INSTANCE.m1072getCopyEK5gGoQ())) {
                    return KeyCommand.COPY;
                }
                if (Key.m4971equalsimpl0(jM5279getKeyZmokQxo3, MappedKeys.INSTANCE.m1087getTabEK5gGoQ())) {
                    return KeyCommand.TAB;
                }
                return null;
            }
        };
    }

    public static final KeyMapping getDefaultKeyMapping() {
        return defaultKeyMapping;
    }

    static {
        final KeyMapping keyMappingCommonKeyMapping = commonKeyMapping(new PropertyReference1Impl() { // from class: androidx.compose.foundation.text.KeyMappingKt$defaultKeyMapping$1
            @Override // kotlin.jvm.internal.PropertyReference1Impl, kotlin.reflect.KProperty1
            public Object get(Object obj) {
                return Boolean.valueOf(KeyEvent_androidKt.m5283isCtrlPressedZmokQxo(((KeyEvent) obj).m5268unboximpl()));
            }
        });
        defaultKeyMapping = new KeyMapping() { // from class: androidx.compose.foundation.text.KeyMappingKt$defaultKeyMapping$2$1
            @Override // androidx.compose.foundation.text.KeyMapping
            /* JADX INFO: renamed from: map-ZmokQxo */
            public KeyCommand mo1037mapZmokQxo(android.view.KeyEvent event) {
                KeyCommand keyCommand = null;
                if (KeyEvent_androidKt.m5285isShiftPressedZmokQxo(event) && KeyEvent_androidKt.m5283isCtrlPressedZmokQxo(event)) {
                    long jM5279getKeyZmokQxo = KeyEvent_androidKt.m5279getKeyZmokQxo(event);
                    if (Key.m4971equalsimpl0(jM5279getKeyZmokQxo, MappedKeys.INSTANCE.m1076getDirectionLeftEK5gGoQ())) {
                        keyCommand = KeyCommand.SELECT_LEFT_WORD;
                    } else if (Key.m4971equalsimpl0(jM5279getKeyZmokQxo, MappedKeys.INSTANCE.m1077getDirectionRightEK5gGoQ())) {
                        keyCommand = KeyCommand.SELECT_RIGHT_WORD;
                    } else if (Key.m4971equalsimpl0(jM5279getKeyZmokQxo, MappedKeys.INSTANCE.m1078getDirectionUpEK5gGoQ())) {
                        keyCommand = KeyCommand.SELECT_PREV_PARAGRAPH;
                    } else if (Key.m4971equalsimpl0(jM5279getKeyZmokQxo, MappedKeys.INSTANCE.m1075getDirectionDownEK5gGoQ())) {
                        keyCommand = KeyCommand.SELECT_NEXT_PARAGRAPH;
                    }
                } else if (KeyEvent_androidKt.m5283isCtrlPressedZmokQxo(event)) {
                    long jM5279getKeyZmokQxo2 = KeyEvent_androidKt.m5279getKeyZmokQxo(event);
                    if (Key.m4971equalsimpl0(jM5279getKeyZmokQxo2, MappedKeys.INSTANCE.m1076getDirectionLeftEK5gGoQ())) {
                        keyCommand = KeyCommand.LEFT_WORD;
                    } else if (Key.m4971equalsimpl0(jM5279getKeyZmokQxo2, MappedKeys.INSTANCE.m1077getDirectionRightEK5gGoQ())) {
                        keyCommand = KeyCommand.RIGHT_WORD;
                    } else if (Key.m4971equalsimpl0(jM5279getKeyZmokQxo2, MappedKeys.INSTANCE.m1078getDirectionUpEK5gGoQ())) {
                        keyCommand = KeyCommand.PREV_PARAGRAPH;
                    } else if (Key.m4971equalsimpl0(jM5279getKeyZmokQxo2, MappedKeys.INSTANCE.m1075getDirectionDownEK5gGoQ())) {
                        keyCommand = KeyCommand.NEXT_PARAGRAPH;
                    } else if (Key.m4971equalsimpl0(jM5279getKeyZmokQxo2, MappedKeys.INSTANCE.m1080getHEK5gGoQ())) {
                        keyCommand = KeyCommand.DELETE_PREV_CHAR;
                    } else if (Key.m4971equalsimpl0(jM5279getKeyZmokQxo2, MappedKeys.INSTANCE.m1074getDeleteEK5gGoQ())) {
                        keyCommand = KeyCommand.DELETE_NEXT_WORD;
                    } else if (Key.m4971equalsimpl0(jM5279getKeyZmokQxo2, MappedKeys.INSTANCE.m1070getBackspaceEK5gGoQ())) {
                        keyCommand = KeyCommand.DELETE_PREV_WORD;
                    } else if (Key.m4971equalsimpl0(jM5279getKeyZmokQxo2, MappedKeys.INSTANCE.m1069getBackslashEK5gGoQ())) {
                        keyCommand = KeyCommand.DESELECT;
                    }
                } else if (KeyEvent_androidKt.m5285isShiftPressedZmokQxo(event)) {
                    long jM5279getKeyZmokQxo3 = KeyEvent_androidKt.m5279getKeyZmokQxo(event);
                    if (Key.m4971equalsimpl0(jM5279getKeyZmokQxo3, MappedKeys.INSTANCE.m1083getMoveHomeEK5gGoQ())) {
                        keyCommand = KeyCommand.SELECT_LINE_LEFT;
                    } else if (Key.m4971equalsimpl0(jM5279getKeyZmokQxo3, MappedKeys.INSTANCE.m1082getMoveEndEK5gGoQ())) {
                        keyCommand = KeyCommand.SELECT_LINE_RIGHT;
                    }
                } else if (KeyEvent_androidKt.m5282isAltPressedZmokQxo(event)) {
                    long jM5279getKeyZmokQxo4 = KeyEvent_androidKt.m5279getKeyZmokQxo(event);
                    if (Key.m4971equalsimpl0(jM5279getKeyZmokQxo4, MappedKeys.INSTANCE.m1070getBackspaceEK5gGoQ())) {
                        keyCommand = KeyCommand.DELETE_FROM_LINE_START;
                    } else if (Key.m4971equalsimpl0(jM5279getKeyZmokQxo4, MappedKeys.INSTANCE.m1074getDeleteEK5gGoQ())) {
                        keyCommand = KeyCommand.DELETE_TO_LINE_END;
                    }
                }
                return keyCommand == null ? keyMappingCommonKeyMapping.mo1037mapZmokQxo(event) : keyCommand;
            }
        };
    }
}
