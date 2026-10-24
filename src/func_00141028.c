extern u8 D_010D1310[];
extern u8 D_010D3340[];
void func_001B08B0(void *, s32, s32, void *, s32, void *, s32, s32, s32);
s32 sceSifDmaStat(s32);
void FlushCache(s32);
s32 sceSifSetDma(void *, s32);
s64 func_00141074(s32 id) {
    return sceSifDmaStat(id);
}
typedef struct { s32 src, dst, size, attr; } Xfer;
void func_00141028(s32 src, s32 dst, u32 size, s32 attr) {
    Xfer x;
    x.src = src;
    x.dst = dst;
    x.size = (size & ~15) + ((size & 15) ? 16 : 0);
    x.attr = attr;
    FlushCache(0);
    sceSifSetDma(&x, 1);
}
void func_00140FE0(void) {
    func_001B08B0(D_010D1310, 0, 1, D_010D3340, 0x1000, D_010D3340, 0x1000, 0, 0);
}
typedef struct Vec { s32 *data; s32 size; s32 unk8; s32 count; } Vec;
void func_001428E8(Vec *v);
void func_00142A20(Vec *v, s32 index, s32 *value) {
    s32 count = v->count;
    s32 i;
    s32 val;
    if (count >= v->size) {
        func_001428E8(v);
        count = v->count;
    }
    for (i = count - 1; i >= index; i--)
        v->data[i + 1] = v->data[i];
    val = *value;
    count++;
    v->count = count;
    v->data[index] = val;
}
