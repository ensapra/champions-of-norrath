typedef struct {
    unsigned long NLOOP : 15;
    unsigned long EOP : 1;
    unsigned long pad16 : 16;
    unsigned long id : 14;
    unsigned long PRE : 1;
    unsigned long PRIM : 11;
    unsigned long FLG : 2;
    unsigned long NREG : 4;
    unsigned long REGS0 : 4;
} GifTagHi;

extern char D_0047B340[];
void func_002D70D0(const char *, ...);

s32 func_002D2888(GifTagHi *giftag) {
    u32 count = 0;

    while (*(volatile u32 *)0x1000A000 & 0x100) {
        if (count++ > 0x1000000) {
            func_002D70D0(D_0047B340);
            return -1;
        }
    }
    *(volatile u32 *)0x1000A020 = giftag->NLOOP + 1;
    if (((u32)giftag & 0x70000000) == 0x70000000) {
        *(volatile u32 *)0x1000A010 = ((u32)giftag & 0x0FFFFFFF) | 0x80000000;
    } else {
        *(volatile u32 *)0x1000A010 = (u32)giftag & 0x0FFFFFFF;
    }
    *(volatile u32 *)0x1000A000 = 0x101;
    return 0;
}
