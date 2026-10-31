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

M2C_UNK func_001050A8(M2C_UNK *, s32, M2C_UNK, M2C_UNK, s32, M2C_UNK, s32, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_00105190(M2C_UNK *);                   /* extern */
extern M2C_UNK func_0010D238;
extern M2C_UNK func_0010D378;
extern M2C_UNK hudRunNoControllers__Fi;
extern M2C_UNK runStats__Fii;
extern s32 xmlListReverseWalk;
extern M2C_UNK xmlListWalk;

void func_0010D478(void *arg1) {
    M2C_UNK sp10;
    s32 sp90;
    M2C_UNK *spBC;
    M2C_UNK *spC0;
    s32 *var_4;
    s32 temp_12;
    s32 temp_2;
    s32 var_2;
    s32 var_3;
    s32 var_6;

    var_6 = 0;
    if ((u32) (M2C_FIELD(&xmlListWalk, s32 *, 0x48) - 2) >= 2U) {
        var_3 = M2C_FIELD(&runStats__Fii, s32 *, 0xD88) + 1;
        var_2 = 0 < 0x241;
        if (var_3 > 0) {
            var_4 = &xmlListReverseWalk;
            do {
                temp_2 = *var_4;
                var_4 += 4;
                var_3 -= 1;
                var_6 += temp_2;
            } while (var_3 != 0);
            var_2 = var_6 < 0x241;
        }
        if ((var_2 == 0) && (M2C_FIELD(arg1, s32 *, 0x1C) == (M2C_FIELD(&runStats__Fii, s32 *, 0xD8C) + 1))) {
            temp_12 = var_6 - 0x230;
            M2C_FIELD(&runStats__Fii, s32 *, 0xD8C) = temp_12;
            func_001050A8(&sp10, M2C_FIELD(&xmlListWalk, s32 *, 0x60), 1, 0x5A, temp_12, 0xA, 0x260 - var_6, ((M2C_FIELD(&hudRunNoControllers__Fi, s32 *, 0x158) ^ 1) != 0) ? 0x150 : 0x16E, 0, 0);
            spC0 = &func_0010D378;
            spBC = &func_0010D238;
            sp90 = 0;
            func_00105190(&sp10);
            M2C_FIELD(&xmlListReverseWalk, s32 *, 8) = 2;
        }
    }
}
