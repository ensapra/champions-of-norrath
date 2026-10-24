typedef struct { f32 x, y, z; } Vec;
extern s32 D_00484F50;
extern s32 D_00486D98;
extern Vec D_0037EE80;
extern Vec D_008D5FC0;
extern Vec D_008D5FD0;
void func_0026FC68(Vec *, s32);
void func_00284838(void)
{
    Vec r;
    Vec out;
    Vec off;
    Vec *p = &out;
    Vec *dst = &D_008D5FD0;
    Vec *o;
    D_008D5FC0 = D_0037EE80;
    D_00486D98 = 0;
    func_0026FC68(p, D_00484F50);
    o = &off;
    o->y = o->x = 0.0f;
    o->z = 90.0f;
    r.x = p->x + o->x;
    r.y = p->y;
    r.z = p->z + o->z;
    *dst = r;
}
