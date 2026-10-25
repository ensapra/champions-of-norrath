extern "C" {
s32 func_00113738(void *);
s32 func_001CE218(void *, void *, s32, s32, s32, s32, s32, s32, f32, f32);
}
struct Ent { char pad[0xC]; s32 flags; };
class Obj {
public:
    char pad0[0x48];
    virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8();
    virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12();
    virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16();
    virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20();
    virtual void v21(); virtual void v22();
    virtual void Fn(s32);
};
struct Arg0 { char pad[0xC8]; s16 a; s16 b; char p2[0x14]; f32 f; char p3[0x158]; s16 st; };
extern "C" void func_00282038(Obj *o, Ent **list) {
    Arg0 *a = (Arg0 *)o;
    if (a->st == 0xF && a->f > 0.5f) {
        Ent **p;
        if (*(s32 *)list != 0) {
            p = list;
            do {
                Ent *e = *p;
                p++;
                if (e->flags & 0x40) {
                    func_001CE218(e, o, 0x186A0, 0, 0, 0x40041, 0, 0, (f32)a->a, (f32)a->b);
                }
            } while (*(s32 *)p != 0);
        }
        o->Fn(3);
        return;
    }
    func_00113738(o);
}
