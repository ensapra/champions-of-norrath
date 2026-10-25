typedef struct {
    s32 unk0;
    s32 unk4;
    s32 size;
    s32 count;
} Chunk1778E8;

typedef struct {
    void *unk0;
    void *unk4;
    void **unk8;
    void **unkC;
    s32 unk10;
} Obj1778E8;

void *func_00179280(s32, s32);

s32 func_001778E8(Obj1778E8 *o, Chunk1778E8 *a, Chunk1778E8 *b, Chunk1778E8 *c, Chunk1778E8 *d) {
    s32 n;
    s32 i;
    void **list;

    if (o == NULL || a == NULL || b == NULL || c == NULL || d == NULL) {
        return 6;
    }
    o->unk10 = a->count;
    if (o->unk10 <= 0) {
        return 6;
    }
    n = b->count;
    o->unk0 = a + 1;
    o->unk4 = d + 1;
    if (n <= 0) {
        return 6;
    }
    list = func_00179280(0x10, n * 4);
    o->unk8 = list;
    if (list == NULL) {
        return 1;
    }
    b++;
    for (i = 0; i < n; i++) {
        list[i] = b + 1;
        b = (Chunk1778E8 *)((char *)(b + 1) + b->size * 4);
    }
    n = c->count;
    if (n <= 0) {
        return 6;
    }
    list = func_00179280(0x10, n * 4);
    o->unkC = list;
    if (list == NULL) {
        return 1;
    }
    c++;
    for (i = 0; i < n; i++) {
        list[i] = c + 1;
        c = (Chunk1778E8 *)((char *)(c + 1) + c->size * 4);
    }
    return 0;
}
