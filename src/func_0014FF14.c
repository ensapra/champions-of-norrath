void func_001504B8(void *);
void func_00152930(void *);
s32 D_0047FC30;
s32 D_0047FC34;

typedef struct Obj Obj;
typedef struct ObjVt {
    u8 pad[0x12C];
    void (*f12C)(Obj *);
    void (*f130)(Obj *, s32);
} ObjVt;
struct Obj {
    u8 pad0[0x4C];
    ObjVt *vt;
    u8 pad50[0x810 - 0x50];
    s32 x810, x814, x818, x81C, x820, x824;
    u8 pad828[0x840 - 0x828];
    u8 x840[0x14];
    s32 x854, x858;
    u8 pad85C[8];
    s32 x864;
};

void func_0014FF14(Obj *a)
{
    void *p;
    s32 t30, t34;
    func_001504B8(a);
    func_00152930(a->x840);
    a->x854 = 0;
    a->x858 = 1;
    t30 = D_0047FC30;
    t34 = D_0047FC34;
    a->x824 = t34 << 4;
    a->x820 = t30 << 4;
    a->x810 = 0;
    a->x814 = 0;
    a->x818 = 0;
    a->x81C = 0;
    a->x864 = 0;
    p = a->vt->f130;
    ((void (*)(Obj *, s32))p)(a, 1);
    p = a->vt;
    p = ((ObjVt *)p)->f12C;
    ((void (*)(Obj *))p)(a);
}
