typedef struct { s32 n; s32 a[35]; s32 b[32]; } Stk;
typedef struct { s32 id; char pad[0x1C]; s16 x; s16 y; s32 pad2; } Ent;
extern Stk D_010EA730;
extern Ent D_010EA1E0[];
extern char func_001CE218[];
s32 func_00171AE0(s32);
typedef struct { char pad[0x18]; s32 x; s32 y; } Dst;

s32 func_00174DA8(s32 arg0) {
    s32 idx = arg0;
    if ((u32)D_010EA730.n < 0x20) {
        D_010EA730.a[D_010EA730.n] = idx;
        if (idx != 0xFFFF) {
            Ent *e = &D_010EA1E0[idx];
            s16 *p = &e->x;
            s32 id = e->id;
            D_010EA730.b[D_010EA730.n++] = id;
            func_00171AE0(id);
            ((Dst *)(func_001CE218 + 0x2010))->y = p[1];
            ((Dst *)(func_001CE218 + 0x2010))->x = p[0];
        } else {
            D_010EA730.b[D_010EA730.n++] = 0;
        }
        if ((u32)D_010EA730.n >= 2) return D_010EA730.a[D_010EA730.n - 2];
        return -1;
    }
    return -1;
}
