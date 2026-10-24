extern void func_001B6328(s32);
void func_001001C8(void) {
    func_001B6328(0);
}
extern void (*D_010C21D0[])(void);
void func_0010CC90(void) {
    if (D_010C21D0[0] != NULL) {
        D_010C21D0[0]();
    }
}
extern s32 D_010C21F0[];
extern s32 D_010C21F8[];
extern u8 D_001BD8C8[];
void func_0013C2E8(void *);
void func_0010CF70(void) {
    s32 i;
    for (i = 0; i < 2; i++) {
        D_010C21F8[i] = 0;
        D_010C21F0[i] = 0;
    }
    func_0013C2E8(D_001BD8C8);
}
extern s32 D_010C21D8[];
extern s32 D_001BD8C4[];
s32 func_0010D600(s32, u8 *);
s64 func_0010D330(s32 a0, u8 *a1) {
    if ((u32)(D_010C21D8[0] - 2) >= 2) {
        if (*(s32 *)(a1 + 0x1C) == D_001BD8C4[0] + 1) {
            return func_0010D600(a0, a1);
        }
    }
}
