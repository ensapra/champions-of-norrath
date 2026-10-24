typedef struct {
    s32 key;
    s32 flags;
    s32 pad[4];
    s32 f18;
} E;

typedef struct {
    E *items;
    s32 b, c;
    s32 count;
    s32 e;
} Q;

extern Q D_010C1E80[];
extern s32 D_010C1EA8[];
extern void func_0014CF78(s32, s32 *, s32 *);

s32 func_00106F18(Q *q, s32 i) {
    E *e = &q->items[i];
    if (e->flags & 1)
        return e->f18 != 0;
    return 1;
}

void func_001079A0(s32 v) {
    s32 k, i;
    for (k = 0; k < 2; k++) {
        Q *q = &D_010C1E80[k];
        for (i = 0; i < q->count; i++) {
            if (q->items[i].key == v)
                q->items[i].f18 = 1;
        }
    }
}

void func_00107A20(s32 *a, s32 *b) {
    *a = 0;
    *b = 0;
    if (D_010C1EA8[0] != 0)
        func_0014CF78(D_010C1EA8[0], a, b);
}
