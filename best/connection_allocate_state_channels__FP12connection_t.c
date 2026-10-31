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

s32 __wrap_malloc(M2C_UNK);                         /* extern */
s32 message_get_key_offset__Fi(M2C_UNK);            /* extern */
s32 message_get_vlink_offset__Fi(M2C_UNK);          /* extern */
M2C_UNK vlist_init__FP7vlist_tiPFPCvPCv_ii(void *, s32, M2C_UNK *, s32); /* extern */
extern M2C_UNK uns16_cmp__FPCUsT0;

s32 connection_allocate_state_channels__FP12connection_t(void *arg0) {
    s32 temp_16;
    s32 temp_16_2;
    s32 temp_2;
    s32 var_20;
    s32 var_21;
    s32 var_3;
    void *temp_2_2;

    var_3 = 0;
    if (M2C_FIELD(arg0, s32 *, 0x1180) == 0) {
        temp_2 = __wrap_malloc(0x3A20);
        var_3 = -2;
        M2C_FIELD(arg0, s32 *, 0x1180) = temp_2;
        if (temp_2 != 0) {
            var_21 = 0;
            var_20 = 0xF7;
loop_3:
            var_20 -= 1;
            temp_2_2 = M2C_FIELD(arg0, s32 *, 0x1180) + var_21;
            var_21 += 0x3C;
            M2C_FIELD(temp_2_2, s32 *, 0) = 0;
            M2C_FIELD(temp_2_2, s16 *, 4) = 1;
            M2C_FIELD(temp_2_2, s16 *, 8) = 0;
            M2C_FIELD(temp_2_2, s16 *, 6) = 0;
            M2C_FIELD(temp_2_2, s8 *, 0xA) = 0;
            M2C_FIELD(temp_2_2, s8 *, 0xB) = 0;
            temp_16 = message_get_vlink_offset__Fi(0);
            vlist_init__FP7vlist_tiPFPCvPCv_ii(temp_2_2 + 0xC, temp_16, &uns16_cmp__FPCUsT0, message_get_key_offset__Fi(0));
            temp_16_2 = message_get_vlink_offset__Fi(0);
            vlist_init__FP7vlist_tiPFPCvPCv_ii(temp_2_2 + 0x24, temp_16_2, &uns16_cmp__FPCUsT0, message_get_key_offset__Fi(0));
            if (var_20 >= 0) {
                goto loop_3;
            }
            var_3 = 0;
        }
    }
    return var_3;
}
