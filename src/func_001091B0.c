extern "C" {
s32 func_00143A80(void *, char *, s32);
void func_00163C58(void *);
void func_0016C820(s32, s32, s32 *, s32 *, s32 *, s32 *, s32 *, s32 *);
extern char D_004837E0[];
}
class A {
public:
char p0[0x20]; float f20; char p24[5]; s8 b29; char p2a[0x48-0x2a];
virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8();
virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
virtual s32 v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22();
virtual void v23(s32 a);
};
class B : public A {
public:
char q[0x50]; s64 flags;
};
extern "C" void func_001091B0(B *p) {
s32 a[6];
if (p->flags & 1) p->v18();
if (p->v16()) {
func_0016C820(p->v16(), -1, &a[0], &a[1], &a[2], &a[3], &a[4], &a[5]);
p->f20 = (f32)(a[5] - a[2]);
if (p->f20 < 60.0f) p->f20 = 60.0f;
p->b29 = (s32)p->f20 + 1;
}
if (func_00143A80(p, D_004837E0, 0)) {
p->flags |= (s64)0x8000 << 17;
p->v23(10);
func_00163C58((char *)p + 0x120);
}
}
