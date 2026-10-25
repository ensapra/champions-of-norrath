extern u8 jtbl_004C006C[];
extern s16 *func_0018D7A8(void);
extern void FlushCache(s32);
void func_00172C70(s32 flag) {
    s32 buf[8];
    s16 *p = func_0018D7A8();
    if (p[0] == 1 && p[2] == 0) {
        __builtin_memcpy(buf, jtbl_004C006C + 0xC0C4, 32);
        if (flag) buf[4] = 2; else buf[4] = 3;
        *(volatile s32 *)0x1000A020 = 2;
        *(volatile s32 *)0x1000A010 = (s32)buf & 0x7FFFFFFF;
        *(volatile s32 *)0x1000E010 = 4;
        FlushCache(0);
        *(volatile s32 *)0x1000A000 = 0x145;
    }
}
