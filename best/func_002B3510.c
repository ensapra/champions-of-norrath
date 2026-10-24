#define H(o) (*(volatile s16 *)((u8 *)p + (o)))
#define F(o) (*(volatile f32 *)((u8 *)p + (o)))
extern f32 D_00482D70, D_00482D74, D_00482D78, D_00482D7C, D_00482D80, D_00482D84, D_00482D88;
extern f32 D_00482D54, D_00482D58, D_00482D5C, D_00482D60, D_00482D64, D_00482D68, D_00482D6C;

void func_002B3510(void *p) {
    f32 a = D_00482D70, b = D_00482D74, c = D_00482D78, d = D_00482D7C, e = D_00482D80;
    f32 two = 2.0f, g = D_00482D84, h = D_00482D88, one = 1.0f;
    H(0x18) = 0x14;
    F(0x58) = one;
    F(0x24) = a;
    F(0x28) = b;
    F(0x2C) = c;
    F(0x30) = d;
    H(0x20) = 0x28;
    F(0x34) = e;
    F(0x4C) = two;
    H(0x44) = 2;
    F(0x50) = g;
    H(0x46) = 3;
    F(0x54) = h;
    H(0x3E) = 1;
    H(0x48) = 0x1F;
    H(0xE) = 1;
    H(0x10) = 1;
    H(0x1A) = 2;
    H(0x12) = 1;
    H(0x1C) = 2;
    H(0x14) = 1;
    H(0x1E) = 0x1F;
    H(0x16) = 1;
    H(0x38) = 1;
    H(0x42) = 2;
    H(0x3A) = 1;
    H(0x3C) = 1;
}

void func_002B31A0(void *p) {
    f32 one = 1.0f;
    f32 a = D_00482D54, b = D_00482D58, c = D_00482D5C, d = D_00482D60, e = D_00482D64, g = D_00482D68, h = D_00482D6C;
    F(0x58) = one;
    H(0x18) = 0xA2;
    F(0x24) = a;
    H(0x1A) = 0x2D;
    F(0x28) = b;
    F(0x2C) = c;
    F(0x30) = d;
    H(0x20) = 0x51;
    F(0x34) = e;
    H(0x42) = 3;
    F(0x4C) = g;
    H(0x44) = 5;
    H(0x3C) = 0xA;
    H(0x46) = 2;
    F(0x54) = h;
    H(0x3E) = 1;
    H(0x48) = 0xF3;
    H(0xE) = 1;
    H(0x10) = 5;
    H(0x12) = 5;
    H(0x1C) = 2;
    H(0x14) = 1;
    H(0x1E) = 0xF3;
    H(0x16) = 1;
    H(0x38) = 1;
    H(0x3A) = 5;
    F(0x50) = one;
}

extern s32 func_002D67B8();
extern s32 func_002D6AA0(const char *, void *);
extern void *D_00444960[];
void func_002D70D0(const char *fmt, ...) {
    char *ap;
    void *old = D_00444960[0];
    D_00444960[0] = (void *)func_002D67B8;
    ap = (char *)__builtin_next_arg(fmt) - (8 - __builtin_args_info(0)) * 8;
    func_002D6AA0(fmt, ap);
    D_00444960[0] = old;
}
