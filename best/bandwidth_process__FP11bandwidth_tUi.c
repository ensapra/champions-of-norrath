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

s64 __divdi3(s32, u64);                             /* extern */
M2C_UNK _uassert(M2C_UNK *, M2C_UNK *, M2C_UNK);    /* extern */
extern M2C_UNK D_011C2630;
extern M2C_UNK D_011C2670;
extern M2C_UNK D_011C2688;
extern M2C_UNK D_011C26C8;
extern M2C_UNK D_011C2720;

void bandwidth_process__FP11bandwidth_tUi(void *arg0, s32 arg1) {
    f32 temp_f1;
    f32 var_f1;
    s32 temp_16;
    s32 temp_2;
    s64 temp_2_2;
    u64 temp_18;
    u64 temp_18_2;

    temp_2 = arg1 - M2C_FIELD(arg0, s32 *, 0xC);
    if (temp_2 >= 0) {
        var_f1 = (f32) temp_2;
    } else {
        var_f1 = 2.0f * (f32) ((temp_2 & 1) | ((u32) temp_2 >> 1));
    }
    temp_f1 = M2C_FIELD(arg0, f32 *, 4) - (M2C_FIELD(arg0, f32 *, 0) * (var_f1 * 0.0009999999f));
    M2C_FIELD(arg0, f32 *, 4) = temp_f1;
    if (temp_f1 < 0.0f) {
        M2C_FIELD(arg0, f32 *, 4) = 0.0f;
    }
    temp_18 = arg1 - M2C_FIELD(arg0, s32 *, 0x18);
    M2C_FIELD(arg0, s32 *, 0xC) = arg1;
    if (temp_18 >= 0x3E9U) {
        temp_16 = (((0x20C49B << 0x10) | 0xA5E3) << 0x10) | 0x53F6;
        if (temp_16 < M2C_FIELD(arg0, s64 *, 0x20)) {
            _uassert(&D_011C2630, &D_011C2670, 0x2A);
        }
        if (temp_16 < M2C_FIELD(arg0, s64 *, 0x28)) {
            _uassert(&D_011C2688, &D_011C2670, 0x2B);
        }
        temp_18_2 = (u64) (temp_18 << 0x20) >> 0x20;
        if (__divdi3(M2C_FIELD(arg0, s64 *, 0x20) * 0x3E8, temp_18_2) > 0x7FFFFFFE) {
            _uassert(&D_011C26C8, &D_011C2670, 0x2C);
        }
        if (__divdi3(M2C_FIELD(arg0, s64 *, 0x28) * 0x3E8, temp_18_2) > 0x7FFFFFFE) {
            _uassert(&D_011C2720, &D_011C2670, 0x2D);
        }
        M2C_FIELD(arg0, s32 *, 0x10) = (s32) ((s64) (__divdi3(M2C_FIELD(arg0, s64 *, 0x20) * 0x3E8, temp_18_2) << 0x20) >> 0x20);
        temp_2_2 = __divdi3(M2C_FIELD(arg0, s64 *, 0x28) * 0x3E8, temp_18_2);
        M2C_FIELD(arg0, s64 *, 0x20) = 0;
        M2C_FIELD(arg0, s32 *, 0x18) = arg1;
        M2C_FIELD(arg0, s32 *, 0x14) = (s32) ((s64) (temp_2_2 << 0x20) >> 0x20);
        M2C_FIELD(arg0, s64 *, 0x28) = 0;
    }
}
