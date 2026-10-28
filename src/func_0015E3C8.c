extern s32 func_00170894(s32, s32, s32, s32);

typedef struct Ent { s32 a, b, c, d; u8 pad[0x90]; } Ent;
#define ENTS(o) ((Ent *)((u8 *)(o) + 0xAD0))
#define IDX(o) (*(s32 *)((u8 *)(o) + 0x4EC))

void func_0015E3C8(u8 *o)
{
    s32 t8 = *(s32 *)(o + 0xE94) & 0x0FFFFFFF;
    ENTS(o)[IDX(o)].a = 0x30000040;
    ENTS(o)[IDX(o)].b = t8;
    ENTS(o)[IDX(o)].c = 0;
    ENTS(o)[IDX(o)].d = func_00170894(0x50, 0, 0x40, 0);
}
