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

s32 func_00110770(s32, M2C_UNK, void *, M2C_UNK);   /* extern */
s32 func_0011BA18(M2C_UNK);                         /* extern */
M2C_UNK func_0011CEF0(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_0011E420(s32, M2C_UNK);                /* extern */
extern M2C_UNK Transform__Q24Base3MD5RQ34Base3MD55StateGt6vector2ZcZt9allocator1Zci;
extern M2C_UNK Update__Q24Base3MD5Gt6vector2ZcZt9allocator1Zci;

void func_00126AD0(void) {
    if ((M2C_FIELD(&Update__Q24Base3MD5Gt6vector2ZcZt9allocator1Zci, s32 *, 0x9C) >= 0) && (M2C_FIELD(&Update__Q24Base3MD5Gt6vector2ZcZt9allocator1Zci, s32 *, 0x9C) < 7)) {
        M2C_FIELD(&Transform__Q24Base3MD5RQ34Base3MD55StateGt6vector2ZcZt9allocator1Zci, s32 *, 0xCF8) = func_00110770(func_0011BA18(0x12A), 1, &Transform__Q24Base3MD5RQ34Base3MD55StateGt6vector2ZcZt9allocator1Zci + 0xD0C, 0);
    }
    func_0011E420(M2C_FIELD(&Transform__Q24Base3MD5RQ34Base3MD55StateGt6vector2ZcZt9allocator1Zci, s32 *, 0xD0C), 0);
    func_0011CEF0(M2C_FIELD(&Transform__Q24Base3MD5RQ34Base3MD55StateGt6vector2ZcZt9allocator1Zci, s32 *, 0xCF8), M2C_FIELD(&Update__Q24Base3MD5Gt6vector2ZcZt9allocator1Zci, s32 *, 0x9C), 0x13);
}
