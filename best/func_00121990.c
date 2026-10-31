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

M2C_UNK func_0010A4D0(s32, s32, M2C_UNK);           /* extern */
s32 func_0011E378();                                /* extern */
s32 func_001A1640(s32);                             /* extern */
extern M2C_UNK Final__Q24Base3MD5;
extern M2C_UNK runStats__Fii;

void func_00121990(void) {
    s32 temp_4;
    s32 var_16;
    s32 var_17;
    s32 var_19;
    s32 var_2;

    var_19 = 0;
    if (M2C_FIELD(&runStats__Fii, s32 *, 0xD38) != 0) {
        func_0010A4D0(M2C_FIELD(&runStats__Fii, s32 *, 0xD38), func_0011E378() == 0, 0x40);
    }
    var_17 = 0;
    var_16 = 0;
    var_2 = 0 < 4;
loop_3:
    var_17 += 1;
    if (var_2 != 0) {
        temp_4 = *M2C_FIELD(&Final__Q24Base3MD5, s32 **, 0x320) + var_16;
        var_16 += 0x258;
        var_2 = var_17 < 4;
        if (func_001A1640(temp_4) != 0) {
            var_19 = 1;
        } else {
            goto loop_3;
        }
    }
    if (M2C_FIELD(&runStats__Fii, s32 *, 0xD40) != 0) {
        func_0010A4D0(M2C_FIELD(&runStats__Fii, s32 *, 0xD40), var_19, 0x40);
    }
}
