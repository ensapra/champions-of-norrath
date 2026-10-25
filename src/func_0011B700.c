extern void func_0011B6B0(s32, s32);
extern void func_001A3EB8(s32, char *);
extern s32 func_001A3FE4(char *, s32);
extern void func_001A42B8(char *, char *);
extern void func_001A4588(s32, char *, s32);
extern s32 D_010C4CD4[];
extern char *D_010C4CD8[];
#define F (D_010C4CD4[0])
#define B (D_010C4CD8[0])
extern char D_004C8ED8[];
s32 func_0011B700(s32 n) {
    if (n != 0) {
        s32 c = B[n - 1];
        if (c == 'n' || c == 'N') {
            s32 t = n;
            n = 0;
            func_0011B6B0(0x3E, t);
        }
    }
    {
    s32 c = B[n];
    if (c == '-') {
        func_001A4588(F, B, n);
        func_001A42B8(B, B + n);
        func_0011B6B0(0x3F, n + 1);
        *B = 0;
        return 3;
    } else if (c == '\n') {
        func_001A4588(F, B, n);
        *B = 0;
        return 3;
    } else {
        if (func_001A3FE4(D_004C8ED8, c) == 0) {
            func_001A3EB8(F, B);
            *B = 0;
            return 3;
        }
        func_001A4588(F, B, n);
        func_001A42B8(B, B + n);
        return 2;
    }
    }
}
