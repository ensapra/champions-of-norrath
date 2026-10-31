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

s32 VIInitUSocketEx__FP9usocket_t(void *);          /* extern */
void *__wrap_malloc(M2C_UNK);                       /* extern */
M2C_UNK usocket_destroy__FP9usocket_t(void *);      /* extern */
extern M2C_UNK D_011CAB18;

s32 usocket_create_internal__FPP9usocket_tii(void **arg0, u8 arg1, s32 arg2) {
    s32 var_17;
    void *var_16;

    var_17 = -1;
    var_16 = NULL;
    if (arg1 < 4U) {
        var_17 = -2;
        var_16 = __wrap_malloc(0xC8);
        if (var_16 != NULL) {
            M2C_FIELD(var_16, M2C_UNK *, 0) = M2C_UNALIGNED32(M2C_FIELD(&D_011CAB18, M2C_UNK *, 0));
            M2C_FIELD(var_16, u8 *, 8) = arg1;
            M2C_FIELD(var_16, s32 *, 4) = arg2;
            M2C_FIELD(var_16, s8 *, 9) = 0;
            M2C_FIELD(var_16, s8 *, 0xA) = 0;
            var_17 = VIInitUSocketEx__FP9usocket_t(var_16);
            if (var_17 == 0) {
                *arg0 = var_16;
                var_16 = NULL;
            }
        }
    }
    if (var_16 != NULL) {
        usocket_destroy__FP9usocket_t(var_16);
    }
    return var_17;
}
