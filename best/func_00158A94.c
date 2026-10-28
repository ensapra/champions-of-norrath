extern s32 func_00149360(void *);
extern void func_001493C8(void *, s32);
s32 func_00158A94(s32 a) {
    s32 b = a;
    s32 c;
    c = func_00149360(&b);
    switch (c) {
    case 0x306F: case 0x3072: case 0x3075: case 0x3078: case 0x307B:
    case 0x30CF: case 0x30D2: case 0x30D5: case 0x30D8: case 0x30DB:
        break;
    default:
        return -1;
    }
    func_001493C8(&a, c + 2);
    return 1;
}
