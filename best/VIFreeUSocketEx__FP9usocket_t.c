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

M2C_UNK ChangeThreadPriority(s32, M2C_UNK);         /* extern */
M2C_UNK DeleteSema(s32);                            /* extern */
M2C_UNK DeleteThread(s32);                          /* extern */
s32 ReferThreadStatus(s32, M2C_UNK);                /* extern */
M2C_UNK RotateThreadReadyQueue(M2C_UNK);            /* extern */
M2C_UNK SignalSema(s32);                            /* extern */
M2C_UNK TerminateThread(s32);                       /* extern */
M2C_UNK WakeupThread(s32);                          /* extern */
M2C_UNK __wrap_free(s32);                           /* extern */
M2C_UNK ll_add_tail__FP5llistP5lnode(M2C_UNK *, s32); /* extern */
s32 ll_rem_head__FP5llist(void *);                  /* extern */
M2C_UNK memset(void *, M2C_UNK, M2C_UNK);           /* extern */
M2C_UNK printf(M2C_UNK *);                          /* extern */
M2C_UNK sceGsSyncV(M2C_UNK);                        /* extern */
M2C_UNK sceLibnetTerminate(void *);                 /* extern */
extern M2C_UNK D_011CAD20;
extern M2C_UNK D_011CAD38;
extern M2C_UNK D_011CAD60;
extern M2C_UNK D_011CAD68;
extern M2C_UNK D_011CAD70;
extern M2C_UNK D_011CAD80;
extern M2C_UNK D_011E5C20;

s32 VIFreeUSocketEx__FP9usocket_t(s32 arg0) {
    s32 temp_2;
    s32 temp_2_2;
    s32 temp_2_3;
    s32 temp_4;
    s32 temp_4_2;
    s32 temp_4_3;
    s32 temp_4_4;
    s32 temp_4_5;
    s32 temp_4_6;
    s32 temp_4_7;
    void *temp_17;
    void *var_16;

    temp_17 = arg0 + 0xC;
    printf(&D_011CAD20);
    M2C_FIELD(temp_17, s32 *, 0xB8) = 1;
    do {
loop_1:
        WakeupThread(M2C_FIELD(temp_17, s32 *, 0xA0));
        RotateThreadReadyQueue(1);
        SignalSema(M2C_FIELD(temp_17, s32 *, 0xB4));
        SignalSema(M2C_FIELD(temp_17, s32 *, 0xB0));
        sceGsSyncV(0);
        temp_2 = ReferThreadStatus(M2C_FIELD(temp_17, s32 *, 0xA0), 0);
        if (temp_2 != 0x10) {
            goto loop_1;
        }
    } while (ReferThreadStatus(M2C_FIELD(temp_17, s32 *, 0xA4), 0) != temp_2);
    printf(&D_011CAD38);
    printf(&D_011CAD60);
    ChangeThreadPriority(M2C_FIELD(temp_17, s32 *, 0xA0), 0xA);
    ChangeThreadPriority(M2C_FIELD(temp_17, s32 *, 0xA4), 0xA);
    printf(&D_011CAD68);
    temp_4 = M2C_FIELD(temp_17, s32 *, 0xA0);
    if (temp_4 != -1) {
        TerminateThread(temp_4);
        DeleteThread(M2C_FIELD(temp_17, s32 *, 0xA0));
    }
    temp_4_2 = M2C_FIELD(temp_17, s32 *, 0xA4);
    if (temp_4_2 != -1) {
        TerminateThread(temp_4_2);
        DeleteThread(M2C_FIELD(temp_17, s32 *, 0xA4));
    }
    temp_4_3 = M2C_FIELD(temp_17, s32 *, 0xB0);
    if (temp_4_3 != -1) {
        DeleteSema(temp_4_3);
    }
    temp_4_4 = M2C_FIELD(temp_17, s32 *, 0xB4);
    if (temp_4_4 != -1) {
        DeleteSema(temp_4_4);
    }
    printf(&D_011CAD70);
    temp_4_5 = M2C_FIELD(temp_17, s32 *, 0x98);
    if (temp_4_5 != 0) {
        __wrap_free(temp_4_5);
    }
    temp_4_6 = M2C_FIELD(temp_17, s32 *, 0x9C);
    if (temp_4_6 != 0) {
        __wrap_free(temp_4_6);
    }
    printf(&D_011CAD80);
    temp_4_7 = M2C_FIELD(temp_17, s32 *, 0x78);
    if (temp_4_7 == 0) {
        var_16 = temp_17 + 0x80;
        if (M2C_FIELD(temp_17, s32 *, 0x7C) != 0) {
            goto block_20;
        }
    } else {
        __wrap_free(temp_4_7);
block_20:
        if (M2C_FIELD(temp_17, s32 *, 0x7C) != 0) {
            __wrap_free(M2C_FIELD(temp_17, s32 *, 0x7C));
        }
        sceLibnetTerminate(temp_17 + 0x3C);
        sceLibnetTerminate(temp_17);
        var_16 = temp_17 + 0x80;
    }
loop_25:
    temp_2_2 = ll_rem_head__FP5llist(var_16);
    if (temp_2_2 != 0) {
        ll_add_tail__FP5llistP5lnode(&D_011E5C20, temp_2_2);
        goto loop_25;
    }
loop_28:
    temp_2_3 = ll_rem_head__FP5llist(temp_17 + 0x8C);
    if (temp_2_3 != 0) {
        ll_add_tail__FP5llistP5lnode(&D_011E5C20, temp_2_3);
        goto loop_28;
    }
    memset(temp_17, 0, 0xBC);
    M2C_FIELD(temp_17, s32 *, 0xA4) = -1;
    M2C_FIELD(temp_17, s32 *, 0xA0) = -1;
    return 0;
}
