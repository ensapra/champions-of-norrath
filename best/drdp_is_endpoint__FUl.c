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

s32 drdp_is_endpoint__FUl(u64 arg0) {
    s32 var_3;
    s32 var_7;

    var_7 = 0;
    var_3 = 0;
    if ((arg0 != -1U) && ((arg0 >> 0x38) != 0)) {
        var_3 = !(arg0 & (0xFFFF << 0x10)) ? 0 : 1;
    }
    if ((var_3 != 0) || (((s64) (((u32) ((0xFFFF << 0x10) | 0xF7FF) >= (u32) (arg0 - 0x800)) << 0x20) >> 0x20) != 0)) {
        var_7 = 1;
    }
    return var_7;
}
