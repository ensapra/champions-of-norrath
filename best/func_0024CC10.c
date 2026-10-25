typedef struct { s16 type; s16 id; s32 val; } E24;
extern s8 D_0042DDB8[];
extern f32 D_00482028;
extern f32 D_00485930;
extern s32 D_00485938;
extern s32 D_00485954;
extern E24 D_007DC280[];

void func_0024CC10(s32 id, f32 x, f32 y) {
    s32 a, b;
    s32 t;
    s32 n;
    E24 *e;
    if (id != -1) {
        x *= D_00485930;
        y *= D_00485930;
        if (D_00485938 == 0) {
            y = x = (x + y) * 0.5f;
        }
        t = D_0042DDB8[id * 2] | (D_0042DDB8[id * 2 + 1] << 1);
        a = (s32)(x * D_00482028);
        b = (s32)(y * D_00482028);
        a = a < 0x4000 ? a : 0x3FFF;
        b = b < 0x4000 ? b : 0x3FFF;
        a = a < 0 ? 0 : a;
        b = b < 0 ? 0 : b;
        n = D_00485954;
        if (n < 0x200) {
            e = &D_007DC280[n];
            e->val = a;
            e->type = 1;
            D_00485954 = n + 1;
            e->id = t;
        }
        n = D_00485954;
        if (n < 0x200) {
            e = &D_007DC280[n];
            e->val = b;
            e->id = t | 0x100;
            e->type = 1;
            D_00485954 = n + 1;
        }
    }
}
