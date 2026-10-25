typedef struct { u8 mode; u8 b[11]; s16 c; } AudOpenParam;
typedef struct { s32 ret; s32 pad4; s32 dev; s32 out; s32 pad10[4]; AudOpenParam param; } AudBuf;
extern AudBuf *D_00447F74[];
extern s32 D_00447F7C[];
extern char D_0047C338[];
extern char D_0047C360[];
extern char D_0047C390[];
extern char D_0047C3C0[];
extern u8 D_008EA780[];
s32 WaitSema_2(s32);
s32 SignalSema_2(s32);
s32 func_002D8270(void *, s32, s32, void *, s32, void *, s32, void *, s32);
s32 func_00302560(const char *, ...);
void *memcpy(void *, const void *, unsigned int);

s32 func_002E9550(s32 dev, AudOpenParam *param, s32 *out)
{
    s32 r;

    if (D_00447F7C[0] == -1) {
        return 0x8000000A;
    }
    if (out == NULL) {
        func_00302560(D_0047C338);
        return 0x80000004;
    }
    if (param == NULL) {
        func_00302560(D_0047C360);
        return 0x80000004;
    }
    if (param->mode == 0) {
        func_00302560(D_0047C390);
        return 0x80000004;
    }
    WaitSema_2(D_00447F7C[0]);
    D_00447F74[0]->dev = dev;
    memcpy(&D_00447F74[0]->param, param, sizeof(AudOpenParam));
    if (func_002D8270(D_008EA780, 2, 0, D_00447F74[0], 0x30, D_00447F74[0], 0x20, 0, 0) == 0) {
        r = D_00447F74[0]->ret;
        *out = D_00447F74[0]->out;
        SignalSema_2(D_00447F7C[0]);
        return r;
    }
    func_00302560(D_0047C3C0);
    SignalSema_2(D_00447F7C[0]);
    return 0x80000000;
}
