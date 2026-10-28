typedef struct { f32 x, y, z; } Vec12;

extern "C" {
extern s32 func_00140F60(void *, s8 *, s32);
extern s32 func_001411F0(void *, Vec12, s32 *, s32 *);
extern s32 func_00143908(void *);
extern s32 func_00143A80(void *, s8 *, s32);
extern u8 D_0044C8C0[];
extern s8 D_00484FD8[];
extern s8 D_00484FE0[];
extern s8 D_00484FE8[];
}

struct Obj {
    s32 pad0[3];
    s32 state;
    f32 x;
    f32 y;
    u8 pad18[0x48 - 0x18];
    void *vt;
    f32 minx, miny, maxx, maxy;
    s32 tex;
    s32 pad60[2];
    s32 sel;
    s32 func_001D1470(Vec12 v, s32 *p);
};

s32 Obj::func_001D1470(Vec12 v, s32 *p)
{
    f32 w, h, x2, y2;
    s32 r;
    r = func_001411F0(this, v, 0, p);
    vt = D_0044C8C0;
    w = func_00140F60(this, D_00484FD8, 0);
    h = -func_00140F60(this, D_00484FE0, 0);
    state = 3;
    tex = func_00143A80(this, D_00484FE8, 0);
    x2 = x + w;
    y2 = y + h;
    minx = x <? x2;
    miny = y <? y2;
    maxx = x >? x2;
    maxy = y >? y2;
    r = func_00143908(this);
    sel = -1;
    return r;
}
