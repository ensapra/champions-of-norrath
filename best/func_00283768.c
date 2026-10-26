/* machine draft (m2c), tried by autopilot */
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

f32 func_00159330(s8, s8, s32, f32, f32, f32, f32, f32); /* extern */
void *func_001671F8(M2C_UNK *);                     /* extern */
s32 func_0016EC08(s32, s32, s32, s32, s32, s32); /* extern */
M2C_UNK func_00172728(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_00172BC8(s32, M2C_UNK, s32, M2C_UNK);  /* extern */
M2C_UNK func_00172DC0(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_00172F88();                            /* extern */
M2C_UNK func_00174548(M2C_UNK, s32, void *, s32);   /* extern */
M2C_UNK func_00190E20(M2C_UNK *, void *, f32, f32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_001915C0(M2C_UNK *);                       /* extern */
M2C_UNK func_001C6788(void *, M2C_UNK, M2C_UNK *, u32, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00283B00(M2C_UNK);                     /* extern */
M2C_UNK func_00304640(M2C_UNK *, void *);           /* extern */
u32 func_00304CFC(M2C_UNK *);                       /* extern */
extern M2C_UNK D_004283E0;
extern M2C_UNK D_00476D00[];
extern M2C_UNK D_00476D10[];
extern M2C_UNK D_00476D20[];
extern s32 D_00483F70;
extern s32 D_00483F74;
extern s32 D_00484CA4;
extern s32 D_00486030;
extern M2C_UNK D_00486088[];
extern s8 D_00486D8C;
extern s8 D_00486D8D;
extern u32 D_00486D90;
extern s32 D_00486D94;
extern f32 D_00486D9C;
extern s8 D_00486DA0;
extern M2C_UNK D_008D60E0[120];

void func_00283768(void) {
    M2C_UNK sp10[32];
    M2C_UNK *var_20;
    f32 temp_f0;
    f32 temp_f20;
    f32 temp_f21;
    s32 var_19;
    s32 var_21;
    s32 var_22;
    s8 temp_2;
    void *var_16;

    if (func_001915C0(&D_00476D00) == 0) {
        if (D_00486D90 != 0) {
            func_00172728(0xBA, 0x7A, 0x10C, 0xC5, 6, (D_00486D90 << 0x18) | 0x808080, 0, 1, 0);
            var_19 = 0;
            func_00172BC8(D_00484CA4, 6, (D_00486D90 << 0x18) | 0x323C3C, -1);
            if (D_00486DA0 > 0) {
                var_22 = 0x7A;
                var_21 = 0;
                var_20 = &D_008D60E0;
                do {
                    if (var_19 == D_00486D94) {
                        func_00172DC0((D_00486D90 << 0x18) | 0x202020, -1, 0);
                    }
                    func_00304640(sp10, var_21 + &D_008D60E0);
                    var_16 = NULL;
loop_8:
                    if (func_00304CFC(&sp10) >= 2U) {
                        var_16 = func_001671F8(&sp10);
                        if (M2C_FIELD(var_16, u16 *, 4) == 0x3A) {
                            M2C_FIELD((func_00304CFC(&sp10) + &sp10), s8 *, -1) = 0;
                            goto loop_8;
                        }
                    }
                    if (var_16 == NULL) {
                        var_16 = func_001671F8(var_20);
                    }
                    func_00174548(0x140, var_22, var_16, 0xF4240);
                    temp_2 = D_00486DA0;
                    if (var_19 == D_00486D94) {
                        func_00172DC0((D_00486D90 << 0x18) | 0x323C3C, -1, 0);
                    }
                    var_19 += 1;
                    var_22 += 0x15;
                    var_20 += 0x20;
                    var_21 += 0x20;
                } while (var_19 < temp_2);
            }
            func_00172F88();
            temp_f21 = (f32) ((D_00486D8D * 0x15) + 0x7D);
            temp_f20 = (f32) ((D_00486D8C * 0x15) + 0x7D);
            temp_f0 = func_00159330(D_00486D8D, D_00486D8C, 0x7D, D_00486D9C, 0.0f, 1.0f, 0.5f, temp_f20);
            temp_f20 = (temp_f20 - temp_f21) * temp_f0;
            temp_f21 += temp_f20;
            func_0016EC08(0xC2, (s32)temp_f21, 0x1BE, (s32)(temp_f21 + 23.0f), 6, (((s32) (D_00486D90 + ((u32) D_00486D90 >> 0x1F)) >> 1) << 0x18) | 0x366876);
            if (D_00486D8C != D_00486D94) {
                func_00190E20(&D_004283E0, func_001671F8(&D_00476D10), (f32) D_00483F70, (f32) D_00483F74, 0, 0, 0, 0, 0, 0);
            } else {
                func_00190E20(&D_004283E0, func_001671F8(&D_00486088), (f32) D_00483F74, 0.0f, 0, 0, 0, 0, 0, 0);
            }
            func_001C6788(func_001671F8(&D_00476D20), 0, &D_004283E0, D_00486D90, 0x131, 0xB5);
        }
        if (D_00486030 != 0) {
            func_00283B00(1);
        }
    }
}
