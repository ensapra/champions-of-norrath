struct Vec3 {
    f32 x, y, z;
};

struct Ent {
    char pad0[0x10];
    Vec3 pos;
};

struct Handle {
    char pad0[0xC];
    Ent *ent;
};

struct HRef {
    Handle *p;
    HRef() { p = 0; }
};

class Base {
public:
    char pad[0x48];
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual s32 Check(Ent *e);
};

class Obj : public Base {
public:
    char pad2[0x8C - 0x4C];
    s16 c0[4];
    s16 c1[4];
};

extern "C" {
void *func_001441B8(s32);
void func_001535D0(Vec3 *, s32, HRef *, s32, f32, f32);
s32 func_00165DC0(char *, char *);
void func_001910C0(s32, s32, s32, s32);
void func_00194300(HRef *);
void func_0024D308(s32, Obj *, f32);
void func_002B94D0(void *, Vec3 *, s32, Obj *, s32);
extern char D_00479668[];
extern char D_004864D8[];
}

extern "C" s32 func_002B9BE0(s32 arg0, s32 arg1, Obj *obj, Vec3 *pos, s16 arg4) {
    Vec3 v = *pos;
    HRef h;
    obj->c1[0] = 0x56;
    obj->c1[1] = 0x80;
    obj->c1[2] = 0xFA;
    obj->c1[3] = 0x6E;
    obj->c0[0] = 0x56;
    obj->c0[1] = 0x80;
    obj->c0[2] = 0xFA;
    obj->c0[3] = 0x6E;
    func_001910C0(0x80, 0x80, 0x80, 0);
    func_001535D0(&v, arg4, &h, 0, 360.0f, 90.0f);
    func_0024D308(func_00165DC0(D_004864D8, D_00479668), obj, 1.0f);
    if (h.p != 0 && obj != 0) {
        if (obj->Check(h.p->ent)) {
            Vec3 p = h.p->ent->pos;
            void *n = func_001441B8(0x54);
            if (n != 0) {
                func_002B94D0(n, &p, arg1, obj, arg0);
            }
        }
    }
    func_00194300(&h);
    return 0;
}
