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

M2C_UNK func_001558B0(void *, s32, s8 *, s32);      /* extern */
s8 *func_0016FA70(s32);                             /* extern */

void func_00155780(void *arg0) {
    s32 temp_4;
    s32 temp_4_2;
    s32 temp_5;
    s32 var_17_2;
    s32 var_5;
    s8 *var_17;
    s8 *var_6;

    temp_4 = M2C_FIELD(arg0, s32 *, 0x924);
    if (temp_4 == 0) {
        M2C_FIELD(arg0, s8 **, 0x918) = NULL;
    } else {
        M2C_FIELD(arg0, s8 **, 0x918) = func_0016FA70(temp_4);
    }
    temp_4_2 = M2C_FIELD(arg0, s32 *, 0x928);
    M2C_FIELD(arg0, s32 *, 0x924) = 0;
    if (temp_4_2 != 0) {
        M2C_FIELD(arg0, s8 **, 0x91C) = func_0016FA70(temp_4_2);
    } else {
        M2C_FIELD(arg0, s8 **, 0x91C) = NULL;
    }
    var_6 = M2C_FIELD(arg0, s8 **, 0x918);
    M2C_FIELD(arg0, s32 *, 0x928) = 0;
    M2C_FIELD(arg0, s32 *, 0x4D0) = 0;
    M2C_FIELD(arg0, s32 *, 0x914) = 0;
    if (var_6 != NULL) {
        var_17 = var_6;
        if (*var_6 != 0) {
loop_9:
            if (*var_17 == 0xA) {
                func_001558B0(arg0, M2C_FIELD(arg0, s32 *, 0x914), var_6, var_17 - var_6);
                var_6 = var_17 + 1;
                M2C_FIELD(arg0, s32 *, 0x914) = (s32) (M2C_FIELD(arg0, s32 *, 0x914) + 1);
            }
            var_17 += 1;
            if ((*var_17 != 0) && (M2C_FIELD(arg0, s32 *, 0x914) < 0x28)) {
                goto loop_9;
            }
        }
        temp_5 = M2C_FIELD(arg0, s32 *, 0x914);
        if ((temp_5 < 0x28) && (var_17 != var_6)) {
            func_001558B0(arg0, temp_5, var_6, var_17 - var_6);
            M2C_FIELD(arg0, s32 *, 0x914) = (s32) (M2C_FIELD(arg0, s32 *, 0x914) + 1);
        }
    }
    var_17_2 = M2C_FIELD(arg0, s32 *, 0x914);
    if (var_17_2 < 0x28) {
        var_5 = var_17_2;
        do {
            var_17_2 += 1;
            func_001558B0(arg0, var_5, NULL, 0);
            var_5 = var_17_2;
        } while (var_17_2 < 0x28);
    }
}
