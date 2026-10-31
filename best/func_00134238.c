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

M2C_UNK func_0010A600(s32, M2C_UNK);                /* extern */
M2C_UNK func_00138990(s32);                         /* extern */
extern M2C_UNK ConvertFrom__7VIQuatDRC8VIVect3D;
extern M2C_UNK drawNewestQuickSpellMenu__Fiiicl;

void func_00134238(s32 arg0) {
    s32 var_17;
    void *var_16;

    var_16 = &ConvertFrom__7VIQuatDRC8VIVect3D + 0x1F8 + 4;
    var_17 = 0;
    do {
        if (arg0 == M2C_FIELD(var_16, s32 *, -4)) {
            if (var_17 != 2) {
                func_0010A600(M2C_FIELD(var_16, s32 *, 0), 0x63);
                func_00138990(M2C_FIELD(var_16, s32 *, 0));
            } else {
                func_0010A600(M2C_FIELD(&ConvertFrom__7VIQuatDRC8VIVect3D, s32 *, 0x1F8), 0x63);
                func_00138990(M2C_FIELD(&ConvertFrom__7VIQuatDRC8VIVect3D, s32 *, 0x1F8));
            }
            M2C_FIELD(&drawNewestQuickSpellMenu__Fiiicl, s32 *, 0x2BC) = 1;
        }
        var_17 += 1;
        var_16 += 4;
    } while (var_17 < 3);
}
