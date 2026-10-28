typedef struct B B;
struct B { char p[12]; s32 f; char q[0x94]; u64 a0; char r[0x310 - 0xA8]; s16 st; };
typedef struct A { char p[0x4C]; B *c; char q[0x68 - 0x50]; s32 n; s32 done; } A;
s32 func_00153FA8(void *);
void func_001CE218(B *, A *, s32, s32, s32, s32, void *, s32, f32, f32, s32, s32);

void func_0022ED40(A *a, B *b) {
    char t[0x40];
    B *c, *d;
    s32 f, i;
    if (a->done) return;
    c = a->c;
    if (c && b && ((f = b->f) & 0x20)) {
        d = *(B **)((char *)c + 0xC);
        if (d->f & 0x40) {
            if (f & 0x40) return;
            if (b->st) return;
            if (!d->st) goto next;
        } else {
            if (!(f & 0x40)) return;
            if (!d->st) goto next;
        }
        if (f & 0x40) return;
        if (b->st) return;
    }
    if (b) {
        f = b->f;
        if (!(f & 0x20)) a->done = 1;
    }
next:
    if (b) {
        if (f & 0x40) {
            if (func_00153FA8(a) < 0) return;
        } else if (f & 0x20) {
            if (b->a0 & 0x200) return;
        }
    }
    for (i = 3; i >= 0; i--) *(s16 *)(t + 0x24 + i * 8) = -1;
    t[0x21] = -1;
    t[0x20] = -1;
    for (i = 0; i < 4; i++) {
        *(s16 *)(t + 0x10 + i * 2) = 0;
        *(s16 *)(t + 0x18 + i * 2) = 0;
    }
    func_001CE218(b, a, 100000, 0, 0, 0, t, 0, (f32)a->n, (f32)a->n, 0, 0);
    a->done = 1;
}
