extern s32 SignalSema_2(s32);
extern s32 WaitSema_2(s32);
extern s32 func_002D8270(void *, s32, s32, void *, s32, void *, s32, s32, s32);
extern s32 func_002EAE08(s32, s32);
extern s32 func_00302560(char *);
extern s32 *D_00447F74[];
extern s32 D_00447F7C[];
extern char D_0047C6F0[];
extern char D_0047C730[];
extern char D_008EA780[];
#define P (*D_00447F74)
#define S (*D_00447F7C)

s32 func_002E9B08(void) {
    s32 ret;
    if (S == -1) return 0x8000000A;
    if (func_002EAE08(1, 0) != 0) {
        func_00302560(D_0047C6F0);
        return 0x80000008;
    }
    WaitSema_2(S);
    P[3] = -1;
    if (func_002D8270(D_008EA780, 0x14, 0, P, 0x20, P, 0x20, 0, 0) == 0) {
        ret = P[0];
        SignalSema_2(S);
        return ret;
    }
    func_00302560(D_0047C730);
    SignalSema_2(S);
    return 0x80000000;
}
