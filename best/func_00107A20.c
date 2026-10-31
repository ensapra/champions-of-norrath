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

M2C_UNK func_0014CF78(s32, s32 *, s32 *);           /* extern */
extern M2C_UNK xmlListPopFront;

void func_00107A20(s32 *arg0, s32 *arg1) {
    *arg0 = 0;
    *arg1 = 0;
    if (M2C_FIELD(&xmlListPopFront, s32 *, 8) != 0) {
        func_0014CF78(M2C_FIELD(&xmlListPopFront, s32 *, 8), arg0, arg1);
    }
}
