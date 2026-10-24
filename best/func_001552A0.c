extern u8 func_001C7738[];
typedef struct Obj Obj;
typedef struct { u8 pad[0x9C]; void (*getSize)(Obj *, s32 *, s32 *); } ObjVt;
struct Obj { u8 pad[0x4C]; ObjVt *vt; };
typedef struct {
    u8 pad0[0x50]; Obj *obj;
    u8 pad54[0x5A0 - 0x54]; s32 x5A0; s32 x5A4;
    u8 pad5A8[0x5D4 - 0x5A8]; s32 x5D4;
    u8 pad5D8[0x878 - 0x5D8]; s32 x878; s32 x87C; s32 x880; s32 x884; s32 x888;
} Win;
void func_0015525C(Win *w, s32 a1, s32 x, s32 y)
{
    (*(void (**)(Win *, s32, s32, s32))(func_001C7738 + 0xB4))(w, a1, x + w->x878 + w->x880, y + w->x87C + w->x888);
}
void func_001552A0(Win *w, s32 *x, s32 *y)
{
    Obj *o = w->obj;
    s32 t;
    if (o != NULL && o->vt->getSize != NULL) {
        o->vt->getSize(o, x, y);
    } else {
        *y = 0;
        *x = 0;
    }
    t = w->x880 + w->x5D4;
    *x = *x + w->x5A0 + t + w->x878;
    t = w->x888 + w->x5D4;
    *y = *y + w->x5A4 + t + w->x87C;
}
