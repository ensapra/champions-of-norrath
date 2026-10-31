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

extern M2C_UNK D_01227AA8;
extern M2C_UNK D_01227AAC;

s32 GetRobeTexture__13VICSpriteCusti17VICSpriteTextSlot(s32 arg0, s32 arg1) {
    s32 temp_4;

    temp_4 = (arg0 >= 4) ? 0 : arg0;
    if (arg1 == 0) {
        return *(&D_01227AA8 + (temp_4 * 8));
    }
    if (arg1 == 3) {
        return *(&D_01227AAC + (temp_4 * 8));
    }
    return -1;
}
