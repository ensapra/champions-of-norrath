typedef struct { s32 u0,u4,u8,uC,u10,u14; } FixNode;
typedef struct { s32 *u0; FixNode *u4; volatile f32 f8, fC, f10, f14; f32 f18; volatile u16 u1C; u16 u1E; } PoolItem;
typedef struct { s8 pad0[4]; s8 n; s8 cap; u16 flags; PoolItem items[1]; } Pool;
void func_00163930(Pool *p, void *arg1, s32 arg2) {
    PoolItem *it;
    PoolItem *pr;
    FixNode *f;
    f32 fa, fb;
    f32 o;
    if (arg1 == NULL) return;
    it = &p->items[p->n];
    pr = it - 1;
    fa = (f32)pr->u0[1];
    fb = pr->f18;
    if (p->n < p->cap) {
        p->n = (s8)((u8)p->n + 1);
        it->u0 = arg1;
        p->flags |= arg2;
        f = it->u4;
        it->f18 = fb - fa;
        if (f != NULL) {
            f->u14 = 0;
            it->u4 = NULL;
        }
        it->u1C = arg2;
        o = 1.0f;
        it->f14 = 0;
        it->fC = 0;
        it->f10 = o;
        it->f8 = o;
    }
}
