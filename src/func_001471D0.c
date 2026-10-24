extern void func_00114948(s32, s32, s32, s32, void *, void *);
extern s32 func_0011BA18(s32);
extern void func_00147290(s32);
extern void func_00147250(void);
extern void func_00147018(void);
extern void func_00118140(void *, s32, void *, void *, void *);
extern void func_00118278(s32, void *);
extern void func_0013F460(void);
extern void func_0013F488(void);
extern void func_0013FA70(void);
extern void func_00146D20(void);
extern void func_001A3D78(void *, s32, void *);
extern s32 D_001C688C[];
extern s32 D_001BB6C4[];
extern u8 D_004CB168[];

void func_001471D0(void) {
    if (D_001C688C[0] != 0) {
        func_00114948(2, 0x1F4, 0xFA, func_0011BA18(0x7C), (void *)func_00147290, (void *)D_001BB6C4[0]);
        return;
    }
    func_00114948(2, 0x1F4, 0xFA, func_0011BA18(0x7D), (void *)func_00147290, (void *)D_001BB6C4[0]);
}

void func_00146CB8(s32 a) {
    void *buf[6];
    if (a >= 0) {
        func_00118140(buf, 1, (void *)func_0013F460, (void *)func_0013F488, (void *)func_0013FA70);
        buf[2] = (void *)func_00146D20;
        func_00118278(0, buf);
    } else {
        func_00147018();
    }
}

void func_00146F70(s32 a) {
    char buf[0x260];
    if (a >= 0) {
        func_001A3D78(buf, func_0011BA18(0x77), D_004CB168);
        if (D_001C688C[0] != 0) {
            func_00114948(0, 0x1F4, 0xFA, (s32)buf, (void *)func_00147250, (void *)D_001BB6C4[0]);
        } else {
            func_00114948(0, 0x1F4, 0xFA, (s32)buf, (void *)func_00147290, (void *)D_001BB6C4[0]);
        }
    } else {
        func_00147018();
    }
}
