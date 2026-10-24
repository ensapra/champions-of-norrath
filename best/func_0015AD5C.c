s32 func_0014D29C(u8 *);
s32 func_0014F200(s32, u64, u8 *, void *);
void func_0016FB0C(void *);

typedef struct { s32 a; u32 flags; u8 pad[0x1C]; } Ent24;

void func_0015ADA4(s32 a0, s64 a1)
{
    u8 *p = (u8 *)(s32)a1;
    func_0016FB0C(p + 0xBA8);
    *(s32 *)(p + 0xBC8) = *(s32 *)(p + 0xBC8) == 0;
    if (*(u32 *)(p + 0xCC8) != 0 && *(s32 *)(p + 0xD00) == 1) {
        *(s32 *)(p + 0xC8C) = func_0014F200(func_0014D29C(p), *(u32 *)(p + 0xCC8), p, func_0015ADA4);
    }
}

s32 func_0015AD80(u8 *p, s32 i)
{
    Ent24 *e = *(Ent24 **)(p + 0xB80);
    u32 r = e[i].flags & 4;
    return r != 0;
}

s32 func_0015AD5C(u8 *p, s32 i)
{
    Ent24 *e = &(*(Ent24 **)(p + 0xB80))[i];
    if (e->flags & 2)
        return 1;
    return 0;
}
