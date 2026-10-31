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

s32 fopen(s32, M2C_UNK *);                          /* extern */
s32 strcmp(M2C_UNK *);                              /* extern */
s32 strncmp(s32, M2C_UNK *, M2C_UNK);               /* extern */
extern M2C_UNK D_011DBA68;
extern M2C_UNK D_011DBA70;
extern M2C_UNK D_011DBA88;
extern M2C_UNK D_011DBA98;
extern void *_impure_ptr;

s32 xmlFileOpen(s32 arg0) {
    s32 var_3;

    if (strcmp(&D_011DBA68) == 0) {
        return M2C_FIELD(_impure_ptr, s32 *, 4);
    }
    var_3 = arg0 + 0x10;
    if (strncmp(arg0, &D_011DBA70, 0x10) != 0) {
        var_3 = (strncmp(arg0, &D_011DBA88, 8) != 0) ? arg0 : (arg0 + 8);
    }
    if (var_3 != 0) {
        return fopen(var_3, &D_011DBA98);
    }
    return 0;
}
