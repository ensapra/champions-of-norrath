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

M2C_UNK __Q312Plat_Unicode6Blocks7MappingPCQ312Plat_Unicode6Blocks7RawData(s32, M2C_UNK *); /* extern */
s32 __builtin_new(M2C_UNK);                         /* extern */
M2C_UNK explicitDestroy__Q312Plat_Unicode6Blocks7Mapping(); /* extern */
extern s32 D_0118E7D4;
extern M2C_UNK D_011C5760;

void initSingleton__Q312Plat_Unicode6Blocks7Mapping(void) {
    s32 temp_2;

    explicitDestroy__Q312Plat_Unicode6Blocks7Mapping();
    temp_2 = __builtin_new(0x30);
    if (temp_2 != 0) {
        __Q312Plat_Unicode6Blocks7MappingPCQ312Plat_Unicode6Blocks7RawData(temp_2, &D_011C5760);
    }
    D_0118E7D4 = temp_2;
}
