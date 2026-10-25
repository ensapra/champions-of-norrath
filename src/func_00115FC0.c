typedef struct { s64 a, b; } Col;
extern void func_0010B378(s32, void *);
extern void func_0014D328(s32, s32);
extern Col D_001BB6E0[];
extern s32 D_010C2B6C[];
extern s32 D_010C2B70[];
extern s32 D_010C2B74[];
extern s32 D_010C2B78[];
extern s32 D_010C2B7C[];
extern s32 D_010C2B80[];
extern s32 D_010C2B84[];

void func_00115FC0(s32 arg0, s64 arg1) {
    Col buf;
    s32 t = arg1;
    s32 *p;
    s32 mode = D_010C2B84[0];
    if ((u32)(mode - 2) < 2) {
        buf = D_001BB6E0[16];
    } else if (mode == 5) {
        buf = D_001BB6E0[21];
    } else {
        buf = D_001BB6E0[11];
    }
    if (t == 0 && (p = D_010C2B78, *p != 0)) {
        func_0010B378(*p, &buf);
        func_0014D328(D_010C2B6C[0], 0xFF);
        func_0014D328(*p, 0xFF);
    } else if (t == 1 && (p = D_010C2B7C, *p != 0)) {
        func_0010B378(*p, &buf);
        func_0014D328(D_010C2B70[0], 0xFF);
        func_0014D328(*p, 0xFF);
    } else if (t == 2) {
        p = D_010C2B80;
        if (*p != 0) {
            func_0010B378(*p, &buf);
            func_0014D328(D_010C2B74[0], 0xFF);
            func_0014D328(*p, 0xFF);
        }
    }
}
