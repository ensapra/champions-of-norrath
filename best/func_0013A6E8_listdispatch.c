extern s32 func_00138758(void *, s32, void **);
extern void func_00138900(void *, void *);
typedef struct { s16 delta; s16 pad; void (*fn)(void *, s32); } VtEnt_13A6E8;
typedef struct { char pad[0x18]; VtEnt_13A6E8 e; } Vt_13A6E8;
typedef struct { char pad[0x48]; Vt_13A6E8 *vt; } Obj_13A6E8;
void func_00140678(void *, u8 *, s32);

s32 func_0013A6E8_listdispatch(void *arg0, s32 *arg1) {
    struct { char b0[0xA0]; void *s; char pad[0xC]; Obj_13A6E8 *list[100]; } l;
    u8 *list;
    s32 i;

    func_00138758(arg0, arg1[1], &l.s);
    func_00138900(l.b0, l.s);
    func_00140678(l.b0, list = (u8 *)l.list, 100);
    i = 0;
    while (*(Obj_13A6E8 **)(list + i)) {
        Obj_13A6E8 *o = *(Obj_13A6E8 **)(list + i);
        VtEnt_13A6E8 *e = &o->vt->e;
        i += 4;
        e->fn((char *)o + e->delta, arg1[2]);
    }
    return 0;
}
