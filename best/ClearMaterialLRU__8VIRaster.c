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

s32 Clear__t6VIPool1Z19VIRasterMaterialLRU(void *); /* extern */
M2C_UNK __builtin_vec_delete(s32);                  /* extern */

s32 ClearMaterialLRU__8VIRaster(void *arg0) {
    s32 temp_2;

    temp_2 = M2C_FIELD(arg0, s32 *, 0x4C14);
    if (temp_2 != 0) {
        __builtin_vec_delete(temp_2);
        M2C_FIELD(arg0, s32 *, 0x4C14) = 0;
    }
    if (Clear__t6VIPool1Z19VIRasterMaterialLRU(arg0 + 0x4BFC) >= 0) {
        M2C_FIELD(arg0, s32 *, 0x4C18) = 0;
        return 0;
    }
    return -1;
}
