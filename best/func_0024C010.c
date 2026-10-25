typedef struct { s32 a; s16 b; u8 pad[14]; } E20;
extern void func_00172890(char *, s32, char *, void *);
extern void func_0024BAA0(void);
extern void func_0024BC38(s32, s32);
extern s32 func_0024C1C0(void);
extern void func_002D70D0(char *);
extern void func_002D7908(s32);
extern void func_002D80A0(void *, s32, s32);
extern s32 func_002DC138(s32);
extern void func_002E0320(void);
extern char D_00474668[], D_004746E8[], D_004746F8[];
extern char D_00485978[], D_00485980[], D_00485988[], D_00485990[], D_00485998[];
extern E20 D_007D8F20[];
extern struct { u8 pad[0x24]; s32 f24; } D_007DD7E0;
extern s32 D_00485950, D_00486BD8;
extern f32 D_00486BD4;

s64 func_0024C010(f32 x) {
    E20 *p;
    s32 i, j;
    func_002D70D0(D_00485978);
    if (x > 1.0f) D_00486BD4 = 1.0f; else D_00486BD4 = x;
    if (D_00486BD4 < 0.0f) D_00486BD4 = 0.0f;
    func_002E0320();
    func_0024BAA0();
    func_002D70D0(D_00485980);
    p = D_007D8F20;
    i = 0x2A;
    do {
        i--;
        p->a = 0;
        p->b = 0;
        p++;
    } while (i >= 0);
    if (D_00485950 != 0) func_00172890(D_00474668, 0x517, D_004746E8, __builtin_return_address(0));
    D_00485950 = func_002DC138(0x1000);
    func_002D70D0(D_00485988);
    if (D_00486BD8 != 0) func_00172890(D_00474668, 0x51D, D_004746F8, __builtin_return_address(0));
    D_00486BD8 = func_002DC138(0x1000);
    func_002D70D0(D_00485990);
    func_002D7908(0);
    func_002D70D0(D_00485998);
    do {
        func_002D80A0(&D_007DD7E0, 0x163A5, 0);
        j = 0x2710;
        do { j--; } while (j != -1);
    } while (D_007DD7E0.f24 == 0);
    func_0024BC38(0, 0x10000);
    return func_0024C1C0();
}
