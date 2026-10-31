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

extern M2C_UNK Transform__Q24Base3MD5RQ34Base3MD55StateGt6vector2ZcZt9allocator1Zci;
extern M2C_UNK drawNewestQuickSpellMenu__Fiiicl;

void func_00126590(void) {
    void *temp_4;
    void *var_2;
    void *var_3;

    var_2 = &drawNewestQuickSpellMenu__Fiiicl + 0x488;
    var_3 = &Transform__Q24Base3MD5RQ34Base3MD55StateGt6vector2ZcZt9allocator1Zci + 0xD38;
    temp_4 = var_2 + 0x1320;
    do {
        M2C_FIELD(var_3, s64 *, 0) = (s64) M2C_FIELD(var_2, s64 *, 0);
        M2C_FIELD(var_3, s64 *, 8) = (s64) M2C_FIELD(var_2, s64 *, 8);
        M2C_FIELD(var_3, s64 *, 0x10) = (s64) M2C_FIELD(var_2, s64 *, 0x10);
        M2C_FIELD(var_3, s64 *, 0x18) = (s64) M2C_FIELD(var_2, s64 *, 0x18);
        var_2 += 0x20;
        var_3 += 0x20;
    } while (var_2 != temp_4);
}
