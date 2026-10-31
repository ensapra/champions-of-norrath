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

void func_00196B88(void *arg0) {
    s32 temp_17;
    s32 var_5;
    u32 var_6;
    u8 temp_2;
    void *temp_4;

    temp_17 = M2C_FIELD(arg0, u8 *, 0x52) & 0x7F;
    if (arg0 == NULL) {
        func_001A1568(&jtbl_004C006C + 0xEC4C, 0x7C1, &jtbl_004C006C + 0xED04);
    }
    var_6 = 0;
    if (M2C_FIELD(arg0, u32 *, 0x68) != 0) {
        var_5 = 0;
        do {
            temp_4 = var_5 + M2C_FIELD(arg0, s32 *, 0x78);
            var_5 += 0x198;
            if (M2C_FIELD((temp_4 + (temp_17 * 0x30)), u16 *, 4) == 0) {
                temp_2 = M2C_FIELD(temp_4, u8 *, 0x18C);
                if (!(temp_2 & 0x10)) {
                    M2C_FIELD(temp_4, u8 *, 0x18C) = (u8) (temp_2 & 0xFB);
                }
            }
            var_6 += 1;
        } while (var_6 < (u32) M2C_FIELD(arg0, u32 *, 0x68));
    }
}
