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

s32 Collide__7VIWorldiR8VIEnvRayR7VIVect3T3(M2C_UNK, s32, s32, s32); /* extern */

s32 Collide__7VIWorldR8VIEnvRay(void *arg0, s32 arg1) {
    s32 var_16;

    var_16 = 0;
    if (M2C_FIELD(arg0, s32 *, 0x34) != 0) {
        if (Collide__7VIWorldiR8VIEnvRayR7VIVect3T3(0, arg1, arg1, arg1 + 0xC) != 0) {
            var_16 = 1;
        }
    } else {
        var_16 = Collide__7VIWorldiR8VIEnvRayR7VIVect3T3(0x40000000, arg1, arg1, arg1 + 0xC) != 0;
    }
    return var_16;
}
