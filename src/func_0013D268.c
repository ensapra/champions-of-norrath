/* identical to func_0013D150 (matched), with its names changed by decompdecomp */
extern char D_010CE6C0[];
extern char D_010CE6C4[];
extern char D_010CE6C8[];
extern char D_010CE700[];
s32 func_001404D0(void);
s32 func_001404F0(void);
void func_00140010(void);
s32 D_00141078(s32);
void func_001403B8(void);
void func_00140978(s32);
s32 func_00141028(void *, s32, s32, s32, s32);
s32 func_0013D118(void);
s32 func_0013D0B0(void *);

s32 func_0013D118(void)
{
    if (func_001404D0() != 0)
        return 0;
    *(s32 *)D_010CE6C8 = func_001404F0();
    return 1;
}

void func_0013D268(void *arg0)
{
    void (*fn)(s32);
    func_00140010();
    fn = *(void (**)(s32))((s8 *)arg0 + 8);
    if (fn != NULL)
        fn(*(s32 *)D_010CE6C8);
}

s32 func_0013D0B0(void *arg0)
{
    if (func_001404D0() != 0)
        return 0;
    if (D_00141078(*(s32 *)D_010CE6C4) >= 0)
        return 0;
    func_001403B8();
    func_00140978(*(s32 *)D_010CE6C0);
    *(void **)((s8 *)arg0 + 0x18) = (void *)func_0013D118;
    return 0;
}

s32 func_0013D028(void *arg0)
{
    s32 id;
    if (func_001404D0() != 0)
        return 0;
    id = func_001404F0();
    *(s32 *)D_010CE6C0 = id;
    if (id < 0) {
        *(s32 *)D_010CE6C8 = id;
        return 1;
    }
    *(s32 *)D_010CE6C4 = func_00141028(D_010CE700, id, 0x1320, 0, id);
    *(void **)((s8 *)arg0 + 0x18) = (void *)func_0013D0B0;
    return 0;
}
