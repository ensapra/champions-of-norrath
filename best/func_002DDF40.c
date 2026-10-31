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

s32 AddIntcHandler_4(M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_002D5C28(M2C_UNK);                     /* extern */
s32 func_002DD640();                                /* extern */
M2C_UNK func_002DD698();                            /* extern */
M2C_UNK func_002DDF10(M2C_UNK);                     /* extern */
M2C_UNK func_002DDF20(s32);                         /* extern */
M2C_UNK func_002DDF30(M2C_UNK);                     /* extern */
M2C_UNK func_002DF208();                            /* extern */
M2C_UNK func_003021B0(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK D_004459A8;
extern M2C_UNK D_008E2140;
extern M2C_UNK func_002DE4E0;

s32 func_002DDF40(s32 arg0) {
    s32 temp_17;
    s32 temp_2;
    s32 var_16_2;
    s32 var_2;
    void **var_16;
    void *var_3;

    if (M2C_FIELD(&D_004459A8, s32 *, 8) >= 0) {
        return 0x80008001;
    }
    M2C_FIELD(&D_004459A8, s64 *, 0) = 0;
    M2C_FIELD(&D_004459A8, s32 *, 0x10) = 0;
    func_003021B0(&D_008E2140, 0, 0x2000);
    M2C_FIELD(&D_004459A8, M2C_UNK **, 0x14) = &D_008E2140;
    var_3 = &D_008E2140 + 0x2000;
    var_2 = 0x7F;
    var_16 = &D_008E2140 + 0x1FC0;
    do {
        *var_16 = var_3;
        var_2 -= 1;
        var_16 -= 0x40;
        var_3 -= 0x40;
    } while (var_2 >= 0);
    M2C_FIELD(&D_008E2140, s32 *, 0x1FC0) = 0;
    func_002DF208();
    temp_2 = AddIntcHandler_4(0xB, &func_002DE4E0, 0, 0);
    if (temp_2 >= 0) {
        M2C_FIELD(&D_004459A8, s32 *, 8) = temp_2;
        temp_17 = func_002DD640();
        var_16_2 = (*(s32 *)0x10001010 & 0xFFFFFFFC) | arg0 | 0x300;
        if (!(var_16_2 & 0x80)) {
            var_16_2 |= 0xC80;
            func_002DDF10(0);
            func_002DDF30(0xFFFF);
        }
        func_002DDF20(var_16_2);
        func_002D5C28(0xB);
        if (temp_17 != 0) {
            func_002DD698();
        }
        return 0;
    }
    return 0x80009021;
}
