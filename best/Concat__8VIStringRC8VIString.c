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

s32 Allocate__8VIString(s32);                       /* extern */
M2C_UNK strcat(s32, s32);                           /* extern */

s32 Concat__8VIStringRC8VIString(void *arg0, void *arg1) {
    s32 temp_3;
    s32 temp_5;

    temp_3 = M2C_FIELD(arg0, s32 *, 0) + M2C_FIELD(arg1, s32 *, 0) + 1;
    temp_5 = M2C_FIELD(arg0, s32 *, 4) < temp_3;
    if (temp_5 == 0) {
        goto block_7;
    }
    M2C_FIELD(arg0, s32 *, 4) = temp_3;
    if (Allocate__8VIString(temp_5) >= 0) {
block_7:
        if (M2C_FIELD(arg1, s32 *, 8) != 0) {
            strcat(M2C_FIELD(arg0, s32 *, 8) + M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg1, s32 *, 8));
            M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) + M2C_FIELD(arg1, s32 *, 0));
        }
        return 0;
    }
    return -1;
}
