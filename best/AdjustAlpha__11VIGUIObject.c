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

void AdjustAlpha__11VIGUIObject(void *arg0) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 var_f0;
    s32 temp_3;

    temp_3 = M2C_FIELD(arg0, s32 *, 0x40);
    switch (temp_3) {                               /* irregular */
    case 3:
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x70);
        temp_f0 = M2C_FIELD(arg0, f32 *, 0x74);
        if (temp_f1 != temp_f0) {
            if (temp_f1 < temp_f0) {
                M2C_FIELD(arg0, f32 *, 0x70) = (f32) (M2C_FIELD(arg0, f32 *, 0x70) + M2C_FIELD(arg0, f32 *, 0x80));
                return;
            }
block_16:
            M2C_FIELD(arg0, f32 *, 0x70) = (f32) (M2C_FIELD(arg0, f32 *, 0x70) - M2C_FIELD(arg0, f32 *, 0x80));
        } else {
            return;
        }
        break;
    case 2:
        if (M2C_FIELD(arg0, s32 *, 0x64) == 0) {
            var_f0 = M2C_FIELD(arg0, f32 *, 0x78);
        } else {
            var_f0 = M2C_FIELD(arg0, f32 *, 0x7C);
        }
        M2C_FIELD(arg0, f32 *, 0x74) = var_f0;
        temp_f1_2 = M2C_FIELD(arg0, f32 *, 0x70);
        temp_f0_2 = M2C_FIELD(arg0, f32 *, 0x74);
        if (temp_f1_2 != temp_f0_2) {
            if (!(temp_f1_2 < temp_f0_2)) {
                goto block_16;
            }
            /* Duplicate return node #15. Try simplifying control flow for better match */
            M2C_FIELD(arg0, f32 *, 0x70) = (f32) (M2C_FIELD(arg0, f32 *, 0x70) + M2C_FIELD(arg0, f32 *, 0x80));
            return;
        }
        break;
    }
}
