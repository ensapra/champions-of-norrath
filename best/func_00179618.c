extern u8 func_001C7508[];
extern u8 func_001C7330[];
extern void func_00150444(void *);
extern void func_00150AA4(void *);
extern s32 D_0047FC38;
extern s32 D_0047FC3C;

void func_00151628(u8 *g) {
    void *p = func_001C7508;
    p = *(void **)((u8 *)p + 4);
    ((void (*)(void))p)();
    func_00150444(g);
    *(s32 *)(g + 0xA8) = 1;
}

void func_00150050(u8 *g) {
    void *p;
    func_00150AA4(g);
    p = func_001C7330;
    p = *(void **)((u8 *)p + 0x178);
    ((void (*)(void *))p)(g);
    D_0047FC38 = *(s32 *)(g + 0x85C);
    D_0047FC3C = *(s32 *)(g + 0x860);
}

s32 func_001799B0(f64, f64);
f64 func_00179948(f64, f64);
s64 func_00179AB8(f64);
s64 func_00179618(f64 a) {
    f64 z = 0;
    if (func_001799B0(a, z) < 0)
        return -func_00179AB8(func_00179948(z, a));
    return func_00179AB8(a);
}

typedef struct N { s32 v; s32 pad[2]; struct N *next; } N;
N *func_001515B8(u8 *g, N *n) {
    N *head = (N *)(g + 0x840);
    if (n == 0) {
        n = *(N **)(g + 0x84C);
        while (n->v == 0) {
            n = n->next;
            if (n == head) return 0;
        }
        return n;
    }
    n = n->next;
    while (n != 0) {
        if (n == head) return 0;
        if (n->v != 0) return n;
        n = n->next;
    }
    return 0;
}
