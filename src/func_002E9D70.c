typedef struct { s32 r0; s32 p4; s32 p8; s32 unkC; u8 pad10[2]; s8 unk12; u8 pad13[0xD]; s32 unk20; u8 pad24[0xC]; u8 data[1]; } Pkt;
typedef struct { s32 src; s32 size; } Aux;
extern s32 D_00447F6C[];
extern s32 D_00447F74[];
extern s32 D_00447F7C[];
extern char D_0047C810[], D_0047C838[], D_0047C868[], D_0047C8A8[], D_008EA780[];
extern Aux D_008EA930[];
void WaitSema_2(s32);
s32 func_002D8270(void *, s32, s32, void *, s32, void *, s32, void *, void *);
s32 func_002D8468(void *);
void func_00301FFC(void *, void *, s32);
void func_00302560(char *);
void func_002EAF10(void);
#define P ((Pkt *)D_00447F74[0])

s32 func_002E9D70(s32 arg0, s32 arg1, void *arg2, s32 *arg3) {
    s32 r;
    Pkt *p;
    if (D_00447F7C[0] == -1) return 0x8000000A;
    if (arg2 == 0) {
        func_00302560(D_0047C810);
        return 0x80000004;
    }
    if (arg3 == 0 || D_00447F6C[0] < *arg3) {
        func_00302560(D_0047C838);
        return 0x80000004;
    }
    if (func_002D8468(D_008EA780) != 0) {
        func_00302560(D_0047C868);
        return 0x80000008;
    }
    WaitSema_2(D_00447F7C[0]);
    p = P;
    p->unkC = arg0;
    p->unk20 = *arg3;
    p->unk12 = arg1;
    D_008EA930[0].src = (s32)arg2;
    D_008EA930[0].size = (s32)arg3;
    func_00301FFC(P->data, arg2, P->unk20);
    r = func_002D8270(D_008EA780, 9, 1, P, ((*arg3 + 0x3F) >> 4) << 4, P, 0x30, func_002EAF10, D_008EA930);
    if (r != 0) {
        *arg3 = 0;
        func_00302560(D_0047C8A8);
        return 0x80000000;
    }
    return r;
}
