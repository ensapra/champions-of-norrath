typedef struct {
    s32 id;
    s32 pad4;
    f32 val;
    char padC[0x14];
} Ent20;

typedef struct {
    char pad0[0x44];
    s32 i44;
    char pad48[4];
    s32 i4C;
    char pad50[0x64];
    s32 iB4;
    char padB8[4];
    s32 iBC;
} Model;

typedef struct {
    char pad0[0x24];
    Model *m;
    char pad28[0x11C - 0x28];
    s16 s11C;
    char pad11E[0x124 - 0x11E];
    s8 count;
    char pad125[3];
    Ent20 ent[1];
} Obj;

typedef struct {
    char pad[0x3D4];
    f32 vel;
    f32 pos;
    s16 out;
} Obj2;

extern f32 D_00481340;
extern f32 D_00481344;
extern f32 D_00481348;

void func_002082D8(Obj *o)
{
    Obj2 *q = (Obj2 *)o;
    f32 x;
    f32 v;
    s32 i;

    x = o->s11C * (1.0f / 512.0f);
    if (x > 1.0f) {
        x = 1.0f;
    }
    if (x < -1.0f) {
        x = -1.0f;
    }
    v = q->vel + (x - q->pos) * D_00481340;
    q->pos += v;
    x = q->pos + q->pos;
    q->vel = v - v * D_00481344;
    q->out = x * D_00481348;
    if (x > 0.0f) {
        for (i = 0; i < o->count; i++) {
            Model *m = o->m;
            s32 id = o->ent[i].id;
            if (id == m->iB4 || id == m->i44) {
                o->ent[i].val = x;
            } else if (id == m->iBC || id == m->i4C) {
                o->ent[i].val = 0.0f;
            }
        }
    } else {
        for (i = 0; i < o->count; i++) {
            Model *m = o->m;
            s32 id = o->ent[i].id;
            if (id == m->iB4 || id == m->i44) {
                o->ent[i].val = 0.0f;
            } else if (id == m->iBC || id == m->i4C) {
                o->ent[i].val = -x;
            }
        }
    }
}
