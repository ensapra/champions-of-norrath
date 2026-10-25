typedef struct { f32 v[4]; } V4;
typedef struct { s32 a, b; u64 pad[11]; f32 x, y; char pad2[8]; V4 p, q; } Blk;
typedef struct { char pad[0x2C0]; Blk blk; } Obj;
void func_0018C1F0(Obj *, s32, f32 *);

void func_0018D488(Obj *o, s32 a1, V4 *out1, V4 *out2) {
    Blk saved;
    f32 fx, fy;
    saved = o->blk;
    fy = o->blk.y;
    fx = o->blk.x;
    o->blk.p.v[1] = fy;
    o->blk.p.v[3] = fx;
    o->blk.p.v[2] = fx;
    o->blk.p.v[0] = fy;
    o->blk.q = o->blk.p;
    o->blk.a = 1;
    o->blk.b = 0;
    func_0018C1F0(o, a1, &o->blk.x);
    if (out1) *out1 = o->blk.p;
    if (out2) *out2 = o->blk.q;
    o->blk = saved;
}
