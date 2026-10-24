extern s32 D_010C1FC8[];
extern s32 D_010C1FCC[];
extern s32 D_010C2018[];
extern s32 D_010C201C[];
extern s32 D_001BB6C8[];
extern s32 D_001BB6CC[];
extern s32 D_001BB6D0[];
void func_0010B7B8(void);
void func_0010B7E8(void);
void func_0010B890(void);
void func_00118140(void *, s32, void *, void *, void *);
void func_00118160(void *);
void func_0010B808(s32 a0, s32 a1) {
    u8 buf[0x20];
    D_010C1FC8[0] = a0;
    D_010C1FCC[0] = a1;
    D_001BB6C8[0] = 1;
    D_001BB6CC[0] = 0;
    D_010C2018[0] = 0;
    D_001BB6D0[0] = 0x15E0;
    D_010C201C[0] = 4;
    func_00118140(buf, 1, func_0010B7B8, func_0010B890, func_0010B7E8);
    func_00118160(buf);
}
