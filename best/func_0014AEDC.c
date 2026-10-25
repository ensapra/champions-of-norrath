/* machine draft (m2c) for ee-gcc-2.96 -Os -G8, tried by autopilot */
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

M2C_UNK func_00170584(void *, M2C_UNK, M2C_UNK);    /* extern */

void func_0014AEDC(void *arg0) {
    s16 temp_2;
    s16 temp_2_3;
    s16 temp_3;
    s16 temp_3_2;
    s32 temp_22;
    s32 temp_23;
    s32 temp_2_10;
    s32 temp_2_2;
    s32 temp_2_4;
    s32 temp_2_6;
    s32 temp_2_8;
    s32 var_19;
    s32 var_20;
    s32 var_21;
    u8 temp_2_11;
    u8 temp_2_5;
    u8 temp_2_7;
    u8 temp_2_9;
    u8 temp_3_3;
    u8 temp_3_4;
    u8 temp_3_5;
    void *var_16;
    void *var_17;

    var_20 = 0;
    var_21 = 0;
    temp_23 = M2C_FIELD(arg0, s32 *, 0x4DC) + M2C_FIELD(arg0, s32 *, 0x5A0);
    temp_22 = M2C_FIELD(arg0, s32 *, 0x4E0) + M2C_FIELD(arg0, s32 *, 0x4D4);
    var_17 = M2C_FIELD((((M2C_FIELD(arg0, s32 *, 0x4EC) ^ 1) * 4) + arg0), s32 *, 0x910) + 0x70;
    var_16 = M2C_FIELD(arg0, void **, 0x91C);
    if (M2C_FIELD(arg0, s32 *, 0x928) > 0) {
        do {
            var_19 = 0;
            func_00170584(var_17, 1, 0);
            func_00170584(var_17 + 0x10, 5, 0);
            temp_3 = (s16) M2C_FIELD(var_16, u16 *, 4);
            temp_2 = M2C_FIELD(var_16, s16 *, 0);
            if (temp_3 != temp_2) {
                temp_2_2 = (s32) (temp_2 - temp_3) >> 3;
                var_19 = 1;
                if (temp_2_2 == 0) {
                    M2C_FIELD(var_16, u16 *, 4) = (u16) M2C_FIELD(var_16, s16 *, 0);
                } else {
                    M2C_FIELD(var_16, u16 *, 4) = (u16) (M2C_FIELD(var_16, u16 *, 4) + temp_2_2);
                }
            }
            temp_3_2 = M2C_FIELD(var_16, s16 *, 6);
            temp_2_3 = M2C_FIELD(var_16, s16 *, 2);
            if (temp_3_2 != temp_2_3) {
                temp_2_4 = (s32) (temp_2_3 - temp_3_2) >> 3;
                var_19 = 1;
                if (temp_2_4 == 0) {
                    M2C_FIELD(var_16, s16 *, 6) = (s16) (u16) M2C_FIELD(var_16, s16 *, 2);
                } else {
                    M2C_FIELD(var_16, s16 *, 6) = (s16) ((u16) M2C_FIELD(var_16, s16 *, 6) + temp_2_4);
                }
            }
            M2C_FIELD(var_17, s16 *, 0x10) = (s16) (temp_23 + (s16) M2C_FIELD(var_16, u16 *, 4));
            M2C_FIELD(var_17, s16 *, 0x12) = (s16) (temp_22 + M2C_FIELD(var_16, s16 *, 6));
            temp_3_3 = M2C_FIELD(var_16, u8 *, 0xC);
            temp_2_5 = M2C_FIELD(var_16, u8 *, 8);
            if (temp_3_3 != temp_2_5) {
                temp_2_6 = (s32) (temp_2_5 - temp_3_3) >> 3;
                var_19 = 1;
                if (temp_2_6 == 0) {
                    M2C_FIELD(var_16, u8 *, 0xC) = temp_2_5;
                } else {
                    M2C_FIELD(var_16, u8 *, 0xC) = (u8) (temp_3_3 + temp_2_6);
                }
            }
            temp_3_4 = M2C_FIELD(var_16, u8 *, 0xD);
            temp_2_7 = M2C_FIELD(var_16, u8 *, 9);
            if (temp_3_4 != temp_2_7) {
                temp_2_8 = (s32) (temp_2_7 - temp_3_4) >> 3;
                var_19 = 1;
                if (temp_2_8 == 0) {
                    M2C_FIELD(var_16, u8 *, 0xD) = temp_2_7;
                } else {
                    M2C_FIELD(var_16, u8 *, 0xD) = (u8) (temp_3_4 + temp_2_8);
                }
            }
            temp_3_5 = M2C_FIELD(var_16, u8 *, 0xE);
            temp_2_9 = M2C_FIELD(var_16, u8 *, 0xA);
            if (temp_3_5 != temp_2_9) {
                temp_2_10 = (s32) (temp_2_9 - temp_3_5) >> 3;
                var_19 = 1;
                if (temp_2_10 == 0) {
                    M2C_FIELD(var_16, u8 *, 0xE) = temp_2_9;
                } else {
                    M2C_FIELD(var_16, u8 *, 0xE) = (u8) (temp_3_5 + temp_2_10);
                }
            }
            var_20 = (var_19 != 0) ? 1 : var_20;
            var_21 += 1;
            M2C_FIELD(var_17, u8 *, 0) = (u8) M2C_FIELD(var_16, u8 *, 0xC);
            M2C_FIELD(var_17, u8 *, 1) = (u8) M2C_FIELD(var_16, u8 *, 0xD);
            temp_2_11 = M2C_FIELD(var_16, u8 *, 0xE);
            var_16 += 0x10;
            M2C_FIELD(var_17, u8 *, 2) = temp_2_11;
            var_17 += 0x20;
        } while (var_21 < M2C_FIELD(arg0, s32 *, 0x928));
    }
    if (var_20 != 0) {
        M2C_FIELD(arg0, s32 *, 0x924) = 2;
    }
}
