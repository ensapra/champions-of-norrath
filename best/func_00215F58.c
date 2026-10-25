struct Vec3 { f32 x, y, z; Vec3() {} };
extern "C" {
extern char D_00448FB0[];
extern char D_004853D0[];
extern char D_004853D8[];
f32 D_0048159C;
f32 D_004815A0;
f32 D_004815A4;
f32 D_004815A8;
f32 D_00484CAC;
s32 func_00104440(void *, s32, s32, s32, s32);
void func_00105F60(char *, void *, s32, s32);
f32 func_001410A0(void *, char *, s32);
void func_001411F0(void *, Vec3, s32);
s32 func_00143A80(void *, char *, s32);
s32 func_00153FA8(void *);
f32 func_001D1008(s32);

struct E { s16 a, b, c, d; };
struct Obj {
    char p0[0xC]; s32 flags;
    char p1[0x18]; s8 b28;
    char p2[0xF]; s16 h38;
    char p3[0xE]; char *vt;
    char p4[0x28]; E e[4];
};

void func_00215F58(Obj *o, Vec3 v, s32 h) {
    char *p = (char *)o + 0x50;
    func_001411F0(o, v, 0);
    o->vt = D_00448FB0;
    s16 m = -1;
    for (s32 i = 3; i >= 0; i--)
        o->e[i].a = m;
    p[0x20] = -1;
    p[0x21] = -1;
    char *q = p + 8;
    s32 j = 0x10;
    for (s32 k = 3; k >= 0; k--) {
        *(s16 *)(p + j) = 0;
        *(s16 *)(q + j) = 0;
        j += 2;
    }
    o->h38 = h;
    o->b28 = 0x28;
    o->flags |= 0x100001;
    f32 f = func_001D1008(0x28);
    f *= (f32)func_00153FA8(o) * 0.0000152587890625f * D_0048159C + D_004815A4;
    f *= (D_00484CAC * D_004815A0 + D_004815A8) * 200.0f;
    if (func_00143A80(o, D_004853D0, 0))
        f *= func_001410A0(o, D_004853D0, 0);
    if (func_00104440(p, (s32)f, 0, -1, 1) == 0) {
        func_00105F60(D_004853D8, p, -1, 0);
        *(s16 *)((char *)o + 0x54) = 0x28;
    }
}
}
