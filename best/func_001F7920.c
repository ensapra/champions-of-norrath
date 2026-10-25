struct Vec3 { f32 x, y, z; Vec3() {} };

extern "C" {
extern f32 D_00480EDC;
extern f32 D_00480EE0;
extern f32 D_00480EE4;
extern f32 D_00480EE8;
}

struct Anims {
    char pad0[0x1C];
    s32 idle;
    char pad20[0x3C - 0x20];
    s32 hit;
    char pad40[0x44 - 0x40];
    s32 back;
};

class Actor {
public:
    char pad0[0x24];
    Anims *anims;
    char pad28[0x48 - 0x28];
    virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8();
    virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12();
    virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16();
    virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20();
    virtual void v21(); virtual void v22();
    virtual void Notify(s32 a);
    virtual void Reset();
};

struct Link {
    char pad0[0xC];
    Actor *owner;
};

extern "C" {
void func_00160128(void *, s32, s32, f32);
}

struct Obj : public Actor {
    char pad4C[0x100 - 0x4C];
    s32 timer;
    char pad104[0x110 - 0x104];
    Vec3 pos;
    char pad11C[0x120 - 0x11C];
    char anim[0x23C - 0x120];
    s16 state;
    char pad23E[0x328 - 0x23E];
    s32 base;
    char pad32C[0x3C0 - 0x32C];
    Link *link;
};

extern "C" {
u32 func_00153FA8(Obj *);
void func_001602D8(void *, s32, f32);
void func_001639E8(void *);
void func_00113460(Obj *);
Vec3 func_0010D250(Obj *, s32);

void func_001F7920(Obj *o, u32 state)
{
    u32 r;
    s32 id;
    switch (state) {
    case 0:
        r = func_00153FA8(o) % 120U;
        id = o->anims->idle;
        o->timer = o->base + r;
        func_00160128(o->anim, id, 3, D_00480EDC);
        break;
    case 1: {
        void *a;
        func_00113460(o);
        a = o->anim;
        o->pos = func_0010D250(o, 200);
        r = func_00153FA8(o) % 120U;
        id = o->anims->hit;
        o->timer = o->base + r + 300;
        func_00160128(a, id, 0x803, D_00480EE0);
        func_001639E8(a);
        if (o->link != 0) {
            o->link->owner->Notify(0);
        }
        break;
    }
    case 5:
        func_00160128(o->anim, o->anims->idle, 6, D_00480EE4);
        break;
    case 8:
        state = o->state;
        break;
    case 10:
        o->Reset();
        func_00160128(o->anim, o->anims->idle, 6, D_00480EE8);
        break;
    }
    if (state != 1 && state != 3) {
        func_001602D8(o->anim, o->anims->back, 0.5f);
    }
    o->state = state;
}
}
