s32 Deci2Call(s32, void *);

void func_001B8058(s32 a)
{
    s32 buf[2];
    buf[0] = a;
    Deci2Call(-8, buf);
}

void func_001B8080(s32 a)
{
    s32 buf[2];
    buf[0] = a;
    Deci2Call(-9, buf);
}

void func_001B8028(s32 a, s8 b)
{
    s32 buf[2];
    buf[0] = a;
    buf[1] = b;
    Deci2Call(-7, buf);
}

void ovl_ntgui2_func_001B80A8(s32 a)
{
    s32 buf[2];
    buf[0] = a;
    Deci2Call(16, buf);
}
