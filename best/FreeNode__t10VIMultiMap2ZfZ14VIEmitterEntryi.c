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

M2C_UNK ___10VIMatrix44(s32, M2C_UNK);              /* extern */

s32 FreeNode__t10VIMultiMap2ZfZ14VIEmitterEntryi(void *arg0, s32 arg1) {
    s32 temp_16;

    temp_16 = arg1 * 0x70;
    ___10VIMatrix44(M2C_FIELD(arg0, s32 *, 8) + temp_16 + 0x30, 2);
    M2C_FIELD((temp_16 + M2C_FIELD(arg0, s32 *, 8)), s32 *, 4) = (s32) M2C_FIELD(arg0, s32 *, 0x10);
    M2C_FIELD((temp_16 + M2C_FIELD(arg0, s32 *, 8)), s32 *, 8) = -2;
    M2C_FIELD(arg0, s32 *, 0x10) = arg1;
    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) - 1);
    return 0;
}
