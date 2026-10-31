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

s32 Cull__9VICollideR12VICollSphereR6VIBBox(void *arg1, void *arg2) {
    f32 sp0;
    f32 sp4;
    f32 sp8;
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f2;
    f32 temp_f3;
    f32 temp_f4;
    f32 temp_f5;
    f32 temp_f6;
    s32 var_2;
    void *temp_2;

    temp_2 = arg2 + 0xC;
    temp_f4 = M2C_FIELD(arg1, f32 *, 0x58);
    temp_f6 = M2C_FIELD(arg2, f32 *, 0);
    sp0 = 0.0f;
    sp4 = 0.0f;
    sp8 = 0.0f;
    sp10 = 0.0f;
    sp18 = 0.0f;
    sp14 = 0.0f;
    sp0 = M2C_FIELD(arg2, f32 *, 0xC) + temp_f4;
    sp4 = M2C_FIELD(temp_2, f32 *, 4) + temp_f4;
    sp8 = M2C_FIELD(temp_2, f32 *, 8) + temp_f4;
    sp10 = temp_f6;
    sp14 = M2C_FIELD(arg2, f32 *, 4);
    sp18 = M2C_FIELD(arg2, f32 *, 8);
    temp_f5 = M2C_FIELD(arg1, f32 *, 0);
    sp10 = temp_f6 - temp_f4;
    sp14 -= temp_f4;
    sp18 -= temp_f4;
    if (!(sp0 < temp_f5) || (var_2 = 1, !(sp0 < M2C_FIELD(arg1, f32 *, 0xC)))) {
        temp_f3 = M2C_FIELD(arg1, f32 *, 4);
        temp_f1 = sp4;
        if (temp_f1 < temp_f3) {
            var_2 = 1;
            if (!(temp_f1 < M2C_FIELD(arg1, f32 *, 0x10))) {
                goto block_5;
            }
        } else {
block_5:
            temp_f2 = M2C_FIELD(arg1, f32 *, 8);
            temp_f1_2 = sp8;
            if ((!(temp_f1_2 < temp_f2) || (var_2 = 1, !(temp_f1_2 < M2C_FIELD(arg1, f32 *, 0x14)))) && ((temp_f1_3 = sp10, !(temp_f5 < temp_f1_3)) || (var_2 = 1, !(M2C_FIELD(arg1, f32 *, 0xC) < temp_f1_3))) && (!(temp_f3 < sp14) || (var_2 = 1, !(M2C_FIELD(arg1, f32 *, 0x10) < sp14)))) {
                var_2 = 0;
                if ((temp_f2 < sp18) && (M2C_FIELD(arg1, f32 *, 0x14) < sp18)) {
                    var_2 = 1;
                }
            }
        }
    }
    return var_2;
}
