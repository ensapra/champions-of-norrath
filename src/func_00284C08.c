extern s32 D_00446078[];
void iSignalSema_2(s32);
void func_002E0DE0(void) { iSignalSema_2(D_00446078[0]); }

s32 func_00165DC0(void *, void *);
s32 func_0024D308(s32, void *, f32);
void func_0024D708(s32, f32);
s32 func_0024C5F8(s32);
extern u8 D_00476D50[];
extern u8 D_00476D60[];
extern u8 D_00476D78[];
s64 func_00284C08(u8 *arg0) {
    *(s32 *)(arg0 + 0x938) = func_0024D308(func_00165DC0(D_00476D50, D_00476D60), arg0, 1.0f);
    *(s32 *)(arg0 + 0x93C) = func_0024D308(func_00165DC0(D_00476D50, D_00476D78), arg0, 1.0f);
    func_0024D708(*(s32 *)(arg0 + 0x93C), 0.0f);
    func_0024C5F8(*(s32 *)(arg0 + 0x938));
    return func_0024C5F8(*(s32 *)(arg0 + 0x93C));
}

typedef struct { f32 x, y, z; } Vec;
extern u8 D_00450250[];
s32 func_002702D8(void *, Vec *, s32, s32, s32);
s32 func_00270F28(void *, s32);
void func_00284B88(u8 *o, Vec *pos, s16 a2, s32 a3)
{
    Vec p = *pos;
    Vec q = p;
    func_002702D8(o, &q, a2, a3, 0);
    *(void **)(o + 0x48) = D_00450250;
    func_00270F28(o, 0);
}

extern s32 D_00484F50;
extern s32 D_00486D98;
extern Vec D_0037EE80;
extern Vec D_008D5FC0;
extern Vec D_008D5FD0;
void func_0026FC68(Vec *, s32, Vec);
void func_00284838(void)
{
    Vec out;
    Vec off;
    Vec r;
    D_008D5FC0 = D_0037EE80;
    D_00486D98 = 0;
    func_0026FC68(&out, D_00484F50, D_008D5FC0);
    off.x = 0.0f;
    off.y = 0.0f;
    off.z = 90.0f;
    r.x = out.x + off.x;
    r.y = out.y;
    r.z = out.z + off.z;
    D_008D5FD0 = r;
}
