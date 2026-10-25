typedef struct { s16 delta; s16 pad; s32 (*fn)(void*, s32, s32); } VE;
typedef struct { char p[0x58]; VE e; } VT;
typedef struct { char p[0x60]; VT *vt; } O;
typedef struct { char p0[0xC]; s32 f0C; f32 f10, f14, f18; char p1[0x38-0x1C]; s16 f38; char p2[0x3C0-0x3A]; s32 f3C0; } P;
extern s32 D_004844A0;
f32 func_0015A070(s16);
f32 func_0015A100(s16);
f32 func_00176378(s32, f32 *, f32);
s32 func_001AC260(s32, s32);
s32 func_0029CC70(O *a, P *b) {
    if (b->f0C & 0x40) {
        f32 v[3];
        f32 s;
        s32 d, r;
        VE *e;
        f32 *q;
        r = func_001AC260(b->f3C0, 7);
        e = &a->vt->e;
        s = (f32)e->fn((u8*)a + e->delta, 1, r);
        v[0] = func_0015A070(b->f38) * s * 12.0f;
        v[1] = func_0015A100(b->f38) * s * 12.0f;
        q = &b->f10;
        v[2] = 0;
        v[0] += q[0];
        v[1] += q[1];
        d = (s32)(func_00176378(D_004844A0, v, s) - b->f18);
        d = __builtin_abs(d);
        if (d >= 0x49) return 0;
    }
    return 1;
}
