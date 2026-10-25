typedef struct { s32 pad0[5]; s32 f14; s32 pad18[2]; s32 f20; s32 pad24[18]; s32 f6C; s32 pad70[84]; s32 f1C0; } Slot;
typedef struct { s32 a; s32 b; s32 c; s32 d; } Pair;
extern Slot D_007DD290[];
extern Pair D_007DD840[];
extern char D_007DD7E0[], D_007DD880[];
extern Slot D_007DD2B0[];
s32 func_002D8270(void *, s32, s32, void *, s32, void *, s32, s32, s32);

s32 func_0024ADB8(s32 n) {
    func_002D8270(D_007DD7E0, 0x50, 0, D_007DD880, 0, D_007DD840, 0x40, 0, 0);
    if (D_007DD840[n].a != D_007DD840[n].b) return *(s32 *)((char *)D_007DD2B0 + n * 0x1C4) | 1;
    if (D_007DD290[n].f14 > 0) return D_007DD290[n].f20 | 1;
    if (D_007DD290[n].f1C0 > 0) {
        s32 v = D_007DD290[n].f6C;
        if (!(v & 8)) return v | 1;
    }
    return 0;
}
