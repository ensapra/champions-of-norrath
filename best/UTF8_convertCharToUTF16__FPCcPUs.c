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

extern M2C_UNK D_0118ED60;

s8 UTF8_convertCharToUTF16__FPCcPUs(void *arg0, s16 *arg1) {
    s8 var_6;
    u8 temp_2;

    temp_2 = M2C_FIELD(arg0, u8 *, 0);
    var_6 = 1;
    if (temp_2 & 0x80) {
        var_6 = *(&D_0118ED60 + ((u32) (temp_2 & 0x3C) >> 2));
    }
    switch (var_6) {                                /* irregular */
    case 1:
        *arg1 = (s16) (s8) M2C_FIELD(arg0, u8 *, 0);
        break;
    case 2:
        *arg1 = (M2C_FIELD(arg0, u8 *, 1) & 0x3F) + ((M2C_FIELD(arg0, u8 *, 0) & 0x1F) << 6);
        break;
    case 3:
        *arg1 = (M2C_FIELD(arg0, u8 *, 2) & 0x3F) + (((M2C_FIELD(arg0, u8 *, 0) & 0xF) << 0xC) + ((M2C_FIELD(arg0, u8 *, 1) & 0x3F) << 6));
        break;
    }
    return var_6;
}
