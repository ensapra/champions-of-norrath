typedef struct { s32 w[3]; } C12;
typedef struct {
    u8 p0[0xC]; s32 flags; u8 p1[0xC]; f32 f1c; u8 p2[0x28]; void *vt; u8 p3[0x5C]; f32 fa8; u8 p4[4]; f32 fb0;
    u8 p5[0x274]; s32 f328; u8 p6[0x94]; s32 f3c0; s32 f3c4; s32 f3c8;
} O;
typedef struct { u8 p[0x1C]; f32 f1c; } P;
extern u8 D_00448B90[];
extern f32 D_00481364, D_00481368;
void ovl_ntgui2_func_00108E58(O *, C12, s16, s32, s32, f32);
void func_00194390(void *, P *, P *);
void func_00143830(O *);
void func_00208BE8(O *o, P *p, C12 c, s16 h, s32 n) {
    s32 t;
    s32 *q;
    ovl_ntgui2_func_00108E58(o, c, h, 0, 0, D_00481364);
    q = &o->f3c8;
    o->fa8 = D_00481368;
    o->fb0 = 100.0f;
    o->f1c = 5.0f;
    o->f1c = p->f1c + 10.0f;
    t = o->f328;
    o->f3c0 = t;
    o->f3c4 = t + n;
    o->vt = D_00448B90;
    o->flags |= 1;
    *q = 0;
    func_00194390(q, p, p);
    func_00143830(o);
}
