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

M2C_UNK _uassert(M2C_UNK *, M2C_UNK *, M2C_UNK);    /* extern */
s32 drdp_get_sw_endpoint_status__FP6drdp_tUl(s32, s64); /* extern */
s32 drdp_is_hardware_endpoint__FUl(s64);            /* extern */
s32 drdp_is_software_endpoint__FUl(s64);            /* extern */
M2C_UNK drdp_send_reset_connection__FP6drdp_tPC16segment_header_t(s32, void *); /* extern */
extern M2C_UNK D_011CBA48;
extern M2C_UNK D_011CBA70;
extern M2C_UNK D_011CBAD8;

void endpoint_send_reset_connection__FP10endpoint_tPC16segment_header_t(void *arg0, void *arg1) {
    s32 temp_17;

    if ((drdp_is_hardware_endpoint__FUl(M2C_FIELD(arg1, s64 *, 0x18)) != 0) || (drdp_is_hardware_endpoint__FUl(M2C_FIELD(arg1, s64 *, 0x20)) != 0)) {
        drdp_send_reset_connection__FP6drdp_tPC16segment_header_t(M2C_FIELD(arg0, s32 *, 0x14), arg1);
        return;
    }
    temp_17 = drdp_get_sw_endpoint_status__FP6drdp_tUl(M2C_FIELD(arg0, s32 *, 0x14), M2C_FIELD(arg1, s64 *, 0x18));
    if ((drdp_is_software_endpoint__FUl(M2C_FIELD(arg1, s64 *, 0x18)) == 0) || (drdp_is_software_endpoint__FUl(M2C_FIELD(arg1, s64 *, 0x20)) == 0)) {
        _uassert(&D_011CBA70, &D_011CBA48, 0x1B0);
    }
    if ((temp_17 >= 0) && (temp_17 >= 2) && (temp_17 == 2)) {
        if (!(M2C_FIELD(arg1, s32 *, 0) & 0x8000)) {
            _uassert(&D_011CBAD8, &D_011CBA48, 0x1BE);
        }
    }
}
