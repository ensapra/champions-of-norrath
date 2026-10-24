extern void func_001C7738();
void func_001573A4(void)
{
    void (*fn)(void);
    char *p = (char *)func_001C7738;
    fn = *(void (**)(void))(p + 0x70);
    fn();
}

typedef struct {
    s32 w[4];
    u64 pad[34];
    s32 w2[4];
} Pkt994;

typedef struct {
    u8 pad[0x620];
    Pkt994 p0;
    Pkt994 p1;
} PktOwner994;

void func_00156A48(PktOwner994 *);
s32 func_00170894(s32, s32, s32, s32);

void func_00156994(PktOwner994 *o)
{
    func_00156A48(o);
    o->p0.w[0] = 0x10000011;
    o->p0.w[1] = 0;
    o->p0.w[2] = 0;
    o->p0.w[3] = func_00170894(0x50, 0, 0x11, 0);
    o->p0.w2[0] = 0x60000000;
    o->p0.w2[1] = 0;
    o->p0.w2[2] = 0;
    o->p0.w2[3] = 0;
    o->p1 = o->p0;
}

typedef struct __attribute__((packed)) { u64 a; u64 b; } P16DEC;
typedef struct GuiSubDEC { char pad[0xE0]; void (*fn)(void *); } GuiSubDEC;
typedef struct GuiNodeDEC {
    char pad0[0x4C]; GuiSubDEC *sub;
    char pad1[0xB8 - 0x50]; P16DEC v;
    char pad2[0x890 - 0xC8]; struct GuiNodeDEC *cur;
} GuiNodeDEC;

void func_00157DEC(GuiNodeDEC *p)
{
    GuiNodeDEC *q;
    q = p->cur;
    q->sub->fn(q);
    q = p->cur;
    p->v = q->v;
}

extern u8 D_001C8690[];
void func_0014D328(s32, s32);
typedef struct { u8 pad[0x890]; s32 x890, x894; } S157E44;

void func_00157E44(S157E44 *arg0, s32 arg1) {
    u8 *p = D_001C8690;
    p = *(u8 **)p;
    ((void (*)(void *, s32))p)(arg0, arg1);
    func_0014D328(arg0->x890, arg1);
    func_0014D328(arg0->x894, arg1);
}
