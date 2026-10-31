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

s32 CalcDataSize__13VIColorBufferR12VIPrimBuffer(void *arg0, void *arg1) {
    s32 *var_9;
    s32 temp_2;
    s32 temp_2_2;
    s32 temp_2_3;
    s32 temp_3;
    s32 temp_3_2;
    s32 temp_3_3;
    s32 temp_3_4;
    s32 temp_3_5;
    s32 temp_5;
    s32 temp_8;
    s32 var_11;
    s32 var_2;
    s32 var_2_2;
    s32 var_2_3;
    s32 var_2_4;
    s32 var_5;

    var_2 = -1;
    if (M2C_FIELD(arg1, s32 *, 8) == 2) {
        M2C_FIELD(arg0, s32 *, 0x30) = 0;
        M2C_FIELD(arg0, s32 *, 0x24) = 0;
        temp_2 = M2C_FIELD(arg1, s32 *, 0x40) * 8;
        temp_3 = temp_2 & 0xF;
        M2C_FIELD(arg0, s32 *, 0x30) = temp_2;
        if (temp_3 != 0) {
            var_5 = (temp_2 - temp_3) + 0x10;
        } else {
            var_5 = temp_2;
        }
        M2C_FIELD(arg0, s32 *, 0x30) = var_5;
        M2C_FIELD(arg0, s32 *, 0x28) = var_5;
        temp_2_2 = (M2C_FIELD(arg1, s32 *, 0x48) * 2) + M2C_FIELD(arg1, s32 *, 0x40);
        M2C_FIELD(arg0, s32 *, 0x18) = temp_2_2;
        var_2_2 = var_5 + (temp_2_2 * 0x10);
        temp_3_2 = var_2_2 & 0xF;
        M2C_FIELD(arg0, s32 *, 0x30) = var_2_2;
        if (temp_3_2 != 0) {
            var_2_2 = (var_2_2 - temp_3_2) + 0x10;
        }
        M2C_FIELD(arg0, s32 *, 0x30) = var_2_2;
        M2C_FIELD(arg0, s32 *, 0x20) = 0;
        var_11 = 0;
        if (M2C_FIELD(arg1, s32 *, 0x48) > 0) {
            var_9 = M2C_FIELD(arg1, s32 **, 0x5C);
            do {
                temp_2_3 = *var_9;
                var_9 += 0x1C;
                temp_3_3 = temp_2_3 + 4;
                temp_8 = temp_2_3 + 7;
                temp_5 = temp_3_3 < 0;
                if (!(temp_3_3 & 3)) {
                    var_2_3 = M2C_FIELD(arg0, s32 *, 0x20) + ((s32) ((temp_5 != 0) ? temp_8 : temp_3_3) >> 2);
                } else {
                    var_2_3 = M2C_FIELD(arg0, s32 *, 0x20) + ((s32) ((temp_5 != 0) ? temp_8 : temp_3_3) >> 2) + 1;
                }
                M2C_FIELD(arg0, s32 *, 0x20) = var_2_3;
                var_11 += 1;
            } while (var_11 < M2C_FIELD(arg1, s32 *, 0x48));
        }
        temp_3_4 = M2C_FIELD(arg0, s32 *, 0x30);
        var_2_4 = temp_3_4 + (M2C_FIELD(arg0, s32 *, 0x20) * 0x10);
        M2C_FIELD(arg0, s32 *, 0x2C) = temp_3_4;
        temp_3_5 = var_2_4 & 0xF;
        M2C_FIELD(arg0, s32 *, 0x30) = var_2_4;
        if (temp_3_5 != 0) {
            var_2_4 = (var_2_4 - temp_3_5) + 0x10;
        }
        M2C_FIELD(arg0, s32 *, 0x30) = var_2_4;
        var_2 = 0;
    }
    return var_2;
}
