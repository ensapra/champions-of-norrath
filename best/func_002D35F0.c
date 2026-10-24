extern s32 D_00483F30;
extern u8 D_008D88B8[12];
extern u8 D_008D8938[1008];
void *func_003021B0(void *, s32, s32);
void func_002CB388(void) {
    s8 *base;
    s8 *p;
    s32 i;
    if (D_00483F30 == 0) {
        base = (s8*)D_008D8938;
        func_003021B0(base, 0, 0x3F0);
        p = base + 0x374;
        D_008D88B8[4] = 0;
        D_008D88B8[1] = 0;
        D_008D88B8[3] = 0x20;
        D_008D88B8[0] = 1;
        i = 7;
        do {
            i--;
            *p = -2;
            p -= 0x7E;
        } while (i >= 0);
    }
}

typedef struct { s32 f0; s32 f4; s32 f8; s32 pad[4]; } Ent;
typedef struct { Ent ent[4]; } Grp;
typedef struct { s32 hdr[4]; Grp g[2]; } EntTab;
extern u8 D_008DD880[];
extern s32 D_008DDAC0[];
extern EntTab D_008DD8D0;
extern s32 D_004448F8;
s32 func_002D8270(void*,s32,s32,void*,s32,void*,s32,s32,s32);
s32 func_002D35F0(void) {
    s32 i;
    for (i = 0; i < 4; i++) {
        D_008DD8D0.g[0].ent[i].f0 = 0;
        D_008DD8D0.g[0].ent[i].f8 = 0;
        D_008DD8D0.g[0].ent[i].f4 = 0;
        D_008DD8D0.g[1].ent[i].f0 = 0;
        D_008DD8D0.g[1].ent[i].f8 = 0;
        D_008DD8D0.g[1].ent[i].f4 = 0;
    }
    D_008DDAC0[0] = 16;
    D_008DDAC0[4] = 0;
    if (func_002D8270(D_008DD880, 1, 0, D_008DDAC0, 128, D_008DDAC0, 128, 0, 0) < 0) return 0;
    return D_008DDAC0[3];
}
s32 func_002D3690(void) {
    s32 r;
    D_008DDAC0[0] = 15;
    if (func_002D8270(D_008DD880, 1, 0, D_008DDAC0, 128, D_008DDAC0, 128, 0, 0) < 0) return 0;
    r = D_008DDAC0[3];
    if (r == 1) D_004448F8 = 0;
    return r;
}
s32 func_002D38F8(s32 a, s32 b) {
    EntTab *t = &D_008DD8D0;
    s32 *p = &t->g[a].ent[b].f0;
    if (*p == 0) return 0;
    D_008DDAC0[0] = 14;
    D_008DDAC0[1] = a;
    D_008DDAC0[2] = b;
    D_008DDAC0[4] = 1;
    if (func_002D8270(D_008DD880, 1, 0, D_008DDAC0, 128, D_008DDAC0, 128, 0, 0) < 0) return 0;
    *p = 0;
    return D_008DDAC0[3];
}
