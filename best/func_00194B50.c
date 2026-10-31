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

M2C_UNK func_00194CD8(s32, void *, s32, s32, M2C_UNK, void *, s32); /* extern */
M2C_UNK func_001A1568(void *, M2C_UNK, void *);     /* extern */
extern s32 D_00480468;
extern s32 D_0048046C;
extern s32 D_00480470;
extern void *D_00480488;
extern M2C_UNK D_00508021;
extern M2C_UNK jtbl_004C006C;

void func_00194B50(s32 arg0, void *arg1, s32 arg2) {
    s32 temp_10;
    s32 temp_7;
    s32 var_18;
    void *temp_2;
    void *temp_2_2;
    void *temp_6;
    void *temp_7_2;
    void *temp_9;
    void *var_17;

    if (arg0 == 0) {
        func_001A1568(&jtbl_004C006C + 0xEC4C, 0x200, &D_00508021 + 0x43F);
    }
    if (arg1 == NULL) {
        func_001A1568(&jtbl_004C006C + 0xEC4C, 0x201, &jtbl_004C006C + 0xED04);
    }
    temp_2 = D_00480488;
    if (arg2 == 0) {
        func_001A1568(&jtbl_004C006C + 0xEC4C, 0x202, &jtbl_004C006C + 0xEE24);
    }
    if (M2C_FIELD(temp_2, s32 (**)(), 0x30)() == 0) {
        temp_9 = arg1 + 0x90;
        temp_10 = M2C_FIELD(arg1, s32 *, 0x6C);
        temp_7 = M2C_FIELD(arg1, u8 *, 0x83) << 0x18;
        var_17 = temp_9;
        var_18 = 0;
        func_00194CD8(temp_10 + (M2C_FIELD(((M2C_FIELD(arg1, s32 *, 0x48) * 0x198) + M2C_FIELD(arg1, s32 *, 0x78)), u16 *, 0x180) * 0x10), temp_9, M2C_FIELD(arg1, s32 *, 0xE0), temp_7, 0x808080, temp_9, temp_10);
        D_00480468 = M2C_FIELD(arg1, s32 *, 0x48);
        D_0048046C = M2C_FIELD(arg1, s32 *, 0x84);
        D_00480470 = M2C_FIELD(arg1, s32 *, 0x88);
        M2C_FIELD(D_00480488, M2C_UNK (**)(s32, s32), 0x118)(arg0, arg2);
        temp_2_2 = D_00480488;
        do {
            temp_6 = var_17;
            var_17 += 0x10;
            temp_7_2 = &jtbl_004C006C + 0xEC24 + (var_18 * 8);
            var_18 += 1;
            M2C_FIELD(temp_2_2, M2C_UNK (**)(s32, s32, void *, void *, s32), 0x11C)(arg0, temp_7 | 0x808080, temp_6, temp_7_2, arg2);
        } while (var_18 < 4);
    }
}
