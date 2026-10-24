typedef struct { s32 key; s32 pad; f32 val; s32 c; f32 one; s32 z; s32 p2[2]; } Ent;
typedef struct { s32 h0; s8 n; s8 p1[3]; Ent ents[1]; } Tbl;
static inline Ent *find(Tbl *t, s32 key) {
    s32 i;
    if (t == NULL) return NULL;
    if (key == 0) return NULL;
    for (i = 0; i < t->n; i++) {
        if (t->ents[i].key == key) return &t->ents[i];
    }
    return NULL;
}
void func_00163F88(Tbl *t, s32 key, f32 val) {
    Ent *e = find(t, key);
    if (e != NULL) {
        e->val = val;
        e->one = 1.0f;
        e->c = 0;
        e->z = 0;
    }
}
