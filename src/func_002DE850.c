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

extern s32 func_00143C38(void *);
s32 func_002331A0(u8 *arg0, s32 *out) {
    s32 *p = out;
    *p = func_00143C38(arg0 + 0x3C0);
    p++;
    *p = func_00143C38(arg0 + 0x3E0);
    p++;
    *p = func_00143C38(arg0 + 0x400);
    p++;
    *p = *(s16 *)(arg0 + 0x42A);
    p++;
    *p = *(s32 *)(arg0 + 0xF4);
    p++;
    *(f32 *)p = *(f32 *)(arg0 + 0xB0);
    p++;
    return (u8 *)p - (u8 *)out;
}

extern f32 D_00481A04;
extern u8 D_007D7DD0[];
extern void func_00180D78(u8 *a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7,
                   f32 f0, f32 f1, f32 f2, s32 a8, s32 a9, s32 a10, s32 a11, s32 a12);
void func_00233110(s32 arg0, s32 arg1) {
    if (arg1 == 0xFFFF) {
        if (arg0 == 1) {
            func_00180D78(D_007D7DD0, 0x72, 0x6C, 0x1A, 0x76, 0x85, 0x49, 0x61,
                          6.0f, 5.0f, D_00481A04, arg0, 3, arg0, 9, 0);
        }
    }
}

typedef struct { s32 a, b, c; } V12;
void func_00143830(void *);
void func_001815C8(V12 *, s32, s32, s32, s32, s32, s32, s32, f32, f32);
extern f32 D_004819C4;
extern s32 D_00484F74;

void func_00231318(u8 *arg0) {
    V12 v = *(V12 *)(arg0 + 0x10);
    func_001815C8(&v, 0x80, 0x64, 0x5A, 0x73, D_00484F74, 0, 2, 13.0f, D_004819C4);
    arg0[0x89] = 0;
    if ((s8)arg0[0x88] == 0) {
        func_00143830(arg0);
        arg0[0x88] = 1;
    }
}
