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

void *AsWave__7VISound(s32);                        /* extern */
void *AsXm__7VISound(s32);                          /* extern */
M2C_UNK BeginAdpcmTransfer__13VISoundDevicePPvUiiPi(void *, void *, s32, s32, void *); /* extern */
M2C_UNK BeginXmTransfer__13VISoundDevicePPvUiUiiPi(void *, void *, s32, s32, s32, void *); /* extern */
M2C_UNK FlushIopCommand__Fb(M2C_UNK);               /* extern */
M2C_UNK IdleTransfer__13VISoundDevice(void *);      /* extern */
M2C_UNK SetIopFunction__FUii(M2C_UNK, M2C_UNK);     /* extern */
s32 Type__C7VISound(s32);                           /* extern */

s32 Flush__13VISoundDevice(void *arg0) {
    s32 *var_18;
    s32 temp_16;
    s32 temp_2;
    s32 var_19;
    s32 var_20;
    void *temp_2_2;
    void *temp_2_3;
    void *temp_2_4;

    var_19 = 0;
    do {
loop_1:
        if (M2C_FIELD(arg0, s32 *, 0xD54) != 0) {
            var_19 = 1;
            var_20 = 0;
            var_18 = arg0 + 0xA18;
loop_6:
            temp_16 = *var_18;
            if (temp_16 != 0) {
                temp_2 = Type__C7VISound(temp_16);
                switch (temp_2) {                   /* irregular */
                case 0:
                    if (M2C_FIELD(AsWave__7VISound(temp_16), s32 *, 0x28) == 0) {
                        var_19 = 0;
                        temp_2_2 = AsWave__7VISound(temp_16);
                        BeginAdpcmTransfer__13VISoundDevicePPvUiiPi(arg0, temp_2_2 + 0x34, M2C_FIELD(temp_2_2, s32 *, 0x3C), M2C_FIELD(temp_2_2, s32 *, 0x38), temp_2_2 + 0x28);
                    }
                    break;
                case 1:
                    if (M2C_FIELD(AsXm__7VISound(temp_16), s32 *, 0x20) == 0) {
                        var_19 = 0;
                        temp_2_3 = AsXm__7VISound(temp_16);
                        BeginAdpcmTransfer__13VISoundDevicePPvUiiPi(arg0, temp_2_3 + 0x2C, M2C_FIELD(temp_2_3, s32 *, 0x14), M2C_FIELD(temp_2_3, s32 *, 0x30), temp_2_3 + 0x20);
                    } else if (M2C_FIELD(AsXm__7VISound(temp_16), s32 *, 0x1C) == 0) {
                        var_19 = 0;
                        temp_2_4 = AsXm__7VISound(temp_16);
                        BeginXmTransfer__13VISoundDevicePPvUiUiiPi(arg0, temp_2_4 + 0x24, M2C_FIELD(temp_2_4, s32 *, 0x18), M2C_FIELD(temp_2_4, s32 *, 0x14), M2C_FIELD(temp_2_4, s32 *, 0x28), temp_2_4 + 0x1C);
                    }
                    break;
                }
            }
            var_20 += 1;
            if (var_19 != 0) {
                var_18 += 4;
                if (var_20 < 0x80) {
                    goto loop_6;
                }
            } else {
                goto loop_1;
            }
        } else {
            IdleTransfer__13VISoundDevice(arg0);
            SetIopFunction__FUii(3, 0);
            FlushIopCommand__Fb(0);
        }
    } while (var_19 == 0);
    return 0;
}
