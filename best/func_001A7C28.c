typedef struct S {
    char p0[0xC]; s32 flags; f32 pos[3];
    char p1[0x38-0x1C]; s16 ang;
    char p2[0xB4-0x3A]; f32 vx; f32 vy;
    char p3[0x120-0xBC]; char sub[0x200]; u8 t;
} S;
f32 func_0015A070(s32);
f32 func_0015A100(s32);
s32 func_00160830(void *, void *, void *, s32, f32);
extern f32 D_004804E8;

static inline s32 Mv(S *a, f32 *pos, f32 sc) {
    return func_00160830(a->sub, pos, &a->vx, 0, sc);
}

s32 func_001A7C28(S *a, f32 f) {
    s32 r;
    f32 s, c, x, y;
    u8 t = a->t;
    f32 *pos = a->pos;
    if (a->flags & 0x200000) pos = 0;
    if ((u32)(t - 1) < 0x3C) {
        r = Mv(a, pos, f * (f32)(0x3C - (s8)t) * D_004804E8);
    } else {
        r = Mv(a, pos, f);
    }
    s = func_0015A070(a->ang - 0x4000);
    c = func_0015A100(a->ang - 0x4000);
    x = -a->vx;
    y = a->vy;
    a->vx = x * s + y * c;
    a->vy = x * c - y * s;
    return r;
}
