extern u8 func_001C7330[];
extern u8 func_001C7508[];
extern void func_00150D88(void *);

s64 func_0015084C(u8 *o) {
    void *p = func_001C7330;
    void *q;
    p = *(void **)((u8 *)p + 0x184);
    ((void (*)(void))p)();
    q = *(void **)(o + 0x4C);
    q = *(void **)((u8 *)q + 0x130);
    ((void (*)(void *))q)(o);
    q = *(void **)(o + 0x4C);
    q = *(void **)((u8 *)q + 0x12C);
    ((void (*)(void *))q)(o);
    func_00150D88(o);
}

typedef struct L { s32 on; s32 pad; struct L *next; s32 pad2; u8 *obj; } L;
void func_0015027C(u8 *o, s32 x) {
    L *end = (L *)(o + 0x840);
    L *n;
    void *p = func_001C7508;
    p = *(void **)((u8 *)p + 0x30);
    ((void (*)(void))p)();
    if (*(s32 *)(o + 0x854) != 0 && (s32)end->next != (s32)end) {
        n = end;
        do {
            void *q;
            n = n->next;
            if (n->on != 0) {
                u8 *ob = (u8 *)*(void **)((u8 *)n + 0x10);
                q = *(void **)(ob + 0x4C);
                q = *(void **)((u8 *)q + 0x108);
                ((void (*)(void *, s32))q)(ob, x);
            }
        } while ((s32)n->next != (s32)end);
    }
}
