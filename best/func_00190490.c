/* identical to func_002D3A60 (matched), with its names changed by decompdecomp */
typedef struct { s32 a, b, c, d; s32 state; s32 f, g; } Ent;
typedef struct { Ent e[4]; } Row;
extern Row D_008DD8D0[];
typedef struct { u8 data[0x60]; s32 size; u8 pad[0x1C]; } Info_2D3A60;
Info_2D3A60 *func_002D39B0(s32, s32);
s32 func_002DD640(void);
void func_002DD698(void);
void *func_00301FFC(void *, void *, s32);
s32 func_00190490(s32 a, s32 b, void *dst) {
    Info_2D3A60 info;
    Info_2D3A60 *p;
    s32 t;
    if (D_008DD8D0[a].e[b].state == 0) {
        return 0;
    }
    t = func_002DD640();
    p = &info;
    *p = *func_002D39B0(a, b);
    func_00301FFC(dst, p, p->size);
    if (t == 1) {
        func_002DD698();
    }
    return p->size;
}
