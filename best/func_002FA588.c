struct E { u8 pad[0xD0]; s32 bits; };
extern struct E *func_002FA0E0(void);
extern void func_00144AC0(s32, u32, void *);
void func_002FA588(s32 arg0) {
    struct E *base = func_002FA0E0();
    s32 diff = arg0 - (s32)base;
    s32 temp = diff - 0x10;
    if ((u32)temp < 0xC0U) {
        s32 n = temp;
        s32 mask, bits;
        if (temp < 0) n = diff - 1;
        mask = 1 << (n >> 4);
        bits = base->bits ^ mask;
        while (bits & (mask <<= 1))
            bits ^= mask;
        base->bits = bits;
    } else {
        func_00144AC0(arg0, temp, base);
    }
}
