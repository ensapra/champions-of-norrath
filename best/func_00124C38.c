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

M2C_UNK func_00114948(M2C_UNK, M2C_UNK, M2C_UNK, s32, M2C_UNK, s32); /* extern */
s32 func_0011BA18(M2C_UNK, void *, s32, s32);       /* extern */
M2C_UNK func_00138990(s32, void *, s32, s32);       /* extern */
extern M2C_UNK Transform__Q24Base3MD5RQ34Base3MD55StateGt6vector2ZcZt9allocator1Zci;
extern M2C_UNK helpMessageFrame__Fv;
extern M2C_UNK hudShowMsg__FPUsN20iii;
extern M2C_UNK shopItemSetAttributes__FiiPcPQ24item11description;

s32 func_00124C38(void *arg0) {
    s32 temp_7;
    void *temp_5;

    if (M2C_FIELD(&Transform__Q24Base3MD5RQ34Base3MD55StateGt6vector2ZcZt9allocator1Zci, s32 *, 0x818) != 0) {
        temp_7 = M2C_FIELD(arg0, s32 *, 8);
        M2C_FIELD(&helpMessageFrame__Fv, s32 *, 0x1B8) = (s32) (M2C_FIELD(&helpMessageFrame__Fv, s32 *, 0x1B8) - 1);
        if (M2C_FIELD(&helpMessageFrame__Fv, s32 *, 0x1B8) <= 0) {
            temp_5 = &shopItemSetAttributes__FiiPcPQ24item11description + 0x16EC;
            M2C_FIELD(&shopItemSetAttributes__FiiPcPQ24item11description, s32 *, 0x16EC) = (s32) M2C_FIELD(&Transform__Q24Base3MD5RQ34Base3MD55StateGt6vector2ZcZt9allocator1Zci, s32 *, 0x818);
            if ((temp_7 == 0) && (M2C_FIELD(&hudShowMsg__FPUsN20iii, s32 *, 0x7C) == 2)) {
                func_00114948(0, 0x1F4, 0xFA, func_0011BA18(0x70, temp_5, M2C_FIELD(&Transform__Q24Base3MD5RQ34Base3MD55StateGt6vector2ZcZt9allocator1Zci, s32 *, 0x818), temp_7), 0, M2C_FIELD(&shopItemSetAttributes__FiiPcPQ24item11description, s32 *, 0x16EC));
                return 1;
            }
            func_00138990(M2C_FIELD(&shopItemSetAttributes__FiiPcPQ24item11description, s32 *, 0x16EC), temp_5, M2C_FIELD(&Transform__Q24Base3MD5RQ34Base3MD55StateGt6vector2ZcZt9allocator1Zci, s32 *, 0x818), temp_7);
            return 1;
        }
        /* Duplicate return node #8. Try simplifying control flow for better match */
        return 0;
    }
    return 0;
}
