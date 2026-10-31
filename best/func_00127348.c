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

M2C_UNK func_00126F58(void *, s64, s64, s64, s64);  /* extern */
M2C_UNK func_00128A48();                            /* extern */
M2C_UNK func_0013DE28(void *);                      /* extern */
extern M2C_UNK II__Q24Base3MD5iiiiiii;
extern M2C_UNK helpMessageFrame__Fv;

void func_00127348(s32 arg0) {
    s32 temp_2;
    s32 temp_2_2;
    s32 var_4;
    s64 var_5;
    s64 var_6;
    s64 var_7;
    s64 var_8;
    void *temp_16;
    void *var_3;

    var_4 = arg0;
    temp_16 = &II__Q24Base3MD5iiiiiii + 0x60;
    var_3 = temp_16;
    if ((var_4 | (s32) var_3) & 7) {
        temp_2 = var_4 + 0x1320;
        do {
            M2C_ERROR(/* unknown instruction: ldl $a1, 0x7($a0) */);
            M2C_ERROR(/* unknown instruction: ldr $a1, ($a0) */);
            M2C_ERROR(/* unknown instruction: ldl $a2, 0xf($a0) */);
            M2C_ERROR(/* unknown instruction: ldr $a2, 0x8($a0) */);
            M2C_ERROR(/* unknown instruction: ldl $a3, 0x17($a0) */);
            M2C_ERROR(/* unknown instruction: ldr $a3, 0x10($a0) */);
            M2C_ERROR(/* unknown instruction: ldl $a4, 0x1f($a0) */);
            M2C_ERROR(/* unknown instruction: ldr $a4, 0x18($a0) */);
            M2C_ERROR(/* unknown instruction: sdl $a1, 0x7($v1) */);
            var_5 = M2C_ERROR(/* unknown instruction: sdr $a1, ($v1) */);
            M2C_ERROR(/* unknown instruction: sdl $a2, 0xf($v1) */);
            var_6 = M2C_ERROR(/* unknown instruction: sdr $a2, 0x8($v1) */);
            M2C_ERROR(/* unknown instruction: sdl $a3, 0x17($v1) */);
            var_7 = M2C_ERROR(/* unknown instruction: sdr $a3, 0x10($v1) */);
            M2C_ERROR(/* unknown instruction: sdl $a4, 0x1f($v1) */);
            var_8 = M2C_ERROR(/* unknown instruction: sdr $a4, 0x18($v1) */);
            var_4 += 0x20;
        } while (var_4 != temp_2);
    } else {
        temp_2_2 = var_4 + 0x1320;
        do {
            var_5 = M2C_FIELD(var_4, s64 *, 0);
            var_6 = M2C_FIELD(var_4, s64 *, 8);
            var_7 = M2C_FIELD(var_4, s64 *, 0x10);
            var_8 = M2C_FIELD(var_4, s64 *, 0x18);
            M2C_FIELD(var_3, s64 *, 0) = var_5;
            M2C_FIELD(var_3, s64 *, 8) = var_6;
            M2C_FIELD(var_3, s64 *, 0x10) = var_7;
            M2C_FIELD(var_3, s64 *, 0x18) = var_8;
            var_4 += 0x20;
            var_3 += 0x20;
        } while (var_4 != temp_2_2);
    }
    func_00126F58((void *) var_4, var_5, var_6, var_7, var_8);
    func_0013DE28(temp_16);
    if (M2C_FIELD(&helpMessageFrame__Fv, s32 *, 0x224) != 0) {
        func_00128A48();
    }
}
