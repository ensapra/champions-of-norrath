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

s32 GetFaceTexture__13VICSpriteCustii13VICSpriteRaceR12VIDictionary(s32, s32, s32, s32); /* extern */
s32 GetMaterialPalEntry__8VIRasterii(s32, s32, s32); /* extern */
M2C_UNK SetLayerTexture__10VIMaterialiiR8VIRasterR12VIDictionary(s32, s32, s32, s32, s32); /* extern */

s32 SetFace__9VICSpriteiR7VIScene(void *arg0, s32 arg1, void *arg2) {
    s32 temp_17;
    s32 temp_2;
    s32 temp_2_2;
    s32 temp_2_3;
    s32 var_2;

    var_2 = -1;
    temp_17 = M2C_FIELD(arg2, s32 *, 0x4B9C);
    if (temp_17 != 0) {
        temp_2 = M2C_FIELD(arg0, s32 *, 0xFE4);
        if (temp_2 != -1) {
            temp_2_2 = GetMaterialPalEntry__8VIRasterii(temp_17, M2C_FIELD(arg0, s32 *, 0x1A0), temp_2);
            if (temp_2_2 != 0) {
                temp_2_3 = GetFaceTexture__13VICSpriteCustii13VICSpriteRaceR12VIDictionary(arg1, M2C_FIELD(arg0, s32 *, 0x19C), M2C_FIELD(arg0, s32 *, 0x198), M2C_FIELD(arg2, s32 *, 0x4B98));
                if (temp_2_3 >= 0) {
                    SetLayerTexture__10VIMaterialiiR8VIRasterR12VIDictionary(temp_2_2, M2C_FIELD(arg0, s32 *, 0xFE8), temp_2_3, temp_17, M2C_FIELD(arg2, s32 *, 0x4B98));
                }
            }
        }
        var_2 = 0;
    }
    return var_2;
}
