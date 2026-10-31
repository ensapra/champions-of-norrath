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

M2C_UNK func_00190490(M2C_UNK, M2C_UNK, void *);    /* extern */
s32 func_001905F8(M2C_UNK, s32, s64);               /* extern */
extern M2C_UNK DuplicateEx__C22VIParticleDefinitionExP22VIParticleDefinitionEx;
extern M2C_UNK jtbl_004C006C;
extern M2C_UNK shopItemSetAttributes__FiiPcPQ24item11description;

s32 func_00104408(s32 arg0) {
    s32 *var_6;
    s32 *var_7;
    s32 temp_18;
    s32 temp_2;
    s32 temp_2_4;
    s32 temp_2_5;
    s32 temp_3_3;
    s32 temp_3_4;
    s32 var_9;
    s64 temp_7;
    u16 *var_8;
    u16 temp_2_2;
    u16 temp_2_3;
    u16 temp_3_2;
    u16 temp_5;
    u8 temp_3;
    void *temp_17;

    temp_17 = &DuplicateEx__C22VIParticleDefinitionExP22VIParticleDefinitionEx + 0x468 + (arg0 * 0x98);
    temp_7 = (s64) (M2C_FIELD(&shopItemSetAttributes__FiiPcPQ24item11description, s64 *, 0xC80) << 0x20) >> 0x20;
    temp_18 = temp_7 - M2C_FIELD(temp_17, s32 *, 0x10);
    M2C_FIELD(temp_17, s32 *, 0x10) = temp_7;
    M2C_FIELD(temp_17, u16 *, 2) = (u16) M2C_FIELD(temp_17, u16 *, 0);
    M2C_FIELD(temp_17, u16 *, 0) = 0U;
    temp_2 = func_001905F8(0, arg0, temp_7);
    M2C_FIELD(temp_17, s32 *, 0x94) = temp_2;
    switch (temp_2) {                               /* irregular */
    case 0:
        M2C_FIELD(temp_17, u8 *, 0x90) = 0U;
        M2C_FIELD(temp_17, u8 *, 0x70) = 1U;
        break;
    case 6:
    case 2:
        func_00190490(0, 0, temp_17 + 0x70);
        if ((M2C_FIELD(temp_17, u8 *, 0x70) == 0) && ((temp_3 = M2C_FIELD(temp_17, u8 *, 0x71), M2C_FIELD(temp_17, u8 *, 0x90) = temp_3, (temp_3 == 0x41)) || (temp_3 == 0x73))) {
            M2C_FIELD(temp_17, u16 *, 0) = (u16) ~(M2C_FIELD(temp_17, u8 *, 0x73) | (M2C_FIELD(temp_17, u8 *, 0x72) << 8));
        }
        break;
    }
    temp_3_2 = M2C_FIELD(temp_17, u16 *, 2);
    temp_5 = M2C_FIELD(temp_17, u16 *, 0);
    var_8 = &jtbl_004C006C + 0x60F4;
    temp_2_2 = temp_5 & ~temp_3_2;
    M2C_FIELD(temp_17, u16 *, 8) = temp_2_2;
    M2C_FIELD(temp_17, u16 *, 6) = (u16) (temp_3_2 & ~temp_5);
    var_9 = 0;
    M2C_FIELD(temp_17, u16 *, 4) = temp_2_2;
    var_6 = temp_17 + 0x3C;
    var_7 = temp_17 + 0x18;
    do {
        temp_2_3 = *var_8;
        if (!(temp_3_2 & temp_2_3)) {
            *var_7 = 0x1E;
            goto block_19;
        }
        if (!(temp_5 & temp_2_3)) {
            *var_7 = 0x1E;
block_19:
            *var_6 = 0;
        } else {
            temp_2_4 = *var_7;
            temp_3_3 = temp_2_4 - temp_18;
            if ((temp_2_4 == 0) || (temp_3_4 = (temp_3_3 < 0) ? 0 : temp_3_3, *var_7 = temp_3_4, (temp_3_4 == 0))) {
                temp_2_5 = *var_6 - temp_18;
                *var_6 = temp_2_5;
                if (temp_2_5 <= 0) {
                    *var_6 = temp_2_5 + 4;
                    M2C_FIELD(temp_17, u16 *, 8) = (u16) (M2C_FIELD(temp_17, u16 *, 8) | (temp_5 & *var_8));
                }
            }
        }
        var_9 += 1;
        var_8 += 2;
        var_6 += 4;
        var_7 += 4;
    } while (var_9 < 9);
    return ((s64) M2C_FIELD(temp_17, u16 *, 6) << 0x30) | M2C_FIELD(temp_17, u16 *, 8) | (((s64) M2C_FIELD(temp_17, u16 *, 0) << 0x10) | ((s64) M2C_FIELD(temp_17, u16 *, 4) << 0x20));
}
