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

extern M2C_UNK D_0118ED5C;
extern M2C_UNK D_0118EE60;

u16 Ascii2Sjis__16VIIconDefinitionc(s32 arg0, s8 arg1) {
    s32 var_4;
    s32 var_7;
    u16 var_2;
    void *temp_5;

    var_4 = arg0;
    var_7 = 0;
    if ((u32) (arg1 - 0x20) < 0x10U) {
        var_7 = 1;
        goto block_17;
    }
    if ((u32) (arg1 - 0x30) < 0xAU) {
        var_4 = 0;
        goto block_17;
    }
    if ((u32) (arg1 - 0x3A) < 7U) {
        var_7 = 0xB;
        goto block_17;
    }
    if ((u32) (arg1 - 0x41) < 0x1AU) {
        var_4 = 1;
        goto block_17;
    }
    if ((u32) (arg1 - 0x5B) < 6U) {
        var_7 = 0x25;
        goto block_17;
    }
    if ((u32) (arg1 - 0x61) < 0x1AU) {
        var_4 = 2;
        goto block_17;
    }
    var_7 = 0x3F;
    var_2 = 0;
    if ((u32) (arg1 - 0x7B) < 4U) {
block_17:
        if (var_7 != 0) {
            var_2 = *(&D_0118ED5C + ((arg1 - var_7) * 4));
            /* Duplicate return node #19. Try simplifying control flow for better match */
            return var_2;
        }
        temp_5 = (var_4 * 4) + &D_0118EE60;
        return ((M2C_FIELD(temp_5, u16 *, 0) + arg1) - M2C_FIELD(temp_5, u16 *, 2)) & 0xFFFF;
    }
    return var_2;
}
