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

M2C_UNK func_001050A8(M2C_UNK *, s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_00105190(M2C_UNK *);                   /* extern */
M2C_UNK func_0010C7E8(M2C_UNK, s32, s32, M2C_UNK);  /* extern */
s32 func_0011BA18(M2C_UNK);                         /* extern */
M2C_UNK func_0011CEF0(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_0011E3E8();                            /* extern */
M2C_UNK func_0011E420(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_0014D370(s32, M2C_UNK);                /* extern */
extern M2C_UNK drawNewestQuickSpellMenu__Fiiicl;
extern s32 message_get_connection__FP9message_t;
extern s32 message_get_endpoint__FP9message_t;
extern M2C_UNK shopItemSetAttributes__FiiPcPQ24item11description;

void func_001373C0(s32 arg0) {
    M2C_UNK sp10;
    M2C_UNK spD0;
    s32 *var_17;
    s32 *var_18;
    s32 temp_16;
    s32 var_16;
    s32 var_16_2;
    s32 var_5;
    s32 var_5_2;

    func_0011E3E8();
    func_0011E420(0, 0);
    func_0011CEF0(message_get_endpoint__FP9message_t, arg0, 0);
    if (arg0 >= 0) {
        if (arg0 >= 7) {
            if (arg0 < 0xE) {
                if (M2C_FIELD(&drawNewestQuickSpellMenu__Fiiicl, s32 *, 0x3C0) == 0) {
                    func_0014D370(M2C_FIELD(&shopItemSetAttributes__FiiPcPQ24item11description, s32 *, 0x1924), 1);
                    func_001050A8(&spD0, M2C_FIELD(&shopItemSetAttributes__FiiPcPQ24item11description, s32 *, 0x1924), 0xB, 0x14, 0x14, 0, 0, 0x55, 0xB4, 0x6F);
                    func_00105190(&spD0);
                }
                var_18 = &message_get_connection__FP9message_t;
                var_16 = 3;
                var_5 = message_get_connection__FP9message_t;
loop_12:
                var_18 += 4;
                var_16 -= 1;
                func_001050A8(&spD0, var_5, 0xB, 0, 0xA, 0, 0x10, 6, 0x150, 6);
                func_00105190(&spD0);
                if (var_16 >= 0) {
                    var_5 = *var_18;
                    goto loop_12;
                }
            }
        } else {
            func_001050A8(&sp10, M2C_FIELD(&shopItemSetAttributes__FiiPcPQ24item11description, s32 *, 0x1924), 0xB, 0x14, 0xA, 0, 0xA, 0x55, 0xA, 0x6F);
            func_00105190(&sp10);
            var_17 = &message_get_connection__FP9message_t;
            var_16_2 = 3;
            var_5_2 = message_get_connection__FP9message_t;
loop_5:
            var_17 += 4;
            func_001050A8(&sp10, var_5_2, 0xB, 0, 1, 0, 0x10, 0x14, 0x150, 0x14);
            var_16_2 -= 1;
            func_00105190(&sp10);
            if (var_16_2 >= 0) {
                var_5_2 = *var_17;
                goto loop_5;
            }
            temp_16 = func_0011BA18(2);
            func_0010C7E8(0, temp_16, func_0011BA18(3), 0);
        }
    }
}
