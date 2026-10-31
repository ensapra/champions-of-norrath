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

s32 func_001671F8(M2C_UNK *);                       /* extern */
M2C_UNK func_00190E20(s32, s32, f32, f32, f32, f32, f32, f32, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK D_004779E8;
extern M2C_UNK D_00477A00;
extern M2C_UNK D_00477A18;
extern f32 D_004826CC;
extern f32 D_004826D0;
extern f32 D_004826D4;
extern f32 D_004826D8;
extern f32 D_004826DC;

void func_00290B20(void *arg0, s32 arg1, s32 arg2) {
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f12_3;
    f32 temp_f14;
    f32 temp_f14_2;
    s32 temp_18;
    s32 temp_19;
    s32 temp_20;
    s32 temp_2;
    s32 temp_5;
    s32 temp_5_2;
    s32 temp_5_3;
    void *temp_3;
    void *temp_3_2;
    void *temp_3_3;
    void *temp_3_4;

    temp_3 = M2C_FIELD(arg0, void **, 0x60);
    temp_3_2 = M2C_FIELD(arg0, void **, 0x60);
    temp_18 = M2C_FIELD((temp_3 + 0x58), s32 (**)(void *, M2C_UNK), 4)(arg0 + M2C_FIELD(temp_3, s16 *, 0x58), 0);
    temp_3_3 = M2C_FIELD(arg0, void **, 0x60);
    temp_19 = M2C_FIELD((temp_3_2 + 0x58), s32 (**)(void *, M2C_UNK, s32), 4)(arg0 + M2C_FIELD(temp_3_2, s16 *, 0x58), 1, arg2);
    temp_3_4 = M2C_FIELD(arg0, void **, 0x60);
    temp_20 = M2C_FIELD((temp_3_3 + 0x58), s32 (**)(void *, M2C_UNK, s32), 4)(arg0 + M2C_FIELD(temp_3_3, s16 *, 0x58), 2, arg2);
    temp_2 = M2C_FIELD((temp_3_4 + 0x58), s32 (**)(void *, M2C_UNK, s32), 4)(arg0 + M2C_FIELD(temp_3_4, s16 *, 0x58), 3, arg2);
    if (temp_2 != 0) {
        if (temp_20 == 0) {
            goto block_24;
        }
        if (temp_19 != 0) {
            temp_f12 = (f32) temp_18;
            temp_5 = func_001671F8(&D_004779E8);
            if ((temp_f12 + (temp_f12 * D_004826CC)) >= 0.0f) {

            }
            temp_f14 = (f32) temp_19;
            if ((temp_f14 + (temp_f14 * D_004826D0)) >= 0.0f) {

            }
            func_00190E20(arg1, temp_5, temp_f12, (f32) 0, temp_f14, (f32) 0, (f32) temp_20, (f32) temp_2, 0, 0);
            return;
        }
        goto block_14;
    }
block_14:
    if ((temp_20 != 0) && (temp_19 != 0)) {
        temp_f12_2 = (f32) temp_18;
        temp_5_2 = func_001671F8(&D_00477A00);
        if ((temp_f12_2 + (temp_f12_2 * D_004826D4)) >= 0.0f) {

        }
        temp_f14_2 = (f32) temp_19;
        if ((temp_f14_2 + (temp_f14_2 * D_004826D8)) >= 0.0f) {

        }
        func_00190E20(arg1, temp_5_2, temp_f12_2, (f32) 0, temp_f14_2, (f32) 0, (f32) temp_20, 0.0f, 0, 0);
        return;
    }
block_24:
    temp_f12_3 = (f32) temp_18;
    temp_5_3 = func_001671F8(&D_00477A18);
    if ((temp_f12_3 + (temp_f12_3 * D_004826DC)) >= 0.0f) {

    }
    func_00190E20(arg1, temp_5_3, temp_f12_3, (f32) 0, 0.0f, 0.0f, 0.0f, 0.0f, 0, 0);
}
