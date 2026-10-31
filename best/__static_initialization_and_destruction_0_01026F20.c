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

M2C_UNK __7VILList(M2C_UNK *);                      /* extern */
M2C_UNK ___7VILList(M2C_UNK *, M2C_UNK);            /* extern */
extern M2C_UNK D_011E51E8;
extern M2C_UNK D_011E51F8;
extern M2C_UNK D_011E5208;

void __static_initialization_and_destruction_0_01026F20(s32 arg0, s32 arg1) {
    if (arg1 == 0xFFFF) {
        if (arg0 == 1) {
            __7VILList(&D_011E51E8);
            if (arg0 == 1) {
                __7VILList(&D_011E51F8);
                if (arg0 == 1) {
                    __7VILList(&D_011E5208);
                }
            }
        }
        if (arg0 == 0) {
            ___7VILList(&D_011E5208, 2);
            if (arg0 == 0) {
                ___7VILList(&D_011E51F8, 2);
                if (arg0 == 0) {
                    ___7VILList(&D_011E51E8, 2);
                }
            }
        }
    }
}
