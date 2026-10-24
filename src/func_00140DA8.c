extern u8 D_010D12C0[];
extern u8 D_010D1340[];
void func_001B08B0(void *, s32, s32, void *, s32, void *, s32, s32, s32);
void func_001A42B8(void *, void *);
void func_00140540(void *, void *, void *);

typedef struct Vec {
    s32 *data;
    s32 size;
    s32 unk8;
    s32 count;
    s32 grow;
} Vec;

void func_001428E8(Vec *v);

void func_00142A20(Vec *v, s32 index, s32 *value) {
    s32 count = v->count;
    s32 i;
    if (count >= v->size) {
        func_001428E8(v);
        count = v->count;
    }
    for (i = count - 1; i >= index; i--)
        v->data[i + 1] = v->data[i];
    v->count = count + 1;
    v->data[index] = *value;
}

void func_00140DA8(void *t) {
    u8 *p = D_010D1340;
    func_00140540(&p[0x230], &p[0x20], t);
    func_001B08B0(D_010D12C0, 0x12, 1, p, 0x1000, p, 0x1000, 0, 0);
}

void func_00140D20(s32 a, void *t) {
    u8 *p = D_010D1340;
    func_00140540(&p[0x230], &p[0x20], NULL);
    *(s32 *)(p + 0x10) = a;
    func_001A42B8(&p[0x30], t);
    func_001B08B0(D_010D12C0, 0x11, 1, p, 0x1000, p, 0x1000, 0, 0);
}

void func_00140CD8(void) {
    func_001B08B0(D_010D12C0, 0x10, 1, D_010D1340, 0x1000, D_010D1340, 0x1000, 0, 0);
}
