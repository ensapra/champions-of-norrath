typedef struct { u8 pad[0xAC]; void *cbA; void *cbB; u8 pad2[0x0C]; } S_Win;
s32 D_010C21D8[8];
s32 D_010C21DC[8];
void *D_010C21E0[8];
s32 D_010C21E4[8];
void *D_010C21E8[8];
s32 D_010C21F0[8];
extern s32 D_001BD8C4[];
extern u8 D_004C7408[];
s32 func_00104F30(s32);
s32 func_001050A8(S_Win *, s32, s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_00105190(S_Win *);
void func_0010DAE0(void);
void func_0010DB98(void);

void func_0010D778(void)
{
    S_Win w;
    s32 s;
    void *a;
    void *b;

    D_010C21E4[0] = 0;
    D_010C21E8[0] = D_004C7408;
    s = D_010C21D8[0];
    if (s < 0) return;
    if (s < 2) {
        if (D_010C21DC[0] != 0) {
            func_00104F30(D_010C21F0[0]);
            func_001050A8(&w, D_010C21F0[0], 0, 0, 5, 3, 0, 0, 0, 0);
            a = func_0010DB98;
            b = func_0010DAE0;
            w.cbB = a;
            w.cbA = b;
            func_00105190(&w);
            D_001BD8C4[0] = 0x640;
            D_010C21E0[0] = D_004C7408;
            D_010C21D8[0] = 3;
            D_010C21DC[0] = 0;
        }
    }
}
