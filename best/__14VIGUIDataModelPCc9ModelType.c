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

M2C_UNK SetModelType__14VIGUIDataModel9ModelType(void *, s32); /* extern */
M2C_UNK SetName__14VIGUIDataModelPCc();             /* extern */
extern M2C_UNK D_011FF280;

void __14VIGUIDataModelPCc9ModelType(void *arg0, s32 arg2) {
    M2C_FIELD(arg0, M2C_UNK **, 0x24) = &D_011FF280;
    SetName__14VIGUIDataModelPCc();
    SetModelType__14VIGUIDataModel9ModelType(arg0, arg2);
}
