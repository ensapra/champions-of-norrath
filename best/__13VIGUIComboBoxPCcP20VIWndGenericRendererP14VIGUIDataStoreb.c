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

M2C_UNK __9VIGUITextPCc7GUITypeP20VIWndGenericRendererP14VIGUIDataStore(M2C_UNK, s32, s32); /* extern */
M2C_UNK __t6VIList1ZPc(s32);                        /* extern */
extern M2C_UNK D_011FCFF0;

void __13VIGUIComboBoxPCcP20VIWndGenericRendererP14VIGUIDataStoreb(void *arg0, s32 arg2, s32 arg3, s32 arg4) {
    __9VIGUITextPCc7GUITypeP20VIWndGenericRendererP14VIGUIDataStore(5, arg2, arg3);
    M2C_FIELD(arg0, M2C_UNK **, 0x94) = &D_011FCFF0;
    __t6VIList1ZPc(arg0 + 0x104);
    M2C_FIELD(arg0, s32 *, 0x128) = arg4;
    M2C_FIELD(arg0, s32 *, 0x118) = arg4;
    M2C_FIELD(arg0, s32 *, 0x124) = 1;
    M2C_FIELD(arg0, s32 *, 0x11C) = -1;
    M2C_FIELD(arg0, s32 *, 0x120) = 0x4B;
    M2C_FIELD(arg0, s32 *, 0x12C) = 0;
    M2C_FIELD(arg0, s32 *, 0x110) = 0;
    M2C_FIELD(arg0, s32 *, 0x114) = 0;
}
