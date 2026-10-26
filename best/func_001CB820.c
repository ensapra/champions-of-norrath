extern s32 D_00408600[];
extern u8 D_0041FCC0[];
extern s32 D_00429460[];
extern s32 D_00429488[];
extern char D_0046C660[];
extern char D_0046C670[];
extern char D_0046C680[];
extern char D_0046C690[];
extern char D_0046C6A0[];
extern char D_0046C6B0[];
extern char D_0046C6C8[];
extern char D_0046C6D8[];
s32 D_00484538;
s8 D_00486678;

s32 func_00165768(void *, void *);
void func_00165B30(void *);
void func_00166268(void *, s32);
void func_001662F0(s32);
void func_001663F0(s32);
s32 func_00166E30(s32);
void func_00195358(void);
s32 func_00195560(s32 *);
void func_001955E8(s32, s32);
void func_00195BB8(void);
s32 func_0025AD08(s32);
void func_00303EB8(void *, void *, s32, ...);
void func_00304640(void *, s32);

s32 func_001CB820(void) {
    s32 sp[10];
    u8 sp30[64];
    u8 spD0[64];
    s32 sp110 = 0;
    s32 *var16;
    s32 *var17;
    s32 var18;
    s32 var16_2;
    s32 *var4;
    s32 var3;
    s32 var6;
    s32 *var5;
    s32 var2 = 0;
    void *var21;
    s32 var23;
    void *var20;
    s32 temp17, temp17_2;
    s32 temp2, temp2_2, temp2_3, temp2_4, temp2_5;
    s32 *temp4;
    s8 temp7, temp7_2;
    void *temp16, *temp16_2, *temp18, *temp18_2;
    s32 temp5, temp4_2, temp3;

    var16 = sp;
    var17 = D_00429460;
    var18 = 0;
    do {
        temp2 = *var17;
        var17++;
        if (temp2 != 0 && func_00166E30(temp2) != 0) {
            *var16 = 1;
        } else {
            *var16 = 0;
        }
        var18++;
        var16++;
    } while (var18 < 10);

    if (D_00484538 > 0) {
        var6 = D_00484538;
        var5 = (s32 *)((u8 *)D_00408600 + 0x54);
        do {
            temp2_2 = *var5;
            var5 = (s32 *)((u8 *)var5 + 0x5DB0);
            var6--;
            temp4 = sp + temp2_2;
            *temp4 = *temp4 - 1;
        } while (var6 != 0);
    }

    var16_2 = 1;
    var4 = sp;
    var3 = 9;
    do {
        temp2_3 = *var4;
        var4++;
        var3--;
        var16_2 = (temp2_3 != 0) ? 0 : var16_2;
    } while (var3 >= 0);

    if (((func_00195560(var4) == 0) ? 0 : var16_2) != 0) {
        if (func_0025AD08(5) != 7) {
            goto ret0;
        }
    }

    sp110 = 0;
    func_001663F0(5);
    func_00195BB8();
    func_00195358();
    if (D_00484538 > 0) {
        var21 = (void *)((u8 *)D_00408600 + 0x50);
        var23 = 0;
        do {
            func_00304640(sp30, D_00429460[((s32 *)var21)[1]]);
            if (D_00484538 >= 3 || D_00486678 != 0) {
                func_00304640(sp30, D_00429488[((s32 *)var21)[1]]);
            }
            var20 = D_0046C660;
            func_00165B30(sp30);
            func_00166268(sp30, D_00429460[((s32 *)var21)[1]]);
            if (D_00484538 >= 2 || D_00486678 != 0) {
                var20 = D_0046C670;
            }
            temp18 = (void *)((u8 *)D_00408600 + var23 + 0x20);
            temp7 = *(s8 *)temp18;
            if (temp7 != -1) {
                temp16 = (void *)((u8 *)D_00408600 + var23 + 0x50);
                func_00303EB8(spD0, D_0046C680, D_0041FCC0[((s32 *)temp16)[1]] * 4, (int)temp7 + 1);
                temp17 = func_00165768(var20, spD0);
                func_00303EB8(spD0, D_0046C690, D_0041FCC0[((s32 *)temp16)[1]] * 4, (int)temp7 + 1, (int)*((s8 *)temp18 + 1) + 0x61);
                temp2_4 = func_00165768(var20, spD0);
                if (temp17 == 0 || temp2_4 == 0) {
                    *(s8 *)temp18 = -1;
                }
            }
            temp18_2 = (void *)((u8 *)D_00408600 + var23 + 0x20);
            temp7_2 = *((s8 *)temp18_2 + 2);
            if (temp7_2 != -1) {
                temp16_2 = (void *)((u8 *)D_00408600 + var23 + 0x50);
                func_00303EB8(spD0, D_0046C6A0, D_0041FCC0[((s32 *)temp16_2)[1]] * 4, (int)temp7_2 + 1);
                temp17_2 = func_00165768(var20, spD0);
                func_00303EB8(spD0, D_0046C6B0, D_0041FCC0[((s32 *)temp16_2)[1]] * 4, (int)temp7_2 + 1, (int)*((s8 *)temp18_2 + 1) + 0x61);
                temp2_5 = func_00165768(var20, spD0);
                if (temp17_2 == 0 || temp2_5 == 0) {
                    *((s8 *)temp18_2 + 2) = -1;
                }
            }
            var23 += 0x5DB0;
            func_00303EB8(spD0, D_0046C6C8, D_0041FCC0[((s32 *)var21)[1]] * 4);
            func_00165768(var20, spD0);
            func_00303EB8(spD0, D_0046C6D8, D_0041FCC0[((s32 *)var21)[1]] * 4, (int)*((s8 *)var21 - 0x2D) + 1);
            func_00165768(var20, spD0);
            temp5 = ((s32 *)var21)[1];
            temp4_2 = sp110;
            var21 = (void *)((u8 *)var21 + 0x5DB0);
            temp3 = temp4_2 + 1;
            sp110 = temp3;
            func_001955E8(temp4_2, temp5);
        } while (temp3 < D_00484538);
    }
    func_001662F0(5);
    var2 = 1;

ret0:
    return var2;
}
