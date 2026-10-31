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

M2C_UNK drdp_arrival_remove__FP6drdp_tP9message_t(s32, s32); /* extern */
M2C_UNK message_destroy_buffer__FP9message_tP8buffer_t(s32, s32); /* extern */
s32 vlist_peek_head__FP7vlist_t(s32);               /* extern */
M2C_UNK vlist_remove__FP7vlist_tPv(s32, s32);       /* extern */

void endpoint_free_arrivals__FP10endpoint_tP8buffer_t(void *arg0, s32 arg1) {
    s32 temp_17;
    s32 temp_2;

    temp_17 = arg0 + 0x54;
loop_2:
    temp_2 = vlist_peek_head__FP7vlist_t(temp_17);
    if (temp_2 != 0) {
        drdp_arrival_remove__FP6drdp_tP9message_t(M2C_FIELD(arg0, s32 *, 0x14), temp_2);
        vlist_remove__FP7vlist_tPv(temp_17, temp_2);
        message_destroy_buffer__FP9message_tP8buffer_t(temp_2, arg1);
        goto loop_2;
    }
}
