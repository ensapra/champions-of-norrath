void func_00191268(s32 **a);
void func_00191920(s32 **a, s32 b, s32 c);

void func_00191C68(s32 **arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 *p;
    func_00191268(arg0);
    arg2 |= 0x30000000;
    arg5 |= arg2;
    arg1 &= 0x9FFFFFFF;
    p = *arg0;
    *p++ = arg5;
    p[0] = arg1;
    p[1] = arg3;
    p[2] = arg4;
    *arg0 = p + 3;
}

void func_00191DC8(s32 **arg0, s32 arg1) {
    s32 *p = *arg0;
    *p++ = arg1;
    *arg0 = p;
}

void func_00191BE0(s32 **arg0, s32 arg1) {
    func_00191920(arg0, 2, 3);
    arg0[3] = *arg0;
    *(*arg0)++ = arg1 ? 0xD1000000 : 0x51000000;
}
