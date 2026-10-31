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

M2C_UNK VIFreeUSocketEx__FP9usocket_t(void *);      /* extern */
s32 VIInitUSocketEx__FP9usocket_t(void *);          /* extern */
M2C_UNK __wrap_free(void *);                        /* extern */
void *__wrap_malloc(M2C_UNK);                       /* extern */
M2C_UNK _uassert(M2C_UNK *, M2C_UNK *, M2C_UNK);    /* extern */
M2C_UNK sceInetClose(M2C_UNK *, s32, s32, M2C_UNK); /* extern */
extern s32 D_0118E6B0;
extern M2C_UNK D_0118E740;
extern M2C_UNK D_011CAB18;
extern M2C_UNK D_011CAB30;
extern M2C_UNK D_011CAB60;
extern M2C_UNK D_011CABC0;
extern M2C_UNK D_011CABE0;

s32 usocket_accept__FP9usocket_tPP9usocket_t(void *arg0, void **arg1) {
    void *sp0;
    s32 temp_6;
    s32 temp_6_2;
    s32 var_18;
    void *temp_2;
    void *var_16;

    sp0 = NULL;
    if (&D_011CABC0 != NULL) {
        _uassert(&D_011CABE0, &D_011CAB60, 0x45C);
    }
    var_18 = -2;
    var_16 = __wrap_malloc(0xC8);
    if (var_16 != NULL) {
        M2C_FIELD(var_16, M2C_UNK *, 0) = M2C_UNALIGNED32(M2C_FIELD(&D_011CAB18, M2C_UNK *, 0));
        M2C_FIELD(var_16, s8 *, 8) = 3;
        M2C_FIELD(var_16, s8 *, 9) = 0;
        M2C_FIELD(var_16, s8 *, 0xA) = 0;
        M2C_FIELD(var_16, s32 *, 4) = -1;
        var_18 = VIInitUSocketEx__FP9usocket_t(var_16);
        if (var_18 == 0) {
            sp0 = var_16;
            var_16 = NULL;
        }
    }
    if (var_16 != NULL) {
        M2C_FIELD(var_16, M2C_UNK *, 0) = M2C_UNALIGNED32(M2C_FIELD(&D_011CAB30, M2C_UNK *, 0));
        VIFreeUSocketEx__FP9usocket_t(var_16);
        temp_6 = M2C_FIELD(var_16, s32 *, 4);
        if (temp_6 != -1) {
            sceInetClose(&D_0118E740, D_0118E6B0, temp_6, -1);
            M2C_FIELD(var_16, s32 *, 4) = -1;
        }
        __wrap_free(var_16);
    }
    if (var_18 == 0) {
        temp_2 = sp0;
        sp0 = NULL;
        *arg1 = temp_2;
    }
    if (-1 != -1) {
        sceInetClose(&D_0118E740, D_0118E6B0, -1, -1);
    }
    if (sp0 != NULL) {
        M2C_FIELD(sp0, M2C_UNK *, 0) = M2C_UNALIGNED32(M2C_FIELD(&D_011CAB30, M2C_UNK *, 0));
        VIFreeUSocketEx__FP9usocket_t(sp0);
        temp_6_2 = M2C_FIELD(sp0, s32 *, 4);
        if (temp_6_2 != -1) {
            sceInetClose(&D_0118E740, D_0118E6B0, temp_6_2, -1);
            M2C_FIELD(sp0, s32 *, 4) = -1;
        }
        __wrap_free(sp0);
    }
    if (var_18 != 0) {
        M2C_FIELD(arg0, u8 *, 0xA) = (u8) (M2C_FIELD(arg0, u8 *, 0xA) & 0xFE);
    }
    return var_18;
}
