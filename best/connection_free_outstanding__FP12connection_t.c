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

M2C_UNK message_destroy__FP9message_t(s32);         /* extern */
s32 vlist_remove_head__FP7vlist_t(s32);             /* extern */

void connection_free_outstanding__FP12connection_t(void *arg0) {
    s32 temp_17;
    s32 temp_2;
    s32 temp_2_2;
    s32 temp_2_3;
    s32 temp_2_4;
    s32 temp_2_5;
    s32 temp_2_6;
    s32 var_18;

loop_3:
    temp_2 = vlist_remove_head__FP7vlist_t(arg0 + 0xBC);
    if (temp_2 != 0) {
        message_destroy__FP9message_t(temp_2);
        goto loop_3;
    }
loop_6:
    temp_2_2 = vlist_remove_head__FP7vlist_t(arg0 + 0xD4);
    if (temp_2_2 != 0) {
        message_destroy__FP9message_t(temp_2_2);
        goto loop_6;
    }
loop_9:
    temp_2_3 = vlist_remove_head__FP7vlist_t(arg0 + 0x104);
    if (temp_2_3 != 0) {
        message_destroy__FP9message_t(temp_2_3);
        goto loop_9;
    }
loop_12:
    temp_2_4 = vlist_remove_head__FP7vlist_t(arg0 + 0xEC);
    if (temp_2_4 != 0) {
        message_destroy__FP9message_t(temp_2_4);
        goto loop_12;
    }
    var_18 = 0;
    if (M2C_FIELD(arg0, s32 *, 0x1180) != 0) {
loop_14:
        temp_17 = M2C_FIELD(arg0, s32 *, 0x1180) + (var_18 * 0x3C);
loop_17:
        temp_2_5 = vlist_remove_head__FP7vlist_t(temp_17 + 0xC);
        if (temp_2_5 != 0) {
            message_destroy__FP9message_t(temp_2_5);
            goto loop_17;
        }
loop_20:
        temp_2_6 = vlist_remove_head__FP7vlist_t(temp_17 + 0x24);
        if (temp_2_6 != 0) {
            message_destroy__FP9message_t(temp_2_6);
            goto loop_20;
        }
        var_18 += 1;
        if (var_18 < 0xF8) {
            goto loop_14;
        }
    }
}
