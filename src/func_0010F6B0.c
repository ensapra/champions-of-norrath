typedef struct { s32 id; s32 pad; s64 val; } Ent;
extern char D_004C7558[];
extern char D_001BB740[];
extern f32 D_001BB8F0[];
extern s32 func_00154620(s32, void *, void *, s32);
extern void func_0014B460(s32);
s32 func_0010F6B0(s32 arg0, s32 *p, s64 v) {
    Ent e[64];
    s32 r;
    e[0].id = 8;    e[0].val = p[0];
    e[1].id = 10;   e[1].val = p[1];
    e[2].id = 13;   e[2].val = p[2];
    e[3].id = 15;   e[3].val = p[3];
    e[4].id = 0xD4; e[4].val = 1;
    e[5].id = 0xCD; e[5].val = 0;
    e[6].id = 0xCE; e[6].val = 1;
    e[7].id = 0xC6; e[7].val = v;
    e[8].id = 0xC7; *(f32 *)&e[8].val = D_001BB8F0[0];
    e[9].id = 0xC8; e[9].val = (s64)D_001BB740;
    r = func_00154620(arg0, D_004C7558, e, 10);
    func_0014B460(r);
    return r;
}
