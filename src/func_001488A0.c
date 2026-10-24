extern u8 func_001C6788[], func_01000000[];
s32 func_001404D0();
void func_00118140(void *, s32, s32, void *, s32);
s32 func_00118160(void *);
void func_00148768(void);
void func_0018F580(void *);
s32 func_0018F678(s32);

void func_001488D8(void) {
    s32 t = *(s32 *)(func_001C6788 + 0x154);
    *(s32 *)(func_001C6788 + 0x154) = 0;
    *(s32 *)(func_001C6788 + 0x158) = t;
}

s32 func_001488A0(void) {
    if (func_001404D0() != 0) return 0;
    *(s32 *)(func_001C6788 + 0xE4) = -1;
    return 0;
}

void func_00148800(void) {
    u8 stack[32];
    func_00118140(stack, 0, 0, func_001488A0, 0);
    *(s32 *)(func_01000000 + 0xD4524) = func_00118160(stack);
    *(s32 *)(func_001C6788 + 0x14C) = 0;
    func_00148768();
}

void func_0018FA70(s32 *p, s32 a, s32 b) {
    s32 r = func_0018F678(a);
    func_0018F580(p);
    if (p[4] != -1) p[4] = r;
    p[8] = b;
    p[0] = (p[0] & ~0xC) | 0x101;
}
