typedef struct { s32 r0; s32 p4; s32 p8; s32 unkC; u8 pad10[2]; s8 unk12; u8 pad13[0xD]; s32 unk20; u8 pad24[0xC]; u8 data[1]; } Pkt;
extern s32 D_00447F6C[];
extern Pkt *D_00447F74[];
extern s32 D_00447F7C[];
extern char D_0047C478[], D_0047C4A0[], D_0047C4D0[], D_008EA780[];
void SignalSema_2(s32);
unsigned int WaitSema_2(s32);
s32 func_002D8270(void *, s32, s32, void *, s32, void *, s32, s32, s32);
s32 func_00301FFC(void *, void *, s32);
void func_00302560(char *);

s32 func_002E9828(s32 arg0, s32 arg1, void *arg2, s32 *arg3) {
    s32 r;
    if (D_00447F7C[0] == -1) return 0x8000000A;
    if (arg2 == 0) {
        func_00302560(D_0047C478);
        return 0x80000004;
    }
    if (arg3 == 0 || D_00447F6C[0] < *arg3) {
        func_00302560(D_0047C4A0);
        return 0x80000004;
    }
    WaitSema_2(D_00447F7C[0]);
    D_00447F74[0]->unkC = arg0;
    D_00447F74[0]->unk20 = *arg3;
    func_00301FFC(D_00447F74[0]->data, arg2, *arg3);
    D_00447F74[0]->unk12 = arg1;
    if (func_002D8270(D_008EA780, 9, 0, D_00447F74[0], ((*arg3 + 0x3F) >> 4) << 4, D_00447F74[0], 0x30, 0, 0) == 0) {
        r = D_00447F74[0]->r0;
        *arg3 = D_00447F74[0]->unk20;
        SignalSema_2(D_00447F7C[0]);
        return r;
    }
    *arg3 = 0;
    func_00302560(D_0047C4D0);
    SignalSema_2(D_00447F7C[0]);
    return 0x80000000;
}
