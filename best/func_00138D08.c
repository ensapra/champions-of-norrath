extern void func_00138758(void *, s32, void **);
extern void func_00138900(void *, void *);
extern s32 func_00143A58(void *);
extern s32 *func_0030E550(void);
extern void func_001407D8(s32, void *, s32);

typedef struct {
    s16 delta;
    s16 index;
    s32 (*fn)(void *, s32);
} VtEnt;

typedef struct {
    char pad[0x48];
    u8 *vt;
    char pad2[0x1C];
    s32 id;
} Obj_00138D08;

typedef struct {
    u8 buf[0xA0];
    void *s;
    s32 pad[3];
    Obj_00138D08 *arr[50];
} Locals_00138D08;

s32 func_00138D08(void *arg0, s32 *arg1) {
    Locals_00138D08 L;
    Obj_00138D08 **base;
    Obj_00138D08 *o;
    s32 h;
    s32 i;
    VtEnt *t;
    s32 r;

    r = 0;
    func_00138758(arg0, arg1[1], &L.s);
    func_00138900(L.buf, L.s);
    h = func_00143A58(L.buf);
    if (h != 0) {
        base = L.arr;
        func_001407D8(*func_0030E550(), base, 0x32);
        o = (Obj_00138D08 *)base;
        if (*(void **)o != NULL) {
            i = 0;
            do {
                o = *(Obj_00138D08 **)((u8 *)o + i);
                i += 4;
                if (o->id != -1) {
                    t = (VtEnt *)(o->vt + 0x88);
                    if (t->fn((u8 *)o + t->delta, h) != 0) {
                        r = 1;
                        break;
                    }
                }
                o = (Obj_00138D08 *)base;
            } while (*(void **)((u8 *)o + i) != NULL);
        }
    }
    return r;
}
