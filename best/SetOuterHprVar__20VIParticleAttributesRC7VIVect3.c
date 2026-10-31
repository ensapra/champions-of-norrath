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

void SetOuterHprVar__20VIParticleAttributesRC7VIVect3(void *arg0, void *arg1) {
    f32 temp_f2;
    void *temp_3;

    temp_f2 = M2C_FIELD(arg1, f32 *, 0);
    temp_3 = arg0 + 0x288;
    if (temp_f2 == 0.0f) {
        if (M2C_FIELD(arg1, f32 *, 4) == 0.0f) {
            if (M2C_FIELD(arg1, f32 *, 8) == 0.0f) {
                M2C_FIELD(arg0, s32 *, 0x2B8) = 0;
            } else {
                goto block_5;
            }
        } else {
            goto block_6;
        }
    } else {
block_5:
block_6:
        M2C_FIELD(arg0, s32 *, 0x2B8) = 1;
    }
    M2C_FIELD(arg0, f32 *, 0x288) = temp_f2;
    M2C_FIELD(temp_3, f32 *, 4) = (f32) M2C_FIELD(arg1, f32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x2CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x2CC) + 1);
    M2C_FIELD(temp_3, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 8);
}
