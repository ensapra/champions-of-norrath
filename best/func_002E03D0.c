/* machine draft (m2c) for ee-gcc-2.9-991111 -O2 -G0, tried by autopilot */
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

s32 sceSifDmaStat_2(s32);                           /* extern */
s32 sceSifSetDma_2(M2C_UNK *, M2C_UNK, s32);        /* extern */
extern M2C_UNK D_008E59C0;

s32 func_002E03D0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_2;

    if ((arg3 == 0) || (M2C_FIELD(&D_008E59C0, s32 *, 0) = arg0, M2C_FIELD(&D_008E59C0, s32 *, 4) = arg1, M2C_FIELD(&D_008E59C0, s32 *, 8) = arg2, M2C_FIELD(&D_008E59C0, s32 *, 0xC) = 0, temp_2 = sceSifSetDma_2(&D_008E59C0, 1, arg1), (temp_2 == 0))) {
        return -1;
    }
    if (arg3 == 1) {
        do {

        } while (sceSifDmaStat_2(temp_2) >= 0);
    }
    return 0;
}
