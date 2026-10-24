extern s32 jtbl_004C006C[];
extern u8 D_0110B000[];
extern s32 D_0110B040[];
s32 func_001B08B0(void *, s32, s32, void *, s32, void *, s32, s32, s32);

u32 func_001B49F0(void)
{
    if (jtbl_004C006C[0x3F48 / 4] < 0)
        return 0;
    if (func_001B08B0(D_0110B000, 5, 0, 0, 0, D_0110B040, 4, 0, 0) < 0)
        return 0xFFFFFFFF;
    return D_0110B040[0];
}

typedef struct GuiObj GuiObj;
typedef struct {
    u8 pad[0xD8];
    s32 (*fD8)(GuiObj *);
} GuiVt;
struct GuiObj {
    u8 pad0[0x4C];
    GuiVt *vt;
    GuiObj *parent;
    GuiObj *root;
    u8 pad58[0xA4 - 0x58];
    s32 xA4;
};

s32 func_0014D2FC(GuiObj *o)
{
    s32 (*fn)(GuiObj *) = o->vt->fD8;
    if (fn != NULL)
        return fn(o);
    return 0;
}

s32 func_0014B41C(GuiObj *, s32);
extern s32 D_0047FC08;

GuiObj *func_0014D29C(GuiObj *o)
{
    if (o->root != NULL)
        return o->root;
    if (o->parent != NULL)
        return o->root = func_0014D29C(o->parent);
    if (func_0014B41C(o, D_0047FC08) == 0)
        o = NULL;
    return o;
}

void func_00152618(GuiObj *);

void func_0014D270(GuiObj *o)
{
    if (o->xA4 != 0) {
        o->xA4 = 0;
        func_00152618(o);
    }
}
