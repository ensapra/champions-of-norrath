extern u8 func_001C8098[];
void func_0014CA30(s32);
void func_00171AE0(void *);
void *func_00162E20(s32, void *, void *, s32);
void func_00164FA4(void *);

void func_00164D3C(void)
{
    void *p = func_001C8098;
    p = *(void **)((u8 *)p + 0xD68);
    ((void (*)(void))p)();
}

void func_00164D98(void)
{
    void *p = func_001C8098;
    p = *(void **)((u8 *)p + 0xDAC);
    ((void (*)(void))p)();
}

void func_00164CD8(u8 *p)
{
    void *f = func_001C8098;
    f = *(void **)((u8 *)f + 0xD68);
    ((void (*)(void))f)();
    func_00171AE0(p + (*(s32 *)(p + 0x4EC) ^ 1) * 0x480 + 0x920);
    if (*(s32 *)(p + 0x1280) != 0)
        func_0014CA30(*(s32 *)(p + 0x910));
}

typedef struct __attribute__((packed, aligned(4))) { u64 a; u64 b; } P16;
typedef struct {
    s32 type; s32 pad0; s64 v8;
    s32 f10; s32 pad1; s64 v18;
    s32 f20; s32 pad2; s64 v28;
} Cmd;
typedef struct Gui164 {
    char pad0[0x4C]; struct { char pad[0x110]; void (*fn)(void *); } *sub;
    char pad1[0x58 - 0x50]; char blk[1];
} Gui164;

void func_00164BF0(u8 *p)
{
    Cmd c;
    s32 r;
    *(s32 *)(p + 0x4D0) = 2;
    func_00164FA4(p);
    c.type = 0x15;
    c.v8 = 0;
    c.f10 = 0x48;
    c.v18 = *(s32 *)(p + 0x1260);
    c.f20 = 0x20;
    c.v28 = *(s32 *)(p + 0x538);
    *(void **)(p + 0x910) = func_00162E20(0, p + 0x58, &c, 3);
    if (*(s32 *)(p + 0x538)) {
        void *q = *(void **)(p + 0x4C);
        ((void (*)(void *))*(void **)((u8 *)q + 0x110))(p);
    } else {
        *(P16 *)(p + 0x1250) = *(P16 *)(p + 0x1230);
    }
}
