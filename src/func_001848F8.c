typedef struct {
    s32 size;
    s32 count;
    s32 unk8;
    u8 *ptr;
} Ring;

void func_001AE898(Ring *r) {
    r->count++;
    r->ptr++;
    if (r->ptr == (u8 *)r + (r->size + 0x10)) {
        r->ptr = (u8 *)r + 0x10;
    }
}

typedef struct {
    s32 unk0;
    s32 unk4;
    u8 *data;
    u32 count;
} List28;

void func_00183888(void *, void *, s32);

s32 func_001849E8(List28 *src, List28 *dst, s32 n) {
    s32 i;
    dst->count = 0;
    for (i = 0; i < src->count; i++) {
        if (i >= n) {
            return -i;
        }
        func_00183888(dst->data + dst->count * 0x28, src->data + i * 0x28, 10);
        dst->count++;
    }
    return i;
}

extern u8 func_001D1C80[];
extern u8 func_001E23F8[];
extern u8 jtbl_004C006C[];
void func_001A2850(void *);
void func_0019738C(void *);
void func_00182918(s32);
void func_0019B704(void);

void func_00184980(void) {
    u8 *p = func_001D1C80 + 0x6C0;
    func_001A2850(jtbl_004C006C + 0xD9B4);
    func_0019738C(p + 0x470 + *(s32 *)(p + 0x5BD0) * 0xE90);
    *(s32 *)(p + 0x404) = 1;
    *(s32 *)(p + 0x5C60) = 0;
    *(s32 *)(p + 0x5C58) = func_001E23F8[0x48];
    *(s32 *)(p + 0x5C5C) = 0;
    func_00182918(func_001E23F8[0x48]);
    func_0019B704();
}

typedef struct {
    s32 unk0;
    s32 unk4;
    u8 pad[0x18];
} S20;
extern S20 D_010F0430[];
void func_00191668(S20 *);
void func_00184800(S20 *, s32, s32);
void func_00191728(S20 *, s32);
void func_00191678(S20 *);

s32 func_001848F8(s32 a, s32 b) {
    s32 *sel = (s32 *)(func_001D1C80 + 0x504);
    s32 x = *sel;
    S20 *q = &D_010F0430[x];
    *sel = x ^ 1;
    func_00191668(q);
    func_00184800(q, a, b);
    func_00191728(q, 0);
    func_00191678(q);
    return q->unk4;
}
