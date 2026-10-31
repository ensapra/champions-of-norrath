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

s32 Allocate__13VIHSpriteAnim(void *);              /* extern */
s32 CalcDataSize__13VIHSpriteAnim();                /* extern */

s32 Init__13VIHSpriteAnim19VIHSpriteAnimFormatiiiff14VIPlaybackType(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, f32 fparg0, f32 fparg1) {
    s32 *var_4;
    s32 temp_3;
    s32 temp_4;
    s32 var_7;
    s32 var_8;

    M2C_FIELD(arg0, s32 *, 8) = arg1;
    M2C_FIELD(arg0, s32 *, 0xC) = arg2;
    M2C_FIELD(arg0, s32 *, 0x10) = arg3;
    M2C_FIELD(arg0, s32 *, 0x14) = arg4;
    M2C_FIELD(arg0, f32 *, 0x18) = fparg0;
    M2C_FIELD(arg0, f32 *, 0x1C) = fparg1;
    M2C_FIELD(arg0, s32 *, 0x20) = arg5;
    if (CalcDataSize__13VIHSpriteAnim() < 0) {
        return -1;
    }
    if (Allocate__13VIHSpriteAnim(arg0) >= 0) {
        temp_3 = M2C_FIELD(arg0, s32 *, 0x34);
        var_8 = 0;
        var_7 = 0;
        temp_4 = temp_3 + M2C_FIELD(arg0, s32 *, 0x24);
        M2C_FIELD(arg0, s32 *, 0x28) = (s32) (temp_3 + M2C_FIELD(arg0, s32 *, 0x28));
        M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (temp_3 + M2C_FIELD(arg0, s32 *, 0x2C));
        M2C_FIELD(arg0, s32 *, 0x24) = temp_4;
        if (M2C_FIELD(arg0, s32 *, 0xC) > 0) {
            var_4 = temp_4 + 4;
            do {
                *var_4 = var_8;
                var_4 += 8;
                var_7 += 1;
                var_8 += M2C_FIELD(arg0, s32 *, 0x10);
            } while (var_7 < M2C_FIELD(arg0, s32 *, 0xC));
        }
        return 0;
    }
    return -1;
}
