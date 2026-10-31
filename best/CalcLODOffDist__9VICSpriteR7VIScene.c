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

s32 GetSpriteType__7VIScenei(s32, s32);             /* extern */
void *Sprite__7VIScenei(s32, s32);                  /* extern */

s32 CalcLODOffDist__9VICSpriteR7VIScene(void *arg0, s32 arg1) {
    s32 temp_2;

    temp_2 = M2C_FIELD(arg0, s32 *, 0xF10);
    if ((temp_2 != -1) && ((GetSpriteType__7VIScenei(arg1, temp_2) == 7) || (GetSpriteType__7VIScenei(arg1, M2C_FIELD(arg0, s32 *, 0xF10)) == 3))) {
        M2C_FIELD(arg0, f32 *, 0x30) = (f32) M2C_FIELD(Sprite__7VIScenei(arg1, M2C_FIELD(arg0, s32 *, 0xF10)), f32 *, 0x30);
    }
    return 0;
}
