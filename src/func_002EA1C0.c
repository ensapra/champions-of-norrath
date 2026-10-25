typedef struct { s32 w[83]; } Blk;
typedef struct { s32 id; s32 pad4; s32 unk8; char pad[0x14]; Blk blk; } Pkt;
extern s32 D_00447F7C[];
extern Pkt *D_00447F74[];
extern char D_0047C2D8[];
extern char D_0047C310[];
extern char D_008EA780[];
unsigned int WaitSema_2(s32);
s32 SignalSema_2(s32);
s32 func_002D8270(void*, s32, s32, void*, s32, void*, s32, s32, s32);
void func_00302560(void*);

s32 func_002EA1C0(s32 a, Blk *out) {
    s32 r;
    Pkt *p;
    if (D_00447F7C[0] == -1) return 0x8000000A;
    if (out == 0) {
        func_00302560(D_0047C2D8);
        return 0x80000004;
    }
    WaitSema_2(D_00447F7C[0]);
    D_00447F74[0]->unk8 = a;
    if (func_002D8270(D_008EA780, 1, 0, D_00447F74[0], 0x20, D_00447F74[0], 0x170, 0, 0) == 0) {
        p = D_00447F74[0];
        r = p->id;
        *out = p->blk;
        SignalSema_2(D_00447F7C[0]);
        return r;
    }
    func_00302560(D_0047C310);
    SignalSema_2(D_00447F7C[0]);
    return 0x80000000;
}
