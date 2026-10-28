s32 SetVSyncFlag_2(void *, s64 *);
s32 func_002DD640(void);
void func_002DD698(void);
s64 func_002D5600(void) {
    s32 flag = 0;
    s64 out;
    s32 t;
    SetVSyncFlag_2(&flag, &out);
    t = func_002DD640();
    *(vu32 *)0x1000F000 = 4;
    if (t != 0) func_002DD698();
    while (!(*(vu32 *)0x1000F000 & 4) && *(vs32 *)&flag == 0) {}
    t = func_002DD640();
    *(vu32 *)0x1000F000 = 4;
    if (t != 0) func_002DD698();
    return out;
}
