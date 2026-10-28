typedef struct Obj Obj;
typedef struct Link { u8 pad[0xC]; Obj *owner; } Link;
struct Obj { u8 pad0[0xC]; Obj *owner; f32 x, y; u8 pad1[0x240 - 0x18]; Link *link; };
typedef struct Ent { u8 pad[0xC]; Obj *owner; } Ent;
extern Ent *D_0042BD18[];
s32 D_004852A8;
float sqrtf(float);
void func_00194300(void *, s32);
s32 func_0010B4A8(Obj *, Obj *);

s32 func_00204FF8(Obj *a, Obj *b) {
    s32 found = 0;
    if (b != 0) {
        s32 i;
        Ent **p = D_0042BD18;
        f32 *pa = &a->x, *pb = &b->x;
        for (i = 0; i < D_004852A8; i++, p++) {
            Obj *o;
            f32 da, dob, ea, eb;
            if (*p == 0) continue;
            o = (*p)->owner;
            if (o == a) { found = 1; continue; }
            if (o->link == 0) continue;
            if (o->link->owner != b) continue;
            ea = pa[0] - pb[0]; eb = pa[1] - pb[1];
            da = sqrtf(ea * ea + eb * eb);
            ea = o->x - pb[0]; eb = o->y - pb[1];
            dob = sqrtf(ea * ea + eb * eb);
            if (da * 3.0f < dob || (da < dob && found == 1)) {
                func_00194300(&o->link, D_004852A8);
                (*p)->owner->link = 0;
            } else {
                return 0;
            }
        }
    }
    return func_0010B4A8(a, b);
}
