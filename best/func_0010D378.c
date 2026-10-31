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

M2C_UNK func_001050A8(M2C_UNK *, s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_00105190(M2C_UNK *);                   /* extern */
extern M2C_UNK func_0010D238;
extern M2C_UNK func_0010D330;
extern M2C_UNK hudRunNoControllers__Fi;
extern M2C_UNK runStats__Fii;
extern s32 xmlListReverseWalk;
extern M2C_UNK xmlListWalk;

void func_0010D378(void *arg1) {
    M2C_UNK sp10;
    M2C_UNK *spBC;
    M2C_UNK *spC0;
    s32 *var_2;
    s32 *var_4;
    s32 temp_2;
    s32 var_10;
    s32 var_3;

    var_10 = 0;
    if ((u32) (M2C_FIELD(&xmlListWalk, s32 *, 0x48) - 2) >= 2U) {
        var_3 = M2C_FIELD(&runStats__Fii, s32 *, 0xD88) + 1;
        var_2 = &runStats__Fii + 0xD8C;
        if (var_3 > 0) {
            var_4 = &xmlListReverseWalk;
            do {
                temp_2 = *var_4;
                var_4 += 4;
                var_3 -= 1;
                var_10 += temp_2;
            } while (var_3 != 0);
            var_2 = &runStats__Fii + 0xD8C;
        }
        if (M2C_FIELD(arg1, s32 *, 0x1C) == (*var_2 + 1)) {
            *var_2 = 0x14;
            func_001050A8(&sp10, M2C_FIELD(&xmlListWalk, s32 *, 0x60), 1, 0xF0, 0x14, 0xA, -var_10, ((M2C_FIELD(&hudRunNoControllers__Fi, s32 *, 0x158) ^ 1) != 0) ? 0x150 : 0x16E, 0, 0);
            spC0 = &func_0010D330;
            spBC = &func_0010D238;
            func_00105190(&sp10);
            M2C_FIELD(&xmlListReverseWalk, s32 *, 8) = 3;
        }
    }
}
