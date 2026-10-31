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

M2C_UNK Init__8VISphereRC6VIBBox(s32, void *, void *, void *); /* extern */

s32 Init__19VIStreamAudioSpriteRC6VIBBox(void *arg0, void *arg1) {
    void *temp_2;
    void *temp_6;
    void *temp_7;

    temp_2 = arg0 + 8;
    temp_6 = arg1 + 0xC;
    temp_7 = arg0 + 0x14;
    M2C_FIELD(arg0, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 0);
    M2C_FIELD(temp_2, f32 *, 4) = (f32) M2C_FIELD(arg1, f32 *, 4);
    M2C_FIELD(temp_2, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0x14) = (f32) M2C_FIELD(arg1, f32 *, 0xC);
    M2C_FIELD(temp_7, f32 *, 4) = (f32) M2C_FIELD(temp_6, f32 *, 4);
    M2C_FIELD(temp_7, f32 *, 8) = (f32) M2C_FIELD(temp_6, f32 *, 8);
    Init__8VISphereRC6VIBBox(arg0 + 0x20, temp_2, temp_6, temp_7);
    return 0;
}
