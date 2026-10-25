typedef struct { s32 r; s32 pad[2]; s32 a; u8 b; u8 c; } Msg;
extern s32 SignalSema_2(s32);
extern s32 WaitSema_2(s32);
extern s32 func_002D8270(void *, s32, s32, void *, s32, void *, s32, s32, s32);
extern s32 func_00302560(char *);
extern Msg *D_00447F74[];
extern s32 D_00447F7C[];
extern char D_0047C6A0[];
extern char D_008EA780[];
#define P (*D_00447F74)
#define S (*D_00447F7C)

s32 func_002EAD10(s32 a, u8 b, u8 c) {
    s32 ret;
    if (S == -1) return 0x8000000A;
    WaitSema_2(S);
    P->a = a;
    P->b = b;
    P->c = c;
    if (func_002D8270(D_008EA780, 0xE, 0, P, 0x20, P, 0x20, 0, 0) == 0) {
        ret = P->r;
        SignalSema_2(S);
        return ret;
    }
    func_00302560(D_0047C6A0);
    SignalSema_2(S);
    return 0x80000000;
}
