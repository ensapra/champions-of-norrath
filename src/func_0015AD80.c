typedef struct { s32 a; u32 flags; u8 pad[0x1C]; } Ent24;
s32 func_0015AD80(void *p, s32 i) {
    Ent24 *base = *(Ent24 **)((u8 *)p + 0xB80);
    Ent24 *e = (Ent24 *)((i * 36) + (s32)(u8 *)base);
    u32 f = e->flags;
    if (f & 4) return 1;
    return 0;
}
