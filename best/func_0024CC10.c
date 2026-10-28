typedef struct { s16 type; s16 id; s32 val; } E24;
extern s8 D_0042DDB8[];
extern const f32 D_00482028;
extern const f32 D_00485930;
s32 D_00485938;
s32 D_00485954;
extern E24 D_007DC280[];

void func_0024CC10(s32 id, f32 x, f32 y) {
    s32 a, b, t, ta, tb, n;
    s32 *cp = &D_00485954;
    if (id != -1) {
        x *= D_00485930;
        y *= D_00485930;
        if (D_00485938 == 0) {
            y = x = (x + y) * 0.5f;
        }
        a = (s32)(x * D_00482028);
        b = (s32)(y * D_00482028);
        t = D_0042DDB8[id * 2] | (D_0042DDB8[id * 2 + 1] << 1);
        n = D_00485954;
        ta = a; tb = b;
        a = 0x3FFF; if (ta < 0x4000) a = ta;
        b = 0x3FFF; if (tb < 0x4000) b = tb;
        if (a < 0) a = 0;
        if (b < 0) b = 0;
        if (n < 0x200) {
            E24 *e = &D_007DC280[n];
            e->val = a;
            e->type = 1;
            *cp = n + 1;
            e->id = t;
            n = D_00485954;
        }
        if (n < 0x200) {
            E24 *e = &D_007DC280[n];
            e->val = b;
            e->id = t | 0x100;
            e->type = 1;
            *cp = *cp + 1;
        }
    }
}
