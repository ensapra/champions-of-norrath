typedef struct __attribute__((packed, aligned(4))) { u32 w[3]; } C12;
extern u8 D_0044A420[];
extern char D_004850F8[];
void func_001411F0(void *, void *, s32, s32);
void func_00143908(void *);
void func_00303F50(s32, char *, s32 *);
void func_001E5CA8(u8 *p, C12 *b, s32 c) {
    C12 loc;
    s32 v;
    s32 i;
    s8 *q;
    s32 *h;
    loc = *b;
    func_001411F0(p, &loc, 0, 0);
    v = 0;
    h = *(s32 **)(p + 0x2C);
    *(volatile s32 *)(p + 0x48) = (s32)D_0044A420;
    if (*h != 0) {
        func_00303F50(*h, D_004850F8, &v);
    }
    *(volatile u16 *)(p + 0x54) = v;
    *(volatile s16 *)(p + 0x52) = c;
    *(volatile u16 *)(p + 0x54) = 0x64;
    q = (s8 *)(p + 0x50);
    for (i = 3; i >= 0; i--) {
        *q = 0;
        q--;
    }
    p[0x4C] = 0;
    *(s32 *)(p + 0xC) |= 9;
    func_00143908(p);
}
