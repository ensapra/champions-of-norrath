typedef struct { u8 pad0[0xC]; s32 c; u8 pad1[0xC]; s32 v; u8 pad2[0x64]; s32 idx; s32 w; } S11CB50;
typedef struct { s32 a, b, c; void (*fn)(s32); } T11CB50;
extern T11CB50 *D_001C3C20[];
extern s32 D_010C4D14[];
extern s32 D_010C4D18[];
void func_0014D328(s32, s32);

void func_0011CB50(s32 x, S11CB50 *s) {
    s32 w = s->w;
    s32 v = s->v;
    s32 c = s->c;
    s32 p = (0xFF - w) * v;
    s32 a = 0x80 - (v << 7) / c;
    s32 b = 0xFF - p / c;
    func_0014D328(x, b);
    if (D_001C3C20[s->idx]->fn != 0)
        D_001C3C20[s->idx]->fn(b);
    if (D_010C4D14[0] != 0)
        func_0014D328(D_010C4D14[0], a);
    if (D_010C4D18[0] != 0)
        func_0014D328(D_010C4D18[0], a);
}
