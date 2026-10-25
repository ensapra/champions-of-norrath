typedef struct { u8 pad0[0xC]; s32 c; u8 pad1[0xC]; s32 v; u8 pad2[0x64]; s32 idx; } S11CA80;
typedef struct { s32 a, b, c; void (*fn)(s32); } T11CA80;
extern T11CA80 *D_001C3C20[];
extern s32 D_010C4D04[];
extern s32 D_010C4D08[];
void func_0014D328(s32, s32);

void func_0011CA80(s32 x, S11CA80 *s) {
    s32 v = s->v;
    s32 a = (v << 7) / s->c;
    s32 b = (v * 127) / s->c + 0x80;
    func_0014D328(x, b);
    if (D_001C3C20[s->idx]->fn != 0)
        D_001C3C20[s->idx]->fn(b);
    if (D_010C4D04[0] != 0)
        func_0014D328(D_010C4D04[0], a);
    if (D_010C4D08[0] != 0)
        func_0014D328(D_010C4D08[0], a);
}
