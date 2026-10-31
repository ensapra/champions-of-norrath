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
M2C_UNK SleepThread();                              /* extern */
M2C_UNK WaitSema(s32);                              /* extern */
M2C_UNK __wrap_free(s32);                           /* extern */
s32 __wrap_memalign(M2C_UNK, M2C_UNK);              /* extern */
M2C_UNK ll_add_tail__FP5llistP5lnode(void *, void *); /* extern */
void *ll_rem_head__FP5llist(M2C_UNK *);             /* extern */
M2C_UNK memcpy(void *, s32, s32);                   /* extern */
M2C_UNK memset(M2C_UNK *, M2C_UNK, M2C_UNK);        /* extern */
M2C_UNK printf(M2C_UNK *, s32);                     /* extern */
M2C_UNK sceGsSyncV(M2C_UNK);                        /* extern */
s32 sceInetRecv(void *, s32, s32, s32, M2C_UNK, s32 *, M2C_UNK); /* extern */
s32 sceInetRecvFrom(void *, s32, s32, s32, M2C_UNK, s32 *, M2C_UNK *, s32 *, s32); /* extern */
extern M2C_UNK D_011CACA0;
extern M2C_UNK D_011CACC0;
extern M2C_UNK D_011E5C20;

void VIUSocketRecvThread__FPv(void *arg0) {
    s32 sp10;
    M2C_UNK sp20;
    s32 sp30;
    s32 temp_20;
    s32 var_16;
    void *temp_17;
    void *var_18;

    temp_17 = arg0 + 0xC;
    temp_20 = __wrap_memalign(0x40, 0x800);
    if (M2C_FIELD(temp_17, s32 *, 0xB8) == 0) {
loop_2:
        var_18 = NULL;
        if (M2C_FIELD(arg0, u8 *, 8) == 1) {
            sp10 = 0;
            var_16 = sceInetRecv(temp_17 + 0x3C, M2C_FIELD(temp_17, s32 *, 0x7C), M2C_FIELD(arg0, s32 *, 4), temp_20, 0x7C0, &sp10, 0x64);
            if (var_16 >= 0x7C1) {
                printf(&D_011CACA0, var_16);
                sceGsSyncV(0);
                sceGsSyncV(0);
            }
            if (var_16 >= 0) {
                if (var_16 > 0) {
                    WaitSema(M2C_FIELD(temp_17, s32 *, 0xB4));
                    var_18 = ll_rem_head__FP5llist(&D_011E5C20);
                    if (var_18 != NULL) {
                        memcpy(var_18 + 8, temp_20, var_16);
                        M2C_FIELD(var_18, s32 *, 0x808) = var_16;
                        memset(var_18 + 0x80C, 0, 0x10);
                        M2C_FIELD(var_18, s32 *, 0x81C) = 0;
                        M2C_FIELD(var_18, s32 *, 0x820) = sp10;
                    }
                    SignalSema(M2C_FIELD(temp_17, s32 *, 0xB4));
                }
            } else {
                goto block_15;
            }
        } else if (M2C_FIELD(arg0, u8 *, 8) == 0) {
            sp10 = 0;
            memset(&sp20, 0, 0x10);
            var_16 = sceInetRecvFrom(temp_17 + 0x3C, M2C_FIELD(temp_17, s32 *, 0x7C), M2C_FIELD(arg0, s32 *, 4), temp_20, 0x7C0, &sp10, &sp20, &sp30, 0x64);
            if (var_16 >= 0x7C1) {
                printf(&D_011CACC0, var_16);
                sceGsSyncV(0);
                sceGsSyncV(0);
            }
            if (var_16 < 0) {
block_15:
                if (var_16 != -0x1F4) {
                    M2C_FIELD(temp_17, s32 *, 0xAC) = var_16;
                    SleepThread();
                }
            } else if (var_16 > 0) {
                WaitSema(M2C_FIELD(temp_17, s32 *, 0xB4));
                var_18 = ll_rem_head__FP5llist(&D_011E5C20);
                if (var_18 != NULL) {
                    memcpy(var_18 + 8, temp_20, var_16);
                    M2C_FIELD(var_18, s32 *, 0x808) = var_16;
                    M2C_ERROR(/* unknown instruction: ldl $v0, 0x7($s3) */);
                    M2C_ERROR(/* unknown instruction: ldr $v0, ($s3) */);
                    M2C_ERROR(/* unknown instruction: ldl $v1, 0xf($s3) */);
                    M2C_ERROR(/* unknown instruction: ldr $v1, 0x8($s3) */);
                    M2C_ERROR(/* unknown instruction: sdl $v0, 0x813($s2) */);
                    M2C_ERROR(/* unknown instruction: sdr $v0, 0x80c($s2) */);
                    M2C_ERROR(/* unknown instruction: sdl $v1, 0x81b($s2) */);
                    M2C_ERROR(/* unknown instruction: sdr $v1, 0x814($s2) */);
                    M2C_FIELD(var_18, s32 *, 0x81C) = sp30;
                    M2C_FIELD(var_18, s32 *, 0x820) = sp10;
                }
                SignalSema(M2C_FIELD(temp_17, s32 *, 0xB4));
            }
        }
        if (var_18 != NULL) {
            WaitSema(M2C_FIELD(temp_17, s32 *, 0xB4));
            ll_add_tail__FP5llistP5lnode(temp_17 + 0x8C, var_18);
            SignalSema(M2C_FIELD(temp_17, s32 *, 0xB4));
        }
        if (M2C_FIELD(temp_17, s32 *, 0xB8) == 0) {
            goto loop_2;
        }
    }
    __wrap_free(temp_20);
}
