s32 func_0017C528(s32);
s32 SignalSema(s32);
s32 func_001B08B0(void *, s32, s32, void *, s32, void *, s32, s32, s32);
extern s32 D_001D04EC[];
extern u8 D_001D16C0[];
extern u8 D_001D2040[];
extern s32 func_001AFF48(s32);
extern s32 GetThreadId(void);
extern s32 func_001B0AE8(void *, s32);
extern s32 func_001B0B80(void *, s32, void *, void *, s32, s32, void *);
extern s32 func_001B0F98(void *);
extern void func_0017DB88(void);
extern s32 D_010EDFC0[], D_010EE000[], D_010EE018[];
extern s8 D_001D20D0[];
extern char D_004CC700[];
extern s32 ovl_ntgui2_func_001B1938(char *, s32);
extern s32 func_001B1F78(s32, s8 *, s32);
extern s32 func_001B1BC0(s32);

s32 func_0017D008(void)
{
    s32 v;
    if (func_0017C528(1) == 0) {
        return 0;
    }
    if (func_001B08B0(D_001D2040, 3, 0, 0, 0, D_001D16C0, 4, 0, 0) < 0) {
        SignalSema(D_001D04EC[0]);
        return 0;
    }
    v = *(s32 *)((u32)D_001D16C0 | 0x20000000);
    SignalSema(D_001D04EC[0]);
    return v;
}

void func_0017DB18(void)
{
    func_001AFF48(0);
    func_001B0AE8(D_010EE000, GetThreadId());
    func_001B0B80(D_010EE018, 0x80000704, func_0017DB88, D_010EDFC0, 0, 0, D_010EE000);
    func_001B0F98(D_010EE000);
}

s8 *func_0017DC80(void)
{
    s32 fd;
    if (D_001D20D0[0] == 0) {
        fd = ovl_ntgui2_func_001B1938(D_004CC700, 1);
        if (fd >= 0) {
            func_001B1F78(fd, D_001D20D0, 0xE);
            func_001B1BC0(fd);
        }
    }
    return D_001D20D0;
}
