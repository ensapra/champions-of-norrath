typedef struct __attribute__((packed, aligned(4))) { u64 a; s32 b; } P12;

typedef struct {
    u8 pad0[0x1C];
    s8 b1C;
    s8 b1D;
    u8 b1E;
} ItemDef;

typedef struct {
    ItemDef *def;
    s32 pad4;
    s64 flags;
} Item;

typedef struct {
    ItemDef *def;
    s16 count;
} Stack;

typedef struct {
    u8 pad0[0x18];
    s32 v18;
    u8 pad1c[0x60 - 0x1C];
    Stack *stack;
    u8 pad64[0x70 - 0x64];
    s32 v70;
} Inv;

typedef struct {
    u8 pad0[0x10];
    P12 pos;
} Obj;

typedef struct {
    u8 pad0[0x5570];
    Obj *p5570;
    u8 pad5574[0x55C8 - 0x5574];
    Item *slots[(0x5C14 - 0x55C8) / 4];
    s8 sel;
    u8 pad5c15[0x5C1E - 0x5C15];
    s8 state;
    u8 pad5c1f[0x5DB0 - 0x5C1F];
} Player;

extern Player D_00408600[];
extern Inv D_00427288[];
extern u8 D_007CC5C8[];
extern char D_00466440[], D_00466458[], D_00466470[], D_00466488[], D_004664A0[], D_004664B8[], D_004664D0[];
extern char D_004664E8[], D_00466500[], D_00466518[], D_00466530[], D_00484828[];

s32 func_00303EB8(char *, const char *, ...);
s32 func_001353A8(s32);
s32 func_00165DC0(char *, char *);
void func_0024D308(s32, s32, f32);
void func_0013F2D0(P12 *, P12 *, s32, s32, s32);
void func_001B1AA0(s32, Item *);
void func_001A1C98(s32);
u8 *func_001441B8(s32);
void func_0014B9E8(u8 *, P12 *, Item *, s32);
void func_001AE290(s32, s32, s32, s32);
void func_001B01B0(s32, void *, s32);
void func_001A5358(s32);
void func_001A5480(void);

void func_001AE6D8(s32 a0, Item *item, s32 a2, s32 a3)
{
    char buf[0x40];
    P12 pos;
    P12 out;
    P12 src;
    Inv *inv;
    Player *pl;
    s32 n;
    u8 *obj;

    inv = &D_00427288[a0];
    pl = &D_00408600[a0];
    if (item->flags & 0x800000) {
        if ((u32)(item->def->b1E - 1) < 4) {
            func_00303EB8(buf, D_00466440);
        } else {
            if ((item->flags & 0x20000000) == 0)
                goto mdwp;
            func_00303EB8(buf, D_00466458);
            goto done;
        mdwp:
            func_00303EB8(buf, D_00466470);
        }
    } else if (item->flags & 0x200000) {
        func_00303EB8(buf, D_00466488);
    } else if (item->flags & 0x40000) {
        if ((u32)(item->def->b1E - 1) < 3) {
            func_00303EB8(buf, D_004664A0);
        } else {
            if ((item->flags & 0x20000000) == 0)
                goto mdwp2;
            func_00303EB8(buf, D_004664B8);
            goto done;
        mdwp2:
            func_00303EB8(buf, D_004664D0);
        }
    } else if (item->flags & 0x100000) {
        func_00303EB8(buf, D_004664E8);
    } else if (item->flags & 0x80000) {
        func_00303EB8(buf, D_00466500);
    } else if (item->flags & 0x1000000) {
        func_00303EB8(buf, D_00466518);
    } else if (item->flags & 0x4000000) {
        func_00303EB8(buf, D_00466530);
    } else if (item->flags & 0x2000000) {
        func_00303EB8(buf, D_00466530);
    } else if (item->flags & 0x10000000) {
        func_00303EB8(buf, D_00466530);
    } else {
        func_00303EB8(buf, D_00466530);
    }
done:

    if (func_001353A8(a0))
        func_0024D308(func_00165DC0(D_00484828, buf), 0, 1.0f);

    func_0013F2D0(&out, (src = D_00408600[a0].p5570->pos, &src), 0x30, 0xC, 0);
    pos = out;
    if (pl->state == 7)
        func_001B1AA0(a0, item);
    if (pl->slots[pl->sel] == item) {
        pl->state = 5;
        func_001A1C98(a0);
    }
    if (inv->stack->def->b1C == 8)
        n = inv->stack->count < 20 ? inv->stack->count : 20;
    else
        n = 1;
    inv->stack->count -= n;
    obj = func_001441B8(400);
    if (obj)
        func_0014B9E8(obj, &pos, item, 0);
    else
        obj = 0;
    if (obj)
        *(s16 *)(obj + 0x14C) = n;
    if (inv->stack->count <= 0) {
        func_001AE290(a0, a2, item->def->b1D, a3);
        func_001B01B0(a0, D_007CC5C8 + a0 * 0x108, 0);
        inv->stack = 0;
    } else {
        inv->v18 = inv->v70;
    }
    func_001A5358(a0);
    func_001A5480();
}
