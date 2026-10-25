extern void func_0010B378(s32, void *);
extern void func_0014D328(s32, s32);
extern void func_001A2660(void *, s32, s32);
extern s32 D_010C2B6C[];
extern s32 D_010C2B70[];
extern s32 D_010C2B74[];
extern s32 D_010C2B78[];
extern s32 D_010C2B7C[];
extern s32 D_010C2B80[];

void func_00115EC0(s32 arg0, s64 arg1) {
    u8 buf[16];
    s32 t = arg1;
    s32 *p;
    s32 *q;
    func_001A2660(buf, 0, 0x10);
    p = D_010C2B78;
    if (t == 0 && *p != 0) {
        func_0010B378(*p, buf);
        func_0014D328(D_010C2B6C[0], 0xC4);
        func_0014D328(*p, 0xC4);
    } else if (t == 1 && (p = D_010C2B7C, *p != 0)) {
        func_0010B378(*p, buf);
        func_0014D328(D_010C2B70[0], 0xC4);
        func_0014D328(*p, 0xC4);
    } else if (t == 2) {
        q = D_010C2B80;
        if (*q != 0) {
            func_0010B378(*q, buf);
            func_0014D328(D_010C2B74[0], 0xC4);
            func_0014D328(*q, 0xC4);
        }
    }
}
