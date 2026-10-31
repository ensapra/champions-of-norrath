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

M2C_UNK drdp_format_endpoint1__FUl(s64);            /* extern */
M2C_UNK drdp_format_endpoint2__FUl(s64);            /* extern */
M2C_UNK message_destroy__FP9message_t(s32);         /* extern */
s32 vlist_remove_head__FP7vlist_t(void *);          /* extern */

void connection_rx_reset__FP12connection_t(void *arg0) {
    s32 temp_2_2;
    s32 var_18;
    void *temp_2;

    M2C_FIELD(arg0, s32 *, 0x9C) = 0;
    M2C_FIELD(arg0, s8 *, 0x1123) = 0;
    M2C_FIELD(arg0, u16 *, 0x1120) = (u16) (M2C_FIELD(arg0, u16 *, 0x1120) & 0xFFDF);
    M2C_FIELD(arg0, s16 *, 0x1148) = 0;
    M2C_FIELD(arg0, s16 *, 0x1162) = 0;
    drdp_format_endpoint1__FUl(M2C_FIELD(arg0, s64 *, 0x48));
    drdp_format_endpoint2__FUl(M2C_FIELD(arg0, s64 *, 0x50));
    var_18 = 0;
    if (M2C_FIELD(arg0, s32 *, 0x1180) != 0) {
loop_1:
        temp_2 = M2C_FIELD(arg0, s32 *, 0x1180) + (var_18 * 0x3C);
        M2C_FIELD(temp_2, s16 *, 8) = 0;
        M2C_FIELD(temp_2, s8 *, 0xA) = 0;
loop_3:
        temp_2_2 = vlist_remove_head__FP7vlist_t(temp_2 + 0x24);
        if (temp_2_2 != 0) {
            message_destroy__FP9message_t(temp_2_2);
            goto loop_3;
        }
        var_18 += 1;
        if (var_18 < 0xF8) {
            goto loop_1;
        }
    }
}
