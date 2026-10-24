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
} Vec;

void func_001428E8(Vec *v);

void func_001429B8(Vec *v, s32 *value)
{
    s32 count = v->count;
    if (count >= v->size) {
        func_001428E8(v);
        count = v->count;
    }
    v->count = count + 1;
    v->data[count] = *value;
}

void func_00140C78(void *t)
{
    u8 *p = D_010D1340;
    func_00140540(&p[0x230], &p[0x20], t);
    func_001B08B0(D_010D12C0, 0xF, 1, p, 0x1000, p, 0x1000, 0, 0);
}

void func_00140BC8(s32 a, void *b, void *c, void *d, void *e)
{
    u8 *p = D_010D1340;
    *(s32 *)(p + 0x10) = a;
    func_001A42B8(&p[0x30], b);
    func_001A42B8(&p[0x130], c);
    func_00140540(&p[0x230], &p[0x20], d);
    func_00140540(&p[0x330], &p[0x24], e);
    func_001B08B0(D_010D12C0, 0xE, 1, p, 0x1000, p, 0x1000, 0, 0);
}

void func_00140B78(s32 a)
{
    u8 *p = D_010D1340;
    *(s32 *)p = a;
    func_001B08B0(D_010D12C0, 0xD, 1, p, 0x1000, p, 0x1000, 0, 0);
}
