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

s32 CreateSprite__7VIScene12VISpriteTypei(s32, s32, s32); /* extern */
s32 ShareMaterialPal__8VIRasteri(s32, s32, void *, void *, void *, void *, void *, s32); /* extern */
s32 SharePrimBuffer__8VIRasteri(s32, s32);          /* extern */
void *Sprite__7VIScenei(s32, s32);                  /* extern */

s32 Copy__13VIFloraSpriteR7VISceneP8VIRasterP13VISoundDeviceR9VICollidei(void *arg0, s32 arg1, s32 arg2, s32 arg5) {
    s32 temp_11;
    s32 temp_2;
    s32 var_2;
    void *temp_10;
    void *temp_2_2;
    void *temp_5;
    void *temp_6;
    void *temp_7;
    void *temp_8;
    void *temp_9;

    temp_2 = CreateSprite__7VIScene12VISpriteTypei(arg1, M2C_FIELD(arg0, s32 *, 0x34), arg5);
    var_2 = -1;
    if (temp_2 >= 0) {
        temp_2_2 = Sprite__7VIScenei(arg1, temp_2);
        temp_5 = arg0 + 8;
        temp_6 = temp_2_2 + 8;
        temp_7 = arg0 + 0x14;
        temp_8 = temp_2_2 + 0x14;
        M2C_FIELD(temp_2_2, f32 *, 8) = (f32) M2C_FIELD(arg0, f32 *, 8);
        temp_10 = arg0 + 0x20;
        temp_9 = temp_2_2 + 0x20;
        M2C_FIELD(temp_2_2, s32 *, 0x44) = (s32) M2C_FIELD(arg0, s32 *, 0x44);
        M2C_FIELD(temp_6, f32 *, 4) = (f32) M2C_FIELD(temp_5, f32 *, 4);
        temp_11 = M2C_FIELD(arg0, s32 *, 0x34);
        M2C_FIELD(temp_6, f32 *, 8) = (f32) M2C_FIELD(temp_5, f32 *, 8);
        M2C_FIELD(temp_2_2, s32 *, 0x40) = (s32) M2C_FIELD(arg0, s32 *, 0x40);
        M2C_FIELD(temp_2_2, s32 *, 0x34) = temp_11;
        M2C_FIELD(temp_2_2, f32 *, 0x14) = (f32) M2C_FIELD(arg0, f32 *, 0x14);
        M2C_FIELD(temp_8, f32 *, 4) = (f32) M2C_FIELD(temp_7, f32 *, 4);
        M2C_FIELD(temp_8, f32 *, 8) = (f32) M2C_FIELD(temp_7, f32 *, 8);
        M2C_FIELD(temp_2_2, f32 *, 0x20) = (f32) M2C_FIELD(arg0, f32 *, 0x20);
        M2C_FIELD(temp_9, f32 *, 4) = (f32) M2C_FIELD(temp_10, f32 *, 4);
        M2C_FIELD(temp_9, f32 *, 8) = (f32) M2C_FIELD(temp_10, f32 *, 8);
        M2C_FIELD(temp_9, f32 *, 0xC) = (f32) M2C_FIELD(temp_10, f32 *, 0xC);
        M2C_FIELD(temp_2_2, f32 *, 0x30) = (f32) M2C_FIELD(arg0, f32 *, 0x30);
        if ((arg2 != 0) && ((ShareMaterialPal__8VIRasteri(arg2, M2C_FIELD(arg0, s32 *, 0x44), temp_6, temp_7, temp_8, temp_9, temp_10, temp_11) < 0) || (SharePrimBuffer__8VIRasteri(arg2, M2C_FIELD(arg0, s32 *, 0x40)) < 0))) {
            return -1;
        }
        var_2 = temp_2;
        /* Duplicate return node #6. Try simplifying control flow for better match */
        return var_2;
    }
    return var_2;
}
