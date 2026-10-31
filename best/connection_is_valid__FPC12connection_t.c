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

s32 endpoint_has_connection__FPC10endpoint_tPC12connection_t(s32, void *); /* extern */
s32 memcmp(M2C_UNK *, M2C_UNK);                     /* extern */
extern M2C_UNK D_011C46A8;

s32 connection_is_valid__FPC12connection_t(void *arg0) {
    s32 var_2;

    var_2 = memcmp(&D_011C46A8, 4) == 0;
    if (var_2 != 0) {
        var_2 = endpoint_has_connection__FPC10endpoint_tPC12connection_t(M2C_FIELD(arg0, s32 *, 0x34), arg0) != 0;
    }
    return var_2;
}
