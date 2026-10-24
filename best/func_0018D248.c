typedef struct { s32 (*f0)(s32); void (*f4)(s32); s32 (*f8)(s32, s32); } VT;
s32 func_0018D248(s32 a, VT *vt) {
    s32 r = -1;
    s32 n;
    while ((n = vt->f0(a)) > 0) {
        if (vt->f8(a, n) == -1) {
            vt->f4(a);
            return r;
        }
        r = 1;
    }
    return 0;
}
typedef struct N { s32 a; s32 b; s32 c; struct N *next; } N;
void func_0018D2F0(u8 *p) {
    N *n;
    *(s32 *)(p + 0x370) = 0;
    n = *(N **)(p + 0x37C);
    do {
        n->b = 0;
        n = n->next;
    } while (n != 0);
}
typedef struct { f32 a, b, c, d; } F4;
void func_0018D320(u8 *p) {
    f32 x = *(f32 *)(p + 0x320);
    f32 y = *(f32 *)(p + 0x324);
    *(f32 *)(p + 0x338) = x;
    *(f32 *)(p + 0x330) = y;
    *(f32 *)(p + 0x33C) = x;
    *(f32 *)(p + 0x334) = y;
    *(F4 *)(p + 0x340) = *(F4 *)(p + 0x330);
}
typedef struct { s32 size; s32 count; s32 pad; u8 *cur; } Ring;
void func_001AE898(Ring *r) {
    r->count++;
    r->cur++;
    if (r->cur == (u8 *)r + (r->size + 0x10)) r->cur = (u8 *)r + 0x10;
}
