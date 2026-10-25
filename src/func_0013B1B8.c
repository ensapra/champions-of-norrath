typedef struct { s32 d[150]; } Item;
typedef struct { Item it[2]; } Pair;
typedef struct { Pair *p; s32 pad[4]; } Ent;
typedef struct { Ent *e; } Q;
s32 ovl_ntgui2_func_0013AD08(Q *, void *, s32 *, s32 *);

s32 func_0013B1B8(Q *q, void *a1, Item *out) {
    s32 i, j;
    if (ovl_ntgui2_func_0013AD08(q, a1, &i, &j)) {
        s32 a = i;
        s32 b = j;
        Ent *ent = &q->e[a];
        Item *s = &ent->p[b].it[1];
        *out = *s;
        return 1;
    }
    return 0;
}
