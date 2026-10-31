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

M2C_UNK func_00114948(M2C_UNK, M2C_UNK, M2C_UNK, s32, M2C_UNK *, s32); /* extern */
s32 func_0011BA18(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_0012F7F0();                            /* extern */
extern M2C_UNK Slerp__7VIQuatDRC7VIQuatDT1d;
extern M2C_UNK func_0012F910;
extern M2C_UNK helpMessageFrame__Fv;
extern M2C_UNK shopItemSetAttributes__FiiPcPQ24item11description;

void func_0012F930(s32 arg0) {
    if (arg0 >= 0) {
        func_0012F7F0();
        return;
    }
    switch (M2C_FIELD(&Slerp__7VIQuatDRC7VIQuatDT1d, s32 *, 0x64)) { /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        switch (M2C_FIELD(&helpMessageFrame__Fv, s32 *, 0x388)) { /* switch 2; irregular */
        case 1:                                     /* switch 2 */
            func_00114948(2, 0x1F4, 0xFA, func_0011BA18(0x4C, 1), &func_0012F910, M2C_FIELD(&shopItemSetAttributes__FiiPcPQ24item11description, s32 *, 0x16EC));
            return;
        case 2:                                     /* switch 2 */
            func_00114948(2, 0x1F4, 0xFA, func_0011BA18(0x4D, 1), &func_0012F910, M2C_FIELD(&shopItemSetAttributes__FiiPcPQ24item11description, s32 *, 0x16EC));
            return;
        case 3:                                     /* switch 2 */
            func_00114948(2, 0x1F4, 0xFA, func_0011BA18(0x4E, 1), &func_0012F910, M2C_FIELD(&shopItemSetAttributes__FiiPcPQ24item11description, s32 *, 0x16EC));
            return;
        }
        break;
    case 1:                                         /* switch 1 */
        switch (M2C_FIELD(&helpMessageFrame__Fv, s32 *, 0x388)) { /* switch 3; irregular */
        case 1:                                     /* switch 3 */
            func_00114948(2, 0x1F4, 0xFA, func_0011BA18(0x4F, 1), &func_0012F910, M2C_FIELD(&shopItemSetAttributes__FiiPcPQ24item11description, s32 *, 0x16EC));
            return;
        case 2:                                     /* switch 3 */
            func_00114948(2, 0x1F4, 0xFA, func_0011BA18(0x50, 1), &func_0012F910, M2C_FIELD(&shopItemSetAttributes__FiiPcPQ24item11description, s32 *, 0x16EC));
            return;
        case 3:                                     /* switch 3 */
            func_00114948(2, 0x1F4, 0xFA, func_0011BA18(0x51, 1), &func_0012F910, M2C_FIELD(&shopItemSetAttributes__FiiPcPQ24item11description, s32 *, 0x16EC));
            return;
        }
        break;
    case 2:                                         /* switch 1 */
        if (M2C_FIELD(&helpMessageFrame__Fv, s32 *, 0x388) != M2C_FIELD(&Slerp__7VIQuatDRC7VIQuatDT1d, s32 *, 0x64)) {
            switch (M2C_FIELD(&helpMessageFrame__Fv, s32 *, 0x388)) { /* switch 4; irregular */
            case 1:                                 /* switch 4 */
                func_00114948(2, 0x1F4, 0xFA, func_0011BA18(0x52, 1), &func_0012F910, M2C_FIELD(&shopItemSetAttributes__FiiPcPQ24item11description, s32 *, 0x16EC));
                return;
            case 3:                                 /* switch 4 */
                func_00114948(2, 0x1F4, 0xFA, func_0011BA18(0x54, 1), &func_0012F910, M2C_FIELD(&shopItemSetAttributes__FiiPcPQ24item11description, s32 *, 0x16EC));
                return;
            }
        } else {
            func_00114948(2, 0x1F4, 0xFA, func_0011BA18(0x53, 1), &func_0012F910, M2C_FIELD(&shopItemSetAttributes__FiiPcPQ24item11description, s32 *, 0x16EC));
            return;
        }
        break;
    }
}
