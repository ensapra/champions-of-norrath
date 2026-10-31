/* identical to func_0011EA70 (matched), with its names changed by decompdecomp */
extern void func_0014D240(s32);
extern void func_0014D270(s32);
extern s32 D_010C5120[];
extern s32 D_010C511C[];

void func_00132510(s32 a) {
    if (a != 0) {
        func_0014D240(D_010C5120[0]);
        return;
    }
    func_0014D270(D_010C511C[1]);
}

extern void func_00118140(void *, s32, void *, void *, void *);
extern s32 func_00118160(void *);
extern void func_0013EED0(void);
extern void func_0013EEF8(void);
extern void func_0013F0F0(void);
extern void func_0011EB00(void);
extern s32 D_010C5138[];

void func_0011EC18(void) {
    void *buf[6];
    if (D_010C5138[0] == 0) {
        func_00118140(buf, 1, (void *)func_0013EED0, (void *)func_0013EEF8, (void *)func_0013F0F0);
        buf[2] = (void *)func_0011EB00;
        D_010C5138[0] = func_00118160(buf);
    }
}

extern void func_00114948(s32, s32, s32, s32, void *, void *);
extern s32 func_0011BA18(s32);
extern s32 D_010C513C[];
extern s32 D_001BB6C4[];
extern s32 D_001BB6C0[];
extern void func_0011E568(void);
extern void func_0011E5A0(void);

void func_0011E6A0(void) {
    if (D_010C513C[0] != 0) {
        func_00114948(0, 0x1F4, 0xFA, func_0011BA18(0x66), (void *)func_0011E568, (void *)D_001BB6C4[0]);
        return;
    }
    func_00114948(0, 0x1F4, 0xFA, func_0011BA18(0x67), (void *)func_0011E5A0, (void *)D_001BB6C0[1]);
}
