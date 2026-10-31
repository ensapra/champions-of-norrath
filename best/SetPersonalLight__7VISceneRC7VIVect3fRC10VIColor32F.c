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

s32 SetPersonalLight__7VISceneRC7VIVect3fRC10VIColor32F(void *arg0, void *arg1, f32 fparg0) {
    void *temp_3;

    temp_3 = arg0 + 0x2A18;
    M2C_FIELD(arg0, f32 *, 0x2A18) = (f32) M2C_FIELD(arg1, f32 *, 0);
    M2C_FIELD(temp_3, f32 *, 4) = (f32) M2C_FIELD(arg1, f32 *, 4);
    M2C_FIELD(temp_3, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0x2A24) = fparg0;
    M2C_ERROR(/* unknown instruction: ldl $v1, 0x7($a2) */);
    M2C_ERROR(/* unknown instruction: ldr $v1, ($a2) */);
    M2C_ERROR(/* unknown instruction: ldl $a1, 0xf($a2) */);
    M2C_ERROR(/* unknown instruction: ldr $a1, 0x8($a2) */);
    M2C_ERROR(/* unknown instruction: sdl $v1, 0x2a2f($a0) */);
    M2C_ERROR(/* unknown instruction: sdr $v1, 0x2a28($a0) */);
    M2C_ERROR(/* unknown instruction: sdl $a1, 0x2a37($a0) */);
    M2C_ERROR(/* unknown instruction: sdr $a1, 0x2a30($a0) */);
    return 0;
}
