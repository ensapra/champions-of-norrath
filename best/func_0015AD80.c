typedef struct { s32 a; u32 flags; u8 pad[0x1C]; } Ent24;

s32 func_0015AD80(u8 *p, s32 i)
{
    Ent24 *e = *(Ent24 **)(p + 0xB80);
    e += i;
    if (e->flags & 4)
        return 1;
    return 0;
}

s32 func_0015AD5C(u8 *p, s32 i)
{
    Ent24 *e = &(*(Ent24 **)(p + 0xB80))[i];
    u32 f = e->flags & 2;
    return f != 0;
}
