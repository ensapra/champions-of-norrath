struct Vec3 { f32 x, y, z; };

class Obj0017D8B0 {
public:
    char pad[0x48];
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void Full(s32);
};

struct Ent0017D8B0 {
    s32 id;
    Vec3 a;
    Vec3 b;
    f32 r;
    s32 c;
    s32 d;
    s32 h;
    s32 e;
};

extern "C" {
extern s32 D_00484194;
extern s32 D_00484198;
extern Ent0017D8B0 D_006EA1A0[128];
void func_00194390(void *, void *, void *);
void func_0017D8B0(s32 id, Vec3 a, Vec3 b, Obj0017D8B0 *obj, s32 c, s32 d, f32 r);
}

void func_0017D8B0(s32 id, Vec3 a, Vec3 b, Obj0017D8B0 *obj, s32 c, s32 d, f32 r) {
    if (((D_00484194 + 1) & 0x7F) == D_00484198) {
        obj->Full(0);
        return;
    }
    D_006EA1A0[D_00484194].id = id;
    D_006EA1A0[D_00484194].a = a;
    D_006EA1A0[D_00484194].b = b;
    D_006EA1A0[D_00484194].r = r;
    func_00194390(&D_006EA1A0[D_00484194].h, obj, obj);
    D_006EA1A0[D_00484194].c = c;
    D_006EA1A0[D_00484194].d = d;
    D_006EA1A0[D_00484194].e = 2;
    D_00484194 = (D_00484194 + 1) & 0x7F;
}
