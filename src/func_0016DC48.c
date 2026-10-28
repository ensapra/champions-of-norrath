typedef struct {
    u8 pad0[0x5A0];
    s32 x5A0; s32 y5A4; u8 pad1[0x5B0 - 0x5A8];
    s32 h5B0; u8 pad2[0x5D4 - 0x5B4];
    s32 m5D4; u8 pad3[0x948 - 0x5D8];
    s32 x948; s32 pad94C; s32 x950; u8 pad4[0x958 - 0x954];
    s32 h958; s32 h95C; u8 pad5[0x980 - 0x960];
    s32 *items; s32 w984; s32 h988; u8 pad6[0x9C4 - 0x98C];
    s32 count; s32 pad9C8; s32 gap;
} Win;
void func_0014CE60(s32, s32, s32);
void func_0016DC48(Win *p) {
    s32 i = 0;
    s32 x, y;
    x = p->x5A0 + p->m5D4;
    y = p->y5A4 + p->m5D4;
    x += p->x948;
    y += p->h958;
    x += p->x950;
    y += (p->h5B0 - (p->h958 + p->h95C)) / 2;
    y -= p->h988 >> 1;
    if (p->count > 0) {
    loop:
        func_0014CE60(p->items[i], i * (p->gap + p->w984) + x, y);
        i++;
        if (i < p->count) goto loop;
    }
}
