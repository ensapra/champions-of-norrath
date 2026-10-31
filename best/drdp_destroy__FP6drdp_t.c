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

M2C_UNK __wrap_free(void *);                        /* extern */
M2C_UNK _uassert(M2C_UNK *, M2C_UNK *, M2C_UNK);    /* extern */
s32 memcmp(M2C_UNK *, M2C_UNK);                     /* extern */
M2C_UNK usocket_destroy__FP9usocket_t(s32);         /* extern */
extern M2C_UNK D_011CADF0;
extern M2C_UNK D_011CAE50;
extern M2C_UNK D_011CAEC8;
extern M2C_UNK D_011CAEE0;

void drdp_destroy__FP6drdp_t(void *arg0) {
    s32 *var_16;
    s32 temp_4;
    s32 var_17;
    void *temp_4_2;

    if (memcmp(&D_011CAE50, 4) != 0) {
        _uassert(&D_011CAEC8, &D_011CADF0, 0x2C5);
    }
    var_16 = arg0 + 4;
    M2C_FIELD(arg0, M2C_UNK *, 0) = M2C_UNALIGNED32(M2C_FIELD(&D_011CAEE0, M2C_UNK *, 0));
    var_17 = 1;
    do {
        temp_4 = *var_16;
        var_17 -= 1;
        if (temp_4 != 0) {
            usocket_destroy__FP9usocket_t(temp_4);
            *var_16 = 0;
        }
        var_16 += 4;
    } while (var_17 >= 0);
    temp_4_2 = M2C_FIELD(arg0, void **, 0x208);
    if (temp_4_2 != NULL) {
        __wrap_free(temp_4_2);
    }
    __wrap_free(arg0);
}
