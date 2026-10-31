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

M2C_UNK xmlListRemoveFirst(s32, void *, s32);       /* extern */

s32 xmlWalkRemoveRef(void *arg0, void *arg1) {
    s32 temp_6;

    temp_6 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_6 == M2C_FIELD(arg1, s32 *, 4)) {
        xmlListRemoveFirst(M2C_FIELD(arg1, s32 *, 0), arg0, temp_6);
        return 0;
    }
    return 1;
}
