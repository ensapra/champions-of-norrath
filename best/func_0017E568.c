s32 DeleteSema(s32);
s32 RemoveIntcHandler(s32, s32);
void func_001AE200(s32);
void func_001AF710(void *);
s32 func_001B5C80(void);
void func_001B5CD8(void);
extern s32 D_010EE11C[];
extern s32 D_001D2108[];
extern u8 D_004CC758[];
extern u8 D_004CC788[];

s32 func_0017E568(void) {
    s32 err = 0;
    s32 a = func_001B5C80();
    s32 r = RemoveIntcHandler(3, D_010EE11C[0]);
    if (r == 0) {
        func_001AE200(3);
    }
    if (a != 0) {
        func_001B5CD8();
    }
    if (r < 0) {
        err = 1;
        func_001AF710(D_004CC758);
    }
    {
    s32 *p = D_001D2108;
    s32 m = -1;
    if (*p != m) {
        if (DeleteSema(*p) >= 0) {
            *p = m;
        } else {
            err++;
            func_001AF710(D_004CC788);
            return -1;
        }
    }
    }
    return err == 0 ? 0 : -1;
}
