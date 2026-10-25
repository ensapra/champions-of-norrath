struct Vec3 { f32 x, y, z; Vec3() {} };
struct Sub {
    char c0[8]; s8 b8; s8 b9; s16 hA; s16 hC; s16 hE; s16 h10; s16 h12; s16 h14; s16 h16; s16 h18;
    char p[2]; f32 f1C; f32 f20; f32 f24; f32 f28; f32 f2C; Vec3 pos;
};
struct Obj {
    char p0[0x1C]; f32 f1C; char p1[4]; char *own; char p2[0x20]; char *vt;
    char p3[0x54]; u64 q0A0; f32 f0A8; s8 b0AC; char p4[3]; f32 f0B0;
    char p5[0x2C]; s32 f0EC; char p6[0xC]; s32 f0F8; char p7[4]; s32 f100;
};
extern "C" {
extern char D_0044BDB0[];
f32 D_00481540;
f32 D_00481544;
s32 D_004844A4;
void func_0020FF48(void *, Vec3, s16, s32, s32);
void ovl_ntgui2_func_0013D230(void *, Vec3 *, s32, s32, s32);
void func_001092F0(void *, s32, f32, f32, f32, f32, f32);
void func_001637A8(void *);
void func_00163830(void *, s32, s32);
void func_001601F8(void *);
void func_001438A0(void *);
void func_001091B0(void *);

void func_002118E8(char *o, Vec3 pos, s16 h) {
    s32 u;
    Sub *s = (Sub *)(o + 0x428);
    func_0020FF48(o, pos, h, u, 0);
    Vec3 v2 = pos;
    *(char **)(o + 0x48) = D_0044BDB0;
    s->b9 = 0;
    s->pos = v2;
    s->h16 = 0x32;
    s->hE = 0x32;
    s->f24 = 120.0f;
    s->f28 = D_00481540;
    s->h12 = 0xC8;
    s->h14 = 0x96;
    s->f1C = 120.0f;
    s->f20 = D_00481540;
    s->f2C = 1.0f;
    s->hA = 0xC8;
    s->hC = 0x96;
    s->h10 = 0;
    s->h18 = 0;
    s->b8 = 0;
    ovl_ntgui2_func_0013D230(s, &v2, 0xC8, 0x96, 0x32);
    func_001092F0(o, 1, D_00481544, 1.0f, 2.0f, 1.0f, 1.0f);
    Obj *p = (Obj *)o;
    p->f0B0 = 160.0f;
    p->f0A8 = 20.0f;
    p->f1C = 12.0f;
    p->f0F8 = D_004844A4;
    *(f32 *)(o + 0xE0) = 0.5f;
    p->q0A0 |= 0x101000;
    *(s16 *)(o + 0x23C) = 1;
    p->b0AC = 0x12;
    p->f100 = 0x168;
    p->f0EC = 0;
    func_001637A8(o + 0x120);
    func_00163830(o + 0x120, *(s32 *)(p->own + 0x44), 1);
    func_001601F8(o + 0x120);
    func_001438A0(o);
    *(s16 *)(o + 0x43A) = 0x33;
    *(s16 *)(o + 0x43C) = 0x27;
    *(s16 *)(o + 0x43E) = 0x12;
    *(s16 *)(o + 0x440) = 0;
    func_001091B0(o);
}
}
