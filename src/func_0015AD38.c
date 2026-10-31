typedef struct { s32 a; u32 flags; u8 pad[0x1C]; } E15AD;
typedef struct { u8 pad[0xB80]; E15AD *tbl; } G15AD;

s32 func_0015AD38(G15AD *g, s32 i)
{
    u32 addr = (u32)i * 36 + (u32)g->tbl;
    E15AD *e = (E15AD *)addr;
    if (e->flags & 1)
        return 1;
    return 0;
}
