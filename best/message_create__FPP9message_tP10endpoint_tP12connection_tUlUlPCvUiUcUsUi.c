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

void *__wrap_malloc(s32);                           /* extern */
M2C_UNK memcpy(s32, s32, s32);                      /* extern */
s32 message_get_data__FP9message_t(void *);         /* extern */
extern M2C_UNK D_011D5718;

s32 message_create__FPP9message_tP10endpoint_tP12connection_tUlUlPCvUiUcUsUi(void **arg0, s32 arg1, s32 arg2, s64 arg3, s64 arg4, s32 arg5, s32 arg6, s32 arg7, u16 arg_sp0, s32 arg_sp8) {
    void **sp0;
    s32 var_2;
    void *temp_2;

    sp0 = arg0;
    *arg0 = NULL;
    temp_2 = __wrap_malloc(arg6 + 0x48);
    var_2 = -2;
    if (temp_2 != NULL) {
        M2C_FIELD(temp_2, M2C_UNK *, 0) = M2C_UNALIGNED32(M2C_FIELD(&D_011D5718, M2C_UNK *, 0));
        M2C_FIELD(temp_2, s32 *, 0x14) = arg1;
        M2C_FIELD(temp_2, s32 *, 0x18) = arg2;
        M2C_FIELD(temp_2, s64 *, 0x20) = arg3;
        M2C_FIELD(temp_2, s64 *, 0x28) = arg4;
        M2C_FIELD(temp_2, s8 *, 0x36) = (s8) (arg7 & 0xFF);
        M2C_FIELD(temp_2, u16 *, 0x34) = arg_sp0;
        M2C_FIELD(temp_2, s32 *, 0x40) = arg_sp8;
        M2C_FIELD(temp_2, s32 *, 0x30) = arg6;
        M2C_FIELD(temp_2, s32 *, 0x3C) = arg_sp8;
        if (arg5 != 0) {
            memcpy(message_get_data__FP9message_t(temp_2), arg5, arg6);
        }
        var_2 = 0;
        *sp0 = temp_2;
    }
    return var_2;
}
