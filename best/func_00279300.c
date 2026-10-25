typedef struct { s32 x, y, z; } V3;
typedef struct { V3 v; char pad[0x30]; s32 idx; } Pt;
typedef struct { s32 f0; s32 n; s32 f8; s32 fC; s32 f10; s32 pts; } List;
#define EL(l, i) ((Pt *)((i) * 64 + (l)->pts))
extern char D_00476088[];
s32 func_00144368(s32, char *);
void func_00279470(List *);

void func_00279300(List *a, List *b, List *c, s32 k) {
    s32 i;
    s32 r;
    a->f0 = b->f0;
    if (k != 0) {
        a->f8 = 1;
    } else {
        a->f8 = b->f8;
    }
    a->fC = b->fC;
    a->n = b->n + c->n - k - 1;
    r = func_00144368(a->n << 6, D_00476088);
    a->pts = r;
    for (i = 0; i < b->n - 1; i++) {
        Pt *p = EL(a, i);
        Pt *s = EL(b, i);
        p->idx = i;
        p->v = s->v;
    }
    for (i = 0; i < c->n - k; i++) {
        s32 j = b->n + i - 1;
        Pt *p = EL(a, i);
        Pt *d = EL(a, j);
        Pt *s = EL(c, i);
        p->idx = j;
        d->v = s->v;
    }
    func_00279470(a);
}
