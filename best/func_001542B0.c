typedef struct { s16 d; s16 pad; void *fn; } VE;
typedef struct { char p[0x48]; VE *vt; } O;
typedef struct { char p[0xC]; O *f0C; } P;
typedef struct { char p[0x44]; u32 f44; s32 pad48; P *f4C; s32 pad50; u8 f54; } Self;
void *func_002FF3C8(void);
s32 func_002FD2E0(void *, void *);
typedef void *(*TFn)();
typedef void (*MFn)(void *, void *, s32, s32, f32);

void func_001542B0(Self *self, O *o) {
    O *x = 0;
    void *t0, *t1;
    s32 ne;
    if (self->f4C) x = self->f4C->f0C;
    if (o) t0 = ((TFn)o->vt[0].fn)();
    else t0 = func_002FF3C8();
    if (x) t1 = ((TFn)x->vt[0].fn)();
    else t1 = func_002FF3C8();
    ne = func_002FD2E0(t0, t1) ^ 1;
    if (ne & 0xFF) {
        VE *e = &o->vt[2];
        u32 s = self->f44 * 0x19660D + 0x3C6EF35F;
        s32 n;
        self->f44 = s;
        n = (s >> 16) % 6 + 1;
        ((MFn)e->fn)((char *)o + e->d, self, 0, n, (f32)n);
        self->f54 = 1;
    }
}
