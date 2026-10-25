typedef struct {
    u8 pad[4];
    s32 unk4;
    u8 pad2[0x8C];
    s32 unk90;
    s32 unk94;
    s32 unk98;
} Str0017E970;

extern s32 D_001D2108;
extern s32 D_010EE080;
extern s32 *D_010EE084;
extern u8 D_010EE180[];
extern u8 D_010EE120[];
extern u8 D_010EE1C0[];
extern u8 jtbl_004C006C[];
void func_0017EBF8(void);
s32 WaitSema(s32 sema, s32 arg1, u32 arg2);
s32 func_001B08B0(void *arg0, s32 a1, s32 a2, void *arg3, s32 a4, void *arg5, s32 a6, void *arg7, s32 a8);
s32 func_001AF710(void *fmt, s32 code);

s32 func_0017E970(s32 arg0, s32 arg1) {
    s32 ret = -1;
    Str0017E970 *s;
    s32 *p;
    
    if (D_001D2108 == -1) {
        return -1;
    }
    if (arg0 >= D_010EE080) {
        return -0xB;
    }
    if (arg1 >= 3) {
        return -0xC;
    }
    
    p = D_010EE084 + arg0;
    p = (s32 *)((u8 *)p + arg0 * 0x34);
    s = (Str0017E970 *)((u8 *)D_010EE084 + arg0 * 0xC + 0x90 - 0x90);
    /* Try to match structure */
    ((s32 *)((u8 *)D_010EE084 + arg0 * 0x38))[0] = arg1;
    D_010EE180[arg0] = arg0;
    ((u8 *)&D_010EE180)[arg0 + 1] = arg1;
    WaitSema(D_001D2108, ((s32 *)((u8 *)D_010EE084 + arg0 * 0x38))[0], arg1);
    ret = func_001B08B0(&D_010EE120, 5, 1, &D_010EE180, 0x10, &D_010EE1C0, 0x10, func_0017EBF8, 0);
    if (ret != 0) {
        func_001AF710(jtbl_004C006C + 0xC7F4, ret);
        return -2;
    }
    s = (Str0017E970 *)((u8 *)D_010EE084 + arg0 * 0xC + 0x88); /* rough */
    s->unk90 = 5;
    s->unk94 = arg0;
    s->unk98 = 0;
    return 0;
}
