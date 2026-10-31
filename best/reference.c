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

M2C_UNK xmlAddChild(s32, s32);                      /* extern */
s32 xmlNewCharRef(s32);                             /* extern */
s32 xmlNewReference(s32);                           /* extern */

void reference(void *arg0, u8 *arg1) {
    s32 var_2;

    if (*arg1 == 0x23) {
        var_2 = xmlNewCharRef(M2C_FIELD(arg0, s32 *, 8));
    } else {
        var_2 = xmlNewReference(M2C_FIELD(arg0, s32 *, 8));
    }
    xmlAddChild(M2C_FIELD(arg0, s32 *, 0x34), var_2);
}
