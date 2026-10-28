s32 func_00191678(void);
void func_00191D18(s32 **arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 *p;
    func_00191678();
    p = *arg0;
    p[0] = arg5 | (arg2 | 0x30000000);
    p[1] = arg1 & 0x9FFFFFFF;
    *arg0 = p + 4;
    p[2] = arg3;
    p[3] = arg4;
}
