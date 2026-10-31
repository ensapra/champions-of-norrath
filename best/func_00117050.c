/* identical to func_00171840 (matched), with its names changed by decompdecomp */
/* func_00171920 */
extern s32 *func_001CD1E0_28;  // func_001CD1E0+0x28

void func_00171920(void) {
    s32 count = *func_001CD1E0_28;
    if (count <= 0) {
        return;
    }
    void (**funcs)(void) = (void(**)(void))(func_001CD1E0_28 + 1);
    for (s32 i = 0; i < count; i++) {
        funcs[i]();
    }
}

/* func_00117050 */
extern u8 D_001CD208[];  // func_001CD1E0+0x28
extern u8 D_001CE210[];  // func_001CDE30+0x3E0
extern u8 D_001CF218[];  // func_001CE218+0x1000

void func_00117050(void) {
    *(s32*)D_001CD208 = 0;
    *(s32*)D_001CE210 = 0;
    *(s32*)D_001CF218 = 0;
}

/* func_00171A80 */
extern void func_00171A00(void);
extern void func_00178F28(void);
extern u8 D_001CD188[];  // func_001CCF08+0x280

void func_00171A80(void) {
    func_00171A00();
    func_00178F28();
    *(s32*)D_001CD188 = 1;
}

/* func_00171AB0 */
extern void func_00171920(void);
extern void func_0018E538(s32, s32);
extern void func_00171990(void);
extern u8 D_001CD188[];

void func_00171AB0(void) {
    func_00171920();
    func_0018E538(0, 0);
    *(s32*)D_001CD188 = 0;
    func_00171990();
}
