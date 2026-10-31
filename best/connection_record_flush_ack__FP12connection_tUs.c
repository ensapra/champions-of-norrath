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

s32 endpoint_get_time__FP10endpoint_t(s32, s32);    /* extern */

void connection_record_flush_ack__FP12connection_tUs(void *arg0, s32 arg1) {
    s32 *temp_17;
    s32 temp_2;
    s32 temp_4;
    s32 temp_5;
    s32 var_7;
    u16 *var_6;
    u16 temp_2_2;
    u16 temp_4_2;
    u16 var_3;

    temp_5 = arg1 & 0xFFFF;
    if (!((temp_5 - ((M2C_FIELD(arg0, u16 *, 0x1146) + 0xFC00) & 0xFFFF)) & 0x8000)) {
        temp_17 = arg0 + (((temp_5 & 0x3FF) * 4) + 0x120);
        if (*temp_17 != 0) {
            temp_2 = endpoint_get_time__FP10endpoint_t(M2C_FIELD(arg0, s32 *, 0x34), temp_5);
            temp_4 = *temp_17;
            *temp_17 = 0;
            temp_2_2 = temp_2 - temp_4;
            var_6 = arg0 + 0x1128;
            var_7 = 0xE;
            M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x1122) * 2) + arg0), u16 *, 0x1126) = (u16) ((temp_2_2 <= 0xFFFFU) ? temp_2_2 : 0xFFFFU);
            M2C_FIELD(arg0, u16 *, 0x1124) = (u16) M2C_FIELD(arg0, u16 *, 0x1126);
            do {
                var_3 = *var_6;
                temp_4_2 = M2C_FIELD(arg0, u16 *, 0x1124);
                var_6 += 2;
                if (var_3 < temp_4_2) {
                    var_3 = temp_4_2;
                }
                var_7 -= 1;
                M2C_FIELD(arg0, u16 *, 0x1124) = var_3;
            } while (var_7 >= 0);
            M2C_FIELD(arg0, u8 *, 0x1122) = (u8) ((M2C_FIELD(arg0, u8 *, 0x1122) + 1) & 0xFF & 0xF);
        }
    }
}
