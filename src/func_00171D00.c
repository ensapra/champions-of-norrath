typedef struct {
    s32 count;
    void (*fn[1])(void);
} FnTab00171920;
extern FnTab00171920 D_001CD208;

void func_00171920(void)
{
    s32 i;
    for (i = 0; i < D_001CD208.count; i++) {
        D_001CD208.fn[i]();
    }
}

extern s32 D_001CD180[];
extern s32 D_001CD184[];
extern s32 D_010E4590[];
s32 func_001787F8(s32, s32);

void func_00171C88(void)
{
    s32 i;
    for (i = 0; i < D_001CD180[0]; i++) {
        D_001CD184[0] = func_001787F8(D_010E4590[i], 2);
    }
}

extern u8 *D_010E4610[];
void func_00192560(void *, s32);

void func_00171D00(s32 i, s32 a, s32 b, s32 c)
{
    func_00192560(D_010E4610[i], a);
    func_00192560(D_010E4610[i] + 0x40, b);
    func_00192560(D_010E4610[i] + 0x80, c);
}

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

void func_00171698(FLO_union_type *, fp_number_type *);

s32 func_00171408(double arg_a)
{
    fp_number_type a;
    FLO_union_type au;
    s32 tmp;

    au.value = arg_a;
    func_00171698(&au, &a);
    if (a.class == CLASS_ZERO)
        return 0;
    if (a.class < CLASS_ZERO)
        return 0;
    if (a.class == CLASS_INFINITY)
        return a.sign ? (-0x7FFFFFFF) - 1 : 0x7FFFFFFF;
    if (a.normal_exp < 0)
        return 0;
    if (a.normal_exp > 30)
        return a.sign ? (-0x7FFFFFFF) - 1 : 0x7FFFFFFF;
    tmp = a.fraction.ll >> (60 - a.normal_exp);
    return a.sign ? -tmp : tmp;
}
