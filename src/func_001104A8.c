typedef struct { s32 tag; s64 val; } TV;
extern char jtbl_004C006C[];
extern char func_001B9FD8[];
extern void func_001A2660(void *, s32, s32);
extern s32 func_0015166C(s32, void *, TV *, s32);
extern void func_0014B460(s32);

s32 func_001104A8(s32 a0, s64 a1, s32 a2) {
    TV list[64];
    char buf[16];
    s32 r;
    func_001A2660(buf, 0, 0x10);
    list[0].tag = 8;  list[0].val = 0x82;
    list[1].tag = 0xA; list[1].val = a1;
    list[2].tag = 0xD; list[2].val = 0x17C;
    list[3].tag = 0xF; list[3].val = a2 * 0x19;
    list[4].tag = 0x14; list[4].val = 0;
    list[5].tag = 0x12; list[5].val = (s64)(func_001B9FD8 + 0x18A8);
    list[6].tag = 0x16; list[6].val = (s64)buf;
    list[7].tag = 0x1A; list[7].val = 1;
    r = func_0015166C(a0, jtbl_004C006C + 0x7564, list, 8);
    func_0014B460(r);
    return r;
}
