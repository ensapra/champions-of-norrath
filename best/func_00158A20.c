s32 func_00149360(void *);
void func_001493C8(void *);

s32 func_00158A20(s32 a) {
    s32 buf[2];
    s32 v;
    buf[0] = a;
    buf[1] = a;
    v = func_00149360(buf);
    switch (v) {
    case 0x304B:
        v++;
        break;
    case 0x30DB:
        v = 0x30F4;
        break;
    case 0x30A0:
        return -1;
    default:
        return -1;
    }
    func_001493C8(&buf[1]);
    return 1;
}
