typedef struct { u8 b[8]; } B8;
typedef struct { B8 a; u8 pad[0x18]; } E20;
void func_0014C030(s32, s32, void *, s32, s32, s32, E20 *);

typedef struct {
    u8 pad0[0x5AC];
    s32 unk5AC;
    s32 unk5B0;
    u8 pad5B4[0xC];
    u8 unk5C0[0x58];
    s32 unk618;
} S0;

void func_0016A30C(S0 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, E20 *arg6) {
    s32 dy;
    s32 dx;
    s32 i;
    s32 x2, y2;

    dy = -1;
    if (arg1 == 1) {
        dx = 1;
    } else {
        dx = -1;
        if (arg1 >= 2) {
            dy = 1;
            if (arg1 != 2) {
                if (arg1 == 3) {
                    dx = 1;
                } else {
                    dy = -1;
                }
            }
        }
    }
    func_0014C030(arg0->unk5AC, arg0->unk5B0, arg0->unk5C0, arg0->unk618, arg2, arg3, arg6);
    arg6++;
    for (i = 0; i < 8; i++) {
        arg6->a = arg6[-1].a;
        arg6++;
    }
    y2 = dy * arg5 + arg3;
    x2 = dx * arg4 + arg2;
    func_0014C030(arg0->unk5AC, arg0->unk5B0, arg0->unk5C0, arg0->unk618, arg2, y2, arg6);
    arg6++;
    func_0014C030(arg0->unk5AC, arg0->unk5B0, arg0->unk5C0, arg0->unk618, x2, y2, arg6);
    func_0014C030(arg0->unk5AC, arg0->unk5B0, arg0->unk5C0, arg0->unk618, x2, arg3, arg6 + 1);
}
