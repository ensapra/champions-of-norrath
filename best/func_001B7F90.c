s32 Deci2Call(s32, u32 *);

s32 func_001B7F60(u8 a, u32 b, u32 c)
{
    u32 args[5];
    args[0] = a;
    args[1] = b;
    args[2] = c;
    return Deci2Call(0x20, args);
}

s32 func_001B7F90(s32 a)
{
    u32 args[4];
    args[0] = a;
    return Deci2Call(0x21, args);
}

s32 func_001B7FB8(s32 a, u32 b, u16 c)
{
    u32 args[4];
    args[0] = a;
    args[1] = b;
    args[2] = c;
    return Deci2Call(-5, args);
}

s32 func_001B7FF0(s32 a, u32 b, u16 c)
{
    u32 args[4];
    args[0] = a;
    args[1] = b;
    args[2] = c;
    return Deci2Call(-6, args);
}
