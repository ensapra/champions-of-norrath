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

M2C_UNK func_0011B6B0(M2C_UNK, s32);                /* extern */
M2C_UNK func_001A3EB8(s32, s8 *);                   /* extern */
s32 func_001A3FE4(void *, s8);                      /* extern */
M2C_UNK func_001A42B8(s8 *, s8 *);                  /* extern */
M2C_UNK func_001A4588(s32, s8 *, s32);              /* extern */
extern M2C_UNK Decrement__12VIWndOptions;
extern M2C_UNK jtbl_004C006C;

s32 func_0011B700(s32 arg0) {
    s32 temp_5;
    s32 var_16;
    s8 **var_17;
    s8 *temp_4_2;
    s8 *temp_4_3;
    s8 *temp_4_4;
    s8 temp_4;
    s8 temp_5_2;

    var_16 = arg0;
    if (var_16 != 0) {
        var_17 = &Decrement__12VIWndOptions + 0x180;
        temp_4 = M2C_FIELD((M2C_FIELD(&Decrement__12VIWndOptions, s32 *, 0x180) + var_16), s8 *, -1);
        if ((temp_4 == 0x6E) || (temp_4 == 0x4E)) {
            temp_5 = var_16;
            var_16 = 0;
            func_0011B6B0(0x3E, temp_5);
        }
    } else {
        var_17 = &Decrement__12VIWndOptions + 0x180;
    }
    temp_4_2 = *var_17;
    temp_5_2 = *(temp_4_2 + var_16);
    switch (temp_5_2) {                             /* irregular */
    case 45:
        func_001A4588(M2C_FIELD(&Decrement__12VIWndOptions, s32 *, 0x17C), temp_4_2, var_16);
        temp_4_3 = *var_17;
        func_001A42B8(temp_4_3, &temp_4_3[var_16]);
        func_0011B6B0(0x3F, var_16 + 1);
block_16:
        **var_17 = 0;
        return 3;
    case 10:
        func_001A4588(M2C_FIELD(&Decrement__12VIWndOptions, s32 *, 0x17C), temp_4_2, var_16);
        goto block_16;
    default:
        if (func_001A3FE4(&jtbl_004C006C + 0x8E6C, temp_5_2) == 0) {
            func_001A3EB8(M2C_FIELD(&Decrement__12VIWndOptions, s32 *, 0x17C), *var_17);
            goto block_16;
        }
        func_001A4588(M2C_FIELD(&Decrement__12VIWndOptions, s32 *, 0x17C), *var_17, var_16);
        temp_4_4 = *var_17;
        func_001A42B8(temp_4_4, &temp_4_4[var_16]);
        return 2;
    }
}
