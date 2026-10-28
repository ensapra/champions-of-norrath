extern u8 func_001C7A00[];
s32 func_0014BA30(void *a, void *b);
typedef struct VT { u8 pad[0x110]; void (*fn)(void *); } VT;
typedef struct Obj {
    u8 p0[0x4C]; VT *vt; u8 p1[0x98-0x50]; s32 st;
    u8 p2[0x538-0x9C]; s32 f538;
    u8 p3[0x920-0x53C]; s32 id;
    u8 p4[0x930-0x924]; s64 a30; s64 a38; s64 a40; s64 a48; s64 a50; s64 a58;
} Obj;
s32 func_001649C8(Obj *o, Obj *a, Obj *b) {
    s32 r;
    void *pv;
    s64 x, y;
    pv = func_001C7A00;
    pv = *(void **)((u8 *)pv + 0xB0);
    r = ((s32 (*)(void))pv)();
    if (a->id != b->id) {
        o->id = a->id;
        o->st = 2;
        r = 1;
    }
    if (func_0014BA30(&a->a40, &b->a40) == 0) {
        o->a50 = o->a40;
        o->a58 = o->a48;
        x = a->a40;
        o->a40 = x;
        y = a->a48;
        o->a48 = y;
        if (o->f538 != 0) {
            pv = o->vt;
            pv = ((VT *)pv)->fn;
            ((void (*)(void *))pv)(o);
        } else {
            o->a30 = x;
            o->a38 = y;
        }
        o->st = 2;
        r = 1;
    }
    return r;
}
