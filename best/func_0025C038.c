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

M2C_UNK func_0025C350(M2C_UNK *, s32);              /* extern */
s32 func_0025C8D0();                                /* extern */
s32 func_002E0F78(s32, s32, s32, s32);              /* extern */
M2C_UNK func_002E10A0(s32, s32, s32, M2C_UNK);      /* extern */
M2C_UNK func_002E10D8(s32, M2C_UNK *, s32, M2C_UNK); /* extern */
M2C_UNK func_002E1198(s32, s32, s32, M2C_UNK);      /* extern */
M2C_UNK func_002E1310(s32, s32, s32, M2C_UNK);      /* extern */
M2C_UNK func_002E1428(s32, M2C_UNK *, s32, void *); /* extern */
s32 func_002E15A0(M2C_UNK, M2C_UNK, M2C_UNK *);     /* extern */
M2C_UNK func_002E16C0(s32, s32, M2C_UNK *, s32, M2C_UNK); /* extern */
M2C_UNK func_002E18B0(s32, s32, s32, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK func_002E1A90(s32, s32, s32, M2C_UNK);      /* extern */
M2C_UNK func_002E1BD0(s32, s32, s32, M2C_UNK);      /* extern */
M2C_UNK func_002E1CA0(s32, s32, s32, M2C_UNK);      /* extern */
extern M2C_UNK D_0042E400;
extern M2C_UNK D_0042F440;
extern M2C_UNK D_00485BFC;
extern s32 D_00485C00;
extern s32 D_00485C04;
extern s32 D_00485C08;
extern M2C_UNK D_00485C14;
extern s32 D_00486CD0;
extern s32 D_00486CD8;
extern s32 D_00486CDC;
extern s32 D_00486CE4;
extern M2C_UNK D_008D1560;
extern M2C_UNK D_008D1570;

s32 func_0025C038(s32 arg0) {
    M2C_UNK *temp_5;
    M2C_UNK temp_7;
    s32 temp_16;
    s32 temp_6;
    s32 var_17;
    s32 var_2;
    s32 var_4;
    s32 var_4_2;
    void *temp_2;
    void *temp_2_2;
    void *temp_2_3;
    void *temp_2_4;
    void *temp_7_2;

    var_17 = func_002E15A0(1, 0, &D_00485BFC) == 0;
    if ((var_17 == 0) && (D_00486CD8 != 0)) {
        func_0025C350(&D_008D1560, arg0);
        D_00486CD8 = 0;
    }
    if ((func_0025C8D0() == 0) && (var_17 == 0)) {
        D_00486CD8 = 1;
        M2C_ERROR(/* unknown instruction: ldl $v0, %lo(D_0042F447)($at) */);
        M2C_ERROR(/* unknown instruction: ldr $v0, %lo(D_0042F440)($at) */);
        M2C_ERROR(/* unknown instruction: ldl $a3, %lo(D_0042F44F)($at) */);
        M2C_ERROR(/* unknown instruction: ldr $a3, %lo(D_0042F448)($at) */);
        M2C_ERROR(/* unknown instruction: sdl $v0, 0x7($a0) */);
        M2C_ERROR(/* unknown instruction: sdr $v0, ($a0) */);
        M2C_ERROR(/* unknown instruction: sdl $a3, 0xf($a0) */);
        temp_7 = M2C_ERROR(/* unknown instruction: sdr $a3, 0x8($a0) */);
        var_17 = 1;
        switch (M2C_FIELD(&D_008D1560, u32 *, 0)) {
        case 0:
            D_00485C08 = 1;
            var_4 = D_00486CDC;
            D_00486CE4 = func_002E0F78(D_00485C00, D_00485C04, M2C_FIELD(&D_008D1560, s32 *, 4), M2C_FIELD(&D_008D1560, s32 *, 8));
            break;
        case 1:
            D_00485C08 = 0;
            func_002E10D8(D_00486CE4, &D_008D1560, D_00486CD0, temp_7);
            /* fallthrough */
        default:
            var_4 = D_00486CDC;
            break;
        case 5:
            temp_7_2 = &D_008D1560 + 0x1560;
            temp_5 = M2C_FIELD(temp_7_2, M2C_UNK **, 4);
            if (temp_5 == NULL) {
                var_4_2 = D_00486CDC;
                if (var_4_2 == -1) {
                    var_4_2 = M2C_FIELD(temp_7_2, s32 *, 8);
                    D_00486CDC = var_4_2;
                }
                temp_16 = (var_4_2 < 0x4000) ? var_4_2 : 0x4000;
                M2C_FIELD((&D_0042F440 + (D_00486CD0 * 0x10)), s32 *, 8) = temp_16;
                M2C_FIELD(temp_7_2, s32 *, 8) = temp_16;
                func_002E1428(D_00486CE4, &D_008D1570, temp_16, temp_7_2);
                var_4 = D_00486CDC - temp_16;
                if (var_4 <= 0) {
                    var_4 = -1;
                }
                D_00486CDC = var_4;
            } else {
                func_002E1428(D_00486CE4, temp_5, M2C_FIELD(temp_7_2, s32 *, 8), temp_7_2);
                var_4 = D_00486CDC;
            }
            break;
        case 3:
        case 4:
            temp_2 = &D_008D1560 + 0x1560;
            func_002E1310(D_00486CE4, M2C_FIELD(temp_2, s32 *, 4), M2C_FIELD(temp_2, s32 *, 8), temp_7);
            var_4 = D_00486CDC;
            break;
        case 2:
            temp_2_2 = &D_008D1560 + 0x1560;
            func_002E1198(D_00486CE4, M2C_FIELD(temp_2_2, s32 *, 4), M2C_FIELD(temp_2_2, s32 *, 8), temp_7);
            var_4 = D_00486CDC;
            break;
        case 6:
            func_002E18B0(D_00485C00, D_00485C04, M2C_FIELD((&D_008D1560 + 0x1560), s32 *, 4), 0, 0x40, &D_0042E400);
            var_4 = D_00486CDC;
            break;
        case 7:
            func_002E1CA0(D_00485C00, D_00485C04, M2C_FIELD((&D_008D1560 + 0x1560), s32 *, 4), temp_7);
            var_4 = D_00486CDC;
            break;
        case 8:
            temp_2_3 = &D_008D1560 + 0x1560;
            func_002E16C0(M2C_FIELD(temp_2_3, s32 *, 4), M2C_FIELD(temp_2_3, s32 *, 8), &D_00485C14, M2C_FIELD(temp_2_3, s32 *, 0xC), 0);
            var_4 = D_00486CDC;
            break;
        case 9:
            temp_2_4 = &D_008D1560 + 0x1560;
            func_002E1BD0(M2C_FIELD(temp_2_4, s32 *, 4), M2C_FIELD(temp_2_4, s32 *, 8), D_00486CD0, temp_7);
            var_4 = D_00486CDC;
            break;
        case 10:
            func_002E1A90(D_00485C00, D_00485C04, M2C_FIELD((&D_008D1560 + 0x1560), s32 *, 4), 0);
            var_4 = D_00486CDC;
            break;
        case 11:
            func_002E10A0(D_00485C00, D_00485C04, M2C_FIELD((&D_008D1560 + 0x1560), s32 *, 4), temp_7);
            var_4 = D_00486CDC;
            break;
        }
        if (var_4 == -1) {
            temp_6 = D_00486CD0 + 1;
            D_00486CD0 = ((temp_6 ^ 0x100) == 0) ? 0 : temp_6;
        }
    }
    if ((func_0025C8D0() == 0) || (var_2 = 0, (var_17 != 0))) {
        var_2 = 1;
    }
    return var_2;
}
