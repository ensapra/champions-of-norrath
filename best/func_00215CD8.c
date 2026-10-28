typedef struct { f32 x, y, z; } V3;
typedef struct { char pad[0x10]; V3 pos; char pad2[0x1c]; s16 ang; char pad3[0x16]; s8 dir; } Obj;
typedef struct { char *p; char pad[0x5DAC]; } Ent;
extern Ent D_0040DB70[];
extern char D_004707E0[];
extern char D_004707F0[];
f32 func_0015A070(s32);
f32 func_0015A100(s32);
s32 func_001671F8(char *);
void ovl_ntgui2_func_00191830(s32, s32);

static inline void vsub(V3 *o, V3 *a, V3 *b) {
    f32 x = a->x - b->x;
    f32 y = a->y - b->y;
    f32 z = a->z - b->z;
    o->x = x;
    o->y = y;
    o->z = z;
}

s32 func_00215CD8(Obj *o, s32 a1, s32 idx) {
    V3 t = *(V3 *)(D_0040DB70[idx].p + 0x10);
    V3 n;
    V3 d;
    V3 *np = &n;
    f32 s;
    s = func_0015A070(o->ang - 0x4000);
    n.y = func_0015A100(o->ang - 0x4000);
    np->x = s;
    {
        V3 *dp = &d;
        vsub(dp, &t, &o->pos);
        n.z = 0.0f;
        if ((dp->x * np->x + dp->y * n.y + dp->z * n.z) * (f32)o->dir > 0.0f)
            ovl_ntgui2_func_00191830(a1, func_001671F8(D_004707E0));
        else
            ovl_ntgui2_func_00191830(a1, func_001671F8(D_004707F0));
    }
    return 1;
}
