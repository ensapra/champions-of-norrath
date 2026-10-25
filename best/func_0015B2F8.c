/* machine draft (m2c) for ee-gcc-2.96 -Os -G8, tried by autopilot */
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

void func_0015B2F8(void *arg0) {
    s32 temp_2;
    s32 temp_2_2;
    s32 temp_2_3;
    s32 temp_3;
    s32 temp_5;
    s32 temp_5_2;
    s32 temp_6;
    s32 temp_6_2;
    s32 temp_6_3;
    s32 temp_7;
    s32 temp_8;
    s32 temp_9;
    s32 var_2;

    temp_6 = M2C_FIELD(arg0, s32 *, 0xBF0);
    if (temp_6 == 0) {
        M2C_FIELD(arg0, s32 *, 0xBF4) = 0;
        M2C_FIELD(arg0, s32 *, 0xB84) = 0;
    }
    temp_5 = M2C_FIELD(arg0, s32 *, 0xB8C);
    temp_9 = M2C_FIELD(arg0, s32 *, 0x5AC) - ((M2C_FIELD(arg0, s32 *, 0x8D4) + M2C_FIELD(arg0, s32 *, 0xCF0)) * 2);
    if (temp_5 < temp_6) {
        var_2 = M2C_FIELD(((temp_5 * 0x24) + M2C_FIELD(arg0, s32 *, 0xB80)), s32 *, 0x1C);
    } else {
        var_2 = M2C_FIELD(arg0, s32 *, 0xB98);
    }
    M2C_FIELD(arg0, s32 *, 0xB84) = var_2;
    temp_7 = M2C_FIELD(arg0, s32 *, 0xBF4);
    temp_6_2 = M2C_FIELD(arg0, s32 *, 0xD14);
    temp_5_2 = M2C_FIELD(arg0, s32 *, 0xB84) + temp_7;
    M2C_FIELD(arg0, s32 *, 0xB84) = temp_5_2;
    if (temp_5_2 < temp_6_2) {
        temp_2 = temp_7 - (temp_5_2 - temp_6_2);
        M2C_FIELD(arg0, s32 *, 0xBF4) = temp_2;
        if (temp_2 > 0) {
            M2C_FIELD(arg0, s32 *, 0xBF4) = 0;
            M2C_FIELD(arg0, s32 *, 0xB84) = (s32) (temp_6_2 - temp_2);
            return;
        }
        M2C_FIELD(arg0, s32 *, 0xB84) = temp_6_2;
        return;
    }
    temp_8 = M2C_FIELD(arg0, s32 *, 0xD18);
    temp_6_3 = temp_9 - temp_8;
    if (temp_6_3 < temp_5_2) {
        temp_3 = temp_7 + M2C_FIELD(arg0, s32 *, 0xB98);
        if ((temp_3 - temp_8) < temp_5_2) {
            temp_2_2 = temp_9 - temp_3;
            temp_2_3 = (temp_2_2 > 0) ? 0 : temp_2_2;
            M2C_FIELD(arg0, s32 *, 0xB84) = (s32) (temp_5_2 + temp_2_3);
            M2C_FIELD(arg0, s32 *, 0xBF4) = (s32) (temp_7 + temp_2_3);
            return;
        }
        if (temp_9 < temp_3) {
            M2C_FIELD(arg0, s32 *, 0xB84) = temp_6_3;
            M2C_FIELD(arg0, s32 *, 0xBF4) = (s32) (temp_7 - (temp_5_2 - temp_6_3));
        }
    }
}
