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

M2C_UNK __wrap_free(s8 *, s32);                     /* extern */
s8 *__wrap_malloc(s32);                             /* extern */
M2C_UNK strcat(s8 *, s8 *);                         /* extern */
M2C_UNK strcpy(s8 *, s8 *);                         /* extern */
s32 strlen(s8 *);                                   /* extern */
extern M2C_UNK D_011B20E8;
extern s8 *D_011B20F8;
extern s8 D_011CDAA8;
extern s8 D_011CDAB0;

s8 *gzerror(void *arg0, s32 *arg1) {
    s32 temp_16;
    s32 temp_6;
    s8 *temp_2;
    s8 *temp_4;
    s8 *var_18;

    if (arg0 == NULL) {
        *arg1 = -2;
        return D_011B20F8;
    }
    temp_6 = M2C_FIELD(arg0, s32 *, 0x38);
    *arg1 = temp_6;
    if (temp_6 == 0) {
        return &D_011CDAA8;
    }
    var_18 = &D_011CDAA8;
    if (temp_6 != -1) {
        var_18 = M2C_FIELD(arg0, s8 **, 0x18);
    }
    if ((var_18 == NULL) || (*var_18 == 0)) {
        var_18 = *(&D_011B20E8 + ((2 - M2C_FIELD(arg0, s32 *, 0x38)) * 4));
    }
    temp_4 = M2C_FIELD(arg0, s8 **, 0x50);
    if (temp_4 != NULL) {
        __wrap_free(temp_4, temp_6);
    }
    temp_16 = strlen(M2C_FIELD(arg0, s8 **, 0x54));
    temp_2 = __wrap_malloc(temp_16 + strlen(var_18) + 3);
    M2C_FIELD(arg0, s8 **, 0x50) = temp_2;
    strcpy(temp_2, M2C_FIELD(arg0, s8 **, 0x54));
    strcat(M2C_FIELD(arg0, s8 **, 0x50), &D_011CDAB0);
    strcat(M2C_FIELD(arg0, s8 **, 0x50), var_18);
    return M2C_FIELD(arg0, s8 **, 0x50);
}
