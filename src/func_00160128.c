typedef struct { s32 pad[5]; s32 used; } Owner;
typedef struct { s32 data; Owner *owner; s32 c; f32 rate; f32 scale; s32 f; s32 g; s16 flags; s16 i; } Slot;
typedef struct { s32 pad; s8 n; s8 max; u16 flags; Slot s[1]; } Stack;
extern const f32 D_0047FF50;

void func_00160128(Stack *st, s32 data, s32 flags, f32 t) {
    s32 n;
    Slot *s;
    Owner *o;
    f32 r;
    if (data == 0) return;
    n = st->n;
    if (n >= st->max) {
        n--;
        o = st->s[n].owner;
        if (o) {
            o->used = 0;
            st->s[n].owner = 0;
        }
    }
    if (n == 0) t = 0.0f;
    s = &st->s[n];
    st->n = n + 1;
    o = s->owner;
    s->data = data;
    st->flags |= flags;
    s->g = 0;
    s->i = 0;
    if (o) {
        o->used = 0;
        s->owner = 0;
    }
    s->flags = flags;
    r = 1.0f;
    s->c = 0;
    if (!(t < D_0047FF50)) r = 1.0f / (t * 60.0f);
    s->rate = r;
    s->scale = 1.0f;
    s->f = 0;
}
