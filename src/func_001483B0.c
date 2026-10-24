extern s32 func_0018F678(s32);
extern void func_0018F580(void *);
extern void func_00138990(s32);
extern void func_00148448(s32, s32);
extern void func_0013BBA8(void);
extern void func_001460E8(s32);
extern s32 func_0011BA18(s32);
extern void func_00114948(s32, s32, s32, s32, void *, s32);
extern void func_001481F8(void);
extern s32 D_010D4500[];
extern s32 D_010D4508;
extern s32 D_010D450C;
extern s32 D_010D4538;
extern s32 D_001BB6C4;
extern s32 D_001C68D4;

void func_0018FAE8(s32 *p, s32 a, s32 b) {
    s32 t = func_0018F678(a);
    func_0018F580(p);
    if (p[4] != -1) p[4] = t;
    p[8] = b;
    p[0] = (p[0] & ~0xC) | 0x109;
}

void func_00148400(void) {
    if (D_010D4538) D_001BB6C4 = D_010D450C;
    else D_001BB6C4 = D_010D4508;
    func_00138990(D_001BB6C4);
}

void func_001483B0(s32 a, s32 *w) {
    s32 n = w[0x80/4];
    if (w[0x1C/4] >= 3) {
        func_00148448(D_010D4500[n], n);
        w[0xAC/4] = 0;
    }
}

void func_00148320(s32 a, s64 b) {
    s32 v = b;
    D_001C68D4 = v;
    func_0013BBA8();
    if (v == 0) {
        func_001460E8(0);
    } else if (v == 1) {
        func_00114948(0, 0x1F4, 0xFA, func_0011BA18(0x81), (void *)func_001481F8, D_001BB6C4);
    }
}
