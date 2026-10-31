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

s32 connection_allocate_state_channels__FP12connection_t(); /* extern */
s32 endpoint_get_time__FP10endpoint_t(s32);         /* extern */
s32 memcmp(s32, s32, s32);                          /* extern */
s32 message_create__FPP9message_tP10endpoint_tP12connection_tUlUlPCvUiUcUsUi(s32 *, s32, void *, s64, s64, s32, s32, s32, s32, s32); /* extern */
M2C_UNK message_destroy__FP9message_t(s32);         /* extern */
s32 message_get_data__FP9message_t(s32);            /* extern */
s32 message_get_size__FPC9message_t(s32);           /* extern */
M2C_UNK vlist_add_tail__FP7vlist_tPv(void *, s32);  /* extern */
s32 vlist_peek_tail__FP7vlist_t(void *);            /* extern */
M2C_UNK vlist_remove__FP7vlist_tPv(void *, s32);    /* extern */
M2C_UNK vlist_replace__FP7vlist_tPvT1(void *, s32, s32); /* extern */

s32 connection_send_state__FP12connection_tPCUcii(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 sp10;
    s32 temp_4;
    s32 var_18;
    s32 var_2;
    s32 var_3;
    u8 temp_3;
    void *temp_17;

    var_3 = -1;
    sp10 = 0;
    if (arg3 < 0xF8) {
        var_3 = connection_allocate_state_channels__FP12connection_t();
        if (var_3 == 0) {
            temp_17 = M2C_FIELD(arg0, s32 *, 0x1180) + (arg3 * 0x3C);
            var_2 = M2C_FIELD(temp_17, s32 *, 0);
            if (var_2 == 0) {
                var_2 = vlist_peek_tail__FP7vlist_t(temp_17 + 0xC);
            }
            sp10 = var_2;
            if (sp10 == 0) {
                var_18 = arg2 == 0;
            } else {
                var_18 = 0;
                if ((message_get_size__FPC9message_t(sp10) == arg2) && (memcmp(arg1, message_get_data__FP9message_t(sp10), arg2) == 0)) {
                    var_18 = 1;
                }
            }
            var_3 = 0;
            if (var_18 == 0) {
                var_3 = message_create__FPP9message_tP10endpoint_tP12connection_tUlUlPCvUiUcUsUi(&sp10, M2C_FIELD(arg0, s32 *, 0x34), arg0, M2C_FIELD(arg0, s64 *, 0x48), M2C_FIELD(arg0, s64 *, 0x50), arg1, arg2, arg3 & 0xFF, 0xFFFF, endpoint_get_time__FP10endpoint_t(M2C_FIELD(arg0, s32 *, 0x34)));
                if (var_3 == 0) {
                    temp_3 = M2C_FIELD(temp_17, u8 *, 0xB);
                    switch (temp_3) {               /* irregular */
                    case 0:
                        vlist_add_tail__FP7vlist_tPv(arg0 + 0xBC, sp10);
                        break;
                    case 2:
                        vlist_add_tail__FP7vlist_tPv(arg0 + 0xBC, sp10);
                        vlist_remove__FP7vlist_tPv(arg0 + 0xD4, M2C_FIELD(temp_17, s32 *, 0));
                        break;
                    case 1:
                        vlist_replace__FP7vlist_tPvT1(arg0 + 0xBC, M2C_FIELD(temp_17, s32 *, 0), sp10);
                        break;
                    }
                    temp_4 = M2C_FIELD(temp_17, s32 *, 0);
                    if (temp_4 != 0) {
                        message_destroy__FP9message_t(temp_4);
                    }
                    M2C_FIELD(temp_17, u8 *, 0xB) = 1U;
                    M2C_FIELD(temp_17, s32 *, 0) = sp10;
                    var_3 = 0;
                }
            }
        }
    }
    return var_3;
}
