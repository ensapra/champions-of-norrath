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

void *func_001441B8(M2C_UNK);                       /* extern */
M2C_UNK func_00194498(void *, void *);              /* extern */
M2C_UNK ovl_ntgui2_func_0013D230(void *, s32, void *); /* extern */
extern M2C_UNK D_00449310;
extern M2C_UNK D_0044D498;

void *func_00128978(void *arg0) {
    s32 temp_5;
    s32 var_5;
    u8 *var_3_2;
    u8 *var_4;
    u8 temp_2_2;
    void *temp_2;
    void *temp_6;
    void *var_3;

    temp_2 = func_001441B8(0x4A8);
    if (temp_2 != NULL) {
        M2C_FIELD(temp_2, M2C_UNK **, 0x48) = &D_0044D498;
        func_00194498(temp_2, arg0);
        func_00194498(temp_2 + 4, arg0 + 4);
        func_00194498(temp_2 + 8, arg0 + 8);
        temp_6 = temp_2 + 0x80;
        M2C_FIELD(temp_2, s32 *, 0xC) = (s32) M2C_FIELD(arg0, s32 *, 0xC);
        M2C_ERROR(/* unknown instruction: ldl $v0, 0x17($s1) */);
        M2C_ERROR(/* unknown instruction: ldr $v0, 0x10($s1) */);
        M2C_ERROR(/* unknown instruction: sdl $v0, 0x17($s0) */);
        M2C_ERROR(/* unknown instruction: sdr $v0, 0x10($s0) */);
        M2C_FIELD(temp_2, s32 *, 0x18) = (s32) M2C_FIELD(arg0, s32 *, 0x18);
        M2C_FIELD(temp_2, f32 *, 0x1C) = (f32) M2C_FIELD(arg0, f32 *, 0x1C);
        M2C_FIELD(temp_2, s32 *, 0x24) = (s32) M2C_FIELD(arg0, s32 *, 0x24);
        M2C_FIELD(temp_2, f32 *, 0x20) = (f32) M2C_FIELD(arg0, f32 *, 0x20);
        M2C_FIELD(temp_2, u8 *, 0x28) = (u8) M2C_FIELD(arg0, u8 *, 0x28);
        M2C_FIELD(temp_2, M2C_UNK **, 0x48) = &D_00449310;
        M2C_FIELD(temp_2, u8 *, 0x29) = (u8) M2C_FIELD(arg0, u8 *, 0x29);
        M2C_FIELD(temp_2, f32 *, 0x30) = (f32) M2C_FIELD(arg0, f32 *, 0x30);
        M2C_FIELD(temp_2, f32 *, 0x3C) = (f32) M2C_FIELD(arg0, f32 *, 0x3C);
        M2C_FIELD(temp_2, s32 *, 0x2C) = (s32) M2C_FIELD(arg0, s32 *, 0x2C);
        M2C_FIELD(temp_2, f32 *, 0x40) = (f32) M2C_FIELD(arg0, f32 *, 0x40);
        M2C_FIELD(temp_2, s32 *, 0x34) = (s32) M2C_FIELD(arg0, s32 *, 0x34);
        M2C_FIELD(temp_2, u16 *, 0x38) = (u16) M2C_FIELD(arg0, u16 *, 0x38);
        M2C_FIELD(temp_2, f32 *, 0x4C) = (f32) M2C_FIELD(arg0, f32 *, 0x4C);
        M2C_FIELD(temp_2, s32 *, 0x44) = (s32) M2C_FIELD(arg0, s32 *, 0x44);
        M2C_FIELD(temp_2, f32 *, 0x50) = (f32) M2C_FIELD(arg0, f32 *, 0x50);
        M2C_FIELD(temp_2, f32 *, 0x54) = (f32) M2C_FIELD(arg0, f32 *, 0x54);
        M2C_FIELD(temp_2, f32 *, 0x58) = (f32) M2C_FIELD(arg0, f32 *, 0x58);
        M2C_FIELD(temp_2, f32 *, 0x5C) = (f32) M2C_FIELD(arg0, f32 *, 0x5C);
        M2C_FIELD(temp_2, f32 *, 0x60) = (f32) M2C_FIELD(arg0, f32 *, 0x60);
        M2C_FIELD(temp_2, f32 *, 0x64) = (f32) M2C_FIELD(arg0, f32 *, 0x64);
        M2C_FIELD(temp_2, f32 *, 0x68) = (f32) M2C_FIELD(arg0, f32 *, 0x68);
        M2C_FIELD(temp_2, u8 *, 0x6C) = (u8) M2C_FIELD(arg0, u8 *, 0x6C);
        M2C_FIELD(temp_2, u8 *, 0x6D) = (u8) M2C_FIELD(arg0, u8 *, 0x6D);
        M2C_FIELD(temp_2, u8 *, 0x6E) = (u8) M2C_FIELD(arg0, u8 *, 0x6E);
        M2C_FIELD(temp_2, u8 *, 0x6F) = (u8) M2C_FIELD(arg0, u8 *, 0x6F);
        M2C_FIELD(temp_2, u8 *, 0x70) = (u8) M2C_FIELD(arg0, u8 *, 0x70);
        M2C_FIELD(temp_2, u16 *, 0x72) = (u16) M2C_FIELD(arg0, u16 *, 0x72);
        M2C_FIELD(temp_2, s32 *, 0x7C) = (s32) M2C_FIELD(arg0, s32 *, 0x7C);
        M2C_FIELD(temp_2, u16 *, 0x74) = (u16) M2C_FIELD(arg0, u16 *, 0x74);
        M2C_FIELD(temp_2, u16 *, 0x76) = (u16) M2C_FIELD(arg0, u16 *, 0x76);
        M2C_FIELD(temp_2, u16 *, 0x78) = (u16) M2C_FIELD(arg0, u16 *, 0x78);
        M2C_FIELD(temp_2, u16 *, 0x7A) = (u16) M2C_FIELD(arg0, u16 *, 0x7A);
        M2C_ERROR(/* unknown instruction: ldl $v0, 0x87($s1) */);
        M2C_ERROR(/* unknown instruction: ldr $v0, 0x80($s1) */);
        M2C_ERROR(/* unknown instruction: ldl $v1, 0x8f($s1) */);
        M2C_ERROR(/* unknown instruction: ldr $v1, 0x88($s1) */);
        M2C_ERROR(/* unknown instruction: ldl $a0, 0x97($s1) */);
        M2C_ERROR(/* unknown instruction: ldr $a0, 0x90($s1) */);
        M2C_ERROR(/* unknown instruction: ldl $a1, 0x9f($s1) */);
        M2C_ERROR(/* unknown instruction: ldr $a1, 0x98($s1) */);
        M2C_ERROR(/* unknown instruction: sdl $v0, 0x7($a2) */);
        M2C_ERROR(/* unknown instruction: sdr $v0, ($a2) */);
        M2C_ERROR(/* unknown instruction: sdl $v1, 0xf($a2) */);
        M2C_ERROR(/* unknown instruction: sdr $v1, 0x8($a2) */);
        M2C_ERROR(/* unknown instruction: sdl $a0, 0x17($a2) */);
        M2C_ERROR(/* unknown instruction: sdr $a0, 0x10($a2) */);
        M2C_ERROR(/* unknown instruction: sdl $a1, 0x1f($a2) */);
        M2C_ERROR(/* unknown instruction: sdr $a1, 0x18($a2) */);
        M2C_ERROR(/* unknown instruction: ldl $v0, 0xa7($s1) */);
        M2C_ERROR(/* unknown instruction: ldr $v0, 0xa0($s1) */);
        M2C_ERROR(/* unknown instruction: ldl $v1, 0xaf($s1) */);
        M2C_ERROR(/* unknown instruction: ldr $v1, 0xa8($s1) */);
        M2C_ERROR(/* unknown instruction: ldl $a0, 0xb7($s1) */);
        M2C_ERROR(/* unknown instruction: ldr $a0, 0xb0($s1) */);
        temp_5 = M2C_FIELD(arg0, s32 *, 0xB8);
        M2C_ERROR(/* unknown instruction: sdl $v0, 0x27($a2) */);
        M2C_ERROR(/* unknown instruction: sdr $v0, 0x20($a2) */);
        M2C_ERROR(/* unknown instruction: sdl $v1, 0x2f($a2) */);
        M2C_ERROR(/* unknown instruction: sdr $v1, 0x28($a2) */);
        M2C_ERROR(/* unknown instruction: sdl $a0, 0x37($a2) */);
        M2C_ERROR(/* unknown instruction: sdr $a0, 0x30($a2) */);
        M2C_FIELD(temp_6, s32 *, 0x38) = temp_5;
        if ((M2C_FIELD(temp_2, s32 *, 0x80) != 0) || (var_4 = temp_2 + 0xBC, (M2C_FIELD(temp_6, s32 *, 4) != 0))) {
            M2C_FIELD(temp_2, s32 *, 0x80) = 0;
            M2C_FIELD(temp_6, s32 *, 4) = 0;
            ovl_ntgui2_func_0013D230(temp_6, temp_5, temp_6);
            var_4 = temp_2 + 0xBC;
        }
        var_5 = 0x3E7;
        var_3_2 = arg0 + 0xBC;
        do {
            temp_2_2 = *var_3_2;
            var_3_2 += 1;
            var_5 -= 1;
            *var_4 = temp_2_2;
            var_4 += 1;
        } while (var_5 != -1);
        var_3 = temp_2;
        M2C_FIELD(temp_2, s32 *, 0x4A4) = (s32) M2C_FIELD(arg0, s32 *, 0x4A4);
    } else {
        var_3 = NULL;
    }
    return var_3;
}
