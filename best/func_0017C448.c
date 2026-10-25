#define F(e, t, o) (*(t)((char *)(e) + (o)))
f32 D_0048413C, D_00484140, D_0048415C;
s32 D_00484144, D_0048414C, D_00484150, D_00484154, D_00484158, D_00484160;
extern char D_006EBB40[];

void func_0017C448(void *arg0) {
    s32 temp_2, temp_3_2, temp_5, temp_5_2, temp_5_3, temp_6, m1, f1, f2, b80;
    s32 var_10, var_11, var_3_2, var_4, var_7, var_7_2, var_9, var_9_2, var_9_3;
    u8 *var_3;
    char *temp_2_2, *temp_2_3, *temp_3, *temp_4, *temp_7, *var_2;

    var_9 = 0;
    temp_6 = F(arg0, s32 *, 0x34);
    temp_5 = F(arg0, s32 *, 0x30);
    if (temp_6 > 0) {
        var_7 = 0;
        do {
            if (temp_5 > 0) {
                var_4 = temp_5;
                var_3 = (u8 *)((var_7 * 4) + F(arg0, s32 *, 0x38));
                do {
                    var_4 -= 1;
                    *(s32 *)var_3 = *var_3;
                    var_3 += 4;
                } while (var_4 != 0);
            }
            var_9 += 1;
            var_7 += temp_5;
        } while (var_9 < temp_6);
    }
    var_9_2 = 0;
    if (F(arg0, s32 *, 0) > 0) {
        var_7_2 = 0;
        do {
            temp_4 = (char *)F(arg0, s32 *, 0x24) + var_7_2;
            temp_2 = F(temp_4, s32 *, 0x24);
            temp_5_2 = temp_2 & 0x800;
            b80 = temp_2 & 0x80;
            var_7_2 += 0x3C;
            if (b80) {
                temp_3 = F(temp_4, char **, 0);
                temp_2_2 = F(temp_3, char **, 8);
                if (temp_2_2 != NULL) {
                    F(temp_2_2, s32 *, 0x12A0) = 0;
                    F(temp_3, char **, 8) = NULL;
                }
            }
            var_9_2 += 1;
            if (temp_5_2 != 0) {
                F(temp_4, s32 *, 4) = 0;
            }
        } while (var_9_2 < F(arg0, s32 *, 0));
    }
    var_11 = 0;
    if (F(arg0, s32 *, 0x50) > 0) {
        var_10 = 0;
        do {
            var_9_3 = 0;
            temp_7 = (char *)F(arg0, s32 *, 0x54) + var_10;
            f1 = F(temp_7, u16 *, 6);
            F(temp_7, u16 *, 6) = f1 & ~1;
            if (F(temp_7, s16 *, 4) > 0) {
                do {
                    temp_5_3 = F(arg0, s32 *, 0x24);
                    F((((F(temp_7, s32 *, 0) + var_9_3) * 0x3C) + temp_5_3), s32 *, 0x28) = F(temp_7, s32 *, 8);
                    F((((F(temp_7, s32 *, 0) + var_9_3) * 0x3C) + temp_5_3), s32 *, 0x2C) = F(temp_7, s32 *, 0xC);
                    F((((F(temp_7, s32 *, 0) + var_9_3) * 0x3C) + temp_5_3), s32 *, 0x30) = F(temp_7, s32 *, 0x10);
                    F((((F(temp_7, s32 *, 0) + var_9_3) * 0x3C) + temp_5_3), u16 *, 0x36) = F(temp_7, u16 *, 0x14);
                    temp_3_2 = F(temp_7, s32 *, 0) + var_9_3;
                    var_9_3 += 1;
                    F(((temp_3_2 * 0x3C) + F(arg0, s32 *, 0x24)), u16 *, 0x38) = F(temp_7, u16 *, 0x16);
                    temp_2_3 = (char *)((F(temp_7, s16 *, 0x18) * 0x24) + F(arg0, s32 *, 0x20));
                    f2 = F(temp_2_3, u16 *, 0x10);
                    F(temp_2_3, u16 *, 0x10) = f2 & ~2;
                } while (var_9_3 < F(temp_7, s16 *, 4));
            }
            var_11 += 1;
            var_10 += 0x1C;
        } while (var_11 < F(arg0, s32 *, 0x50));
    }
    var_3_2 = 0x3F;
    var_2 = D_006EBB40 + 4;
    do {
        var_3_2 -= 1;
        F(var_2, s32 *, 0x24) = 0;
        F(var_2, s8 *, 0) = 0;
        var_2 += 0x30;
    } while (var_3_2 >= 0);
    D_0048415C = 0.0234375f;
    D_0048413C = 41.0f;
    D_00484140 = 4.0f;
    D_00484144 = 6;
    D_0048414C = 0x62;
    D_00484154 = 0x808080;
    D_00484160 = 0;
    D_00484150 = 0;
    D_00484158 = 0;
}
