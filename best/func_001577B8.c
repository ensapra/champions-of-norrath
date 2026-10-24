extern void func_001C7738();

void func_001573A4(void)
{
    void (*fn)(void);
    char *p = (char *)func_001C7738;
    fn = *(void (**)(void))(p + 0x70);
    fn();
}

void func_00157428(void)
{
    void (*fn)(void);
    char *p = (char *)func_001C7738;
    fn = *(void (**)(void))(p + 0xB4);
    fn();
}

typedef struct {
    s32 w[4];
    u64 pad[6];
    s32 w2[4];
} Pkt;

typedef struct {
    u8 pad[0x880];
    Pkt p0;
    Pkt p1;
} PktOwner;

void func_0015775C(PktOwner *);
s32 func_00170894(s32, s32, s32, s32);

void func_001576A8(PktOwner *o)
{
    func_0015775C(o);
    o->p0.w[0] = 0x10000003;
    o->p0.w[1] = 0;
    o->p0.w[2] = 0;
    o->p0.w[3] = func_00170894(0x50, 0, 3, 0);
    o->p0.w2[0] = 0x60000000;
    o->p0.w2[1] = 0;
    o->p0.w2[2] = 0;
    o->p0.w2[3] = 0;
    o->p1 = o->p0;
}

s32 D_0047FEEC;
s32 func_0014B5E4(s32, s32, s32, s32, s32);
void func_0014CD0C(s32, s32, void *, s32);
void func_00157EE4();
void func_00157F64();

s32 func_001577B8(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    s32 h = func_0014B5E4(D_0047FEEC, arg0, arg1, arg2, arg3);
    func_0014CD0C(h, 6, func_00157EE4, 0);
    func_0014CD0C(h, 7, func_00157F64, 0);
    return h;
}
