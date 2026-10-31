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

M2C_UNK func_0010A428(void *, M2C_UNK);             /* extern */
M2C_UNK func_0010D250(M2C_UNK *, void *, M2C_UNK);  /* extern */
M2C_UNK func_0010D428(s32);                         /* extern */
s32 func_0010EBF8(void *, s32);                     /* extern */
s32 func_001102B8(void *, M2C_UNK *);               /* extern */
M2C_UNK func_00111490(void *, M2C_UNK);             /* extern */
M2C_UNK func_00111830(void *, M2C_UNK);             /* extern */
M2C_UNK func_00113460(void *);                      /* extern */
u32 func_00153FA8(void *);                          /* extern */
f32 func_0015A070(s16);                             /* extern */
f32 func_0015A100(s16);                             /* extern */

s32 func_00211D08(void *arg0) {
    M2C_UNK sp10;
    f32 sp14;
    f32 sp18;
    M2C_UNK sp30;
    M2C_UNK sp50;
    M2C_UNK sp60;
    M2C_UNK sp70;
    f32 temp_f20;
    f32 temp_f2;
    s16 temp_16;
    s16 temp_16_2;
    s32 temp_4;
    s32 var_2;
    s32 var_2_2;
    s32 var_2_3;
    void *var_18;

    func_0010D428(M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), s32 *, 0xC));
    var_2 = func_0010EBF8(arg0, M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), s32 *, 0xC));
    if (var_2 == 0) {
        var_18 = arg0 + 0x10;
        func_0010A428(arg0, 0x258);
        func_00111830(arg0, 0x3F800000);
        func_00111490(arg0, 0x3F800000);
        temp_4 = M2C_FIELD(arg0, s32 *, 0x328);
        if (M2C_FIELD(arg0, s32 *, 0x3CC) < temp_4) {
            var_2_2 = temp_4 + 0x1E;
            if (M2C_FIELD(arg0, s32 *, 0x3C8) == 0) {
                temp_16 = M2C_FIELD(arg0, s16 *, 0x38);
                var_18 = arg0 + 0x10;
                temp_16_2 = (func_00153FA8(arg0) & 1) ? (temp_16 - 0x2000) : (temp_16 + 0x2000);
                temp_f20 = func_0015A070(temp_16_2);
                temp_f2 = M2C_FIELD(var_18, f32 *, 4) + (func_0015A100(temp_16_2) * 100.0f);
                M2C_FIELD(&sp10, f32 *, 0) = (f32) (M2C_FIELD(arg0, f32 *, 0x10) + (temp_f20 * 100.0f));
                sp14 = temp_f2;
                sp18 = M2C_FIELD(var_18, f32 *, 8);
                M2C_ERROR(/* unknown instruction: ldl $v0, 0x7($v1) */);
                M2C_ERROR(/* unknown instruction: ldr $v0, ($v1) */);
                M2C_ERROR(/* unknown instruction: sdl $v0, 0x3d7($s1) */);
                M2C_ERROR(/* unknown instruction: sdr $v0, 0x3d0($s1) */);
                M2C_FIELD(arg0, s32 *, 0x3D8) = (s32) M2C_FIELD(&sp10, s32 *, 8);
                var_2_2 = M2C_FIELD(arg0, s32 *, 0x328) + 0x14;
            }
            M2C_FIELD(arg0, s32 *, 0x3CC) = var_2_2;
            M2C_FIELD(arg0, s32 *, 0x3C8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C8) ^ 1);
        }
        if (M2C_FIELD(arg0, s32 *, 0x3C8) != 0) {
            M2C_ERROR(/* unknown instruction: ldl $a3, 0x3d7($s1) */);
            M2C_ERROR(/* unknown instruction: ldr $a3, 0x3d0($s1) */);
            M2C_ERROR(/* unknown instruction: sdl $a3, 0x7($v0) */);
            M2C_ERROR(/* unknown instruction: sdr $a3, ($v0) */);
            M2C_FIELD(&sp30, s32 *, 8) = (s32) M2C_FIELD(arg0, s32 *, 0x3D8);
            var_2_3 = func_001102B8(arg0, &sp30);
        } else {
            M2C_ERROR(/* unknown instruction: ldl $a3, 0x117($s1) */);
            M2C_ERROR(/* unknown instruction: ldr $a3, 0x110($s1) */);
            M2C_ERROR(/* unknown instruction: sdl $a3, 0x7($v0) */);
            M2C_ERROR(/* unknown instruction: sdr $a3, ($v0) */);
            M2C_FIELD(&sp50, s32 *, 8) = (s32) M2C_FIELD(arg0, s32 *, 0x118);
            var_2_3 = func_001102B8(arg0, &sp50);
        }
        if ((var_2_3 != 0) || (M2C_FIELD(arg0, s32 *, 0x100) < M2C_FIELD(arg0, s32 *, 0x328))) {
            func_00113460(arg0);
            func_0010D250(&sp60, arg0, 0x12C);
            M2C_ERROR(/* unknown instruction: ldl $a3, 0x7($s0) */);
            M2C_ERROR(/* unknown instruction: ldr $a3, ($s0) */);
            M2C_ERROR(/* unknown instruction: sdl $a3, 0x7($v0) */);
            M2C_ERROR(/* unknown instruction: sdr $a3, ($v0) */);
            M2C_FIELD(&sp70, s32 *, 8) = (s32) M2C_FIELD(&sp60, s32 *, 8);
            M2C_ERROR(/* unknown instruction: ldl $a2, 0x7($v0) */);
            M2C_ERROR(/* unknown instruction: ldr $a2, ($v0) */);
            M2C_ERROR(/* unknown instruction: sdl $a2, 0x117($s1) */);
            M2C_ERROR(/* unknown instruction: sdr $a2, 0x110($s1) */);
            M2C_FIELD(arg0, s32 *, 0x118) = (s32) M2C_FIELD(&sp70, s32 *, 8);
            M2C_FIELD(arg0, s32 *, 0x100) = (s32) (M2C_FIELD(arg0, s32 *, 0x328) + (func_00153FA8(arg0) % 3U) + 0x12C);
        }
        M2C_ERROR(/* unknown instruction: ldl $v0, 0x7($s2) */);
        M2C_ERROR(/* unknown instruction: ldr $v0, ($s2) */);
        M2C_ERROR(/* unknown instruction: sdl $v0, 0x45f($s1) */);
        var_2 = M2C_ERROR(/* unknown instruction: sdr $v0, 0x458($s1) */);
        M2C_FIELD(arg0, s32 *, 0x460) = (s32) M2C_FIELD(var_18, s32 *, 8);
    }
    return var_2;
}
