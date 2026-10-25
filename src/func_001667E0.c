extern char D_004633F0[];
s8 D_00483FFD;
s32 D_00484008;
s32 D_0048400C;
s8 D_004865F8;
s8 D_00486920;

s32 func_00164F00(s32, s32 *, s32 *, s32);
s32 func_002D70D0(char *, s32);
void func_00191BA8(s32);
s32 func_00191180(void);
void func_00191BB0(void);
s32 func_002E4110(s32, void *);

void func_001667E0(s32 arg0, s32 arg1) {
    s32 buf[2];
    D_00484008 = 0;
    D_0048400C = 0;
    if (func_00164F00(arg0, &buf[1], buf, 0) == 0) {
        func_002D70D0(D_004633F0, arg0);
        return;
    }
    D_00483FFD = 1;
    func_00191BA8(0xFFFFFF);
    for (;;) {
        if (func_002E4110(buf[1] + (arg1 >> 11), &D_00486920) != 0)
            break;
        func_00191180();
        if (D_004865F8 == 0)
            continue;
        for (;;)
            ;
    }
    func_00191BB0();
}
