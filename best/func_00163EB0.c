struct Ent { s32 key; s32 pad; f32 val; f32 d; f32 e; s32 z; s32 p2[2]; };
struct Tbl { s32 h0; s8 n; s8 p1[3]; Ent ents[1]; };
extern "C" f32 D_0047FFA0;
static inline Ent *find(Tbl *t, s32 key) {
    s32 i;
    if (t == 0) return 0;
    if (key == 0) return 0;
    for (i = 0; i < t->n; i++) {
        if (t->ents[i].key == key) return &t->ents[i];
    }
    return 0;
}
extern "C" void func_00163EB0(Tbl *t, s32 key, f32 x) {
    Ent *en = find(t, key);
    if (en != 0) {
        f32 one = 1.0f;
        f32 inv;
        en->val = en->val <? en->e;
        if (one < en->val) en->val = one;
        inv = one;
        if (!(x < D_0047FFA0)) inv = one / (x * 60.0f);
        en->e = 0;
        en->d = -inv;
    }
}
