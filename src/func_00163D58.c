typedef struct {
    s32 key;
    char pad[0x1C];
} Ent;

typedef struct {
    char pad[4];
    s8 n;
    char pad5[3];
    Ent e[1];
} Tbl;

Ent *func_00163D58(Tbl *t, s32 key) {
    s32 i;
    if (t == 0 || key == 0) return 0;
    for (i = 0; i < t->n; i++) {
        if (t->e[i].key == key) return &t->e[i];
    }
    return 0;
}
