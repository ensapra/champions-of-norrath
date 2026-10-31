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

extern M2C_UNK xmlParseTryOrFinish;

void func_00187DF8(void *arg0, s32 arg1, s32 arg2) {
    s16 temp_17;
    s16 temp_17_2;
    s16 temp_18;
    s16 temp_18_2;
    s32 temp_2;
    void *temp_20;
    void *temp_20_2;
    void *temp_20_3;
    void *temp_20_4;

    temp_20 = arg0 + 0x10;
    M2C_FIELD(M2C_FIELD(&xmlParseTryOrFinish, void **, 0x958), M2C_UNK (**)(), 0xFC)();
    temp_17 = arg1 - M2C_FIELD(M2C_FIELD(&xmlParseTryOrFinish, void **, 0x958), s32 (**)(M2C_UNK), 0xE8)(0x20);
    temp_18 = arg2 - M2C_FIELD(M2C_FIELD(&xmlParseTryOrFinish, void **, 0x958), s32 (**)(M2C_UNK), 0xE4)(0x20);
    temp_17_2 = (temp_17 < 0) ? 0 : temp_17;
    temp_18_2 = (temp_18 < 0) ? 0 : temp_18;
    M2C_FIELD(temp_20, s16 *, 0xE) = temp_18_2;
    temp_20_2 = arg0 + 0x40;
    M2C_FIELD(arg0, s16 *, 0x3C) = temp_17_2;
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) (temp_18_2 + M2C_FIELD(temp_20, s32 *, 4));
    M2C_FIELD(temp_20_2, s16 *, 0xE) = temp_18_2;
    M2C_FIELD(temp_20_2, s16 *, 0xC) = temp_17_2;
    temp_20_3 = arg0 + 0x50;
    M2C_FIELD(temp_20_3, s16 *, 0xC) = temp_17_2;
    M2C_FIELD(temp_20_3, s32 *, 4) = (s32) (temp_18_2 + M2C_FIELD(temp_20_2, s32 *, 4));
    temp_2 = M2C_FIELD(arg0, s32 *, 0x50) + (u16) M2C_FIELD(temp_20_3, s16 *, 0xC);
    M2C_FIELD(arg0, s32 *, 0x60) = temp_2;
    temp_20_4 = arg0 + 0x70;
    M2C_FIELD(temp_20_4, s16 *, 0xE) = temp_18_2;
    M2C_FIELD(arg0, s32 *, 0x70) = temp_2;
    M2C_FIELD((arg0 + 0x80), s32 *, 4) = (s32) ((u16) M2C_FIELD(temp_20_4, s16 *, 0xE) + M2C_FIELD(temp_20_4, s32 *, 4));
    M2C_FIELD(arg0, s32 *, 0x80) = (s32) M2C_FIELD(arg0, s32 *, 0x70);
}
