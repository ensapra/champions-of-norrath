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

M2C_UNK Initialize__11VIGUIObject();                /* extern */
M2C_UNK SetGUIDataStore__11VIGUIObjectP14VIGUIDataStore(void *, s32); /* extern */
M2C_UNK SetGUIRenderer__11VIGUIObjectP20VIWndGenericRenderer(void *, s32); /* extern */
M2C_UNK SetGUIType__11VIGUIObject7GUIType(void *, s32); /* extern */
M2C_UNK SetName__11VIGUIObjectPCc(void *, s32);     /* extern */
extern M2C_UNK D_011FF498;

void __11VIGUIObjectPCc7GUITypeP20VIWndGenericRendererP14VIGUIDataStore(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    void *temp_3;

    temp_3 = arg0 + 0x84;
    M2C_FIELD(arg0, M2C_UNK **, 0x94) = &D_011FF498;
    M2C_FIELD(temp_3, f32 *, 0xC) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x84) = 0.0f;
    M2C_FIELD(temp_3, f32 *, 4) = 0.0f;
    M2C_FIELD(temp_3, f32 *, 8) = 0.0f;
    Initialize__11VIGUIObject();
    SetName__11VIGUIObjectPCc(arg0, arg1);
    SetGUIType__11VIGUIObject7GUIType(arg0, arg2);
    SetGUIRenderer__11VIGUIObjectP20VIWndGenericRenderer(arg0, arg3);
    SetGUIDataStore__11VIGUIObjectP14VIGUIDataStore(arg0, arg4);
}
