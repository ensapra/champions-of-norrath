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

M2C_UNK func_00168184();                            /* extern */
M2C_UNK func_001685D4(void *);                      /* extern */
M2C_UNK func_001688E4(void *);                      /* extern */
M2C_UNK func_00169598(void *);                      /* extern */
M2C_UNK func_001696E8(void *);                      /* extern */
M2C_UNK func_00169FD0(void *);                      /* extern */

void func_00168124(void *arg0) {
    func_00168184();
    func_00169FD0(arg0);
    if (M2C_FIELD(arg0, s32 *, 0x5E90) != 0) {
        func_001688E4(arg0);
        func_001696E8(arg0);
        return;
    }
    func_001685D4(arg0);
    func_00169598(arg0);
}
