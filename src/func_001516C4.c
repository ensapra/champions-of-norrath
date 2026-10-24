void *func_0011B9A8(s32);
typedef struct { s32 a; s32 pad; s64 c; s32 b; } Node1516;
Node1516 *func_001516C4(s32 a, s32 b, s64 c) {
    Node1516 *n = func_0011B9A8(0x20);
    if (n != NULL) {
        n->a = a;
        n->b = b;
        n->c = c;
    }
    return n;
}
