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

M2C_UNK func_001A1568(void *, M2C_UNK, void *);     /* extern */
extern M2C_UNK jtbl_004C006C;

s32 func_00195A78(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_17;
    s32 var_4;
    u32 temp_7;
    u32 var_6;
    void *temp_5;

    temp_17 = M2C_FIELD(arg0, u8 *, 0x52) & 0x7F;
    if (arg0 == NULL) {
        func_001A1568(&jtbl_004C006C + 0xEC4C, 0x514, &jtbl_004C006C + 0xED04);
    }
    temp_7 = M2C_FIELD(arg0, u32 *, 0x68);
    var_6 = 0;
    if (temp_7 != 0) {
        var_4 = 0;
loop_4:
        temp_5 = var_4 + M2C_FIELD(arg0, s32 *, 0x78);
        var_4 += 0x198;
        if (arg1 == M2C_FIELD((temp_5 + (temp_17 * 0x30)), u16 *, 4)) {
            M2C_FIELD(temp_5, u8 *, 0x18C) = (u8) (M2C_FIELD(temp_5, u8 *, 0x18C) & ~(arg2 & 0xFF));
            return 0;
        }
        var_6 += 1;
        if (var_6 >= temp_7) {
            goto block_7;
        }
        goto loop_4;
    }
block_7:
    return 1;
}
