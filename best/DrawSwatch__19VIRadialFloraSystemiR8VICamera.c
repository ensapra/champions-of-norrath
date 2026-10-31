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

s32 Cull__C9VIFrustumRC8VISphere(void *, void *);   /* extern */

s32 DrawSwatch__19VIRadialFloraSystemiR8VICamera(void *arg0, s32 arg1, void *arg2) {
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f3;
    s32 *temp_3_2;
    s32 temp_3_3;
    s32 temp_ret;
    s32 var_18;
    s32 var_19;
    void *temp_17;
    void *temp_2;
    void *temp_3;

    var_18 = 0;
    temp_3 = M2C_FIELD(((arg1 * 4) + arg0), void **, 0x20);
    temp_3_2 = temp_3 + 0x2C;
    if ((M2C_FIELD(temp_3, s32 *, 0x2C) > 0) && (M2C_FIELD(arg0, s32 *, 0x44) < 0x2BC)) {
        temp_17 = arg2 + 0x1C;
        var_19 = 0;
loop_3:
        temp_2 = M2C_FIELD(temp_3_2, s32 *, 4) + var_19;
        var_19 += 0x60;
        temp_f1 = M2C_FIELD(arg2, f32 *, 0x1C) - M2C_FIELD(temp_2, f32 *, 0x30);
        temp_f3 = M2C_FIELD(temp_17, f32 *, 4) - M2C_FIELD(temp_2, f32 *, 0x34);
        temp_f2 = M2C_FIELD(temp_17, f32 *, 8) - M2C_FIELD(temp_2, f32 *, 0x38);
        if (((temp_f1 * temp_f1) + (temp_f3 * temp_f3) + (temp_f2 * temp_f2)) < 1600.0f) {
            temp_ret = Cull__C9VIFrustumRC8VISphere(arg2 + 0x130, temp_2 + 0x40);
            if (temp_ret == 0) {
                M2C_ERROR(/* unknown instruction: c1 0x140004 */);
                M2C_FIELD(((M2C_FIELD(arg0, s32 *, 0x44) * 0xC) + arg0), s32 *, 0x4C) = arg1;
                M2C_FIELD(((M2C_FIELD(arg0, s32 *, 0x44) * 0xC) + arg0), s32 *, 0x50) = var_18;
                temp_3_3 = M2C_FIELD(arg0, s32 *, 0x44);
                M2C_FIELD(arg0, s32 *, 0x44) = (s32) (temp_3_3 + 1);
                M2C_FIELD(((temp_3_3 * 0xC) + arg0), f32 *, 0x48) = M2C_BITWISE(f32, temp_ret);
            }
        }
        var_18 += 1;
        if ((var_18 < M2C_FIELD(temp_3_2, s32 *, 0)) && (M2C_FIELD(arg0, s32 *, 0x44) < 0x2BC)) {
            goto loop_3;
        }
    }
    return 0;
}
