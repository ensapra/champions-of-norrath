/* identical to func_00179A00 (matched), with its names changed by decompdecomp */
s32 iSignalSema(s32);
extern s32 D_001D0488;

s32 func_0017A088(void)
{
    return iSignalSema(D_001D0488);
}

typedef struct {
    s32 class;
    u32 sign;
    s32 normal_exp;
    u64 fraction;
} fp_number_type;

void func_00171698(double *, fp_number_type *);
double func_002FF538(fp_number_type *);

u32 func_00179CF0(double arg_a)
{
    fp_number_type a;
    double au;

    au = arg_a;
    func_00171698(&au, &a);
    if (a.class == 2)
        return 0;
    if (a.class == 0 || a.class == 1)
        return 0;
    if (a.sign)
        return 0;
    if (a.class == 4)
        return 0xFFFFFFFF;
    if (a.normal_exp < 0)
        return 0;
    if (a.normal_exp > 31)
        return 0xFFFFFFFF;
    else if (a.normal_exp > 60)
        return a.fraction << (a.normal_exp - 60);
    else
        return a.fraction >> (60 - a.normal_exp);
}

typedef struct {
    s32 n1;
    s32 n2;
    u8 *d1;
    u8 *d2;
    u8 b1[0x40];
    u8 b2[0x40];
} XferBuf;

s32 func_0017A520(XferBuf *r)
{
    s32 i;
    u8 *d;

    r = (XferBuf *)((u32)r | 0x20000000);
    if (r->n1) {
        d = r->d1;
        for (i = 0; i < r->n1; i++)
            *d++ = r->b1[i];
    }
    if (r->n2) {
        d = r->d2;
        for (i = 0; i < r->n2; i++)
            *d++ = r->b2[i];
    }
    return iSignalSema(D_001D0488);
}

double func_002FBA98(s32 arg_a)
{
    fp_number_type in;

    in.class = 3;
    in.sign = arg_a < 0;
    if (!arg_a) {
        in.class = 2;
    } else {
        in.normal_exp = 60;
        if (in.sign) {
            if (arg_a == (s32)0x80000000)
                return (double)(s32)0x80000000;
            in.fraction = -arg_a;
        } else {
            in.fraction = arg_a;
        }
        while (in.fraction < (1ULL << 60)) {
            in.fraction <<= 1;
            in.normal_exp -= 1;
        }
    }
    return func_002FF538(&in);
}
