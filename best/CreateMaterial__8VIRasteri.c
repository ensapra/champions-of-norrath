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

s32 Add__t6VIList1Z10VIMaterial(s32);               /* extern */

s32 CreateMaterial__8VIRasteri(void *arg0, s32 arg1) {
    s32 temp_2;

    temp_2 = Add__t6VIList1Z10VIMaterial(arg0 + 0x4BD8);
    if (temp_2 < 0) {
        return -1;
    }
    if (arg1 != 0) {
        M2C_FIELD(temp_2, s32 *, 4) = (s32) (M2C_FIELD(temp_2, s32 *, 4) + 1);
    }
    M2C_FIELD(temp_2, s64 *, 0x18) = (s64) M2C_FIELD(arg0, s64 *, 0x45D0);
    return temp_2;
}
