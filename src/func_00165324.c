extern u8 func_001C8098[];
void func_0014D370(s32, s32);
void func_0014CE60(s32, s32, s32, s32);
void func_0014CF0C(s32, s32, s32);

#define I(p, o) (*(s32 *)((u8 *)(p) + (o)))

typedef struct { s32 type; s32 pad; s64 arg; u8 rest[0x3F0]; } Msg165324;
void func_0014CBF4(s32, Msg165324 *, s32);

void func_001655E4(void *arg0, s32 arg1)
{
    void *p = func_001C8098;
    p = *(void **)((u8 *)p + 0xDF8);
    ((void (*)(void *, s32))p)(arg0, arg1);
    func_0014D370(I(arg0, 0x910), arg1);
}

void func_00165508(u8 *e)
{
    s32 d = I(e, 0x5D4);
    s32 t = I(e, 0x1260) * 3 / 4;
    func_0014CE60(I(e, 0x910), I(e, 0x5A0) + d - t, I(e, 0x5A4) + d - t, d);
    t = I(e, 0x1260) * 6 / 4;
    func_0014CF0C(I(e, 0x910), I(e, 0x5AC) + t, I(e, 0x5B0) + t);
}

void func_00165324(u8 *e)
{
    Msg165324 m;
    m.type = 0x39;
    m.arg = (s32)(e + 0x1270);
    func_0014CBF4(I(e, 0x910), &m, 1);
}

void func_0016526C(u8 *e)
{
    u8 *b = e + 0x910;
    u8 *p = b + I(e, 0x4EC) * 0x480 + 0x80;
    u8 *q;
    u32 i;
    p[0] = e[0x1250];
    p[1] = e[0x1251];
    p[2] = e[0x1252];
    p[3] = I(e, 0x618) * e[0x1253] / 255;
    q = p + 0x20;
    for (i = 1; i < 32; i++) {
        q[0] = b[0x944];
        q[1] = b[0x945];
        q[2] = b[0x946];
        q[3] = I(e, 0x618) * b[0x947] / 255;
        q += 0x20;
    }
}
