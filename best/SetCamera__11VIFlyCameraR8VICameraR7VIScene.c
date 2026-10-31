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

M2C_UNK Apply__14VICameraEffectR7VIVect3T1(void *, f32 *, f32 *); /* extern */
M2C_UNK HPR__7VIVect3fff(f32 *, f32, f32, M2C_UNK); /* extern */
M2C_UNK __cl__8VICameraR7VIVect3T1(s32, f32 *, f32 *); /* extern */

s32 SetCamera__11VIFlyCameraR8VICameraR7VIScene(void *arg0, s32 arg1) {
    f32 sp0;
    f32 sp4;
    f32 sp8;
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp20;
    f32 sp24;
    f32 sp28;
    f32 sp30;
    f32 sp34;
    f32 sp38;
    void *temp_2;

    temp_2 = arg0 + 0x30;
    sp0 = 0.0f;
    sp4 = 0.0f;
    sp8 = 0.0f;
    sp10 = 0.0f;
    sp0 = M2C_FIELD(arg0, f32 *, 0x30);
    sp14 = 0.0f;
    sp18 = 0.0f;
    sp4 = M2C_FIELD(temp_2, f32 *, 4);
    sp8 = M2C_FIELD(temp_2, f32 *, 8);
    HPR__7VIVect3fff(&sp10, M2C_FIELD(arg0, f32 *, 0x3C), M2C_FIELD(arg0, f32 *, 0x40), 0);
    sp20 = sp0;
    sp24 = sp4;
    sp28 = sp8;
    sp30 = sp10;
    sp34 = sp14;
    sp38 = sp18;
    Apply__14VICameraEffectR7VIVect3T1(arg0 + 0xFC, &sp20, &sp30);
    __cl__8VICameraR7VIVect3T1(arg1, &sp20, &sp30);
    return 0;
}
