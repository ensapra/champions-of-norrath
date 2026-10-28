s32 func_0014B41C(void *, s32);
s32 D_0047FC08 = 0x3D088888;
typedef struct Obj { char pad[0x4C]; struct Ops *ops; } Obj;
typedef struct Ops { char pad[0x6C]; s32 x6C; char pad2[0xEC - 0x70]; void (*fEC)(Obj *, s32, s32, s32, s32); char pad3[0x128 - 0xF0]; void (*f128)(void *, Obj *); } Ops;
typedef struct ListEntry { char pad0[8]; struct ListEntry *next; s32 unk_C; Obj *obj; } ListEntry;
typedef struct { char pad0[0x4C]; Ops *ops; char pad1[0x830 - 0x50]; s32 f830; s32 f834; s32 f838; s32 f83C; ListEntry list; s32 count; } S;
void func_00150D9C(S *arg0) {
    ListEntry *head = &arg0->list;
    ListEntry *e = head;
    if (arg0->count == 0) return;
    while (*(ListEntry * volatile *)&e->next != head) {
        s32 r;
        Obj *o;
        e = e->next;
        r = func_0014B41C(e->obj, D_0047FC08);
        o = e->obj;
        if (r != 0) {
            arg0->ops->f128(arg0, o);
        } else if (o->ops->x6C != 0) {
            if (o->ops->fEC != 0)
                o->ops->fEC(o, arg0->f830, arg0->f834, arg0->f838, arg0->f83C);
        }
    }
}
