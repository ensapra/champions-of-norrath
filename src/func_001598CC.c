extern u8 func_001C8098[];
void func_001598A8(void)
{
    u8 *p = func_001C8098;
    p = *(u8 **)(p + 0xD68);
    ((void (*)(void))p)();
}

void func_00159C30(u8 *);
void func_00159D1C(u8 *);
void func_0015A128(u8 *);
void func_001598CC(u8 *e)
{
    u8 *p = func_001C8098;
    p = *(u8 **)(p + 0xD70);
    ((void (*)(void))p)();
    func_00159C30(e);
    func_00159D1C(e);
    func_0015A128(e);
}

#define I(p, o) (*(s32 *)((u8 *)(p) + (o)))
void func_00152DCC(u8 *, s32);
void func_0011B9E0(s32);
s32 func_0014D29C(u8 *);
void func_0014F288(s32, s32);
void func_00151788(u8 *, s32);
void func_0014B7F0(s32, s32);
void func_001596F8(u8 *e, s32 a1)
{
    func_00152DCC(e, a1);
    if (I(e, 0xC9C) != 0) {
        func_0011B9E0(I(e, 0xC9C));
    }
    if (I(e, 0xC90) != 0) {
        func_0014F288(func_0014D29C(e), I(e, 0xC90));
    }
    if (I(e, 0xC8C) != 0) {
        func_0014F288(func_0014D29C(e), I(e, 0xC8C));
    }
    func_00151788(e + 0xD1C, 3);
    func_0011B9E0(I(e, 0xB80));
    func_0014B7F0(I(e, 0x910), a1);
    func_0014B7F0(I(e, 0x914), a1);
}

typedef struct { s32 type; s32 pad; s64 arg; u8 rest[0xF0]; } Msg;
void func_0014CBF4(s32, Msg *, s32);
void func_00159C58(u8 *e)
{
    Msg m;
    m.type = 0x39;
    m.arg = (s32)(e + 0xBD0);
    func_0014CBF4(I(e, 0x914), &m, 1);
}
