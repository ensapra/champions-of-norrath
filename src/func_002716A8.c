struct Vec3 {
    f32 x, y, z;
    Vec3() {}
    Vec3(f32 a, f32 b, f32 c) { x = a; y = b; z = c; }
};

struct Thing {
    char pad0[0x10];
    Vec3 pos;           /* 0x10 */
    char pad1C[0x514];
    s32 f530;           /* 0x530 */
};

class Base {
public:
    char pad0[0x48];
    virtual void v01(); virtual void v02(); virtual void v03(); virtual void v04();
    virtual void v05(); virtual void v06(); virtual void v07(); virtual void v08();
    virtual void v09(); virtual void v10(); virtual void v11(); virtual void v12();
    virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16();
    virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20();
    virtual void v21();
};

class Obj : public Base {
public:
    char pad4C[0x328 - 0x4C];
    f32 f328;           /* 0x328 */
    char pad32C[0x3BC - 0x32C];
    s32 sel;            /* 0x3BC */
    s32 ids[4];         /* 0x3C0 */
    s32 count;          /* 0x3D0 */
    s32 num;            /* 0x3D4 */
    s32 slots[12];      /* 0x3D8 */
    s32 f408;           /* 0x408 */
    char pad40C[0x45C - 0x40C];
    Vec3 vel;           /* 0x45C */
};

extern "C" {
extern char D_00408600[];
void func_001ABA50(Thing *);
Vec3 func_0013F2D0(Vec3, s32, s32, s32);

void func_002716A8(Obj *o, s32 id)
{
    s32 i;
    s32 found = 0;

    for (i = 0; i < o->count; i++) {
        if (o->ids[i] == id) {
            Thing **pp;
            o->ids[i] = -1;
            pp = (Thing **)((id * 0x5DB0 + 0x5570) + (u32)D_00408600);
            found = 1;
            o->num--;
            o->slots[i] = -1;
            func_001ABA50(*pp);
            Thing *th = *pp;
            s32 sel = o->sel;
            th->f530 = 0;
            if (id == sel) {
                Vec3 *q = &th->pos;
                Vec3 t(o->vel.x * 20.0f, o->vel.y * 20.0f, o->vel.z * 20.0f);
                t.x += q->x;
                t.y += q->y;
                t.z += q->z;
                (*pp)->pos = func_0013F2D0(t, 0x30, 0x30, 0);
                o->f408 = 0;
            }
            break;
        }
    }
    if (found) {
        if (id == o->sel) {
            o->v21();
            o->sel = -1;
        }
        o->f328 = 30.0f;
    }
}
}
