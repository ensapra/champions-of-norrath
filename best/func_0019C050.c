typedef struct { s32 cur, max, init, wait, attr, opt; } SP;
typedef struct { s32 f0, f4, f8, fC; volatile s32 s0, s1, s2; s32 v1, v2; } O;
s32 CreateSema(SP *);
s32 WaitSema(s32);
s32 DeleteSema(s32);
s32 SignalSema(s32);

s32 func_0019C050(O *o, s32 x, s32 y) {
    SP p;
    p.max = 1;
    p.init = 1;
    p.opt = 0;
    o->s0 = CreateSema(&p);
    if (o->s0 < 0) return o->s0;
    WaitSema(o->s0);
    o->v2 = x;
    o->v1 = y;
    o->fC = 0;
    o->f8 = 0;
    o->f0 = 0;
    o->f4 = 0;
    p.init = 0;
    o->s1 = CreateSema(&p);
    if (o->s1 < 0) {
        DeleteSema(o->s0);
        return o->s1;
    }
    o->s2 = CreateSema(&p);
    if (o->s2 < 0) {
        DeleteSema(o->s0);
        DeleteSema(o->s1);
        return o->s2;
    }
    SignalSema(o->s0);
    return 0;
}
