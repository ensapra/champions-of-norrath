typedef struct { s32 f0; s32 f4; s32 f8; s32 pad[4]; } Ent;
typedef struct { Ent ent[4]; } Grp;
typedef struct { s32 hdr[4]; Grp g[2]; } EntTab;
extern u8 D_008DD880[];
extern s32 D_008DDAC0[];
extern EntTab D_008DD8D0;
s32 func_002D8270(void*,s32,s32,void*,s32,void*,s32,s32,s32);
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
