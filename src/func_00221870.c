class Cb {
public:
    char pad[0x48];
    virtual void Fn(s32 a);
};
class Obj {
public:
    char pad[0x48];
    void *vt;
    char pad2[0x140 - 0x4C];
    Cb *a;
    Cb *b;
};
extern "C" {
extern char D_0044EBB0[], D_0044ED78[];
extern s32 D_00483AC4;
extern void func_00141658(void *, s32);
extern s32 func_001447D8(void *);
extern void func_00164050(void *, s32);

s32 func_00221870(Obj *o, s32 f) {
    o->vt = D_0044EBB0;
    if (D_00483AC4 == 0) {
        if (o->a) o->a->Fn(3);
        if (o->b) o->b->Fn(3);
    }
    o->vt = D_0044ED78;
    func_00164050((char *)o + 0x98, 2);
    func_00141658(o, 0);
    if (f & 1) return func_001447D8(o);
}
}
