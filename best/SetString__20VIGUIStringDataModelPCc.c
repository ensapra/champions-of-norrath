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

M2C_UNK __wrap_free(s32);                           /* extern */
s32 __wrap_malloc(s32);                             /* extern */
M2C_UNK memset(s32, M2C_UNK, s32);                  /* extern */
s32 strlen(s32);                                    /* extern */
M2C_UNK strncpy(s32, s32, s32);                     /* extern */

void SetString__20VIGUIStringDataModelPCc(void *arg0, s32 arg1) {
    s32 temp_16;
    s32 temp_2;
    s32 temp_2_2;
    s32 temp_2_3;
    s32 temp_3;
    s32 var_17;

    if (arg1 != 0) {
        temp_3 = M2C_FIELD(arg0, s32 *, 0x2C);
        var_17 = strlen(arg1);
        if (temp_3 != -1) {
            var_17 = (temp_3 < var_17) ? temp_3 : var_17;
        }
        temp_2 = M2C_FIELD(arg0, s32 *, 0x28);
        if (temp_2 != 0) {
            __wrap_free(temp_2);
            M2C_FIELD(arg0, s32 *, 0x28) = 0;
        }
        temp_16 = var_17 + 1;
        temp_2_2 = __wrap_malloc(temp_16);
        M2C_FIELD(arg0, s32 *, 0x28) = temp_2_2;
        memset(temp_2_2, 0, temp_16);
        temp_2_3 = M2C_FIELD(arg0, s32 *, 0x28);
        if (temp_2_3 != 0) {
            strncpy(temp_2_3, arg1, var_17);
        }
    }
}
