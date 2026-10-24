typedef struct Block {
    struct Block *next;
    s32 f4;
    volatile s32 id;
    s32 flags;
    s32 f10;
    s32 f14;
    s64 f18;
    s32 f20;
    s32 f24;
    void *f28;
} Block;

typedef struct {
    s32 f0;
    s32 f4;
    s32 state;
    volatile s32 seq;
    volatile s32 nused;
    Block *free;
    s32 f18;
    s32 cur;
} Pool;

extern Pool D_004459A8[];

s32 func_002DE850(void) {
    Pool *p = D_004459A8;
    Block *b = p->free;
    if (b == NULL) {
        return 0x80008005;
    }
    p->nused++;
    b->f28 = 0;
    p->free = b->next;
    b->flags = 0;
    b->f18 = 0;
    return ((s32)b << 4) | (b->id = ((++p->seq << 1) & 0x3FE) | 1);
}

typedef struct {
    s64 v;
} __attribute__((packed)) S64Pack;
typedef struct {
    S64Pack a;
    s32 b;
} L12;
extern char D_0044F9A8[];
s32 D_004844A4;
s32 D_00484538;
s32 func_00180260(void);
void func_00143830(void *);
s32 func_001411F0(void *, void *, s32, s32);

void func_0023C060(void *arg0, void *arg1) {
    u8 *p = (u8 *)arg0;
    L12 loc;
    loc = *(L12 *)arg1;
    func_001411F0(arg0, &loc, 0, 0);
    *(void **)(p + 0x48) = D_0044F9A8;
    *(s32 *)(p + 0xC) |= 9;
    *(s32 *)(p + 0x54) = func_00180260();
    *(s32 *)(p + 0x4C) = 0;
    *(s32 *)(p + 0x50) = D_004844A4 + 0x3C;
    func_00143830(arg0);
}

typedef struct {
    u8 p0[0x328];
    s32 f328;
    u8 p1[0x12C];
    s32 arr[4];
    s32 f464;
    s32 f468;
    s32 f46C;
} Obj;

s32 func_0023C010(u8 *o) {
    s32 i;
    for (i = 0; i < D_00484538; i++) {
        if (*(s32 *)(o + 0x454 + i * 4) == 0) return 1;
    }
    return *(s32 *)(o + 0x464) == 0;
}

s32 func_0023BFA0(u8 *o) {
    s32 i;
    if (*(s32 *)(o + 0x46C) < *(s32 *)(o + 0x328)) {
        for (i = 0; i < D_00484538; i++) {
            if (*(s32 *)(o + 0x470 + i * 4) == 0) return 1;
        }
    }
    return 0;
}
