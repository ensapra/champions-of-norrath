/* identical to func_00171408 (matched), with its names changed by decompdecomp */
typedef enum {
    CLASS_SNAN,
    CLASS_QNAN,
    CLASS_ZERO,
    CLASS_NUMBER,
    CLASS_INFINITY
} fp_class_type;

typedef struct {
    fp_class_type class;
    u32 sign;
    s32 normal_exp;
    union {
        u64 ll;
    } fraction;
} fp_number_type;

typedef union {
    double value;
    u64 ll;
} FLO_union_type;

void func_002FF610(FLO_union_type *, fp_number_type *);

static __inline__ int isnan_(fp_number_type *x) { return x->class == CLASS_SNAN || x->class == CLASS_QNAN; }
static __inline__ int isinf_(fp_number_type *x) { return x->class == CLASS_INFINITY; }
static __inline__ int iszero_(fp_number_type *x) { return x->class == CLASS_ZERO; }

s32 func_002FBB50(double arg_a)
{
    fp_number_type a;
    FLO_union_type au;
    s32 tmp;

    au.value = arg_a;
    func_002FF610(&au, &a);
    if (iszero_(&a))
        return 0;
    if (isnan_(&a))
        return 0;
    if (isinf_(&a))
        return a.sign ? (-0x7FFFFFFF) - 1 : 0x7FFFFFFF;
    if (a.normal_exp < 0)
        return 0;
    if (a.normal_exp > 30)
        return a.sign ? (-0x7FFFFFFF) - 1 : 0x7FFFFFFF;
    tmp = a.fraction.ll >> (60 - a.normal_exp);
    return a.sign ? -tmp : tmp;
}

typedef struct {
    s32 count;
    void (*fn[1])(void);
} FnTab00171920;
extern FnTab00171920 D_001CD208[];

void func_00171920(void)
{
    s32 i;
    for (i = 0; i < D_001CD208[0].count; i++) {
        D_001CD208[0].fn[i]();
    }
}
