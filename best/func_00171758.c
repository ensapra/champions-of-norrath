typedef struct {
    s32 count;
    void (*fn[0x400])(void);
} FnTable;

extern FnTable D_001CD208;

s32 func_00171860(void (*f)(void))
{
    FnTable *t = &D_001CD208;
    s32 n = t->count;

    if (n < 0x400) {
        t->fn[n] = f;
        t->count = n + 1;
        return 0x400 - (n + 1);
    }
    return -1;
}

void func_00171920(void)
{
    FnTable *t = &D_001CD208;
    s32 i;

    for (i = 0; i < t->count; i++)
        t->fn[i]();
}

typedef struct {
    s32 class;
    u32 sign;
    s32 normal_exp;
    s32 fraction;
} fp_number_type_f;

typedef union {
    f32 value;
    struct {
        u32 fraction : 23;
        u32 exp : 8;
        u32 sign : 1;
    } bits;
} FLO_union_f;

static inline s32 fpf_iszero(fp_number_type_f *x) { return x->class == 2; }

f32 func_00171758(fp_number_type_f *src)
{
    FLO_union_f dst;
    s32 fraction = src->fraction;
    s32 sign = src->sign;
    s32 exp = 0;

    if (fpf_iszero(src)) {
        fraction = 0;
    } else if (fraction != 0) {
        if (src->normal_exp < -126) {
            fraction = 0;
        } else if (src->normal_exp > 128) {
            exp = 255;
            fraction = 0;
        } else {
            exp = src->normal_exp + 127;
            if (src->normal_exp == 128 && fraction < 0) {
                exp = 255;
                fraction = 0;
            } else {
                fraction = (u32)fraction >> 7;
            }
        }
    }
    dst.bits.fraction = fraction;
    dst.bits.exp = exp;
    dst.bits.sign = sign;
    return dst.value;
}

typedef struct {
    s32 class;
    u32 sign;
    s32 normal_exp;
    u64 fraction;
} fp_number_type;

void func_00171698(u64 *src, fp_number_type *dst)
{
    u64 bits = *src;
    u64 fraction = bits & (~0ULL >> 12);
    s32 exp = (bits >> 52) & 0x7FF;

    dst->sign = bits >> 63;
    if (exp == 0) {
        dst->class = 2;
    } else if (exp == 0x7FF) {
        dst->normal_exp = exp - 1023;
        if (fraction == 0) {
            dst->fraction = 1ULL << 61;
            dst->class = 4;
        } else {
            if (fraction & (1ULL << 51))
                dst->class = 1;
            else
                dst->class = 0;
            dst->fraction = fraction;
        }
    } else {
        dst->fraction = (fraction << 8) | (1ULL << 61);
        dst->normal_exp = exp - 1023;
        dst->class = 3;
    }
}
