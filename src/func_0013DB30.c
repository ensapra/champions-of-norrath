extern s32 D_010CFC50[];
extern s32 D_010CFC58[];
extern s32 D_010CFC5C[];
extern s32 D_010CFC60[];
extern s32 D_010CFC64[];
extern s32 D_010CFC68[];
extern s32 D_010CFC6C[];
extern s32 D_010CFC70[];

void func_0013DB30(void *dst, void *src) {
    __builtin_memcpy(dst, src, 0x1320);
}

void func_0013DBE0(s32 a) { D_010CFC50[0] = a; }

void func_0013DE30(void) {
    D_010CFC58[0] = 0;
    D_010CFC5C[0] = 0;
    D_010CFC60[0] = 0;
    D_010CFC64[0] = 0;
    D_010CFC68[0] = 0;
    D_010CFC70[0] = 0;
    D_010CFC6C[0] = -1;
}
