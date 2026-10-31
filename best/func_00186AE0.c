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

M2C_UNK func_00186E80(u16, u16, u16, u16, u16, void *); /* extern */
extern M2C_UNK xmlParseTryOrFinish;

void func_00186AE0(u64 arg0) {
    u16 temp_16;
    u16 temp_17;
    u16 temp_18;
    u16 temp_19;
    u16 temp_8;
    void *temp_20;

    temp_20 = &xmlParseTryOrFinish + 0x8D0;
    temp_8 = M2C_FIELD(temp_20, u16 *, 0x34);
    temp_19 = (arg0 >> 0x30) & 0xFFFF;
    temp_18 = (arg0 >> 0x20) & 0xFFFF & 0xFFFF;
    temp_17 = (arg0 >> 0x10) & 0xFFFF & 0xFFFF;
    temp_16 = arg0 & 0xFFFF & 0xFFFF;
    if ((temp_8 != temp_19) || (M2C_FIELD(temp_20, u16 *, 0x36) != temp_18) || (M2C_FIELD(temp_20, u16 *, 0x38) != temp_17) || (M2C_FIELD(temp_20, u16 *, 0x3A) != temp_16)) {
        func_00186E80(temp_19, temp_18, temp_17, temp_16, temp_8, temp_20);
        M2C_FIELD(temp_20, u16 *, 0x34) = temp_19;
        M2C_FIELD(temp_20, u16 *, 0x36) = temp_18;
        M2C_FIELD(temp_20, u16 *, 0x38) = temp_17;
        M2C_FIELD(temp_20, u16 *, 0x3A) = temp_16;
    }
}
