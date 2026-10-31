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

s32 func_001107E8(s32, void *, M2C_UNK, void *, void *); /* extern */
s32 func_0011BA18(M2C_UNK);                         /* extern */
M2C_UNK func_0011CEF0(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_0011E420(s32, s32, void *);            /* extern */
extern M2C_UNK Transform__Q24Base3MD5RQ34Base3MD55StateGt6vector2ZcZt9allocator1Zci;
extern M2C_UNK jtbl_004C006C;

void func_001238C0(void *arg2) {
    void *var_6;

    var_6 = arg2;
    if ((M2C_FIELD(&Transform__Q24Base3MD5RQ34Base3MD55StateGt6vector2ZcZt9allocator1Zci, s32 *, 0x7F4) >= 0) && (M2C_FIELD(&Transform__Q24Base3MD5RQ34Base3MD55StateGt6vector2ZcZt9allocator1Zci, s32 *, 0x7F4) < 7)) {
        var_6 = &Transform__Q24Base3MD5RQ34Base3MD55StateGt6vector2ZcZt9allocator1Zci + 0x7F0;
        M2C_FIELD(&Transform__Q24Base3MD5RQ34Base3MD55StateGt6vector2ZcZt9allocator1Zci, s32 *, 0x560) = func_001107E8(func_0011BA18(0xF9), &Transform__Q24Base3MD5RQ34Base3MD55StateGt6vector2ZcZt9allocator1Zci + 0x564, 3, &Transform__Q24Base3MD5RQ34Base3MD55StateGt6vector2ZcZt9allocator1Zci + 0x58C, &Transform__Q24Base3MD5RQ34Base3MD55StateGt6vector2ZcZt9allocator1Zci + 0x590);
        M2C_FIELD(&Transform__Q24Base3MD5RQ34Base3MD55StateGt6vector2ZcZt9allocator1Zci, u8 *, 0x598) = (u8) M2C_FIELD(&jtbl_004C006C, u8 *, 0x9C34);
        M2C_FIELD(&Transform__Q24Base3MD5RQ34Base3MD55StateGt6vector2ZcZt9allocator1Zci, s32 *, 0x7F0) = 0;
    }
    func_0011E420(M2C_FIELD(&Transform__Q24Base3MD5RQ34Base3MD55StateGt6vector2ZcZt9allocator1Zci, s32 *, 0x58C), M2C_FIELD(&Transform__Q24Base3MD5RQ34Base3MD55StateGt6vector2ZcZt9allocator1Zci, s32 *, 0x590), var_6);
    func_0011CEF0(M2C_FIELD(&Transform__Q24Base3MD5RQ34Base3MD55StateGt6vector2ZcZt9allocator1Zci, s32 *, 0x560), M2C_FIELD(&Transform__Q24Base3MD5RQ34Base3MD55StateGt6vector2ZcZt9allocator1Zci, s32 *, 0x7F4), 0xC);
}
