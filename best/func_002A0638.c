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

s32 func_00153FA8(void *);                          /* extern */
M2C_UNK func_001CE218(void *, void *, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, f32, f32); /* extern */
M2C_UNK func_002A0888(void *, M2C_UNK);             /* extern */
extern M2C_UNK D_004086D0;
extern f32 D_004829A4;

void func_002A0638(void *arg0, void *arg1) {
    f32 temp_f20;
    s32 temp_19;
    s32 temp_20;
    s32 temp_3_2;
    s32 temp_3_3;
    void *temp_10;
    void *temp_3;
    void *temp_3_4;
    void *temp_3_5;
    void *temp_5;
    void *temp_6;
    void *temp_7;
    void *temp_8;

    if (M2C_FIELD(arg0, void **, 0x4C) != NULL) {
        temp_8 = M2C_FIELD(arg0, void **, 0xAC);
        temp_3 = M2C_FIELD(temp_8, void **, 0x60);
        temp_f20 = D_004829A4;
        temp_19 = M2C_FIELD((temp_3 + 0x70), s32 (**)(void *, M2C_UNK, s32, void *, void *), 4)(temp_8 + M2C_FIELD(temp_3, s16 *, 0x70), 0, M2C_FIELD(arg0, s32 *, 0x68), arg0 + 0x4C, temp_8);
        temp_6 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x4C), void **, 0xC);
        temp_20 = temp_19 + M2C_BITWISE(s32, ((f32) func_00153FA8(arg0) * 0.000015258789f));
        if (M2C_FIELD(temp_6, s32 *, 0xC) & 0x40) {
            temp_3_2 = M2C_FIELD(arg1, s32 *, 0xC);
            if (!(temp_3_2 & 0x01000040) && (!(temp_3_2 & 0x20) || !(M2C_FIELD(arg1, s64 *, 0xA0) & 0x04000000))) {
                temp_3_3 = M2C_FIELD(arg0, s32 *, 0x68);
                temp_5 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x4C), void **, 0xC);
                temp_10 = &D_004086D0 + (M2C_FIELD(temp_5, s32 *, 0x3C0) * 0x5DB0);
                func_001CE218(arg1, temp_5, 0x186A0, 0, 0, (((temp_3_3 < 0x10) ^ 0) == 0) ? 0x90040 : ((temp_3_3 >= 0xB) ? 0x50040 : 0x10040), 0, 0, (f32) (M2C_FIELD(temp_10, s32 *, 4) + temp_19), (f32) (M2C_FIELD(temp_10, s32 *, 8) + temp_19));
                goto block_8;
            }
        } else {
            temp_3_4 = M2C_FIELD(temp_6, void **, 0x48);
            if (M2C_FIELD((temp_3_4 + 0xA0), s32 (**)(void *, void *, void *), 4)(temp_6 + M2C_FIELD(temp_3_4, s16 *, 0xA0), arg1, temp_6) != 0) {
                func_001CE218(arg1, M2C_FIELD(M2C_FIELD(arg0, void **, 0x4C), void **, 0xC), 0x186A0, 0, 0, 0x10040, 0, 0, (f32) temp_19, (f32) temp_20);
block_8:
                if (M2C_FIELD(arg1, s32 *, 0xC) & 0x20) {
                    temp_7 = M2C_FIELD(arg0, void **, 0xAC);
                    temp_3_5 = M2C_FIELD(temp_7, void **, 0x60);
                    M2C_FIELD(arg1, f32 *, 0x364) = (f32) M2C_FIELD((temp_3_5 + 0x58), s32 (**)(void *, M2C_UNK, s32, void *), 4)(temp_7 + M2C_FIELD(temp_3_5, s16 *, 0x58), 3, M2C_FIELD(arg0, s32 *, 0x68), temp_7);
                }
                func_002A0888(arg0, 2);
            }
        }
    }
}
