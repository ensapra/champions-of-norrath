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

M2C_UNK func_00110D10(M2C_UNK *);                   /* extern */
M2C_UNK func_0012FC68();                            /* extern */
M2C_UNK func_00130568();                            /* extern */
extern M2C_UNK Slerp__7VIQuatDRC7VIQuatDT1d;
extern M2C_UNK func_0012FC40;
extern M2C_UNK hudShowMsg__FPUsN20iii;

void func_00130648(s32 arg0) {
    s32 *var_2;
    s32 var_3;

    if (arg0 < 0) {
        if ((u32) (arg0 + 0xF) >= 2U) {
            if (arg0 == -1) {
                /* Duplicate return node #4. Try simplifying control flow for better match */
                func_00110D10(&func_0012FC40);
                return;
            }
            return;
        }
        func_00110D10(&func_0012FC40);
        return;
    }
    var_3 = M2C_FIELD(&hudShowMsg__FPUsN20iii, s32 *, 0xAC);
    if (var_3 > 0) {
        M2C_FIELD(&Slerp__7VIQuatDRC7VIQuatDT1d, s32 *, 0x3D0) = 0;
        if (var_3 > 0) {
            var_2 = &Slerp__7VIQuatDRC7VIQuatDT1d + 0x3D8;
            do {
                var_3 -= 1;
                *var_2 = 0;
                var_2 += 4;
            } while (var_3 != 0);
        }
        func_00130568();
        return;
    }
    func_0012FC68();
}
