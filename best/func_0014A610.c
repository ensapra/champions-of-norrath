typedef struct { s32 x, y, z; } V3;
typedef struct { u8 p[5]; u8 f5; u8 rest[0xA]; } Sub;
typedef struct Obj {
    u8 pad0[0xC];
    u32 flags;
    u8 pad10[0x28];
    s16 id;
    u8 pad3A[0xE];
    s32 *vt;
    s32 a4c;
    s32 a50;
    Sub sub;
    u8 pad64[0xFC];
    s64 r160;
} Obj;
extern void func_001411F0(Obj *, V3 *, s32);
extern char *func_00143A80(Obj *, const char *, s32);
extern s32 func_00140F60(Obj *, const char *, s32);
extern void func_001439E8(char *);
extern s32 func_00303EB8(char *, const char *, char *);
extern s32 func_00165DC0(char *, char *);
extern void func_001637A8(void *);
extern void func_00163830(void *, s32, s32);
extern void func_001601F8(void *);
extern void func_001438A0(Obj *);
extern s32 func_00303F50(char *, const char *, s32 *);
extern s64 func_0016C970(s32, s32);
extern s32 D_0044C9E8[];
extern char D_00483BA0[];
extern char D_00462350[];
extern char D_00483BA8[];
extern char D_00483BB0[];
extern char D_00483BB8[];
extern char D_00483BC0[];
extern char D_00483BC8[];
extern char D_00483BD0[];
extern char D_00483BD8[];
extern char D_00483BE0[];
extern char D_00483BE8[];
extern char D_00462360[];
extern char D_00483BF0[];

void func_0014A610(Obj *o, V3 *v, s16 id) {
    V3 t;
    Sub *sub = &o->sub;
    char *n, *s, *m;
    char b[0x80], c[0x80], a[0x80];
    s32 mask;
    t = *v;
    func_001411F0(o, &t, 0);
    o->vt = D_0044C9E8;
    sub->f5 = 8;
    o->id = id;
    if (func_00143A80(o, D_00483BA0, 0)) o->flags |= 0x100000;
    if (func_00140F60(o, D_00462350, 0)) o->flags |= 1;
    o->flags |= 8;
    n = func_00143A80(o, D_00483BA8, 0);
    if (n == 0) {
        n = func_00143A80(o, D_00483BB0, 0);
        if (n != 0) func_001439E8(n);
    }
    if (n != 0) {
        func_00303EB8(a, D_00483BB8, n);
        func_00303EB8(b, D_00483BC0, n);
        func_00303EB8(c, D_00483BC8, n);
        o->a4c = func_00165DC0(a, b);
        o->a50 = func_00165DC0(a, c);
    }
    if (o->a4c == 0) {
        s = func_00143A80(o, D_00483BD0, 0);
        m = func_00143A80(o, D_00483BD8, 0);
        o->a4c = func_00165DC0(s, m);
    }
    if (o->a50 == 0) {
        s = func_00143A80(o, D_00483BD0, 0);
        m = func_00143A80(o, D_00483BE0, 0);
        o->a50 = func_00165DC0(s, m);
    }
    func_001637A8(sub);
    if (func_00143A80(o, D_00483BE8, 0)) {
        s = func_00143A80(o, D_00483BD0, 0);
        m = func_00143A80(o, D_00483BE8, 0);
        func_00163830(sub, func_00165DC0(s, m), 1);
        func_001601F8(sub);
        func_001438A0(o);
    }
    if (func_00143A80(o, D_00462360, 0)) {
        s = func_00143A80(o, D_00462360, 0);
        func_00303F50(s, D_00483BF0, &mask);
        o->r160 = func_0016C970(o->a4c, mask);
    } else {
        o->r160 = func_0016C970(o->a4c, 0);
    }
}
