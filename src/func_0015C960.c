extern char func_001C8098[];
void func_0014D370(s32, s32);

void func_0015DC54(void *arg0, s32 arg1) {
    ((void (*)(void *, s32))(*(void **)(func_001C8098 + 0xDF8)))(arg0, arg1);
    func_0014D370(*(s32 *)((u8 *)arg0 + 0x910), arg1);
}

void func_0015EA84(s32);
void func_0015EB28(s32);
void func_0015EA7C(s32);

void func_0015DE74(s32 arg0) {
    (*(void (**)(void))(func_001C8098 + 0xD70))();
    func_0015EA84(arg0);
    func_0015EB28(arg0);
    func_0015EA7C(arg0);
}

void func_0015EF14(void *arg0) {
    s32 *p = (s32 *)((char *)arg0 + 0xE74);
    switch (*(s32 *)((char *)arg0 + 0xE84)) {
    case 1:
        *p = 3;
        break;
    case 2:
        *p = 2;
        break;
    case 19:
        *p = 1;
        break;
    default:
        *p = 4;
        break;
    }
}

void func_0015175C(void *, s32);

void func_0015C960(void *p, s32 unused, s32 x, s32 y) {
    volatile s32 a[2];
    a[0] = x;
    a[1] = y;
    func_0015175C((char *)p + 0xcc0, 1);
}
