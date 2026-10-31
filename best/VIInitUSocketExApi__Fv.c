/* machine draft (m2c) for ee-gcc-2.96 -Os -G8 -mno-check-zero-division, tried by autopilot */
#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif

s32 __wrap_malloc(M2C_UNK);                         /* extern */
M2C_UNK ll_add_tail__FP5llistP5lnode(M2C_UNK *, s32); /* extern */
M2C_UNK ll_init__FP5llist(M2C_UNK *);               /* extern */
extern s32 D_011E5C18;
extern M2C_UNK D_011E5C20;
extern M2C_UNK D_011E5C30;

void VIInitUSocketExApi__Fv(void) {
    s32 temp_5;
    s32 temp_5_2;
    s32 var_16;
    s32 var_17;

    var_16 = 0xF;
    var_17 = 0;
    D_011E5C18 = __wrap_malloc(0x8240);
    ll_init__FP5llist(&D_011E5C20);
    ll_init__FP5llist(&D_011E5C30);
    temp_5 = D_011E5C18;
    do {
        var_16 -= 1;
        temp_5_2 = temp_5 + var_17;
        var_17 += 0x824;
        ll_add_tail__FP5llistP5lnode(&D_011E5C20, temp_5_2);
    } while (var_16 >= 0);
}
