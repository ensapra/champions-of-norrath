extern s32 D_00333920[];
void func_00138758(void*, s32, void*);
void func_00138900(void*, s32);
f32 *func_00143A58(void*);
void func_00180DA0(s32, void*, void*, f32);
typedef struct { s32 p0, id, h, x, y, z, a, b, c; } A1;
s32 func_0013A350(void *arg0, A1 *p){
    char buf[0xA0];
    s32 v0[4];
    f32 pos[4];
    f32 ang[4];
    f32 *t;
    f32 *pp=pos, *ap=ang;
    pp[0]=(f32)p->x; pp[1]=(f32)p->y; pp[2]=(f32)p->z;
    ap[0]=(f32)p->a; ap[1]=(f32)p->b; ap[2]=(f32)p->c;
    func_00138758(arg0, p->h, v0);
    func_00138900(buf, v0[0]);
    t = func_00143A58(buf)+4;
    pp[0]+=t[0]; pp[1]+=t[1]; pp[2]+=t[2];
    if (p->id == -1) { func_00180DA0(D_00333920[0], pp, ap, 0.0f); }
    else { func_00180DA0(D_00333920[p->id], pp, ap, 0.0f); }
    return 0;
}
