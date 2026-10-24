extern char D_001C8E88[];
void func_0014D328(s32, s32);

void func_001655A4(void *arg0, s32 arg1)
{
    ((void (*)(void *, s32))(*(void **)D_001C8E88))(arg0, arg1);
    func_0014D328(*(s32 *)((u8 *)arg0 + 0x910), arg1);
}

extern u8 func_001C8098[];
void func_0016FB0C(void *);

void func_00162D44(u8 *a0)
{
    void *f = func_001C8098;
    f = *(void **)((u8 *)f + 0xDEC);
    ((void (*)(void *))f)(a0);
    *(s32 *)(a0 + 0x91C) = 0;
    *(s32 *)(a0 + 0x920) = 1;
    func_0016FB0C(a0 + 0x928);
}

void func_0014CE60(s32, s32, s32);

void func_00162CB4(u8 *a0)
{
    func_0014CE60(*(s32 *)(a0 + 0x910), *(s32 *)(a0 + 0x5A0) + *(s32 *)(a0 + 0x5D4), *(s32 *)(a0 + 0x5A4) + *(s32 *)(a0 + 0x5D4));
    func_0014CE60(*(s32 *)(a0 + 0x914), *(s32 *)(a0 + 0x5A0) + *(s32 *)(a0 + 0x5D4), *(s32 *)(a0 + 0x5A4) + *(s32 *)(a0 + 0x5D4));
}

typedef struct { u64 lo : 6; u64 b6 : 1; u64 hi : 57; } Bits;
typedef struct { Bits b; u8 pad[0x318]; } Sub;
typedef struct { u8 head[0x6F0]; Sub sub[6]; u8 tail[0x10]; } Elem;
typedef struct { u8 hdr[0x10]; Elem e[2]; u8 pad3[0x33C0 - 0x3390]; s32 flag; } X;
typedef struct { u8 pad[0x4EC]; s32 idx; u8 pad2[0x910 - 0x4F0]; X x; } Obj;

void func_001606F4(Obj *o)
{
    X *x = &o->x;
    Elem *e = &x->e[o->idx];
    s32 v = x->flag & 1;
    e->sub[5].b.b6 = v;
    e->sub[4].b.b6 = v;
    e->sub[3].b.b6 = v;
    e->sub[2].b.b6 = v;
    e->sub[1].b.b6 = v;
    e->sub[0].b.b6 = v;
}
