/* machine draft (m2c) for ee-gcc-2.96 -O2 -G8, tried by autopilot */
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

M2C_UNK func_00114948(M2C_UNK, M2C_UNK, M2C_UNK, s32, M2C_UNK *, s32); /* extern */
s32 func_0011BA18(M2C_UNK);                         /* extern */
s32 func_0013B6F0(void *, M2C_UNK);                 /* extern */
extern M2C_UNK func_00110908;
extern M2C_UNK func_001B9FD8;
extern M2C_UNK func_01000000;
extern M2C_UNK jtbl_004C006C;

void func_00110AF0(s32 arg0) {
    s32 temp_2;
    s32 temp_2_2;
    void *temp_4;

    if (arg0 >= 0) {
        temp_4 = &jtbl_004C006C + 0x756C;
        if (arg0 >= 2) {
            if (arg0 != 2) {

            } else {
                temp_2 = func_0013B6F0(temp_4, -1);
                if (temp_2 != arg0) {
                    switch (temp_2) {               /* switch 2; irregular */
                    case 1:                         /* switch 2 */
                        func_00114948(0, 0x1F4, 0xFA, func_0011BA18(0x1B), M2C_FIELD(&func_01000000, M2C_UNK **, 0xC2A50), M2C_FIELD(&func_001B9FD8, s32 *, 0x16EC));
                        return;
                    case 3:                         /* switch 2 */
                        func_00114948(0, 0x1F4, 0xFA, func_0011BA18(0x1D), M2C_FIELD(&func_01000000, M2C_UNK **, 0xC2A50), M2C_FIELD(&func_001B9FD8, s32 *, 0x16EC));
                        return;
                    }
                } else {
                    func_00114948(0, 0x1F4, 0xFA, func_0011BA18(0x1C), M2C_FIELD(&func_01000000, M2C_UNK **, 0xC2A50), M2C_FIELD(&func_001B9FD8, s32 *, 0x16EC));
                }
            }
        } else {
            temp_2_2 = func_0013B6F0(temp_4, -1);
            switch (temp_2_2) {                     /* switch 1; irregular */
            case 1:                                 /* switch 1 */
                func_00114948(1, 0x1F4, 0xFA, func_0011BA18(0x1E), &func_00110908, M2C_FIELD(&func_001B9FD8, s32 *, 0x16EC));
                return;
            case 2:                                 /* switch 1 */
                func_00114948(1, 0x1F4, 0xFA, func_0011BA18(0x1F), &func_00110908, M2C_FIELD(&func_001B9FD8, s32 *, 0x16EC));
                return;
            case 3:                                 /* switch 1 */
                func_00114948(1, 0x1F4, 0xFA, func_0011BA18(0x20), &func_00110908, M2C_FIELD(&func_001B9FD8, s32 *, 0x16EC));
                return;
            }
        }
    }
}
