void func_0014B870(u8 *arg0, s32 arg1, s32 arg2, s32 *arg3, s32 *arg4) {
    u8 *p = *(u8 **)(arg0 + 0x4C);
    p = *(u8 **)(p + 0x9C);
    ((void (*)(u8 *, s32 *, s32 *))p)(arg0, arg3, arg4);
    *arg3 = arg1 - *arg3;
    *arg4 = arg2 - *arg4;
}

s32 func_0014B41C(s32, s32);
void func_0014F2E0(s32, void *);
extern s32 D_0047FBF4;
typedef struct { u8 pad[0xAC]; s32 ac; s32 b0; s32 b4; } ObjB7F0;
void func_0014B7F0(ObjB7F0 *o, s32 a) {
    if (a == 0) return;
    o->b0 = 0;
    o->ac = 1;
    if (func_0014B41C(a, D_0047FBF4) == 0) {
        o->b4 = 1;
        return;
    }
    o->b4 = 0;
    func_0014F2E0(a, o);
}

void func_0014B980(void);
void func_001AF710(char *, ...);
extern char jtbl_004C006C[];
typedef struct Obj558 { struct Obj558 *parent; char name[4]; } Obj558;
void func_0014B558(Obj558 *o, void **fns, s32 n) {
    Obj558 *par = o->parent;
    s32 i;
    if (par == 0) return;
    if ((s32)fns[n - 1] != -1) {
        func_001AF710(jtbl_004C006C + 0xB274, o->name);
        return;
    }
    n--;
    for (i = 0; i < n; i++) {
        if (fns[i] == (void *)func_0014B980) {
            fns[i] = *(void **)((u8 *)par + ((u8 *)&fns[i] - (u8 *)o));
        }
    }
}

void func_0014BBEC(s32 *r, s32 *g, s32 *b, u8 *c0, u8 *c1, s32 x, s32 x0, s32 x1) {
    s32 d = x1 - x0;
    s32 w0 = x1 - x;
    s32 w1 = x - x0;
    if (x1 == x0) {
        *r = (c0[0] + c1[0]) >> 1;
        *g = (c0[1] + c1[1]) >> 1;
        *b = (c0[2] + c1[2]) >> 1;
        return;
    }
    *r = (c1[0] * w1 + c0[0] * w0) / d;
    *g = (c1[1] * w1 + c0[1] * w0) / d;
    *b = (c1[2] * w1 + c0[2] * w0) / d;
}
