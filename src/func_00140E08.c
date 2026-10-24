extern u8 D_010D12C0[];
extern u8 D_010D1340[];
void func_001B08B0(void *, s32, s32, void *, s32, void *, s32, s32, s32);
void func_001A42B8(void *, void *);
void func_00144010(void *);

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

void func_00140E08(void *t) {
    u8 *p = D_010D1340;
    func_001A42B8(&p[0x230], t);
    func_001B08B0(D_010D12C0, 0x13, 1, p, 0x1000, p, 0x1000, 0, 0);
}

void func_00140E68(s32 a, s32 b, void *t) {
    u8 *p = D_010D1340;
    *(s32 *)(p + 8) = a;
    func_001A42B8(&p[0x230], t);
    *(s32 *)(p + 0x20) = b;
    func_001B08B0(D_010D12C0, 0x14, 1, p, 0x1000, p, 0x1000, 0, 0);
}

void func_00144634(u8 *arg0, s32 arg1, u8 *arg2) {
    s32 n = *(s32 *)(arg2 + 0xC);
    s32 end = arg1 + n;
    s32 i;
    s32 *src;
    s32 *dst;

    while (*(s32 *)(arg0 + 4) < end) {
        func_00144010(arg0);
    }
    if (n > 0) {
        src = *(s32 **)(arg2 + 0);
        dst = (s32 *)(arg1 * 4 + *(u32 *)arg0);
        for (i = n; i != 0; i--) {
            *dst++ = *src++;
        }
    }
    *(s32 *)(arg0 + 0xC) = end;
}
