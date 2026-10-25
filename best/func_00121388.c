typedef struct { int id; int pad; long long v; long long pad2[2]; } Arg;
extern void func_00121990(void);
extern void func_00138990(int);
extern void func_0014CBF4(int, void *, int);
extern void func_0014D328(int, int);
extern void func_001A3D78();
extern char D_001C5A00[];
extern char D_001C5B00[];
extern char D_004C9208[];
extern char D_004C9238[];
extern int D_010C6E70[];
extern int D_010C6E88[];
extern int *D_010C6EB0[];
extern int D_010C6EB8[];
extern int D_001C45BC;

void func_00121388(int *p) {
    int i, off;
    Arg a;
    long long *q = &a.v;
    if (p) {
        off = 0;
        for (i = 0; i < 4; ) {
            long long t;
            func_001A3D78(D_010C6EB0[0][D_010C6EB8[0]] + off, D_004C9208, *p++);
            t = D_010C6EB0[0][D_010C6EB8[0]] + off;
            a.id = 0x66;
            *q = t;
            func_0014CBF4(D_010C6E88[D_010C6EB8[0] * 4 + i], &a, 1);
            i++;
            off += 0x258;
        }
        if (D_010C6EB8[0] == 0) {
            int b = D_010C6EB0[0][0];
            func_001A3D78(D_001C5A00, D_004C9238, b, b + 0x258, b + 0x4B0, b + 0x708);
        } else {
            int b = D_010C6EB0[0][1];
            func_001A3D78(D_001C5B00, D_004C9238, b, b + 0x258, b + 0x4B0, b + 0x708);
        }
        func_00121990();
    }
    func_0014D328(D_010C6E70[D_010C6EB8[0]], 0xFF);
    func_00138990(D_010C6E70[D_010C6EB8[0]]);
    D_001C45BC = 0;
}
