/* identical to func_001714D8 (matched), with its names changed by decompdecomp */
typedef struct {
    s32 class;
    s32 sign;
    s32 normal_exp;
    s32 pad;
    u64 fraction;
} fp_number_type;

typedef union {
    f64 value;
    u64 l;
} FLO_union_type;

void func_002FF610(FLO_union_type *, fp_number_type *);
f32 func_002FF508(s32, s32, s32, u32);

f32 func_002FBC20(f64 arg_a)
{
    fp_number_type in;
    FLO_union_type au;
    u32 sffraction;

    au.value = arg_a;
    func_002FF610(&au, &in);
    sffraction = in.fraction >> 30;
    if ((in.fraction & 0x3FFFFFFF) != 0) {
        sffraction |= 1;
    }
    return func_002FF508(in.class, in.sign, in.normal_exp, sffraction);
}

typedef struct {
    s32 count;
    void (*fn[0x400])(void);
} FnTable;

extern FnTable D_001CD208;

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

void func_00171920(void);
s32 func_0018E538(s32, s32);
void func_00171990(void);
extern u8 func_001CCF08[];
extern u8 func_001CD1E0[];

void func_00171AB0(void)
{
    func_00171920();
    func_0018E538(0, 0);
    *(s32 *)(func_001CCF08 + 0x280) = 0;
    func_00171990();
}

void func_00178FD8(void);
void func_00178E88(s32);
void func_00178420(void *, s32);
void func_00171840(void);

void func_00171C40(s32 arg0, s32 arg1)
{
    *(s32 *)(func_001CCF08 + 0x270) = arg1;
    *(s32 *)(func_001CD1E0 + 0x20) = arg0;
    func_00178FD8();
    func_00178E88(*(s32 *)(func_001CCF08 + 0x274));
    func_00178420(func_001CCF08 + 0x138, 6);
    func_00171840();
}
