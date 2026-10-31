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

s32 message_get_key_offset__Fi(M2C_UNK);            /* extern */
s32 message_get_vlink_offset__Fi(M2C_UNK);          /* extern */
M2C_UNK vlist_init__FP7vlist_tiPFPCvPCv_ii(s32, s32, M2C_UNK *, s32); /* extern */
extern M2C_UNK uns16_cmp__FPCUsT0;

void state_channel_init__FP15state_channel_t(void *arg0) {
    s32 temp_17;
    s32 temp_17_2;

    M2C_FIELD(arg0, s16 *, 4) = 1;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s16 *, 8) = 0;
    M2C_FIELD(arg0, s16 *, 6) = 0;
    M2C_FIELD(arg0, s8 *, 0xA) = 0;
    M2C_FIELD(arg0, s8 *, 0xB) = 0;
    temp_17 = message_get_vlink_offset__Fi(0);
    vlist_init__FP7vlist_tiPFPCvPCv_ii(arg0 + 0xC, temp_17, &uns16_cmp__FPCUsT0, message_get_key_offset__Fi(0));
    temp_17_2 = message_get_vlink_offset__Fi(0);
    vlist_init__FP7vlist_tiPFPCvPCv_ii(arg0 + 0x24, temp_17_2, &uns16_cmp__FPCUsT0, message_get_key_offset__Fi(0));
}
