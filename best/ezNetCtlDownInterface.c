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

M2C_UNK printf(M2C_UNK *, s32, s32 *);              /* extern */
M2C_UNK sceSifCallRpc(M2C_UNK *, M2C_UNK, M2C_UNK, s32 *, M2C_UNK, s32 *, M2C_UNK, M2C_UNK, s32); /* extern */
extern s32 D_01192C6C;
extern M2C_UNK D_011D4E90;
extern M2C_UNK D_011E8500;
extern s32 D_011E8540;

s32 ezNetCtlDownInterface(s32 arg0) {
    if (D_01192C6C == 0) {
        printf(&D_011D4E90, D_01192C6C, &D_011E8540);
        return -1;
    }
    D_011E8540 = arg0;
    sceSifCallRpc(&D_011E8500, 6, 0, &D_011E8540, 4, &D_011E8540, 4, 0, 0);
    return 0;
}
