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

M2C_UNK SignalSema(s32);                            /* extern */
M2C_UNK WaitSema(s32);                              /* extern */
M2C_UNK ll_add_tail__FP5llistP5lnode(M2C_UNK *, void *); /* extern */
void *ll_rem_head__FP5llist(s32);                   /* extern */
M2C_UNK memcpy(s32, s32, s32);                      /* extern */
M2C_UNK printf(M2C_UNK *);                          /* extern */
extern M2C_UNK D_011CACE0;
extern M2C_UNK D_011E5C20;

s32 VIUSocketRecv__FP9usocket_tPviPiP14sceInetAddressT3(s32 arg0, s32 arg1, s32 *arg3, s32 arg4, s32 *arg5) {
    s32 var_22;
    void *temp_17;
    void *temp_2;

    temp_17 = arg0 + 0xC;
    var_22 = -0x1F4;
    if (M2C_FIELD(temp_17, s32 *, 0xAC) < 0) {
        printf(&D_011CACE0);
        return M2C_FIELD(temp_17, s32 *, 0xAC);
    }
    WaitSema(M2C_FIELD(temp_17, s32 *, 0xB4));
    temp_2 = ll_rem_head__FP5llist(arg0 + 0x98);
    if (temp_2 != NULL) {
        memcpy(arg1, temp_2 + 8, M2C_FIELD(temp_2, s32 *, 0x808));
        *arg3 = M2C_FIELD(temp_2, s32 *, 0x820);
        M2C_ERROR(/* unknown instruction: ldl $v0, 0x813($s0) */);
        M2C_ERROR(/* unknown instruction: ldr $v0, 0x80c($s0) */);
        M2C_ERROR(/* unknown instruction: ldl $v1, 0x81b($s0) */);
        M2C_ERROR(/* unknown instruction: ldr $v1, 0x814($s0) */);
        M2C_ERROR(/* unknown instruction: sdl $v0, 0x7($s4) */);
        M2C_ERROR(/* unknown instruction: sdr $v0, ($s4) */);
        M2C_ERROR(/* unknown instruction: sdl $v1, 0xf($s4) */);
        M2C_ERROR(/* unknown instruction: sdr $v1, 0x8($s4) */);
        *arg5 = M2C_FIELD(temp_2, s32 *, 0x81C);
        var_22 = M2C_FIELD(temp_2, s32 *, 0x808);
        ll_add_tail__FP5llistP5lnode(&D_011E5C20, temp_2);
    }
    SignalSema(M2C_FIELD(temp_17, s32 *, 0xB4));
    return var_22;
}
