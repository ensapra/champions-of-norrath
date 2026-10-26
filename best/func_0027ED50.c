extern u8 D_00437038[];
extern char D_00476608[];
extern char D_00476798[];
extern char D_004767A8[];
extern char D_004767B8[];
extern char D_004767C8[];
extern char D_004767E0[];
extern char D_004767F0[];
extern char D_00476808[];
extern char D_00476818[];
extern char D_00476828[];
extern char D_00476838[];
extern char D_00485FF0[];
extern char D_00485FF8[];
s32 D_00486D84;
void func_002809C0(s32, char*, void*, void*);
s32 func_00165DC0(char*, char*);
void func_00303EB8(char*, const char*, ...);
void func_0027ED50(s32 arg0) {
    s32 sp80;
    s32 sp84;
    s32 sp88;
    s32 *sp8C;
    s32 *temp_16;
    s32 *temp_16_2;
    s32 *var_16;
    s32 *var_16_2;
    s32 temp_16_3;
    s32 temp_17;
    s32 temp_20;
    s32 temp_2;
    s32 temp_2_2;
    s32 temp_2_3;
    s32 temp_2_5;
    s32 temp_2_6;
    s32 temp_3;
    s32 temp_4_2;
    s32 temp_6;
    s32 var_17_2;
    s8 temp_19;
    s8 temp_19_2;
    s8 var_17;
    s8 var_21;
    s8 var_21_2;
    void *temp_17_2;
    void *temp_18;
    void *temp_2_4;
    void *temp_2_7;
    void *temp_4;
    char buf[0x80];
    sp84 = arg0 * 4;
    sp80 = arg0;
    temp_3 = (((sp84 + arg0) << 5) - arg0) * 4;
    temp_4 = (void*)(temp_3 + 0x10 + (s32)D_00437038);
    *(s8*)((char*)temp_4 + 8) = 0;
loop_1:
    func_00303EB8(buf, D_00476608, *(s32*)((char*)D_00437038 + temp_3), *(s8*)((char*)temp_4 + 8) + 1);
    if (func_00165DC0((char*)D_00486D84, buf) != 0) {
        *(s8*)((char*)temp_4 + 8) = (s8)((u8)*(s8*)((char*)temp_4 + 8) + 1);
        goto loop_1;
    }
    var_21 = 0;
    temp_2 = ((sp84 + sp80) << 5) - sp80;
    sp88 = temp_2;
    sp8C = (s32*)(temp_2 * 4 + (s32)D_00437038);
loop_5:
    temp_19 = var_21 + 1;
    func_00303EB8(buf, D_00476798, *sp8C, temp_19);
    temp_2_2 = func_00165DC0((char*)D_00486D84, buf);
    *(s32*)((char*)D_00437038 + sp88*4 + var_21*4 + 0x1C) = temp_2_2;
    if (temp_2_2 != 0) {
        temp_20 = sp88 * 4;
        var_17 = 0;
        var_16 = (s32*)(((var_21 * 8) + sp88) * 4 + (s32)D_00437038 + 0x6C);
loop_7:
        func_00303EB8(buf, D_004767A8, *(s32*)(temp_20 + (s32)D_00437038), temp_19, var_17 + 0x61);
        temp_2_3 = func_00165DC0((char*)D_00486D84, buf);
        *var_16 = temp_2_3;
        var_16 += 1;
        if (temp_2_3 != 0) {
            var_17 += 1;
            goto loop_7;
        }
        if (var_17 != 0) {
            var_21 = temp_19;
            *(s8*)((char*)D_00437038 + temp_20 + 0x1A) = var_17;
            goto loop_5;
        }
    }
    temp_4_2 = ((sp84 + sp80) << 5) - sp80;
    temp_6 = temp_4_2 * 4;
    temp_2_4 = (void*)(temp_6 + 0x10 + (s32)D_00437038);
    *(s8*)((char*)temp_2_4 + 9) = var_21;
    if (*(s8*)((char*)temp_2_4 + 2) != 0) {
        *(s8*)((char*)temp_2_4 + 9) = temp_19;
    }
    var_21_2 = 0;
loop_15:
    temp_19_2 = var_21_2 + 1;
    func_00303EB8(buf, D_004767B8, *(s32*)(temp_6 + (s32)D_00437038), temp_19_2);
    temp_2_5 = func_00165DC0((char*)D_00486D84, buf);
    *(s32*)((char*)D_00437038 + temp_4_2*4 + var_21_2*4 + 0x3C) = temp_2_5;
    if (temp_2_5 != 0) {
        var_17_2 = 0;
        var_16_2 = (s32*)(((var_21_2 * 8) + temp_4_2) * 4 + (s32)D_00437038 + 0x16C);
loop_17:
        func_00303EB8(buf, D_004767C8, *(s32*)(temp_4_2 * 4 + (s32)D_00437038), temp_19_2, var_17_2 + 0x61);
        temp_2_6 = func_00165DC0((char*)D_00486D84, buf);
        *var_16_2 = temp_2_6;
        var_16_2 += 1;
        if (temp_2_6 != 0) {
            var_17_2 += 1;
            goto loop_17;
        }
        var_21_2 = temp_19_2;
        if (var_17_2 != 0) {
            goto loop_15;
        }
    }
    temp_17 = (((sp84 + sp80) << 5) - sp80) * 4;
    temp_2_7 = (void*)(temp_17 + 0x10 + (s32)D_00437038);
    *(s8*)((char*)temp_2_7 + 0x0B) = temp_19_2;
    if (*(s8*)((char*)temp_2_7 + 1) == 4) {
        temp_16 = (s32*)(temp_17 + (s32)D_00437038);
        func_002809C0(*temp_16, D_004767E0, (void*)(temp_17 + (s32)D_00437038 + 0x5C), (void*)(temp_17 + (s32)D_00437038 + 0x26C));
        func_002809C0(*temp_16, D_004767F0, (void*)(temp_17 + (s32)D_00437038 + 0x60), (void*)(temp_17 + (s32)D_00437038 + 0x270));
        func_002809C0(*temp_16, D_00476808, (void*)(temp_17 + (s32)D_00437038 + 0x64), (void*)(temp_17 + (s32)D_00437038 + 0x274));
    } else {
        temp_16_2 = (s32*)(temp_17 + (s32)D_00437038);
        func_002809C0(*temp_16_2, D_00476818, (void*)(temp_17 + (s32)D_00437038 + 0x5C), (void*)(temp_17 + (s32)D_00437038 + 0x26C));
        func_002809C0(*temp_16_2, D_00476828, (void*)(temp_17 + (s32)D_00437038 + 0x60), (void*)(temp_17 + (s32)D_00437038 + 0x270));
        func_002809C0(*temp_16_2, D_00476838, (void*)(temp_17 + (s32)D_00437038 + 0x64), (void*)(temp_17 + (s32)D_00437038 + 0x274));
    }
    temp_16_3 = (((sp84 + sp80) << 5) - sp80) * 4;
    temp_17_2 = (void*)(temp_16_3 + (s32)D_00437038);
    func_00303EB8(buf, D_00485FF0, *(s32*)((char*)temp_17_2 + 0x14));
    *(s32*)((char*)D_00437038 + temp_16_3 + 0x68) = func_00165DC0((char*)D_00486D84, buf);
    func_00303EB8(buf, D_00485FF8, *(s32*)((char*)temp_17_2 + 0x14));
    *(s32*)((char*)D_00437038 + temp_16_3 + 0x278) = func_00165DC0((char*)D_00486D84, buf);
}
