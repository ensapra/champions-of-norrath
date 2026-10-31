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

s32 SetLayerModulate__10VIMaterialii(void *arg0, s32 arg1, s32 arg2) {
    void *temp_5;

    temp_5 = arg0 + ((arg1 * 0x90) + 0x30);
    if (arg2 != 0) {
        M2C_FIELD(temp_5, s32 *, 4) = (s32) (M2C_FIELD(temp_5, s32 *, 4) | 1);
    } else {
        M2C_FIELD(temp_5, s32 *, 4) = (s32) (M2C_FIELD(temp_5, s32 *, 4) & ~1);
    }
    M2C_FIELD(arg0, s32 *, 0x20) = 1;
    return 0;
}
