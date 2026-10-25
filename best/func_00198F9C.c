typedef struct {
    s32 x, y, z;
    u16 w, h;
} Rect;

typedef struct {
    char pad0[8];
    s32 unk8;
    char padC[0xE4 - 0xC];
    s32 (*getX)(s32);
    s32 (*getY)(s32);
    char padEC[0x118 - 0xEC];
    void (*fn118)(s32, s32);
    void (*fn11C)(s32, u32, Rect *, void *, s32);
} Disp;

typedef struct {
    char pad0[0x84];
    s32 x84;
    s32 x88;
    char pad8C[0xF0 - 0x8C];
    s32 xF0;
    s32 xF4;
    char padF8[0x100 - 0xF8];
    s32 x100;
    char pad104[0x110 - 0x104];
    Rect r;
    char pad120[0xA80 - 0x120];
    s32 xA80;
} Obj;

extern Rect D_003642C0;
extern s32 D_003642AC[];
Disp *D_00480488;
s32 D_004804A0;

void func_00198F9C(s32 arg0, Obj *o, s32 arg2) {
    Rect *src = &D_003642C0;
    s32 t;

    if ((u32)(o->xF4 - 0x10) >= 2U) {
        t = o->xF0;
        t = D_00480488->getY(D_00480488->unk8) * t * 8 / (o->xA80 - 8);
        o->x100 = t;
        o->r.x = D_00480488->getX(src->x) + o->x84;
        o->r.y = D_00480488->getY(src->y) + o->x100 + o->x88;
        o->r.z = 0;
        o->r.w = D_00480488->getX(src->w);
        o->r.h = D_00480488->getY(src->h);
        o->x100 = t;
        D_003642AC[0] = o->r.y;
    } else {
        o->r.x = D_00480488->getX(src->x) + o->x84;
        o->r.y = D_00480488->getY(src->y) + o->x100 + o->x88;
        o->r.z = 0;
        o->r.w = D_00480488->getX(src->w);
        o->r.h = D_00480488->getY(src->h);
    }
    D_00480488->fn118(arg0, arg2);
    D_00480488->fn11C(arg0, 0x80808080, &o->r, &D_004804A0, arg2);
}
