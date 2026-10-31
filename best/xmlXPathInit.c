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

s64 dpmul(s64, s64);                                /* extern */
extern s64 D_011B1F50;
extern s64 D_011B1F58;
extern s64 D_011B1F60;
extern s32 D_011B1F68;
extern s64 D_011DD5C8;

void xmlXPathInit(void) {
    s64 temp_18;

    if (D_011B1F68 == 0) {
        temp_18 = D_011DD5C8;
        D_011B1F50 = 0;
        D_011B1F58 = dpmul(0xFFC0 << 0x2E, temp_18);
        D_011B1F60 = dpmul(0xBFF0 << 0x30, temp_18);
        D_011B1F68 = 1;
    }
}
