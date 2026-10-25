extern s32 D_001C4D78[];
extern s32 D_001C4D7C[];
extern s32 D_001C4D80[];
extern s32 D_001C4D84[];
extern u8 func_01000000[];
extern s32 D_001BB6C4[];
void func_0013BBA8();
void func_001295A8(s32);
void func_00129630(void);
void func_00129E68(void);
s32 func_0011BA18(s32);
void func_00114948(s32, s32, s32, s32, void *, s32);
void func_00118140(void *, s32, s32, void *, s32);
void func_00118160(void *);
void func_001297A0(s32 a, s64 b) {
    s32 buf[8];
    s32 m;
    D_001C4D80[0] = (s32)b;
    func_0013BBA8();
    m = D_001C4D7C[0] + 0x89;
    if (((s32 *)(func_01000000 + 0xCB05C))[m - 0x89] == 0) {
        func_00114948(2, 0x1F4, 0xFA, func_0011BA18(m), func_00129E68, D_001BB6C4[0]);
        D_001C4D7C[0] = -1;
        D_001C4D78[0] = -1;
    } else {
        func_001295A8(m);
        D_001C4D84[0] = 0;
        func_00118140(buf, 1, 0, func_00129630, 0);
        func_00118160(buf);
    }
}
