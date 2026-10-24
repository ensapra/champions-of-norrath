typedef struct {
    s32 count;
    void (*fn[0x400])(void);
} FnTable;

extern FnTable D_001CD208;

void func_00171920(void)
{
    s32 i = 0;

    if (D_001CD208.count > 0) {
        FnTable *t = &D_001CD208;
        void (**p)(void) = t->fn;
        do {
            (*p++)();
            i++;
        } while (i < t->count);
    }
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
        } else if (src->normal_exp <= 128) {
            exp = src->normal_exp + 127;
            if (src->normal_exp == 128 && fraction < 0) {
                exp = 255;
                fraction = 0;
            } else {
                fraction = (u32)fraction >> 7;
            }
        } else {
            exp = 255;
            fraction = 0;
        }
    }
    dst.bits.fraction = fraction;
    dst.bits.exp = exp;
    dst.bits.sign = sign;
    return dst.value;
}

s32 func_00171860(void (*f)(void))
{
    s32 ret;
    FnTable *t = &D_001CD208;
    s32 count = t->count;

    ret = -1;
    if (count < 0x400) {
        s32 next = count + 1;
        t->fn[count] = f;
        t->count = next;
        ret = 0x400 - next;
    }
    return ret;
}
