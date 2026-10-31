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

M2C_UNK func_0010B378(s32, void *);                 /* extern */
s32 func_001169E8();                                /* extern */
M2C_UNK func_0014D49C(s32, M2C_UNK);                /* extern */
extern M2C_UNK Transform__Q24Base3MD5RQ34Base3MD55StateGt6vector2ZcZt9allocator1Zci;
extern M2C_UNK helpMessageFrame__Fv;
extern M2C_UNK jtbl_004C006C;
extern M2C_UNK shopItemSetAttributes__FiiPcPQ24item11description;

void func_00124900(s32 arg0, s64 arg1) {
    if (func_001169E8() == 2) {
        func_0010B378(*(&Transform__Q24Base3MD5RQ34Base3MD55StateGt6vector2ZcZt9allocator1Zci + 0x820 + (((s64) (arg1 << 0x20) >> 0x20) * 4)), &jtbl_004C006C + 0xA034);
        if ((M2C_FIELD(&shopItemSetAttributes__FiiPcPQ24item11description, s32 *, 0x16E8) != 0) && (M2C_FIELD(&helpMessageFrame__Fv, s32 *, 0x1A8) == 0)) {
            func_0014D49C(arg0, 0);
            M2C_FIELD(&shopItemSetAttributes__FiiPcPQ24item11description, s32 *, 0x16E8) = 0;
        }
        M2C_FIELD(&helpMessageFrame__Fv, s32 *, 0x1A8) = 0;
    }
}
