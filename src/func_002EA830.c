s32 SignalSema_2(s32);
s32 WaitSema_2(s32);
s32 func_002D8270(void *, s32, s32, void *, s32, void *, s32, s32, s32);
void func_00302560(void *);
extern s32 *D_00447F74[];
extern s32 D_00447F7C[];
extern char D_0047C650[];
extern u8 D_008EA780[];

s32 func_002EA830(s32 arg0) {
    s32 v;
    if (D_00447F7C[0] == -1) return 0x8000000A;
    WaitSema_2(D_00447F7C[0]);
    D_00447F74[0][3] = arg0;
    if (func_002D8270(D_008EA780, 4, 0, D_00447F74[0], 0x20, D_00447F74[0], 0x20, 0, 0) == 0) {
        v = D_00447F74[0][0];
        SignalSema_2(D_00447F7C[0]);
        return v;
    }
    func_00302560(D_0047C650);
    SignalSema_2(D_00447F7C[0]);
    return 0x80000000;
}
