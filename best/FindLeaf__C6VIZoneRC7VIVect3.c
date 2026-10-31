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

s32 FindLeaf__C6VIZoneRC7VIVect3(void *arg0, void *arg1) {
    s32 temp_7;
    s32 var_2;
    s32 var_6;
    void *temp_2;
    void *temp_4;

    if (M2C_FIELD(arg0, s32 *, 0x44) != 0) {
        temp_7 = M2C_FIELD((arg0 + 0x44), s32 *, 4);
        var_6 = 0;
        var_2 = 0 * 2;
loop_2:
        temp_2 = temp_7 + ((var_2 + var_6) * 8);
        temp_4 = temp_7 + ((var_6 & 0x0FFFFFFF) * 0x18);
        if (((M2C_FIELD(arg1, f32 *, 0) * M2C_FIELD(temp_2, f32 *, 0)) + (M2C_FIELD(arg1, f32 *, 4) * M2C_FIELD(temp_2, f32 *, 4)) + (M2C_FIELD(arg1, f32 *, 8) * M2C_FIELD(temp_2, f32 *, 8)) + M2C_FIELD(temp_2, f32 *, 0xC)) >= 0.0f) {
            var_6 = M2C_FIELD(temp_4, s32 *, 0x10);
        } else {
            var_6 = M2C_FIELD(temp_4, s32 *, 0x14);
        }
        if (!(var_6 & 0x40000000)) {
            var_2 = var_6 * 2;
            goto loop_2;
        }
        return var_6 & 0x0FFFFFFF;
    }
    return 0;
}
