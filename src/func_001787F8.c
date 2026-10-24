typedef struct {
    u64 r : 8;
    u64 g : 8;
    u64 b : 8;
    u64 a : 8;
    u64 x : 24;
    u64 y : 8;
} BF64;

typedef struct {
    s32 r, g, b, a, x, y;
} Unp;

s32 func_00178BD8(BF64 *in, Unp *out) {
    BF64 v = *in;
    out->r = v.r;
    out->g = v.g;
    out->b = v.b;
    out->a = v.a;
    out->x = v.x;
    out->y = v.y;
    return 0;
}

s32 func_00178B60(Unp *in, BF64 *out) {
    BF64 v;
    v.r = in->r;
    v.g = in->g;
    v.b = in->b;
    v.a = in->a;
    v.x = in->x;
    v.y = in->y;
    *out = v;
    return 0;
}

void func_00178818(s32, s32, s32);
void func_001787F8(s32 a, s32 b) {
    func_00178818(a, a, b);
}
