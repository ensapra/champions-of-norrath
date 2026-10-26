typedef struct { f32 x, y, z; } V3;
void func_0010A428(void *, s32);
s32 func_00153FA8(void *);
f32 func_0015A070(s32);
f32 func_0015A100(s32);
void func_00180DA0(void *, V3 *, V3 *, f32);
extern char D_0042C670[];
extern char D_0042C6C0[];
typedef struct { char pad[0x10]; V3 pos; char pad1c[0x1C]; s16 ang; } Obj;

void func_00216380(Obj *p) {
    s32 i;
    V3 *pos = &p->pos;
    func_0010A428(p, 0x258);
    for (i = 0; i < 1; i++) {
        V3 a, b;
        f32 r = (f32)func_00153FA8(p) * 0.0000152587890625f + -0.5f;
        a.x = 2.0f * (func_0015A070(p->ang) * r * 27.0f);
        a.y = 2.0f * (func_0015A100(p->ang) * r * 27.0f);
        a.z = 2.0f * (((f32)func_00153FA8(p) * 0.0000152587890625f + -0.5f) * 65.0f) + 65.0f;
        a.x += pos->x;
        a.y += pos->y;
        a.z += pos->z;
        b.x = 0.0f; b.y = 0.0f; b.z = 0.0f;
        func_00180DA0(D_0042C670, &a, &b, 0.0f);
    }
    pos = &p->pos;
    for (i = 0; i < 1; i++) {
        V3 c, d;
        f32 r = (f32)func_00153FA8(p) * 0.0000152587890625f + -0.5f;
        c.x = 2.0f * (func_0015A070(p->ang) * r * 27.0f);
        c.y = 2.0f * (func_0015A100(p->ang) * r * 27.0f);
        c.z = 2.0f * (((f32)func_00153FA8(p) * 0.0000152587890625f + -0.5f) * 65.0f) + 65.0f;
        c.x += pos->x;
        c.y += pos->y;
        c.z += pos->z;
        d.x = 0.0f; d.y = 0.0f; d.z = 0.0f;
        func_00180DA0(D_0042C6C0, &c, &d, 0.0f);
    }
}
