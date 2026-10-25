typedef struct {
    s32 x;
    s32 y;
    s32 w;
    u32 a : 16;
    u32 b : 16;
} Ent187C98;

typedef struct {
    Ent187C98 e[9];
} __attribute__((aligned(8))) Block187C98;

typedef struct {
    char pad[0xE4];
    s32 (*scaleY)(s32);
    s32 (*scaleX)(s32);
} Disp187C98;

typedef struct {
    char pad0[0x10];
    s32 x;
    s32 y;
    char pad18[0x60 - 0x18];
    Block187C98 blk;
} Obj187C98;

extern Block187C98 D_004CDFA0;
extern s32 D_010F4530[];
#define DISP ((Disp187C98 *)D_010F4530[0])

void func_00187C98(Obj187C98 *o, s32 x, s32 y)
{
    s32 i;
    Ent187C98 *e;

    o->x = x;
    o->y = y;
    o->blk = D_004CDFA0;
    for (i = 0; i < 9; i++) {
        e = &o->blk.e[i];
        e->x = DISP->scaleX(e->x) + x;
        e->y = DISP->scaleY(e->y) + y;
        e->w = DISP->scaleX(e->w);
        e->a = DISP->scaleX(e->a);
        e->b = DISP->scaleY(e->b);
    }
}
