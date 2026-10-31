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

s32 Volume__14VIQueryTriListRC6VIBBox();            /* extern */
f32 cosf(f32);                                      /* extern */

s32 Reset__14VIQueryTriListRC6VIBBoxRC7VIVect3f(void *arg0, void *arg2, f32 fparg0) {
    void *temp_3;

    M2C_FIELD(arg0, s32 *, 0) = 0;
    temp_3 = arg0 + 0x1C;
    if (Volume__14VIQueryTriListRC6VIBBox() < 0) {
        return -1;
    }
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) M2C_FIELD(arg2, f32 *, 0);
    M2C_FIELD(temp_3, f32 *, 4) = (f32) M2C_FIELD(arg2, f32 *, 4);
    M2C_FIELD(temp_3, f32 *, 8) = (f32) M2C_FIELD(arg2, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0x28) = cosf(fparg0 * 0.01745329f);
    return 0;
}
