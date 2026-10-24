extern s32 D_001BB6D8[];
void func_0010BAB8(void);
void func_00118140(void *, s32, void *, void *, void *);
void func_00118160(void *);
void func_0010BA78(void) {
    u8 buf[0x20];
    D_001BB6D8[0] = 0;
    func_00118140(buf, 1, 0, func_0010BAB8, 0);
    func_00118160(buf);
}
extern s32 D_010C1EB8[];
extern s32 D_010C1EBC[];
extern s32 D_010C1EC0[];
extern s32 D_010C1EC4[];
void func_0010C7C0(s32 a0, s32 a1, s32 a2, s32 a3) {
    D_010C1EC4[0] = a0;
    D_010C1EB8[0] = a1;
    D_010C1EBC[0] = a2;
    D_010C1EC0[0] = a3;
}
extern s32 D_001BB6BC[];
void func_0010C840(s32, s32, s32, s32);
void func_0010CBC8(s32 a0, s32 a1, s32 a2, s32 a3) {
    if (D_001BB6BC[0] != 0) {
        func_0010C840(a0, a2, a1, a3);
    } else {
        func_0010C840(a0, a1, a2, a3);
    }
}
