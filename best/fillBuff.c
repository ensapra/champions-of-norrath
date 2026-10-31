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

s32 sceMpegDemuxPss(s32, M2C_UNK *, s32);           /* extern */
extern s32 (*D_011E99E8)(M2C_UNK *, M2C_UNK);
extern M2C_UNK D_011E9A00;
extern s32 D_011EDA00;

void fillBuff(s32 arg0, s32 arg1) {
    M2C_UNK *var_5;
    s32 (*temp_2)(M2C_UNK *, M2C_UNK);
    s32 temp_2_2;

    if (D_011EDA00 != 0) {
        var_5 = &D_011EDA00 - D_011EDA00;
        goto block_9;
    }
    temp_2 = D_011E99E8;
loop_3:
    temp_2_2 = temp_2(&D_011E9A00, 0x4000);
    var_5 = &D_011E9A00;
    D_011EDA00 = temp_2_2;
    if (temp_2_2 == 0) {
        if (arg1 != 0) {
            goto loop_3;
        }
        return;
    }
block_9:
    D_011EDA00 -= sceMpegDemuxPss(arg0, var_5, D_011EDA00);
}
