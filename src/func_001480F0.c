extern s32 jtbl_004C006C[];
extern u8 D_0110B000[];
extern s32 D_0110B040[];
extern s32 D_0110B080[];
s32 func_001B08B0(void *, s32, s32, void *, s32, void *, s32, s32, s32);

s32 func_001B4868(s32 a)
{
    if (jtbl_004C006C[0x3F48 / 4] < 0)
        return 0;
    D_0110B080[0] = a;
    if (func_001B08B0(D_0110B000, 2, 0, D_0110B080, 4, D_0110B040, 4, 0, 0) < 0)
        return -1;
    return D_0110B040[0];
}

extern void func_0010B378(s32, void *, ...);
extern void func_0013BBD0(void);
extern void func_00147F88(s32);
extern s32 D_010D4500[];
extern s32 D_010D4508[];
extern u8 func_001B9FD8[];

void func_00148178(s32 a, s64 b)
{
    s32 i = b;
    *(s32 *)(func_001B9FD8 + 0x16EC) = D_010D4508[i];
    func_0010B378(D_010D4500[i], func_001B9FD8 + 0x1748);
    func_0013BBD0();
    if (*(s32 *)(func_001B9FD8 + 0x16DC) != 0)
        func_00147F88(i);
}

void ovl_ntgui2_func_00148140(s32 a, s64 b)
{
    func_0010B378(D_010D4500[(s32)b], (u8 *)jtbl_004C006C + 0xB234);
}

typedef struct {
    s32 type;
    s32 pad;
    s64 v;
    u8 rest[0x70];
} Msg80;
void func_00105078(s32);
s64 func_0011BA18(s32);
void func_0014CBF4(s32, Msg80 *, s32);

void func_001480F0(s32 a, u8 *b)
{
    Msg80 m;
    func_00105078(a);
    m.type = 0x66;
    m.v = func_0011BA18(*(s32 *)(b + 0x80) + 0x140);
    func_0014CBF4(*(s32 *)(func_001B9FD8 + 0x1928), &m, 1);
}
