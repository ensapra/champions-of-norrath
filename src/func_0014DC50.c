extern s32 D_001D04E0[];
extern s32 D_001D04E8[];
extern s32 D_001D04EC[];
extern s32 D_001D04F0[];
extern s32 D_001D04F4[];
typedef struct {
    s32 count;
    s32 max_count;
    s32 init_count;
    s32 wait_threads;
    u32 attr;
    u32 option;
} SemaParam_;
s32 CreateSema(SemaParam_ *);

void func_0017BC30(void)
{
    SemaParam_ p;
    if (D_001D04E8[0] == -1 || D_001D04EC[0] == -1 || D_001D04F0[0] == -1) {
        p.init_count = 1;
        p.max_count = 1;
        p.option = 0;
        D_001D04E8[0] = CreateSema(&p);
        D_001D04EC[0] = CreateSema(&p);
        D_001D04F0[0] = CreateSema(&p);
        p.init_count = 0;
        D_001D04E0[0] = CreateSema(&p);
        D_001D04F4[0] = 0;
    }
}

typedef struct {
    s32 w[4];
    u64 pad[0x3C];
    s32 w2[4];
} Pkt1E;
typedef struct {
    u8 pad[0xD0];
    Pkt1E p0;
    Pkt1E p1;
    u8 pad4D0[0x4EC - 0x4D0];
    s32 x4EC;
} PktOwner1E;
void func_0014DD00(void);
void func_0014DF18(void *);
s32 func_00170894(s32, s32, s32, s32);

void func_0014DC50(PktOwner1E *o)
{
    o->x4EC = 0;
    func_0014DD00();
    func_0014DF18(o);
    o->p0.w[0] = 0x1000001E;
    o->p0.w[1] = 0;
    o->p0.w[2] = 0;
    o->p0.w[3] = func_00170894(0x50, 0, 0x1E, 0);
    o->p0.w2[0] = 0x60000000;
    o->p0.w2[1] = 0;
    o->p0.w2[2] = 0;
    o->p0.w2[3] = 0;
    o->p1 = o->p0;
}

void func_0016FB0C(void *);

void func_0014DBB8(u8 *a)
{
    func_0016FB0C(a + 0x540);
    *(s32 *)(a + 0x53C) = 1;
}

void func_0014D270(void *);

void func_0014DA98(u8 *o, s32 n)
{
    *(s32 *)(o + 0x504) = n;
    switch (n) {
    case 1:
        *(s32 *)(o + 0x508) = 0;
        *(s32 *)(o + 0x50C) = 0xFF;
        func_0016FB0C(o + 0x518);
        *(s32 *)(o + 0x510) = 0;
        break;
    case 2:
    case 3:
        *(s32 *)(o + 0x50C) = 0;
        *(s32 *)(o + 0x508) = 0xFF;
        func_0016FB0C(o + 0x518);
        if (n == 3)
            *(s32 *)(o + 0x510) = 1;
        else
            *(s32 *)(o + 0x510) = 0;
        break;
    default:
        if (*(s32 *)(o + 0x510) != 0)
            func_0014D270(o);
        break;
    }
}
