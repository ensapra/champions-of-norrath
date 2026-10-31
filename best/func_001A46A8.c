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

s32 func_001138D0(void *, s32);                     /* extern */
f32 func_0015A070(s16);                             /* extern */
f32 func_0015A100(s16);                             /* extern */
s32 func_0015A198(f32, f32);                        /* extern */
M2C_UNK func_00160010(void *, s32, M2C_UNK, s32, f32, f32); /* extern */
s32 func_00165DC0(M2C_UNK *, M2C_UNK *);            /* extern */
M2C_UNK func_001910C0(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00194300(void *);                      /* extern */
M2C_UNK func_00194390(void *, void *, void *);      /* extern */
M2C_UNK func_001A7D20(void *, M2C_UNK);             /* extern */
M2C_UNK func_0024D4F8(s32, M2C_UNK *, s32, M2C_UNK); /* extern */
s32 func_00284830();                                /* extern */
f32 func_002AE060(s32);                             /* extern */
M2C_UNK func_00303EB8(M2C_UNK *, M2C_UNK *);        /* extern */
s32 func_003044FC(M2C_UNK *, M2C_UNK *);            /* extern */
s32 func_003190D0();                                /* extern */
extern M2C_UNK D_0034B6B1;
extern M2C_UNK D_0034B898;
extern M2C_UNK D_00408600;
extern M2C_UNK D_00465FB8;
extern M2C_UNK D_00465FC8;
extern f32 D_00480484;
extern f32 D_00480488;
extern u32 D_00483E5C;
extern s32 D_00483F1C;
extern s8 D_00483F3D;
extern s8 D_00483F45;
extern M2C_UNK D_004845F8;

void func_001A46A8(void *arg0, void *arg1, s32 arg2, f32 fparg0) {
    f32 sp0;
    f32 sp4;
    f32 sp8;
    f32 sp10;
    f32 sp14;
    f32 sp18;
    M2C_UNK sp20;
    M2C_UNK sp70;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f1;
    f32 temp_f20;
    f32 temp_f3;
    f32 var_f21;
    s32 *temp_3_3;
    s32 temp_2;
    s32 temp_2_2;
    s32 temp_3;
    s32 temp_4_2;
    s32 temp_6;
    s32 temp_6_2;
    s32 temp_7;
    s8 temp_5;
    u32 temp_3_2;
    u32 temp_4;
    void *temp_19;
    void *temp_2_3;
    void *var_16;
    void *var_5;

    temp_19 = &D_00408600 + (M2C_FIELD(arg0, s32 *, 0x3C0) * 0x5DB0);
    var_f21 = fparg0;
    if ((D_00483F3D == 0) && (M2C_FIELD(arg0, s16 *, 0x4A4) == 0) && (M2C_FIELD(arg0, s32 *, 0x530) == 0) && (func_003044FC(&D_0034B6B1, &D_00465FB8) != 0) && (func_00284830() == 0) && (D_00483F1C == 0)) {
        if ((D_00483F45 != 0) && (func_001353A8(M2C_FIELD(arg0, s32 *, 0x3C0)) != 0)) {
            func_001910C0(0x40, 0, 0, 0);
        }
        if ((arg1 != NULL) && ((temp_3 = M2C_FIELD(arg0, s32 *, 0x578), (temp_3 == 8)) || (temp_3 == 0xB)) && !(arg2 & 0x40)) {
            temp_5 = M2C_FIELD(temp_19, s8 *, 0x5C1E);
            temp_4 = (D_00483E5C * 0x19660D) + 0x3C6EF35F;
            temp_7 = temp_5 * 0xD;
            temp_3_2 = temp_4 >> 0x10;
            D_00483E5C = temp_4;
            temp_2 = M2C_FIELD(arg0, s32 *, 0x24);
            if ((temp_3_2 - (((s32) (((s32) temp_3_2 < 0) ? (temp_3_2 + 0xFFFF) : temp_3_2) >> 0x10) << 0x10)) <= 0xAFC7) {
                func_00160010(arg0 + 0x120, M2C_FIELD(((temp_5 * 0x68) + temp_2), s32 *, 0x94), 0x812, temp_7, D_00480484, D_00480484);
            } else {
                func_00160010(arg0 + 0x120, M2C_FIELD(((temp_5 * 0x68) + temp_2), s32 *, 0x8C), 0x812, temp_7, D_00480488, D_00480488);
            }
            temp_f20 = func_0015A070(M2C_FIELD(arg0, s16 *, 0x38));
            temp_f0 = func_0015A100(M2C_FIELD(arg0, s16 *, 0x38));
            sp0 = temp_f20;
            temp_f3 = M2C_FIELD(arg1, f32 *, 0x14) - M2C_FIELD(arg0, f32 *, 0x14);
            sp4 = temp_f0;
            sp8 = 0.0f;
            sp10 = M2C_FIELD(arg1, f32 *, 0x10) - M2C_FIELD(arg0, f32 *, 0x10);
            sp18 = 0.0f;
            sp14 = temp_f3;
            if (((sp0 * sp10) + (temp_f0 * temp_f3)) > 0.0f) {
                func_00303EB8(&sp20, &D_00465FC8);
                temp_4_2 = func_00165DC0(&D_004845F8, &sp20);
                M2C_ERROR(/* unknown instruction: ldl $v0, 0x17($s1) */);
                M2C_ERROR(/* unknown instruction: ldr $v0, 0x10($s1) */);
                temp_6 = M2C_FIELD(arg0, s32 *, 0x18);
                M2C_ERROR(/* unknown instruction: sdl $v0, 0x7($v1) */);
                M2C_ERROR(/* unknown instruction: sdr $v0, ($v1) */);
                M2C_FIELD(&sp70, s32 *, 8) = temp_6;
                func_0024D4F8(temp_4_2, &sp70, temp_6, 0x3F800000);
                func_001A7D20(arg0, 0);
                if (!(arg2 & 0x20000)) {
                    var_f21 = 0.0f;
                } else {
                    var_f21 *= 0.5f;
                }
            }
        }
        temp_2_2 = func_001138D0(arg0, func_003190D0());
        if ((temp_2_2 != 0) && (M2C_FIELD(temp_19, f32 *, 0xC4) > 0.0f)) {
            temp_f0_2 = var_f21 * func_002AE060(temp_2_2);
            var_f21 -= temp_f0_2;
            temp_f1 = M2C_FIELD(temp_19, f32 *, 0xC4) - temp_f0_2;
            M2C_FIELD(temp_19, f32 *, 0xC4) = temp_f1;
            if (var_f21 < 0.0f) {
                var_f21 = 0.0f;
            }
            if (temp_f1 < 0.0f) {
                M2C_FIELD(temp_19, f32 *, 0xC4) = 0.0f;
            }
        }
        temp_6_2 = M2C_FIELD(arg0, s32 *, 0x2E8) | arg2;
        M2C_FIELD(arg0, s32 *, 0x2E8) = temp_6_2;
        M2C_FIELD(arg0, f32 *, 0xC0) = (f32) (M2C_FIELD(arg0, f32 *, 0xC0) + var_f21);
        if (arg1 != NULL) {
            var_16 = arg0 + 0x2F0;
            if (!(temp_6_2 & 0x800000)) {
                M2C_FIELD(arg0, s16 *, 0x2EC) = (s16) (0x4000 - func_0015A198(M2C_FIELD(arg0, f32 *, 0x10) - M2C_FIELD(arg1, f32 *, 0x10), M2C_FIELD(arg0, f32 *, 0x14) - M2C_FIELD(arg1, f32 *, 0x14)));
                var_16 = arg0 + 0x2F0;
            }
            func_00194300(var_16);
            var_5 = arg1;
            if (M2C_FIELD(var_5, s32 *, 0xC) & 0x80) {
                temp_2_3 = M2C_FIELD(var_5, void **, 0x4C);
                if (temp_2_3 != NULL) {
                    var_5 = M2C_FIELD(temp_2_3, void **, 0xC);
                }
            }
            if (var_5 != NULL) {
                func_00194390(var_16, var_5, var_5);
            }
        }
        if (M2C_FIELD(arg0, f32 *, 0xC0) > 0.0f) {
            temp_3_3 = &D_0034B898 + (M2C_FIELD(arg0, s32 *, 0x3C0) * 4);
            *temp_3_3 |= 1;
        }
    }
}
