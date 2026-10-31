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

M2C_UNK __builtin_vec_delete(s32);                  /* extern */
s32 __builtin_vec_new(s32);                         /* extern */
M2C_UNK strcpy16__8VIStringPUsUiPCUs(s32, s32, s32); /* extern */
s32 strlen16__8VIStringPCUs(s32);                   /* extern */

void SetValue__8VIWidgetPCUs(void *arg0, s32 arg1) {
    s32 temp_2;

    if (arg1 != 0) {
        temp_2 = M2C_FIELD(arg0, s32 *, 0x54);
        if (temp_2 != 0) {
            __builtin_vec_delete(temp_2);
        }
        M2C_FIELD(arg0, s32 *, 0x54) = __builtin_vec_new((strlen16__8VIStringPCUs(arg1) + 1) * 2);
        strcpy16__8VIStringPUsUiPCUs(M2C_FIELD(arg0, s32 *, 0x54), (strlen16__8VIStringPCUs(arg1) + 1) * 2, arg1);
    }
}
