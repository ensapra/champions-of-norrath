/* identical to func_0015FAA0 (matched), with its names changed by decompdecomp */
s32 D_004868E0;
extern s32 iSignalSema_2(s32);

void Bounce__FiUsPv(void) {
    void (*fp)(s32) = (void (*)(s32))iSignalSema_2;
    fp(D_004868E0);
}

typedef struct {
    s32 unk0;                    /* +00 */
    s32 unk4;                    /* +04 */
    s32 unk8;                    /* +08 */
    s32 unkC;                    /* +0C */
    s32 unk10;                   /* +10 */
    s32 unk14;                   /* +14 */
    s32 unk18;                   /* +18 */
    s32 unk1C;                   /* +1C */
    s32 unk20;                   /* +20 */
    s32 unk24;                   /* +24 */
    s32 unk28;                   /* +28 */
    s32 unk2C;                   /* +2C */
    s32 unk30;                   /* +30 */
    s32 unk34;                   /* +34 */
    s32 unk38;                   /* +38 */
} FixNode;

void func_001637B0(FixNode *a) {
    s32 *p;

    a->unk8 += (s32)a;
    a->unk10 += (s32)a;
    a->unkC += (s32)a;
    if (a->unk34 != 0) {
        p = (s32 *)(a->unk34 + (s32)a);
        if (*p != 0) {
            a->unk34 = (s32)p;
            do {
                *p += (s32)a;
                p += 2;
            } while (*p != 0);
        }
    }
    if (a->unk38 != 0) {
        a->unk38 += (s32)a;
    }
}

typedef struct {
    void *unk0;                  /* +00 */
    void *unk4;                  /* +04 */
    f32   f8;                    /* +08 */
    f32   fC;                    /* +0C */
    f32   f10;                   /* +10 */
    f32   f14;                   /* +14 */
    s32   unk18;                 /* +18 */
    u16   unk1C;                 /* +1C */
    u16   unk1E;                 /* +1E */
} PoolItem;

typedef struct {
    s8  pad0[4];                 /* +00 */
    u8  n;                       /* +04: used count */
    s8  cap;                     /* +05: capacity */
    u16 flags;                   /* +06 */
    PoolItem items[1];           /* +08: 0x20 bytes each */
} Pool;

void func_00163830(Pool *p, void *arg1, s32 arg2) {
    PoolItem *it;

    if (arg1 == NULL) {
        return;
    }
    it = &p->items[p->n];
    if ((s8)p->n < p->cap) {
        p->n++;
        it->unk0 = arg1;
        p->flags |= arg2;
        it->unk18 = 0;
        if (it->unk4 != NULL) {
            it->unk1E = 0;
            ((FixNode *)it->unk4)->unk14 = 0;
            it->unk4 = NULL;
        }
        it->unk1C = arg2;
        it->fC = 0.0f;
        it->f8 = 1.0f;
        it->f10 = 1.0f;
        it->f14 = 0.0f;
    }
}
