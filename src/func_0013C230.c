extern void func_00180AC0(s32, s32, s32, s32, s32, s32, s32, s32, f32, f32, f32, s32, s32, s32, s32, s32);
extern s32 D_00333920[];

typedef struct {
    s32 id;
    s32 type;
    s32 a[7];
    s32 b;
    s32 x;
    s32 y;
    s32 z;
    s32 c;
    s32 d;
    s32 e;
} Arg_0013C108;

s32 func_0013C108(void *arg0, Arg_0013C108 *arg1) {
    func_00180AC0(D_00333920[arg1->type], arg1->a[0], arg1->a[1], arg1->a[2], arg1->a[3], arg1->a[4], arg1->a[5], arg1->a[6],
                  arg1->x, arg1->y, arg1->z, arg1->b, arg1->c, arg1->d, arg1->e, 0);
    return 0;
}

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
    Obj_0013C230 *arr[25];
} Locals_0013C230;

s32 func_0013C230(void *arg0, s32 *arg1) {
    Locals_0013C230 L;
    Obj_0013C230 **arrp;
    s32 i;
    Obj_0013C230 *obj;
    VtEnt *t;

    i = 0;
    func_00138758(arg0, arg1[1], &L.s);
    func_00138900(L.buf, L.s);
    arrp = L.arr;
    func_00140678(L.buf, arrp, 0x19);
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

typedef struct {
    char pad[0xC];
    s32 flags;
} Obj_0040DB70;

extern Obj_0040DB70 *D_0040DB70[];
s32 D_00484538;
s32 D_0048453C;

s32 func_0013C308(void) {
    if (D_0040DB70[0] != NULL && !(D_0040DB70[0]->flags & 8)) {
        D_0048453C = 0;
    } else if (D_00484538 == 2) {
        D_0048453C = 1;
    } else {
        D_0048453C = 0;
    }
    return D_0048453C;
}
