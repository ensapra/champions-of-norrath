typedef struct { s16 adj; s16 pad; void *fn; } Th;
typedef struct { char p[0x48]; char *vt; } Vo;
typedef struct { char p[0x60]; char *vt; } Vo2;
typedef struct { char p0[0xC]; Vo *obj; } Hold;
typedef struct {
    char p0[0x4C]; Hold *h4C;
    char p1[0x94 - 0x50]; s16 s94;
    char p2[0xC4 - 0x96]; s32 c4; Vo2 *c8; s32 cC;
} A;
typedef struct { s16 id, a, b, c; } Ent;
typedef struct { s16 pad[8]; s16 z[8]; s8 b20, b21; s16 pad22; Ent e[4]; } Buf;
typedef struct { char p0[0xC]; s32 flags; char p1[0xA0 - 0x10]; u64 f; } B;
extern f32 D_00482F74;
s32 func_00153FA8(void *);
void func_001CE218(B *, s32, s32, f32, f32, s32, Buf *, s32);

void func_002BD800(A *self, B *arg) {
    Buf buf;
    s32 i, cnt, base, hi, k;
    s16 *p, *q, *w;
    s16 K, m1;
    char *b, *pb;
    f32 f;
    self->cC = 0;
    if (self->h4C != 0) {
        if (arg->flags & 0x20) {
            Vo *o = self->h4C->obj;
            Th *t = (Th *)(o->vt + 0xA0);
            if (!((s32 (*)(void *))t->fn)((char *)o + t->adj)) return;
        } else {
            self->c4 = 1;
        }
    } else if (!(arg->flags & 0x20)) {
        self->c4 = 1;
    }
    if (arg != 0) {
        if (arg->flags & 0x40) {
            if (func_00153FA8(self) < 0) return;
        } else if (arg->flags & 0x20) {
            if (arg->f & 0x200) return;
        }
    }
    {
        Vo2 *o = self->c8;
        Th *t = (Th *)(o->vt + 0x70);
        base = ((s32 (*)(void *, s32, s32, void *))t->fn)((char *)o + t->adj, 0, self->s94, (char *)self + 0x4C);
    }
    b = (char *)&buf;
    m1 = -1;
    w = &buf.e[3].id;
    i = 3;
    do {
        i--;
        *w = m1;
        w -= 4;
    } while (i >= 0);
    b[0x20] = -1;
    b[0x21] = -1;
    pb = b + 8;
    for (i = 3, k = 0x10; i >= 0; i--, k += 2) {
        *(s16 *)(b + k) = 0;
        *(s16 *)(pb + k) = 0;
    }
    f = (f32)base * D_00482F74;
    K = 0x16;
    f = f * ((f32)func_00153FA8(self) * 0.0000152587890625f);
    hi = base + (s32)f;
    cnt = 0;
    p = &buf.e[0].id;
    q = &buf.e[0].c;
    for (;;) {
        s16 id = *p;
        if (id == -1 || (cnt++, id == K)) {
            *p = K;
            *q = 0;
            q[-2] = base;
            q[-1] = hi;
            break;
        }
        q += 4;
        p += 4;
        if (cnt >= 4) break;
    }
    func_001CE218(arg, 0, 100000, 0.0f, 0.0f, 0, &buf, 0);
    self->cC = (s32)arg;
    self->c4 = 1;
}
