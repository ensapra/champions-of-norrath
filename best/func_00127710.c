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

M2C_UNK func_00114948(M2C_UNK, M2C_UNK, M2C_UNK, s32, M2C_UNK *, s32); /* extern */
s32 func_0011BA18(M2C_UNK, void *);                 /* extern */
M2C_UNK func_001274F8(void *, void *);              /* extern */
extern M2C_UNK II__Q24Base3MD5iiiiiii;
extern M2C_UNK func_00127440;
extern M2C_UNK hudShowMsg__FPUsN20iii;
extern M2C_UNK shopItemSetAttributes__FiiPcPQ24item11description;

void func_00127710(void) {
    void *temp_5;

    temp_5 = &hudShowMsg__FPUsN20iii + 0xAC;
    if (M2C_FIELD(&II__Q24Base3MD5iiiiiii, s32 *, 0x30) < M2C_FIELD(&hudShowMsg__FPUsN20iii, s32 *, 0xAC)) {
        func_001274F8(&II__Q24Base3MD5iiiiiii + 0x30, temp_5);
        return;
    }
    func_00114948(0, 0x1F4, 0xFA, func_0011BA18(0x32, temp_5), &func_00127440, M2C_FIELD(&shopItemSetAttributes__FiiPcPQ24item11description, s32 *, 0x16EC));
}
