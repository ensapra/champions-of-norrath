/* identical to func_00179CF0 (matched), with its names changed by decompdecomp */
typedef struct {
    s32 class;
    u32 sign;
    s32 normal_exp;
    u64 fraction;
} fp_number_type;

void func_002FF610(double *, fp_number_type *);

static inline s32 fp_iszero(fp_number_type *x) { return x->class == 2; }
static inline s32 fp_isnan(fp_number_type *x) { return x->class == 1 || x->class == 0; }
static inline s32 fp_isinf(fp_number_type *x) { return x->class == 4; }

u32 func_002FBC78(double arg_a)
{
    fp_number_type a;
    double au;

    au = arg_a;
    func_002FF610(&au, &a);
    if (fp_iszero(&a))
        return 0;
    if (fp_isnan(&a))
        return 0;
    if (a.sign)
        return 0;
    if (fp_isinf(&a))
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
