typedef struct { u8 r, g, b, a; } RGBA_160FD4;
typedef struct {
    RGBA_160FD4 c;
    u8 pad[0x1C];
} Vtx_160FD4;
typedef struct {
    u8 pad0[0x70];
    Vtx_160FD4 v[6];
    u8 pad1[0x19C0 - 0x70 - 0xC0];
} Slot_160FD4;
typedef struct {
    Slot_160FD4 slot[2];
    u8 pad[0x33A0 - 0x19C0 * 2];
    RGBA_160FD4 col[4];
    s32 grad;
} Sub_160FD4;
typedef struct {
    u8 pad0[0x4EC];
    s32 idx;
    u8 pad1[0x618 - 0x4F0];
    s32 alpha;
    u8 pad2[0x910 - 0x61C];
    Sub_160FD4 sub;
} Obj_160FD4;

#define SETCOL(d, s) \
    (d)->c.r = (s).r; \
    (d)->c.g = (s).g; \
    (d)->c.b = (s).b; \
    (d)->c.a = obj->alpha * (s).a / 255;

void func_00160FD4(Obj_160FD4 *obj) {
    Sub_160FD4 *sub = &obj->sub;
    Slot_160FD4 *slot = &sub->slot[obj->idx];
    Vtx_160FD4 *v = slot->v;
    s32 i;

    if (sub->grad != 0) {
        SETCOL(v, sub->col[0]);
        v = &slot->v[1];
        SETCOL(v, sub->col[0]);
        v = &slot->v[2];
        SETCOL(v, sub->col[1]);
        v = &slot->v[3];
        SETCOL(v, sub->col[1]);
        v = &slot->v[4];
        SETCOL(v, sub->col[2]);
        v = &slot->v[5];
        SETCOL(v, sub->col[2]);
        return;
    }
    for (i = 5; i >= 0; i--) {
        SETCOL(v, sub->col[0]);
        v++;
    }
}
