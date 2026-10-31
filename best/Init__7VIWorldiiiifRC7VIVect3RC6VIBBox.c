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

s32 Init__11VIWorldTreeii(s32, M2C_UNK, M2C_UNK);   /* extern */
s32 Init__6VIZone(s32);                             /* extern */
s32 Init__t7VIArray1Z13VIWorldRegioni(void *, s32, s32, void *, void *); /* extern */
s32 Init__t7VIArray1Z6VIZonei(void *);              /* extern */
s32 SetProfiles__7VIWorld(void *);                  /* extern */

s32 Init__7VIWorldiiiifRC7VIVect3RC6VIBBox(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, void *arg5, void *arg6, f32 fparg0) {
    s32 sp0;
    s32 temp_4;
    s32 temp_6_2;
    s32 var_16;
    s32 var_18;
    s32 var_4;
    void *temp_21;
    void *temp_2;
    void *temp_2_2;
    void *temp_3;
    void *temp_3_2;
    void *temp_4_2;
    void *temp_4_3;
    void *temp_5;
    void *temp_6;
    void *temp_7;
    void *temp_8;

    temp_21 = arg0 + 0x48;
    sp0 = arg3;
    if (Init__t7VIArray1Z6VIZonei(temp_21) < 0) {
        return -1;
    }
    var_18 = 0;
    if (arg1 > 0) {
        var_16 = 0;
loop_5:
        temp_4 = M2C_FIELD(temp_21, void **, 4) + var_16;
        var_16 += 0x250;
        var_18 += 1;
        if (Init__6VIZone(temp_4) >= 0) {
            if (var_18 < arg1) {
                goto loop_5;
            }
            goto block_9;
        }
        goto block_13;
    }
block_9:
    var_4 = arg0 + 0x34;
    if (arg1 == 1) {
        temp_2 = M2C_FIELD(temp_21, void **, 4);
        temp_6 = arg6 + 0xC;
        temp_3 = temp_2 + 0x2C;
        temp_5 = temp_2 + 0x38;
        M2C_FIELD(temp_2, f32 *, 0x2C) = (f32) M2C_FIELD(arg6, f32 *, 0);
        temp_4_2 = M2C_FIELD(temp_2, void **, 0x60);
        temp_2_2 = temp_4_2 + 4;
        temp_4_3 = temp_4_2 + 0x10;
        M2C_FIELD(temp_3, f32 *, 4) = (f32) M2C_FIELD(arg6, f32 *, 4);
        M2C_FIELD(temp_3, f32 *, 8) = (f32) M2C_FIELD(arg6, f32 *, 8);
        M2C_FIELD(temp_2, f32 *, 0x38) = (f32) M2C_FIELD(arg6, f32 *, 0xC);
        M2C_FIELD(temp_5, f32 *, 4) = (f32) M2C_FIELD(temp_6, f32 *, 4);
        M2C_FIELD(temp_5, f32 *, 8) = (f32) M2C_FIELD(temp_6, f32 *, 8);
        M2C_FIELD(temp_4_2, f32 *, 4) = (f32) M2C_FIELD(arg6, f32 *, 0);
        M2C_FIELD(temp_2_2, f32 *, 4) = (f32) M2C_FIELD(arg6, f32 *, 4);
        M2C_FIELD(temp_2_2, f32 *, 8) = (f32) M2C_FIELD(arg6, f32 *, 8);
        M2C_FIELD(temp_4_2, f32 *, 0x10) = (f32) M2C_FIELD(arg6, f32 *, 0xC);
        M2C_FIELD(temp_4_3, f32 *, 4) = (f32) M2C_FIELD(temp_6, f32 *, 4);
        M2C_FIELD(temp_4_3, f32 *, 8) = (f32) M2C_FIELD(temp_6, f32 *, 8);
        var_4 = arg0 + 0x34;
    }
    temp_3_2 = arg0 + 0x24;
    if ((Init__11VIWorldTreeii(var_4, 0, 1) < 0) || (M2C_FIELD(arg0, f32 *, 0x20) = fparg0, temp_7 = arg6 + 0xC, temp_8 = arg0 + 0xC, M2C_FIELD(arg0, f32 *, 0x24) = (f32) M2C_FIELD(arg5, f32 *, 0), temp_6_2 = arg4 * sp0, *M2C_FIELD(arg0, s32 **, 0x40) = 0, M2C_FIELD(temp_3_2, f32 *, 4) = (f32) M2C_FIELD(arg5, f32 *, 4), M2C_FIELD(arg0, s32 *, 0x18) = arg2, M2C_FIELD(temp_3_2, f32 *, 8) = (f32) M2C_FIELD(arg5, f32 *, 8), M2C_FIELD(arg0, s32 *, 0x1C) = sp0, M2C_FIELD(arg0, s32 *, 0x30) = arg4, M2C_FIELD(arg0, f32 *, 0) = (f32) M2C_FIELD(arg6, f32 *, 0), M2C_FIELD(arg0, f32 *, 4) = (f32) M2C_FIELD(arg6, f32 *, 4), M2C_FIELD(arg0, f32 *, 8) = (f32) M2C_FIELD(arg6, f32 *, 8), M2C_FIELD(arg0, f32 *, 0xC) = (f32) M2C_FIELD(arg6, f32 *, 0xC), M2C_FIELD(temp_8, f32 *, 4) = (f32) M2C_FIELD(temp_7, f32 *, 4), M2C_FIELD(temp_8, f32 *, 8) = (f32) M2C_FIELD(temp_7, f32 *, 8), (Init__t7VIArray1Z13VIWorldRegioni(arg0 + 0x50, arg2 * arg4 * temp_6_2, temp_6_2, temp_7, temp_8) < 0))) {
block_13:
        return -1;
    }
    return (SetProfiles__7VIWorld(arg0) >= 0) ? 0 : -1;
}
