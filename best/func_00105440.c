extern u8 D_010B6800[];
extern void func_0011AD68(s32);

void func_00105440(s32 i) {
    s32 off = i * 0xB4;
    u8 *e = D_010B6800 + off;
    s32 *q;
    void (*cb)(s32, void *) = *(void (**)(s32, void *))(e + 0xB0);
    if (cb) cb(*(s32 *)e, e);
    q = (s32 *)(D_010B6800 + (off + 0x30));
    if (*q >= 0) {
        func_0011AD68(*q);
        *q = -1;
    }
    *(s32 *)e = 0;
}
