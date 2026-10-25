typedef struct { s32 v; s16 idx; char pad[0x16]; } Ent;
typedef struct { s32 p0; s32 p1; } Slot;
typedef struct { char pad[0x2C]; s32 f2C; } Sub;
typedef struct { char pad[0x34]; Slot *slots; Ent *ents; } Obj;
s32 func_0024F978(s32, Ent *);
extern f32 D_00482024;

f32 func_0024C4C0(Obj *o) {
    f32 best = 0.0f;
    f32 ret = best;
    f32 scale;
    s32 i, off;
    Ent *e = o->ents;
    if (e != 0) {
        if (e->v <= 0x7FFFFFFE) {
            scale = D_00482024;
            i = 0;
            off = 0;
            do {
                f32 val;
                s32 idx;
                Ent *p = (Ent *)(off + (s32)e);
                off += 0x1C;
                idx = p->idx;
                val = (f32)p->v * scale;
                if (idx >= 0) {
                    Sub *s = (Sub *)o->slots[idx].p1;
                    if (s != 0) {
                        s32 t = (s->f2C >> 4) * 7;
                        val += (f32)(t * 4) / (f32)func_0024F978(*(s32 *)((char *)s + 0x10), e);
                        e = o->ents;
                    }
                }
                if (best < val) best = val;
                i += 0x1C;
            } while (((Ent *)(i + (s32)e))->v <= 0x7FFFFFFE);
            ret = best;
        }
    }
    return ret;
}
