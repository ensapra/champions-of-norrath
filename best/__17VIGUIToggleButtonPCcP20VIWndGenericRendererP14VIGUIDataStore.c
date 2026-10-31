/* machine draft (m2c) for ee-gcc-2.96 -Os -G8 -mno-check-zero-division, tried by autopilot */
#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif

M2C_UNK __11VIGUIObjectPCc7GUITypeP20VIWndGenericRendererP14VIGUIDataStore(M2C_UNK, s32, s32); /* extern */
M2C_UNK __20VIGUIToggleDataModel(s32);              /* extern */
s32 __builtin_new(M2C_UNK);                         /* extern */
extern M2C_UNK D_01200BC8;

void __17VIGUIToggleButtonPCcP20VIWndGenericRendererP14VIGUIDataStore(void *arg0, s32 arg2, s32 arg3) {
    s32 temp_2;

    __11VIGUIObjectPCc7GUITypeP20VIWndGenericRendererP14VIGUIDataStore(2, arg2, arg3);
    M2C_FIELD(arg0, s32 *, 0x98) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0x94) = &D_01200BC8;
    temp_2 = __builtin_new(0x2C);
    if (temp_2 != 0) {
        __20VIGUIToggleDataModel(temp_2);
    }
    M2C_FIELD(arg0, s32 *, 0x28) = temp_2;
}
