void *func_00143D10(s32);
void func_0015B440(void *);
void func_0015BCD0(void *, f32, f32, f32, f32, f32);
void *func_00165DC0(void *, void *);
extern f32 D_0047FDB0;
#define RF(p) (p++, ((f32 *)p)[-1])
#define RI(p) (p++, ((s32 *)p)[-1])
#define F(o) (*(f32 *)(self + o))
#define I(o) (*(void **)(self + o))

s32 func_00150100(char *self, s32 *p) {
    s32 *in = p;
    f32 t;
    F(0x100) = RF(p);
    I(0x10C) = func_00143D10(RI(p));
    I(0x110) = func_00143D10(RI(p));
    I(0x114) = func_00143D10(RI(p));
    I(0x104) = func_00165DC0(I(0x10C), I(0x110));
    I(0x108) = func_00165DC0(I(0x10C), I(0x114));
    t = F(0x100) + F(0x100);
    F(0x1C) = D_0047FDB0 * F(0x100);
    F(0x20) = t;
    func_0015BCD0(self + 0x50, 1.0f, 1.0f, t, t, t);
    F(0x60) = RF(p);
    F(0x64) = RF(p);
    F(0x68) = RF(p);
    F(0x6C) = RF(p);
    F(0x70) = RF(p);
    F(0x74) = RF(p);
    F(0x78) = RF(p);
    F(0x7C) = RF(p);
    F(0x80) = RF(p);
    F(0x84) = RF(p);
    F(0x88) = RF(p);
    F(0x8C) = RF(p);
    F(0x90) = RF(p);
    func_0015B440(self + 0x50);
    return (char *)p - (char *)in;
}
