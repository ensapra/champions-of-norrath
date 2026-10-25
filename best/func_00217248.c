struct Vec3 { f32 x, y, z; Vec3() {} };

struct Sub {
    char pad0[8];
    s8 b8;
    s8 b9;
    s16 hA;
    s16 c0;     /* 0xC */
    s16 c1;     /* 0xE */
    s16 c2;     /* 0x10 */
    s16 h12;
    s16 d0;     /* 0x14 */
    s16 d1;     /* 0x16 */
    s16 d2;     /* 0x18 */
    s16 h1A;
    f32 f1C;
    f32 f20;
    f32 f24;
    f32 f28;
    s32 i2C;
    Vec3 pos;   /* 0x30 */
};

struct Obj {
    char pad0[0xC];
    s32 flags;      /* 0xC */
    char pad10[0x38];
    void *vt;       /* 0x48 */
    char pad4C[8];
    s32 time;       /* 0x54 */
    Vec3 rot;       /* 0x58 */
    Sub sub;        /* 0x64 */
    s32 iA0;        /* 0xA0 */
    s32 pad;
    s32 iA8;        /* 0xA8 */
};

extern "C" {
void func_00153FD0(Obj *, Vec3, s32, s32);
void ovl_ntgui2_func_0013D230(Sub *, Vec3, s32, s32, s32);
void func_00143830(Obj *);
s32 func_00165DC0(char *, char *);
void func_0024D308(s32, Obj *, f32);
extern char D_00449F10[];
extern char D_00470908[];
extern char D_00485380[];
extern f32 D_004815BC;
extern s32 D_004844A4;

void func_00217248(Obj *o, Vec3 pos, Vec3 rot, s32 a3, s32 a4, s32 a5, s32 a6)
{
    func_00153FD0(o, pos, a3, 0);
    o->vt = D_00449F10;
    {
        Sub *s = &o->sub;
        Vec3 p = pos;
        s->b9 = 0;
        s->pos = p;
        s->d0 = 100;
        s->d2 = -32;
        s->c0 = 100;
        s->c2 = -32;
        s->f24 = 120.0f;
        s->f28 = D_004815BC;
        s->d1 = 255;
        s->f1C = 120.0f;
        s->f20 = D_004815BC;
        s->c1 = 255;
        s->i2C = 0;
        s->hA = 0;
        s->h12 = 0;
        s->b8 = 0;
        ovl_ntgui2_func_0013D230(s, p, 100, 255, -32);
    }
    o->rot = rot;
    o->iA8 = a6;
    o->time = D_004844A4 + 600;
    o->flags |= 1;
    func_00143830(o);
    func_0024D308(func_00165DC0(D_00485380, D_00470908), o, 1.0f);
    o->iA0 = a5;
}
}
