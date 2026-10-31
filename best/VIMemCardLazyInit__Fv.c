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

M2C_UNK SetIcon__16VIIconDefinitionPvi(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK SetTitle__16VIIconDefinitionPCc(M2C_UNK *, M2C_UNK *); /* extern */
extern s32 D_01192C98;
extern M2C_UNK D_01192CA0;
extern M2C_UNK D_011AFA98;
extern M2C_UNK D_011E8C20;
extern s32 D_011E8FF0;

s32 VIMemCardLazyInit__Fv(void) {
    if (D_01192C98 == 0) {
        D_011E8FF0 = -1;
        SetTitle__16VIIconDefinitionPCc(&D_011E8C20, &D_011AFA98);
        SetIcon__16VIIconDefinitionPvi(&D_011E8C20, &D_01192CA0, 0x1CDD8);
        D_01192C98 = 1;
    }
    return 0;
}
