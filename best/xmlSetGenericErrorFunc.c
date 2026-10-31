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

extern M2C_UNK *D_0118EDD0;
extern s32 D_0118EDD4;
extern M2C_UNK xmlGenericErrorDefaultFunc;

void xmlSetGenericErrorFunc(s32 arg0, M2C_UNK *arg1) {
    D_0118EDD4 = arg0;
    if (arg1 != NULL) {
        D_0118EDD0 = arg1;
        return;
    }
    D_0118EDD0 = &xmlGenericErrorDefaultFunc;
}
