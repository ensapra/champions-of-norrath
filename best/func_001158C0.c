typedef struct { s32 a, b, c; } V3;
typedef struct O {
    s32 f0, f4, f8, fC;
    V3 v10;
    f32 f1C, f20; s32 f24; u8 f28, f29; u8 pad2A[2];
    s32 f2C; f32 f30; s32 f34; u16 f38; u16 pad3A; f32 f3C, f40; s32 f44;
    void *vt; s32 f4C, f50, f54, f58, f5C, f60;
    s32 f64[10]; u8 f8C; u8 pad8D[3]; s32 f90, f94;
} O;
extern char D_0044CB08[], D_0044D498[];
void *func_001441B8(s32);
void func_00194498(void *, void *, ...);
void func_00162BF0(void *, void *, ...);

O *func_001158C0(O *s) {
    O *d = func_001441B8(0x98);
    if (d) {
        d->vt = D_0044D498;
        func_00194498(d, s, 0);
        func_00194498(&d->f4, &s->f4);
        func_00194498(&d->f8, &s->f8);
        d->fC = s->fC;
        d->f1C = s->f1C;
        d->f24 = s->f24;
        d->v10 = s->v10;
        d->f20 = s->f20;
        d->f28 = s->f28;
        d->f29 = s->f29;
        d->vt = D_0044CB08;
        d->f2C = s->f2C;
        d->f30 = s->f30;
        d->f34 = s->f34;
        d->f38 = s->f38;
        d->f3C = s->f3C;
        d->f40 = s->f40;
        d->f44 = s->f44;
        d->f4C = s->f4C;
        d->f50 = s->f50;
        d->f54 = s->f54;
        d->f58 = s->f58;
        d->f5C = s->f5C;
        d->f60 = s->f60;
        func_00162BF0(d->f64, s->f64);
        d->f8C = s->f8C;
        d->f90 = s->f90;
        d->f94 = s->f94;
    }
    return d;
}
