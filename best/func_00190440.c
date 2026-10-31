/* machine draft (m2c) for ee-gcc-2.9-991111 -O2 -G0, tried by autopilot */
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

void *func_001903E0(s32, s32);                      /* extern */
extern M2C_UNK xmlParseTryOrFinish;

s32 func_00190440(s32 arg0, s32 arg1) {
    s32 var_2;

    var_2 = 0;
    if (M2C_FIELD((&xmlParseTryOrFinish + 0xA38 + ((arg1 * 0x1C) + (arg0 * 0x70))), s32 *, 0x10) != 0) {
        var_2 = M2C_FIELD(func_001903E0(arg0, arg0), s32 *, 0x58);
    }
    return var_2;
}
