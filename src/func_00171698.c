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
    s32 exp = (u32)(bits >> 52) & 0x7FF;

    dst->sign = bits >> 63;
    if (exp == 0) {
        dst->class = 2;
    } else if (exp == 0x7FF) {
        dst->normal_exp = 0x3FF;
        if (fraction == 0) {
            dst->class = 4;
            dst->fraction = 1ULL << 60;
        } else {
            if (fraction & (1ULL << 51))
                dst->class = 1;
            else
                dst->class = 0;
            dst->fraction = fraction;
        }
    } else {
        dst->fraction = (fraction << 8) | (1ULL << 60);
        dst->class = 3;
        dst->normal_exp = exp - 1023;
    }
}
