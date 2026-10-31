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

M2C_UNK func_00104F30(s32);                         /* extern */
M2C_UNK func_00106E30(M2C_UNK, s32);                /* extern */
M2C_UNK func_001389A0(s32);                         /* extern */
M2C_UNK func_0014B6F4(s32);                         /* extern */
s32 func_001523D0(s32);                             /* extern */
M2C_UNK func_00152520(s32);                         /* extern */
extern M2C_UNK runStats__Fii;
extern M2C_UNK shopItemSetAttributes__FiiPcPQ24item11description;
extern M2C_UNK xmlListWalk;

void func_0010D870(void) {
    s32 *temp_16;
    s32 *temp_16_2;
    s32 temp_4;
    s32 temp_4_2;
    s32 temp_4_3;
    s32 temp_4_4;
    s32 var_17;
    s32 var_18;

    var_18 = 0;
    var_17 = 0 * 4;
    do {
        temp_16 = var_17 + (&xmlListWalk + 0x68);
        if (*temp_16 != 0) {
            temp_4 = *temp_16;
            if (func_001523D0(M2C_FIELD(&runStats__Fii, s32 *, 0xD74)) == temp_4) {
                func_00152520(temp_4);
            }
            func_0014B6F4(*temp_16);
            func_00104F30(*temp_16);
            func_00106E30(0, *temp_16);
            func_00106E30(1, *temp_16);
            temp_4_2 = *temp_16;
            if (M2C_FIELD(&shopItemSetAttributes__FiiPcPQ24item11description, s32 *, 0x16EC) == temp_4_2) {
                M2C_FIELD(&shopItemSetAttributes__FiiPcPQ24item11description, s32 *, 0x16EC) = 0;
            }
            func_001389A0(temp_4_2);
            *temp_16 = 0;
        }
        temp_16_2 = var_17 + (&xmlListWalk + 0x60);
        if (*temp_16_2 == 0) {
            var_18 += 1;
        } else {
            temp_4_3 = *temp_16_2;
            if (func_001523D0(M2C_FIELD(&runStats__Fii, s32 *, 0xD74)) == temp_4_3) {
                func_00152520(temp_4_3);
            }
            func_0014B6F4(*temp_16_2);
            func_00104F30(*temp_16_2);
            func_00106E30(0, *temp_16_2);
            func_00106E30(1, *temp_16_2);
            temp_4_4 = *temp_16_2;
            if (M2C_FIELD(&shopItemSetAttributes__FiiPcPQ24item11description, s32 *, 0x16EC) == temp_4_4) {
                M2C_FIELD(&shopItemSetAttributes__FiiPcPQ24item11description, s32 *, 0x16EC) = 0;
            }
            var_18 += 1;
            func_001389A0(temp_4_4);
            *temp_16_2 = 0;
        }
        var_17 = var_18 * 4;
    } while (var_18 < 2);
}
