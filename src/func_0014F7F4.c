f64 func_00179A00(s32);f64 func_00171040(f64,f64);f64 func_001798F0(f64,f64);
u64 func_00179D90(s64 a){f64 hi,lo;s32 low;hi=func_00171040(func_00171040(func_00179A00(a>>32),65536.0),65536.0);low=(s32)(a&0xffffffffULL);lo=func_00179A00(low);if(low<0)lo=func_001798F0(lo,4294967296.0);{union {f64 d;u64 i;} u;u.d=func_001798F0(hi,lo);return u.i;}}

typedef struct { s32 v[4]; } Vec4i;

void func_0014F830(u8 *a, Vec4i *b) {
    Vec4i *d = (Vec4i *)(a + 0x9C0);
    d->v[0] += b->v[0];
    d->v[1] += b->v[1];
    d->v[2] += b->v[2];
    d->v[3] = b->v[3];
}

typedef struct { s32 type; s32 a; s32 b; } Msg;
void func_001517DC(s32, void *, Msg *);

void func_0014F7F4(u8 *obj, s32 v) {
    Msg m;
    s32 h = *(s32 *)(obj + 0x9AC);
    if (h != 0) {
        m.type = 5;
        m.a = v;
        func_001517DC(h, obj, &m);
    }
}

void func_0014F86C(void *);
void func_0014F920(void *);
extern u8 func_001C7900[];

void func_0014F77C(u8 *obj) {
    Msg m;
    s32 h;
    func_0014F86C(obj);
    func_0014F920(obj);
    (*(void (**)(void *))func_001C7900)(obj);
    h = *(s32 *)(obj + 0x9B0);
    if (h != 0) {
        s32 base = *(s32 *)(obj + 0x5D4);
        m.type = 4;
        m.a = base + *(s32 *)(obj + 0x998);
        m.b = base + *(s32 *)(obj + 0x99C);
        func_001517DC(h, obj, &m);
    }
}
