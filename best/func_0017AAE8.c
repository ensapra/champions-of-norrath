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

M2C_UNK func_001AF710(void *);                      /* extern */
s32 func_001B08B0(void *, M2C_UNK, M2C_UNK, void *, M2C_UNK, void *, M2C_UNK, M2C_UNK *, s32); /* extern */
extern M2C_UNK func_0017A088;
extern M2C_UNK jtbl_004C006C;
extern M2C_UNK xmlParseConditionalSections;
extern M2C_UNK xmlParseReference;

s32 func_0017AAE8(void) {
    if (func_001B08B0(&xmlParseConditionalSections + 0x380, 0x35, 0, &xmlParseConditionalSections + 0x400, 0x30, &xmlParseReference + 0x5C8, 4, &func_0017A088, 0) != 0) {
        func_001AF710(&jtbl_004C006C + 0xC3EC);
        return -1;
    }
    return M2C_FIELD(&xmlParseReference, s32 *, 0x5C8);
}
