typedef struct { s32 a; s32 pad; s64 b; s64 c; s64 d; } T;
extern s32 func_0014CBF4(s32, void *, s32);
extern void func_0014D328(s32, s32);
extern s32 D_001BD870[];
extern s32 D_001BD874[];
extern s32 D_001BD878[];
extern s32 D_001BD87C[];
void func_0010A4D0(s32 a, s64 b, s32 c) {
    T t;
    t.a = 0x11;
    t.b = b;
    func_0014CBF4(a, &t, 1);
    if (b != 0) func_0014D328(a, 0xFF); else func_0014D328(a, c);
    if (a == D_001BD870[0]) {
        if (b != 0) func_0014D328(D_001BD874[0], 0xFF); else func_0014D328(D_001BD874[0], c);
    }
    if (a == D_001BD878[0]) {
        if (b != 0) func_0014D328(D_001BD87C[0], 0xFF); else func_0014D328(D_001BD87C[0], c);
    }
}
