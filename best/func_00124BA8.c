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
s32 func_0011E378(void *);                          /* extern */
s32 func_001A444C(void *);                          /* extern */
extern M2C_UNK Transform__Q24Base3MD5RQ34Base3MD55StateGt6vector2ZcZt9allocator1Zci;
extern M2C_UNK runStats__Fii;

void func_00124BA8(void) {
    s32 temp_16;
    s32 temp_5;
    void *var_4;

    var_4 = &Transform__Q24Base3MD5RQ34Base3MD55StateGt6vector2ZcZt9allocator1Zci + 0x830;
    if (M2C_FIELD(&runStats__Fii, s32 *, 0xD38) != 0) {
        func_0010A4D0(M2C_FIELD(&runStats__Fii, s32 *, 0xD38), func_0011E378(var_4) == 0, 0x40);
        var_4 = &Transform__Q24Base3MD5RQ34Base3MD55StateGt6vector2ZcZt9allocator1Zci + 0x830;
    }
    temp_16 = func_001A444C(var_4) != 0;
    temp_5 = (func_001A444C(&Transform__Q24Base3MD5RQ34Base3MD55StateGt6vector2ZcZt9allocator1Zci + 0xA88) == 0) ? 0 : temp_16;
    if (M2C_FIELD(&runStats__Fii, s32 *, 0xD40) != 0) {
        func_0010A4D0(M2C_FIELD(&runStats__Fii, s32 *, 0xD40), temp_5, 0x40);
    }
}
