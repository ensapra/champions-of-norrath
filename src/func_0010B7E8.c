extern void func_001B6328(s32);
void func_001001C8(void) {
    func_001B6328(0);
}
extern s32 D_010C1FD0[];
extern s32 D_010C1FC8[];
extern s32 D_010C1FCC[];
extern s32 D_010C2018[];
extern s32 D_010C201C[];
extern u8 func_001B9FD8[];
s32 func_0011B8D0(s32);
void func_0011B968(s32);
void func_0010B7B8(void) {
    D_010C1FD0[0] = func_0011B8D0(0x12C);
}
void func_0010B7E8(void) {
    func_0011B968(D_010C1FD0[0]);
}
void func_0010B890(void);
void func_00118140(void *, s32, void *, void *, void *);
void func_00118160(void *);
void func_0010B808(s32 a0, s32 a1) {
    u8 buf[0x20];
    D_010C1FC8[0] = a0;
    D_010C1FCC[0] = a1;
    *(s32 *)(func_001B9FD8 + 0x16F0) = 1;
    *(s32 *)(func_001B9FD8 + 0x16F4) = 0;
    *(s32 *)(func_001B9FD8 + 0x16F8) = 0x15E0;
    D_010C2018[0] = 0;
    D_010C201C[0] = 4;
    func_00118140(buf, 1, func_0010B7B8, func_0010B890, func_0010B7E8);
    func_00118160(buf);
}
