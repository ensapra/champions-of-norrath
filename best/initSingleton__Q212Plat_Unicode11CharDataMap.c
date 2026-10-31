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

M2C_UNK __Q212Plat_Unicode11CharDataMap(s32);       /* extern */
s32 __builtin_new(M2C_UNK);                         /* extern */
M2C_UNK explicitDestroy__Q212Plat_Unicode11CharDataMap(); /* extern */
extern s32 D_0118E7DC;

void initSingleton__Q212Plat_Unicode11CharDataMap(void) {
    s32 temp_2;

    explicitDestroy__Q212Plat_Unicode11CharDataMap();
    temp_2 = __builtin_new(0x20);
    if (temp_2 != 0) {
        __Q212Plat_Unicode11CharDataMap(temp_2);
    }
    D_0118E7DC = temp_2;
}
