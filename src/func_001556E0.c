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

s32 func_00154654(s32);                             /* extern */

s32 func_001556E0(void *arg0, s32 arg1) {
    if ((arg1 < 0) || (arg1 >= M2C_FIELD(arg0, s32 *, 0x914))) {
        return 0;
    }
    return func_00154654(M2C_FIELD(((arg1 * 4) + arg0), s32 *, 0x99C));
}
