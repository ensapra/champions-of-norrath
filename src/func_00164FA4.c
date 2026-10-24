extern char D_001C8E88[];
void func_0014D328(s32, s32);

void func_001655A4(void *arg0, s32 arg1)
{
    ((void (*)(void *, s32))(*(void **)D_001C8E88))(arg0, arg1);
    func_0014D328(*(s32 *)((u8 *)arg0 + 0x910), arg1);
}

typedef struct {
    s32 w[4];
    u64 pad[0x8C];
    s32 w2[4];
} Pkt00164FA4;
typedef struct {
    u8 pad[0x920];
    Pkt00164FA4 p0;
    Pkt00164FA4 p1;
} PktOwner00164FA4;
void func_00165048();
s32 func_00170894(s32, s32, s32, s32);

void func_00164FA4(PktOwner00164FA4 *o)
{
    func_00165048();
    o->p0.w[0] = 0x10000046;
    o->p0.w[1] = 0;
    o->p0.w[2] = 0;
    o->p0.w[3] = func_00170894(0x50, 0, 0x46, 0);
    o->p0.w2[0] = 0x60000000;
    o->p0.w2[1] = 0;
    o->p0.w2[2] = 0;
    o->p0.w2[3] = 0;
    o->p1 = o->p0;
}

void func_00164F28(u8 *p)
{
    s32 n = *(s32 *)(p + 0x1260) * 3;
    s32 off = *(s32 *)(p + 0x5D4);
    s32 x = *(s32 *)(p + 0x5A0) + off;
    s32 y = *(s32 *)(p + 0x5A4) + off;

    *(s32 *)(p + 0xC4) = y + *(s32 *)(p + 0x5B0) + n * 2 / 4;
    *(s32 *)(p + 0xB8) = x - n / 4;
    *(s32 *)(p + 0xBC) = y - n / 4;
    *(s32 *)(p + 0xC0) = x + *(s32 *)(p + 0x5AC) + n * 2 / 4;
}

void func_0015175C(void *, s32, s32, s32);

void func_00164BC8(void *p, s32 unused, s32 x, s32 y)
{
    volatile s32 a[2];
    a[0] = x;
    a[1] = y;
    ((void (*)(void *, s32))func_0015175C)((char *)p + 0x1220, 1);
}
