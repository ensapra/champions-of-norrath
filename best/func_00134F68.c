s8 D_00483829;
s32 func_00135438(s32);

void func_00134F68(s32 arg0, u8 *arg1, s32 arg2) {
    u8 *e;
    u8 *buf;
    s32 i;

    if (D_00483829 == 0) {
        ((void (*)(u8 *, s32))D_004F3ED0[arg0])(arg1, arg2);
        return;
    }
    e = D_004E2280 + func_00135438(0) * 0x44E0;
    buf = e + 0xC;
    buf[*(s32 *)(e + 0x44AC) % 0x1FFF + 0x24A0] = arg0;
    buf[(*(s32 *)(e + 0x44AC) + 1) % 0x1FFF + 0x24A0] = arg2;
    for (i = 0; i < arg2; i++) {
        buf[((*(s32 *)(e + 0x44AC) + i + 2) & 0x1FFF) + 0x24A0] = arg1[i];
    }
    *(s32 *)(e + 0x44AC) = (*(s32 *)(e + 0x44AC) + arg2 + 2) & 0x1FFF;
}
