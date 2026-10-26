/* machine draft (m2c), tried by autopilot */
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

M2C_UNK func_00164020(M2C_UNK *);                   /* extern */
M2C_UNK func_00165B30(M2C_UNK *, s32, s32, s32, s32, s32, s32, s32); /* extern */
M2C_UNK func_0017DD68(s32);                         /* extern */
M2C_UNK func_00191490(M2C_UNK *, M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_001C7828();                            /* extern */
M2C_UNK func_001CD1E0();                            /* extern */
M2C_UNK func_0024EE18(s32 *, s32 *, s32, s32 *, s32, s32 *, s32, s32 *); /* extern */
extern M2C_UNK D_0034B8C8;
extern M2C_UNK D_0034B8D8;
extern M2C_UNK D_0034B8E8;
extern M2C_UNK D_0034B908;
extern M2C_UNK D_0034B918;
extern M2C_UNK D_0034B928;
extern M2C_UNK D_0034B958;
extern M2C_UNK D_0034B968;
extern M2C_UNK D_0034B978;
extern M2C_UNK D_0042E300;
extern M2C_UNK D_0046C530;
extern M2C_UNK D_0046C9A0;
extern s8 D_00483F44;
extern s32 D_00483F58;
extern s32 D_00483F5C;
extern s32 D_00483F60;
extern s32 D_00483F64;
extern s32 D_00483F68;
extern s32 D_00483F6C;
extern s32 D_00483F70;
extern s32 D_00483F74;
extern s32 D_00484040;
extern s32 D_00484048;
extern s32 D_0048404C;
extern s32 D_0048433C;
extern s32 D_00484340;
extern f32 D_00484420;
extern s32 D_00484498;
extern M2C_UNK D_00484EB0;
extern s32 D_00484F58;
extern s32 D_00484F5C;
extern s32 D_00484F60;
extern s32 D_00484F68;
extern s32 D_00485010;
extern f32 D_00485930;
extern f32 D_00485934;
extern s32 D_00485938;
extern s32 D_004865DC;
extern f32 D_00486630;
extern f32 D_00486634;
extern f32 D_00486638;
extern s32 D_00486640;
extern s32 D_00486644;
extern void func_001D0B88(void);
extern void func_001D0C50(void);
extern void func_001D0D80(void);

void func_001CCF08(void) {
    s32 *temp_11;
    s32 *temp_13;
    s32 *temp_15;
    s32 *temp_4;
    s32 *temp_5;
    s32 *temp_7;
    s32 *temp_9;
    s32 temp_10;
    s32 temp_12;
    s32 temp_14;
    s32 temp_16;
    s32 temp_17;
    s32 temp_18;
    s32 temp_19;
    s32 temp_2;
    s32 temp_6;
    s32 temp_8;
    s32 var_25;
    void *var_24;

    func_00191490(&func_001D0B88, 0xB, &D_00484EB0, 0);
    func_00191490(&func_001D0C50, 0x1E, &D_0046C9A0, 1);
    if (D_00483F44 == 1) {
        D_00483F60 = 0x10;
        D_00483F68 = 0x80;
        D_00483F64 = 0x7C;
        D_00483F6C = 0x7D;
        D_00483F70 = 0x7E;
        D_00483F74 = 0x7B;
        D_0048404C = 0x40;
        D_00484048 = 0x20;
        D_00483F58 = 0x40;
        D_00483F5C = 0x7E;
    } else if (D_00483F44 == 0) {
        D_00483F60 = 0x80;
        D_00483F64 = 0x7C;
        D_00483F70 = 0x7B;
        D_00483F74 = 0x7E;
        D_0048404C = 0x20;
        D_00484048 = 0x140;
        D_00483F58 = 0x20;
        D_00483F5C = 0x7B;
    }
    var_24 = &D_0042E300 + 0x54;
    var_25 = 0;
    do {
        temp_2 = var_25 * 4;
        temp_19 = M2C_FIELD(var_24, s32 *, -0x20);
        temp_15 = temp_2 + &D_0034B8C8;
        temp_18 = M2C_FIELD(var_24, s32 *, -0x1C);
        temp_13 = temp_2 + &D_0034B8D8;
        temp_17 = M2C_FIELD(var_24, s32 *, -0x18);
        temp_11 = temp_2 + &D_0034B8E8;
        temp_16 = M2C_FIELD(var_24, s32 *, -0x14);
        temp_9 = temp_2 + &D_0034B908;
        temp_14 = M2C_FIELD(var_24, s32 *, -4);
        temp_12 = M2C_FIELD(var_24, s32 *, -0x10);
        var_25 += 1;
        temp_10 = M2C_FIELD(var_24, s32 *, -0xC);
        temp_7 = temp_2 + &D_0034B928;
        temp_8 = M2C_FIELD(var_24, s32 *, -8);
        temp_6 = M2C_FIELD(var_24, s32 *, 0);
        var_24 += 0x24;
        temp_5 = temp_2 + &D_0034B918;
        temp_4 = temp_2 + &D_0034B958;
        *temp_15 = temp_19;
        *temp_13 = temp_18;
        *temp_11 = temp_17;
        *temp_9 = temp_16;
        *temp_7 = temp_14;
        *temp_5 = temp_12;
        *temp_4 = temp_10;
        *(temp_2 + &D_0034B968) = temp_8;
        *(temp_2 + &D_0034B978) = temp_6;
    } while (var_25 < 4);
    D_00485930 = M2C_FIELD(&D_0042E300, f32 *, 0xC);
    D_00485934 = M2C_FIELD(&D_0042E300, f32 *, 8);
    func_0024EE18(temp_4, temp_5, temp_6, temp_7, temp_8, temp_9, temp_10, temp_11);
    D_00485938 = M2C_FIELD(&D_0042E300, s32 *, 0x10);
    D_00484420 = M2C_FIELD(&D_0042E300, f32 *, 4);
    D_00484040 = M2C_FIELD(&D_0042E300, s32 *, 0x14);
    D_00485010 = M2C_FIELD(&D_0042E300, s32 *, 0x18);
    D_0048433C = M2C_FIELD(&D_0042E300, s32 *, 0x1C);
    D_00484340 = M2C_FIELD(&D_0042E300, s32 *, 0x20);
    D_00484F58 = M2C_FIELD(&D_0042E300, s32 *, 0x28);
    D_00484F60 = M2C_FIELD(&D_0042E300, s32 *, 0x30);
    D_00484F5C = M2C_FIELD(&D_0042E300, s32 *, 0x2C);
    D_004865DC = M2C_FIELD(&D_0042E300, s32 *, 0xC4);
    D_00486630 = M2C_FIELD(&D_0042E300, f32 *, 0xC8);
    D_00486634 = M2C_FIELD(&D_0042E300, f32 *, 0xCC);
    D_00486638 = M2C_FIELD(&D_0042E300, f32 *, 0xD0);
    D_00486644 = M2C_FIELD(&D_0042E300, s32 *, 0xD4);
    D_00486640 = M2C_FIELD(&D_0042E300, s32 *, 0xD8);
    D_00484498 = M2C_FIELD(&D_0042E300, s32 *, 0x24);
    func_00165B30(&D_0046C530, M2C_FIELD(&D_0042E300, s32 *, 0x18), M2C_FIELD(&D_0042E300, s32 *, 0x1C), M2C_FIELD(&D_0042E300, s32 *, 0x20), M2C_FIELD(&D_0042E300, s32 *, 0x28), M2C_FIELD(&D_0042E300, s32 *, 0x30), M2C_FIELD(&D_0042E300, s32 *, 0x2C), M2C_FIELD(&D_0042E300, s32 *, 0xC4));
    func_001C7828();
    func_001CD1E0();
    func_00164020(&func_001D0D80);
    func_0017DD68(D_00484F68);
}
