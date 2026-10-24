typedef struct { u8 pad[0x58]; s32 v58; u8 pad2[0x80-0x5C]; } Q;
typedef struct { Q *ptr; s32 a, b, c, d, e, f; } Ent;
typedef struct { Ent e[4]; } Grp;
extern Grp D_008DD8D0[];
void func_002D59D8(void *, s32);
Q *func_002D39B0(s32 a, s32 b) {
    Q *p = D_008DD8D0[a].e[b].ptr;
    s32 f;
    func_002D59D8(p, (s32)p + 0xFF);
    f = p[0].v58 < p[1].v58;
    return p + f;
}
