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

s32 route_create__FPP7route_tP6drdp_tUl(s32 *, s32, s64); /* extern */
M2C_UNK route_send_reset_endpoint__FP7route_tUl(s32, s64); /* extern */
M2C_UNK vtree_insert__FP7vtree_tPv(s32, s32);       /* extern */
s32 vtree_lookup__FPC7vtree_tPCv(s32, s64 *);       /* extern */

void drdp_send_reset_endpoint__FP6drdp_tPC16segment_header_t(s32 arg0, void *arg1) {
    s64 sp8;
    s32 sp10;
    s32 temp_18;
    s32 temp_2;

    temp_18 = arg0 + 0x5C;
    if (!(M2C_FIELD(arg1, s32 *, 0) & 0x30000)) {
        sp8 = M2C_FIELD(arg1, s64 *, 0x10);
        temp_2 = vtree_lookup__FPC7vtree_tPCv(temp_18, &sp8);
        sp10 = temp_2;
        if (temp_2 == 0) {
            if (route_create__FPP7route_tP6drdp_tUl(&sp10, arg0, sp8) == 0) {
                vtree_insert__FP7vtree_tPv(temp_18, sp10);
                vtree_insert__FP7vtree_tPv(arg0 + 0x38, sp10);
                goto block_4;
            }
        } else {
block_4:
            if (0 == 0) {
                route_send_reset_endpoint__FP7route_tUl(sp10, M2C_FIELD(arg1, s64 *, 0x20));
            }
        }
    }
}
