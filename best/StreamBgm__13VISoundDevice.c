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

M2C_UNK FlushIopCommand__Fb(M2C_UNK);               /* extern */
M2C_UNK SetIopFunction__FUii(M2C_UNK, M2C_UNK);     /* extern */
s32 strcmp(f32 *, f32 *);                           /* extern */
M2C_UNK strcpy(f32 *, f32 *);                       /* extern */
extern f32 D_011EDF08;

s32 StreamBgm__13VISoundDevice(void *arg0) {
    f32 *temp_18;
    f32 *var_16;
    f32 temp_f0;
    f32 temp_f0_2;
    s32 temp_3;

    if ((M2C_FIELD(arg0, s8 *, 0xF6C) != 0) && (temp_3 = M2C_FIELD(arg0, s32 *, 0x116C), (temp_3 != 0))) {
        switch (temp_3) {                           /* irregular */
        case 1:
            temp_f0 = M2C_FIELD(arg0, f32 *, 0x1170) + 0.049999997f;
            M2C_FIELD(arg0, f32 *, 0x1170) = temp_f0;
            if (temp_f0 >= 1.0f) {
                M2C_FIELD(arg0, f32 *, 0x1170) = 1.0f;
                M2C_FIELD(arg0, s32 *, 0x116C) = 0;
            }
            goto block_12;
        case -1:
            temp_f0_2 = M2C_FIELD(arg0, f32 *, 0x1170) - 0.049999997f;
            M2C_FIELD(arg0, f32 *, 0x1170) = temp_f0_2;
            if (temp_f0_2 <= 0.0f) {
                M2C_FIELD(arg0, s32 *, 0x116C) = 0;
                M2C_FIELD(arg0, f32 *, 0x1170) = 0.0f;
                M2C_FIELD(&D_011EDF08, f32 *, 0) = 0.0f;
                SetIopFunction__FUii(0xE, 1);
                M2C_FIELD(arg0, s8 *, 0xF6C) = 0;
            } else {
                goto block_12;
            }
            break;
        }
    } else {
block_12:
        M2C_FIELD(arg0, s8 *, 0x106C) = 0;
        if (M2C_FIELD(arg0, s8 *, 0xD6C) != 0) {
            var_16 = arg0 + 0x106C;
            strcpy(var_16, arg0 + 0xD6C);
        } else {
            var_16 = arg0 + 0x106C;
            if (M2C_FIELD(arg0, s8 *, 0xE6C) != 0) {
                strcpy(var_16, arg0 + 0xE6C);
            }
        }
        temp_18 = arg0 + 0xF6C;
        if (strcmp(var_16, temp_18) != 0) {
            if (M2C_FIELD(arg0, s8 *, 0xF6C) != 0) {
                M2C_FIELD(arg0, s32 *, 0x116C) = -1;
            } else {
                strcpy(temp_18, var_16);
                strcpy(&D_011EDF08, temp_18);
                M2C_FIELD(&D_011EDF08, s32 *, 0x20) = (s32) M2C_FIELD(arg0, s32 *, 0x1178);
                SetIopFunction__FUii(0xD, 9);
                FlushIopCommand__Fb(0);
                M2C_FIELD(arg0, s32 *, 0x116C) = 0;
                M2C_FIELD(arg0, f32 *, 0x1170) = 1.0f;
            }
        }
        M2C_FIELD(&D_011EDF08, f32 *, 0) = M2C_FIELD(arg0, f32 *, 0xD64) * M2C_FIELD(arg0, f32 *, 0x1170);
        SetIopFunction__FUii(0xF, 1);
    }
    return 0;
}
