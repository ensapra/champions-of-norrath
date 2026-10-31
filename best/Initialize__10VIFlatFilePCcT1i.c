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
s32 __wrap_strdup(s32);                             /* extern */
M2C_UNK memcpy(s32, s32, s32);                      /* extern */
M2C_UNK printf(M2C_UNK *, s32);                     /* extern */
extern M2C_UNK D_011C25E8;

void Initialize__10VIFlatFilePCcT1i(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_2;
    s32 temp_2_2;
    s32 temp_3;

    if ((arg1 != 0) && (arg2 != 0) && (arg3 > 0)) {
        temp_2 = M2C_FIELD(arg0, s32 *, 0);
        if (temp_2 != 0) {
            __wrap_free(temp_2);
        }
        temp_3 = M2C_FIELD(arg0, s32 *, 4);
        M2C_FIELD(arg0, s32 *, 0) = __wrap_strdup(arg1);
        if (temp_3 != 0) {
            __wrap_free(temp_3);
        }
        temp_2_2 = __wrap_malloc(arg3);
        M2C_FIELD(arg0, s32 *, 4) = temp_2_2;
        memcpy(temp_2_2, arg2, arg3);
        M2C_FIELD(arg0, s32 *, 8) = arg3;
        printf(&D_011C25E8, arg1);
    }
}
