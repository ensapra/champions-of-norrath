struct Vec3 {
    f32 x, y, z;
};

class Stats {
public:
    char pad[0x60];
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
    virtual s32 Get(s32 i, ...);
};

struct Sub {
    char pad0[0xC];
    s32 fC;
};

struct Obj {
    char pad0[0x10];
    Vec3 pos;
    char pad1[0x4C - 0x1C];
    Sub *f4C;
    char pad2[0x60 - 0x50];
    s32 f60;
    s32 f64;
    s32 f68;
    char pad3[0xAC - 0x6C];
    Stats *fAC;
};

extern "C" {
void func_001437E8(Obj *);
void *func_001441B8(s32);
f32 func_0015A070(s32);
f32 func_0015A100(s32);
s32 func_00165DC0(char *, char *);
void func_00180DA0(void *, Vec3 *, Vec3 *, f32);
void func_001E6708(void *, Vec3 *, s32, s32, s32, s32, s32);
void func_0024D308(s32, Obj *, f32);
extern char D_00478340[];
extern char D_00486280[];
extern u8 D_008D6FF0[];
}

extern "C" void func_002A0888(Obj *o) {
    Vec3 v;
    Vec3 unused;
    s32 i;
    if (o->f60 != 0) return;
    *(s32 *)&v.z = 0;
    for (i = 0; i <= 0xFFFF; i += 0x135) {
        v.x = func_0015A070(i) * 9.0f;
        v.y = func_0015A100(i) * 9.0f;
        func_00180DA0(D_008D6FF0, &o->pos, &v, 0.0f);
    }
    if (o->f4C != 0) {
        void *n = func_001441B8(0x70);
        if (n != 0) {
            s32 a = o->fAC->Get(2, o->f68) * 12;
            s32 b = o->fAC->Get(3, o->f68) * 60;
            Vec3 p = o->pos;
            func_001E6708(n, &p, b, a, 0, o->f4C->fC, 5);
        }
    }
    func_0024D308(func_00165DC0(D_00486280, D_00478340), o, 1.0f);
    func_001437E8(o);
    o->f60 = 1;
}
