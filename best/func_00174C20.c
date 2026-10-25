typedef struct { u32 n; s32 idx[35]; s32 val[32]; } Stk;
extern Stk D_010EAA60;
extern struct { s32 v; s32 pad[9]; } D_010EA1F0[];
s32 func_00174C20(s32 a) {
    if (D_010EAA60.n >= 0x20) return -1;
    D_010EAA60.idx[D_010EAA60.n] = a;
    if (a != 0xFFFF) {
        s32 v = D_010EA1F0[a].v;
        u32 n = D_010EAA60.n;
        D_010EAA60.n = n + 1;
        D_010EAA60.val[n] = v;
        func_00171AE0(v);
    } else {
        D_010EAA60.val[D_010EAA60.n++] = 0;
    }
    if (D_010EAA60.n >= 2) return D_010EAA60.idx[D_010EAA60.n - 2];
    return -1;
}
