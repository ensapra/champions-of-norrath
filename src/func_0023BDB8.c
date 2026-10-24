typedef struct Block {
    struct Block *next;
    s32 f4;
    volatile s32 id;
    s32 flags;
} Block;
typedef struct {
    s32 f0, f4, state, seq, nused;
    Block *free;
    s32 f18, cur;
} Pool;
extern Pool D_004459A8[];
void func_002DE4A8(Block *);

s32 func_002DE908(u32 id)
{
    Block *b = (Block *)((id >> 10) << 6);
    Pool *p;
    if ((s32)id < 0 || (id & 0x3FF) != b->id)
        return 0x80008002;
    p = D_004459A8;
    if (p->cur == id)
        return 0x80000010;
    if (b->flags & 2)
        func_002DE4A8(b);
    b->id = 0;
    b->flags = 0;
    b->next = p->free;
    p->free = b;
    p->nused--;
    return 0;
}

s32 func_00111B90(void *, char *);
void func_002371A8(void *, s32);

s32 func_0023BDB8(char *dst, char *src)
{
    char *base = src;
    s32 a;
    src += func_00111B90(dst, src);
    src += 4;
    a = *(s32 *)(src - 4);
    src += 4;
    *(s32 *)(dst + 0x3C0) = a;
    *(s32 *)(dst + 0x3C4) = *(s32 *)(src - 4);
    src += 4;
    *(s32 *)(dst + 0xD0) = *(s32 *)(src - 4);
    func_002371A8(dst, 1);
    if (*(s16 *)(dst + 0x23C) == 10)
        *(s32 *)(dst + 0x3C4) = 0;
    return src - base;
}

s32 func_001119D8(void *, s32 *);
s32 func_0023BD58(void *src, s32 *dst)
{
    s32 offset = func_001119D8(src, dst);
    s32 *base = dst;
    dst = (s32 *)((char *)dst + offset);
    *dst++ = *(s32 *)((char *)src + 0x3C0);
    *dst++ = *(s32 *)((char *)src + 0x3C4);
    *dst++ = *(s32 *)((char *)src + 0xD0);
    return (char *)dst - (char *)base;
}

extern char D_0034B988[];
extern char D_00472770[];
extern char D_00472780[];
s32 D_00483F48;
void func_0024AF80(s32);
s32 func_0024EED0(char *, s32);
s64 func_00236998(void *arg0)
{
    __builtin_memcpy(D_0034B988, D_00472770, 11);
    D_00483F48 = (s32)*(f32 *)((char *)arg0 + 0x230);
    func_0024AF80(0);
    return func_0024EED0(D_00472780, 0x103);
}
