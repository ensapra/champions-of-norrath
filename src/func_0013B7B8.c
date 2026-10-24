extern s32 func_00138758(void *, s32, void **);
extern void func_00138900(void *, void *);
extern void func_00140678(void *, void *, s32);

typedef struct {
    s16 delta;
    s16 index;
    void (*fn)(void *, s32);
} VtEnt;

typedef struct {
    char pad[0x48];
    VtEnt *vt;
} Obj_0013C230;

typedef struct {
    u8 buf[0xA0];
    void *s;
    s32 pad[3];
    Obj_0013C230 *arr[0x200];
} Locals_0013B7B8;

s32 func_0013B7B8(void *arg0, s32 *arg1) {
    Locals_0013B7B8 L;
    Obj_0013C230 **arrp;
    s32 i;
    Obj_0013C230 *obj;
    VtEnt *t;

    i = 0;
    func_00138758(arg0, arg1[1], &L.s);
    func_00138900(L.buf, L.s);
    arrp = L.arr;
    func_00140678(L.buf, arrp, 0x200);
    if (*(void **)((u8 *)arrp) != NULL) {
        for (;;) {
            obj = *(Obj_0013C230 **)((u8 *)arrp + (i << 2));
            t = obj->vt + 1;
            t->fn((u8 *)obj + t->delta, 3);
            i++;
            if (*(void **)((u8 *)arrp + (i << 2)) == NULL)
                break;
        }
    }
    return 0;
}
