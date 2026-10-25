typedef struct VEnt { s16 off; s16 pad; s32 (*fn)(void *, s32); } VEnt;
typedef struct Obj { u8 pad0[0x48]; u8 *vt; u8 pad1[0x1C]; s32 id; } Obj;
typedef struct Loc { u8 buf[0xA0]; s32 spA0; } Loc;
extern void func_00138758(s32, s32, s32 *);
extern void func_00138900(void *, s32);
extern s32 func_00143A58(void *);
extern s32 *func_0030E550(void);
extern void func_001407D8(s32, Obj **, s32);

s32 func_00138D08(s32 arg0, s32 *arg1) {
    Loc l;
    Obj *list[50];
    Obj **base;
    Obj **p;
    s32 h;
    s32 i;
    Obj *o;
    VEnt *e;

    func_00138758(arg0, arg1[1], &l.spA0);
    func_00138900(&l, l.spA0);
    h = func_00143A58(&l);
    if (h == 0) return 0;
    base = list;
    func_001407D8(*func_0030E550(), base, 0x32);
    p = base;
    if (*p != 0) {
        i = 0;
        do {
            o = *(Obj **)((u8 *)p + i);
            i += 4;
            if (o->id != -1) {
                e = (VEnt *)(o->vt + 0x88);
                if (e->fn((u8 *)o + e->off, h) != 0) {
                    return 1;
                }
            }
            p = base;
        } while (*(Obj **)((u8 *)p + i) != 0);
    }
    return 0;
}
