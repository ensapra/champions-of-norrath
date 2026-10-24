/* identical to func_00129D10 (matched), with its names changed by decompdecomp */
typedef struct {
    u8 pad0[0x80];
    s32 x80;
    u8 pad84[0xAC - 0x84];
    void *fnAC;
    void *fnB0;
    u8 padB4[0xC0 - 0xB4];
} Win129;

extern void func_001050A8(Win129 *, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern void func_00105190(Win129 *);
extern void func_0010B378(s32, void *, ...);
extern s32 func_001167E0(void);
extern void func_0013BBD0(void);
extern s32 func_00129B30(s32);
void func_001483B0(s32 a, Win129 *w);
extern void func_00148400(void);
extern s32 D_010CB038[];
extern s32 D_010CB040[];
extern s32 D_001C4D74[];
extern s32 D_001BB6C4[];
extern s32 D_001BB6B4[];
extern u8 D_001BB720[];

void func_00148448(s32 a, s32 n) {
    Win129 w;
    func_001050A8(&w, a, 0xB, 2, 6, 0, 0x10, 6, 0x150, 0x22);
    if (n <= 0) {
        w.fnAC = func_001483B0;
        w.x80 = n + 1;
    } else {
        w.fnB0 = func_00148400;
    }
    func_00105190(&w);
}

void func_001483B0(s32 a, Win129 *w) {
    s32 n = w->x80;
    if (*(s32 *)((u8 *)w + 0x1C) >= 3) {
        func_00148448(D_010CB038[n], n);
        w->fnAC = 0;
    }
}

s64 func_00129DD8(s32 a, s64 b) {
    s32 i = b;
    s64 r;
    if (func_001167E0() == 2) {
        s32 t = D_010CB038[i];
        s32 v = D_010CB040[i];
        D_001C4D74[0] = i;
        D_001BB6C4[0] = v;
        func_0010B378(t, D_001BB720, v);
        func_0013BBD0();
        if (D_001BB6B4[0] != 0)
            r = func_00129B30(i);
    }
    return r;
}
