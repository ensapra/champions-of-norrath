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

s32 NumSubObjects__9VIObjFile(s32);                 /* extern */
s32 ParseSurface__10VIESFParse(void *);             /* extern */
s32 ReadEnd__9VIObjFile(s32);                       /* extern */

s32 ParseSurfaceArrayObj__10VIESFParse(void *arg0) {
    s32 var_17;
    s32 var_2;

    if (M2C_FIELD(arg0, s32 *, 0xC) != 0) {
        var_17 = 0;
loop_3:
        var_17 += 1;
        if (var_17 >= NumSubObjects__9VIObjFile(M2C_FIELD(arg0, s32 *, 0x24))) {
            goto block_4;
        }
        var_2 = -1;
        if (ParseSurface__10VIESFParse(arg0) >= 0) {
            goto loop_3;
        }
    } else {
block_4:
        var_2 = (ReadEnd__9VIObjFile(M2C_FIELD(arg0, s32 *, 0x24)) >= 0) ? 0 : -1;
    }
    return var_2;
}
