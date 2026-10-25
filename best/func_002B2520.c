typedef struct { s16 v, p[3]; } SE;
typedef struct { s16 pre[8]; s16 a[4]; s16 b[4]; s8 c[2]; s8 pad[2]; SE d[4]; } SP;
class Child {
public:
    char pad[0x48];
    virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
    virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10();
    virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual s32 Check();
};
class Obj {
public:
    char pad[0x60];
    virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
    virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10();
    virtual s32 Get(s32 f, s32 n);
};
struct Ch { char p0[0xC]; Child *child; };
struct E { char p0[0x54]; Ch *c54; char p1[4]; s16 s5c; char p2[0xA]; Obj *o68; char p3[0xC]; s32 st; };
struct B { char p0[0xC]; u32 flags; char p1[0x7C]; s16 c8c, c8e, c90, c92, c94, c96, c98, c9a; s64 fa0; char pa8[4]; s8 fac; };
extern "C" {
s32 func_00153FA8(void *);
void func_001CE218(void *, void *, s32, s32, s32, s32, void *, s32, f32, f32);
extern f32 D_00482D24;
void func_002B2520(E *e, B *b) {
    SP sp;
    s32 st = e->st;
    s32 n, i, k, off;
    f32 a, v, kk, rr;
    u8 *base, *base8;
    if (st != 0) return;
    if (e->c54 && !e->c54->child->Check()) return;
    if (b->flags & 0x40) {
        if (func_00153FA8(e) < st) return;
    } else if ((b->flags & 0x20) && (b->fa0 & 0x200)) {
        return;
    }
    n = e->o68->Get(b->fac == 0x10 ? 1 : 0, e->s5c);
    for (i = 3; i >= 0; i--) sp.d[i].v = -1;
    base = (u8 *)&sp;
    base8 = base + 8;
    ((s8 *)base)[0x21] = -1;
    ((s8 *)base)[0x20] = -1;
    for (k = 3, off = 0x10; k >= 0; k--, off += 2) { *(s16 *)(base + off) = 0; *(s16 *)(base8 + off) = 0; }
    a = (f32)n;
    kk = D_00482D24;
    rr = 0.0000152587890625f;
    if (a + a * ((f32)func_00153FA8(e) * rr) * kk + 0.5f >= 0.0f)
        i = (s32)(a + a * ((f32)func_00153FA8(e) * rr) * kk + 1.0f);
    else
        i = (s32)(a + a * ((f32)func_00153FA8(e) * rr) * kk + 0.5f - 0.5f);
    func_001CE218(b, e->c54 ? e->c54->child : 0, 100000, 0, 0, 0x80000, &sp, 0, a, (f32)i);
    b->c8c = 0xFF; b->c8e = 0xC8; b->c90 = 0x87; b->c92 = 0x40;
    b->c94 = 0xFF; b->c96 = 0xC8; b->c98 = 0x87; b->c9a = 0x40;
    e->st = 1;
}
}
