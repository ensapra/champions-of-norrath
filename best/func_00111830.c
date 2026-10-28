typedef struct {
    char pad0[0x10];
    char f10[0x28];
    s16 angle;          /* 0x38 */
    char pad3A[0x66];
    s64 flags;          /* 0xA0 */
    char padA8[0xC];
    f32 vel[2];         /* 0xB4 */
    s16 fBC;            /* 0xBC */
    char padBE[0x22];
    f32 scale;          /* 0xE0 */
    char padE4[8];
    s32 active;         /* 0xEC */
    char padF0[0x30];
    char f120[0x200];
    s8 timer;           /* 0x320 */
} S00111830;

f32 func_0015A070(s32);
f32 func_0015A100(s32);
s32 func_00160830(void *, void *, f32 *, s16 *, f32);
extern f32 D_0047FC64;
extern f32 D_0047FC68;

#define IN_FADE(x) ((u32)((u8)(x) - 1) < 60)

s32 func_00111830(S00111830 *p, f32 t) {
    f32 *v = p->vel;
    s32 ret = 0;
    f32 s, c, x, y, k, sc, K;

    if (p->active != 0) {
        void *q = (p->flags & 0x2000000) ? NULL : p->f10;
        s32 tm = p->timer;
        if (IN_FADE(p->timer)) {
            ret = func_00160830(p->f120, q, v, &p->fBC, t * (f32)(60 - tm) * D_0047FC64);
        } else {
            ret = func_00160830(p->f120, q, v, &p->fBC, t);
        }
    }
    sc = p->scale;
    v[0] *= sc;
    v[1] *= sc;
    s = func_0015A070(p->angle - 0x4000);
    c = func_0015A100(p->angle - 0x4000);
    x = -v[0];
    y = p->vel[1];
    K = D_0047FC68;
    v[0] = x * s + y * c;
    p->vel[1] = x * c - y * s;
    if (IN_FADE(p->timer)) {
        k = (f32)(60 - p->timer) * K;
        v[0] *= k;
        v[1] *= k;
        p->fBC = (f32)p->fBC * ((f32)(60 - p->timer) * K);
    }
    return ret;
}
