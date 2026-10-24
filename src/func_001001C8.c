extern void func_001B6328(s32);
void func_001001C8(void) {
    func_001B6328(0);
}
extern s32 D_001BD8C0[];
extern s32 D_010C21F0[];
void func_00105090(s32, s32);
void func_0010D588(void) {
    s32 i;
    for (i = 0; i < D_001BD8C0[0] + 1; i++) {
        func_00105090(D_010C21F0[i], 0);
    }
}
void func_0014D270(s32);
void func_0010D9E0(void) {
    s32 *p = D_010C21F0;
    s32 n = 1;
    s32 t;
    do {
        t = *p;
        p++;
        if (t != 0) {
            func_0014D270(t);
        }
        n--;
    } while (n >= 0);
}
typedef struct { s32 a; s32 pad; long b; u8 rest[0x90]; } S_DA38;
extern u8 D_001BB740[];
extern s32 D_010C21F8[];
void func_00107C00(void *, void *);
void ovl_ntgui2_func_00108E58(void *, void *, void *, s32, s32);
void func_0014CBF4(s32, S_DA38 *, s32);
void func_0010DA38(s32 a0, u8 *a1) {
    S_DA38 s;
    s32 v1[4];
    s32 v0[4];
    func_00107C00(v0, D_001BB740);
    ovl_ntgui2_func_00108E58(v1, v0, D_001BB740, *(s32 *)(a1 + 0x1C), *(s32 *)(a1 + 0xC));
    s.a = 0xC8;
    s.b = (long)v1;
    func_0014CBF4(D_010C21F8[0], &s, 1);
    if (D_001BD8C0[0] != 0) {
        func_0014CBF4(D_010C21F8[1], &s, 1);
    }
}
