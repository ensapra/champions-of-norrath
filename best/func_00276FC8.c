struct Vec3 { f32 x, y, z; Vec3() {} };

struct Obj3 { char pad[0x10]; Vec3 pos; };

struct Obj {
    char pad0[0xC];
    s32 flags;      /* 0xC */
    char pad10[0xC];
    f32 f1C;        /* 0x1C */
    char pad20[8];
    s8 b28;         /* 0x28 */
    char pad29[0x1F];
    void *vt;       /* 0x48 */
    s32 h4C;        /* 0x4C */
    s32 h50;        /* 0x50 */
    char pad54[5];
    s8 b59;         /* 0x59 */
    char pad5A[0x106];
    s64 d160;       /* 0x160 */
    char pad168[0xC];
    f32 f174;
    f32 f178;
    f32 f17C;
    s32 i184;
    s32 i180;
    char pad188[4];
    Obj3 *owner;    /* 0x18C */
};

extern "C" {
void func_001411F0(Obj *, Vec3, s32, s32);
void func_00143830(Obj *);
s32 func_00165DC0(void *, char *);
void func_0016C820(s32, s64, s32 *, s32 *, s32 *, s32 *, s32 *, s32 *);
s64 func_0016C970(s32, s64);
char *func_00304640(char *, char *);
char *func_00305328(char *, char *);
extern char D_004500D0[];
extern f32 D_00482228;
extern f32 D_0048222C;
extern char D_00485E80[];
extern char D_00485E88[];

void func_00276FC8(Obj *o, char *name, s32 a2, Obj3 *owner, s32 a4, f32 f)
{
    func_001411F0(o, owner->pos, 0, 0);
    s32 x0, y0, x1, y1, x2, y2;
    char buf[0x80];
    f32 t;
    o->vt = D_004500D0;
    o->flags |= 0x4001;
    o->b59 = 8;
    o->owner = owner;
    func_00304640(buf, name);
    __builtin_memcpy(func_00305328(buf, D_00485E80), D_00485E88, 5);
    o->h4C = func_00165DC0((char *)o->owner + 0x4C, name);
    o->h50 = func_00165DC0((char *)o->owner + 0x4C, buf);
    o->d160 = func_0016C970(o->h4C, 0);
    func_00143830(o);
    o->b28 = 0x18;
    o->f1C = 24.0f;
    func_0016C820(o->h4C, o->d160, &x0, &y0, &x1, &y1, &x2, &y2);
    t = (f32)((y2 - x1) / 2) * D_00482228;
    o->i184 = a2;
    o->i180 = a4;
    o->f174 = f;
    o->f178 = t;
    o->f17C = t * D_0048222C * 2.0f;
}
}
