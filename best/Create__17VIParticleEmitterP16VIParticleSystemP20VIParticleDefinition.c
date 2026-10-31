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

M2C_UNK AddTail__7VILListP7VILNode(s32, void *, f32 *, f32, f32, f32); /* extern */
M2C_UNK Destroy__17VIParticleEmitter();             /* extern */
M2C_UNK Identity__10VIMatrix33(void *);             /* extern */
M2C_UNK Identity__10VIMatrix44(void *);             /* extern */
M2C_UNK RecomputeStaticBBox__17VIParticleEmitter(void *, void *, void *, void *, void *, void *, void *, void *); /* extern */

s32 Create__17VIParticleEmitterP16VIParticleSystemP20VIParticleDefinition(void *arg0, s32 arg1, void *arg2) {
    f32 sp10;
    f32 sp14;
    f32 sp18;
    s32 var_6;
    void *temp_10;
    void *temp_11;
    void *temp_12;
    void *temp_13;
    void *temp_14;
    void *temp_15;
    void *temp_16;
    void *temp_2;
    void *temp_2_2;
    void *temp_2_3;
    void *temp_3;
    void *temp_3_2;
    void *temp_3_3;
    void *temp_3_4;
    void *temp_4;
    void *temp_5;
    void *temp_6;
    void *temp_7;
    void *temp_8;
    void *temp_9;

    Destroy__17VIParticleEmitter();
    M2C_FIELD(arg0, s32 *, 0x50) = arg1;
    temp_16 = arg0 + 0xBC;
    M2C_FIELD(arg0, void **, 0x54) = arg2;
    M2C_FIELD(arg0, s32 *, 0x390) = 0;
    M2C_FIELD(arg0, s32 *, 0xAC) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    Identity__10VIMatrix33(arg0 + 0x28);
    Identity__10VIMatrix44(arg0 + 0x60);
    temp_2 = arg0 + 0x10;
    temp_3 = arg0 + 0x1C;
    sp10 = 0.0f;
    sp14 = 0.0f;
    sp18 = 0.0f;
    M2C_FIELD(temp_2, f32 *, 8) = 0.0f;
    M2C_FIELD(arg0, s32 *, 0x3D4) = 0;
    M2C_FIELD(arg0, s32 *, 0x3D8) = 0;
    M2C_FIELD(arg0, f32 *, 0x10) = 0.0f;
    M2C_FIELD(temp_2, f32 *, 4) = 0.0f;
    M2C_FIELD(temp_3, f32 *, 8) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) sp10;
    M2C_FIELD(temp_3, f32 *, 4) = 0.0f;
    AddTail__7VILListP7VILNode(M2C_FIELD(arg0, s32 *, 0x50) + 0x34, arg0, &sp10, 0.0f, 0.0f, 0.0f);
    temp_15 = M2C_FIELD(arg0, void **, 0x54);
    temp_3_2 = arg0 + 0xD8;
    temp_2_2 = temp_15 + 0x1C;
    var_6 = 0x1F;
    M2C_FIELD(arg0, f32 *, 0xBC) = (f32) M2C_FIELD(temp_15, f32 *, 0);
    M2C_FIELD(temp_16, f32 *, 4) = (f32) M2C_FIELD(temp_15, f32 *, 4);
    M2C_FIELD(temp_16, f32 *, 8) = (f32) M2C_FIELD(temp_15, f32 *, 8);
    M2C_FIELD(temp_16, f32 *, 0xC) = (f32) M2C_FIELD(temp_15, f32 *, 0xC);
    M2C_FIELD(temp_16, f32 *, 0x10) = (f32) M2C_FIELD(temp_15, f32 *, 0x10);
    M2C_FIELD(temp_16, f32 *, 0x14) = (f32) M2C_FIELD(temp_15, f32 *, 0x14);
    M2C_FIELD(temp_16, f32 *, 0x18) = (f32) M2C_FIELD(temp_15, f32 *, 0x18);
    M2C_FIELD(arg0, f32 *, 0xD8) = (f32) M2C_FIELD(temp_15, f32 *, 0x1C);
    M2C_FIELD(temp_3_2, f32 *, 4) = (f32) M2C_FIELD(temp_2_2, f32 *, 4);
    M2C_FIELD(temp_3_2, f32 *, 8) = (f32) M2C_FIELD(temp_2_2, f32 *, 8);
    M2C_FIELD(temp_16, f32 *, 0x28) = (f32) M2C_FIELD(temp_15, f32 *, 0x28);
    M2C_FIELD(temp_16, f32 *, 0x2C) = (f32) M2C_FIELD(temp_15, f32 *, 0x2C);
    M2C_FIELD(temp_16, f32 *, 0x30) = (f32) M2C_FIELD(temp_15, f32 *, 0x30);
    M2C_FIELD(temp_16, f32 *, 0x34) = (f32) M2C_FIELD(temp_15, f32 *, 0x34);
    do {
        M2C_ERROR(/* unknown instruction: ldl $v0, 0x7($a0) */);
        M2C_ERROR(/* unknown instruction: ldr $v0, ($a0) */);
        M2C_ERROR(/* unknown instruction: ldl $v1, 0xf($a0) */);
        M2C_ERROR(/* unknown instruction: ldr $v1, 0x8($a0) */);
        M2C_ERROR(/* unknown instruction: sdl $v0, 0x7($a1) */);
        M2C_ERROR(/* unknown instruction: sdr $v0, ($a1) */);
        M2C_ERROR(/* unknown instruction: sdl $v1, 0xf($a1) */);
        var_6 -= 1;
        M2C_ERROR(/* unknown instruction: sdr $v1, 0x8($a1) */);
    } while (var_6 != -1);
    M2C_ERROR(/* unknown instruction: ldl $v0, 0x23f($t3) */);
    M2C_ERROR(/* unknown instruction: ldr $v0, 0x238($t3) */);
    M2C_ERROR(/* unknown instruction: ldl $v1, 0x247($t3) */);
    M2C_ERROR(/* unknown instruction: ldr $v1, 0x240($t3) */);
    M2C_ERROR(/* unknown instruction: sdl $v0, 0x23f($s0) */);
    M2C_ERROR(/* unknown instruction: sdr $v0, 0x238($s0) */);
    M2C_ERROR(/* unknown instruction: sdl $v1, 0x247($s0) */);
    M2C_ERROR(/* unknown instruction: sdr $v1, 0x240($s0) */);
    temp_2_3 = temp_15 + 0x264;
    temp_3_3 = temp_16 + 0x264;
    temp_6 = temp_15 + 0x270;
    M2C_ERROR(/* unknown instruction: ldl $a3, 0x24f($t3) */);
    M2C_ERROR(/* unknown instruction: ldr $a3, 0x248($t3) */);
    M2C_ERROR(/* unknown instruction: ldl $a4, 0x257($t3) */);
    M2C_ERROR(/* unknown instruction: ldr $a4, 0x250($t3) */);
    M2C_ERROR(/* unknown instruction: sdl $a3, 0x24f($s0) */);
    M2C_ERROR(/* unknown instruction: sdr $a3, 0x248($s0) */);
    M2C_ERROR(/* unknown instruction: sdl $a4, 0x257($s0) */);
    M2C_ERROR(/* unknown instruction: sdr $a4, 0x250($s0) */);
    temp_7 = temp_15 + 0x27C;
    temp_5 = temp_16 + 0x270;
    temp_8 = temp_16 + 0x27C;
    temp_9 = temp_15 + 0x288;
    temp_10 = temp_16 + 0x288;
    temp_11 = temp_15 + 0x294;
    M2C_FIELD(temp_16, f32 *, 0x258) = (f32) M2C_FIELD(temp_15, f32 *, 0x258);
    temp_12 = temp_16 + 0x294;
    temp_13 = temp_15 + 0x2A0;
    temp_14 = temp_16 + 0x2A0;
    M2C_FIELD(temp_16, f32 *, 0x25C) = (f32) M2C_FIELD(temp_15, f32 *, 0x25C);
    M2C_FIELD(temp_16, f32 *, 0x260) = (f32) M2C_FIELD(temp_15, f32 *, 0x260);
    M2C_FIELD(temp_16, f32 *, 0x264) = (f32) M2C_FIELD(temp_15, f32 *, 0x264);
    M2C_FIELD(temp_3_3, f32 *, 4) = (f32) M2C_FIELD(temp_2_3, f32 *, 4);
    M2C_FIELD(temp_3_3, f32 *, 8) = (f32) M2C_FIELD(temp_2_3, f32 *, 8);
    M2C_FIELD(temp_16, f32 *, 0x270) = (f32) M2C_FIELD(temp_15, f32 *, 0x270);
    M2C_FIELD(temp_5, f32 *, 4) = (f32) M2C_FIELD(temp_6, f32 *, 4);
    M2C_FIELD(temp_5, f32 *, 8) = (f32) M2C_FIELD(temp_6, f32 *, 8);
    M2C_FIELD(temp_16, f32 *, 0x27C) = (f32) M2C_FIELD(temp_15, f32 *, 0x27C);
    M2C_FIELD(temp_8, f32 *, 4) = (f32) M2C_FIELD(temp_7, f32 *, 4);
    M2C_FIELD(temp_8, f32 *, 8) = (f32) M2C_FIELD(temp_7, f32 *, 8);
    M2C_FIELD(temp_16, f32 *, 0x288) = (f32) M2C_FIELD(temp_15, f32 *, 0x288);
    M2C_FIELD(temp_10, f32 *, 4) = (f32) M2C_FIELD(temp_9, f32 *, 4);
    M2C_FIELD(temp_10, f32 *, 8) = (f32) M2C_FIELD(temp_9, f32 *, 8);
    M2C_FIELD(temp_16, f32 *, 0x294) = (f32) M2C_FIELD(temp_15, f32 *, 0x294);
    M2C_FIELD(temp_16, s32 *, 0x2AC) = (s32) M2C_FIELD(temp_15, s32 *, 0x2AC);
    M2C_FIELD(temp_12, f32 *, 4) = (f32) M2C_FIELD(temp_11, f32 *, 4);
    M2C_FIELD(temp_16, s32 *, 0x2B0) = (s32) M2C_FIELD(temp_15, s32 *, 0x2B0);
    M2C_FIELD(temp_12, f32 *, 8) = (f32) M2C_FIELD(temp_11, f32 *, 8);
    M2C_FIELD(temp_16, s32 *, 0x2B4) = (s32) M2C_FIELD(temp_15, s32 *, 0x2B4);
    M2C_FIELD(temp_16, f32 *, 0x2A0) = (f32) M2C_FIELD(temp_15, f32 *, 0x2A0);
    M2C_FIELD(temp_16, s32 *, 0x2B8) = (s32) M2C_FIELD(temp_15, s32 *, 0x2B8);
    M2C_FIELD(temp_14, f32 *, 4) = (f32) M2C_FIELD(temp_13, f32 *, 4);
    M2C_FIELD(temp_16, s32 *, 0x2BC) = (s32) M2C_FIELD(temp_15, s32 *, 0x2BC);
    M2C_FIELD(temp_14, f32 *, 8) = (f32) M2C_FIELD(temp_13, f32 *, 8);
    M2C_FIELD(temp_16, s32 *, 0x2C4) = (s32) M2C_FIELD(temp_15, s32 *, 0x2C4);
    M2C_FIELD(temp_16, f32 *, 0x2C8) = (f32) M2C_FIELD(temp_15, f32 *, 0x2C8);
    M2C_FIELD(temp_16, s32 *, 0x2C0) = (s32) M2C_FIELD(temp_15, s32 *, 0x2C0);
    M2C_FIELD(temp_16, f32 *, 0x2D0) = (f32) M2C_FIELD(temp_15, f32 *, 0x2D0);
    M2C_FIELD(temp_16, s32 *, 0x2CC) = (s32) M2C_FIELD(temp_15, s32 *, 0x2CC);
    RecomputeStaticBBox__17VIParticleEmitter(arg0, temp_5, temp_6, temp_7, temp_8, temp_9, temp_10, temp_11);
    temp_3_4 = arg0 + 0x3AC;
    temp_4 = arg0 + 0x3B8;
    M2C_FIELD(temp_3_4, f32 *, 8) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x3AC) = 0.0f;
    M2C_FIELD(temp_3_4, f32 *, 4) = 0.0f;
    M2C_FIELD(temp_4, f32 *, 8) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x3B8) = 0.0f;
    M2C_FIELD(temp_4, f32 *, 4) = 0.0f;
    return 0;
}
