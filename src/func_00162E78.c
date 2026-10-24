void func_00168124(s32);
void func_00169C08(s32);
void func_00167E58(s32);
extern char func_001C8098[];

void func_00166E64(s32 arg0) {
    (*(void (**)(void))(func_001C8098 + 0xD70))();
    func_00168124(arg0);
    func_00169C08(arg0);
    func_00167E58(arg0);
}

extern char func_001C7AF8[];
void func_0016FCC4(void *, void *, void *, void *);

void func_00164AFC(char *arg0)
{
    s32 ok = 0;

    if (*(s32 *)(arg0 + 0x538) != 0) {
        ok = *(s32 *)(arg0 + 0x53C) != 0;
    }
    (*(void (**)(void))(func_001C7AF8 + 8))();
    if (ok) {
        func_0016FCC4(arg0 + 0x540, arg0 + 0x930, arg0 + 0x950, arg0 + 0x940);
    }
}

typedef struct {
    s32 w[4];
    u64 pad[0x388];
    s32 w2[4];
} Pkt1C4;
typedef struct {
    u8 pad[0x970];
    Pkt1C4 p0;
    Pkt1C4 p1;
} PktOwner1C4;
void func_001630A8();
void func_001631D8(void *);
s32 func_00170894(s32, s32, s32, s32);

void func_00162FFC(PktOwner1C4 *o)
{
    func_001630A8();
    func_001631D8(o);
    o->p0.w[0] = 0x100001C4;
    o->p0.w[1] = 0;
    o->p0.w[2] = 0;
    o->p0.w[3] = func_00170894(0x50, 0, 0x1C4, 0);
    o->p0.w2[0] = 0x60000000;
    o->p0.w2[1] = 0;
    o->p0.w2[2] = 0;
    o->p0.w2[3] = 0;
    o->p1 = o->p0;
}

void func_0015175C(void *, s32, s32, s32);

void func_00162E78(void *p, s32 unused, s32 x, s32 y)
{
    volatile s32 a[2];
    a[0] = x;
    a[1] = y;
    ((void (*)(void *, s32))func_0015175C)((char *)p + 0x4230, 1);
}
