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

M2C_UNK func_0014CF0C(s32, s32, s32);               /* extern */

void func_0015A128(void *arg0) {
    s32 temp_6;

    temp_6 = M2C_FIELD(arg0, s32 *, 0x8D4);
    func_0014CF0C(M2C_FIELD(arg0, s32 *, 0x910), M2C_FIELD(arg0, s32 *, 0x5AC) - ((temp_6 + M2C_FIELD(arg0, s32 *, 0xCF0)) * 2), M2C_FIELD(arg0, s32 *, 0x5B0) - ((temp_6 + M2C_FIELD(arg0, s32 *, 0xCF4)) * 2));
}
