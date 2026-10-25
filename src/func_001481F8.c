typedef struct {
    char pad0[0x80];
    s32 flag;
    char pad1[0x24];
    void (*fn0)();
    char pad2[0x4];
    void (*fn1)();
    char pad3[0xC];
} Widget;

extern s32 D_010D4510[];
extern s32 D_010D4520[];
void func_00105078();
void func_00105090();
void func_001480F0();
void func_001050A8(Widget *, s32, s32, s32, s32, s32, s32, s32, s32, s32);
void func_00105190(Widget *);
void func_0011DA20(s32, s32);
void func_0014CF30(s32, s32 *, s32 *);
void func_0014D048(s32, s32 *, s32 *);

void func_001481F8(s32 arg0) {
    Widget w1;
    Widget w2;
    s32 x, y, wd, ht;

    if (arg0 < 0) return;
    if (arg0 < 2) {
        func_0014D048(D_010D4510[1], &x, &y);
        func_0014CF30(D_010D4510[1], &wd, &ht);
        func_001050A8(&w1, D_010D4520[0], 0xB, 0, 1, 0, x, y, x + wd, y + ht);
        w1.fn0 = func_00105078;
        func_00105190(&w1);
        func_001050A8(&w2, D_010D4520[0], 0xB, 2, 0x14, 0, 0, 0x55, 0, 0x6F);
        w2.fn0 = func_00105090;
        w2.fn1 = func_001480F0;
        w2.flag = 1;
        func_00105190(&w2);
        func_0011DA20(0, 0x18);
    }
}
