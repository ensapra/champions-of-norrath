typedef struct Obj { char pad[0xC]; s32 a; s32 cnt; void (*cb)(struct Obj*); s32 (*upd)(struct Obj*); } Obj;
typedef struct Ent { Obj *o; s32 p[2]; s32 n; s32 q; } Ent;
extern Ent D_010C4BA8[];
extern s32 D_010C4BC0[];
void func_001183C0(s32);
void func_001184A8(s32 i) {
    Obj *o;
    s32 v;
    Ent *e = &D_010C4BA8[i];
    if (e->n > 0) {
        s32 *pv = &D_010C4BC0[i];
        o = e->o;
        v = o->a;
        o->cnt++;
        if (v != *pv) {
            *pv = v;
            if (o->cb) o->cb(o);
        }
        if (o->upd && o->upd(o) == 1) func_001183C0(i);
    } else {
        D_010C4BC0[i] = -1;
    }
}
