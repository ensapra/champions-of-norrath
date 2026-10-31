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

M2C_UNK RenderBoltVertices__11VILightningR8VIRasterP7VIVect3i(void *, s32, void *, s32); /* extern */
M2C_UNK SetMaterial__8VIRasteri(s32, s32);          /* extern */
extern s32 D_0118F2B4;

void Render__11VILightningR8VIRaster(void *arg0, s32 arg1) {
    s32 temp_4;
    s32 var_19;
    s32 var_20;
    s32 var_20_2;
    void *temp_4_2;
    void *temp_6;
    void *var_16;
    void *var_3;
    void *var_4;
    void *var_5;
    void *var_6;
    void *var_6_2;

    SetMaterial__8VIRasteri(arg1, D_0118F2B4);
    if (M2C_FIELD(arg0, s32 *, 0x18CC) == 0) {
        temp_4 = M2C_FIELD(arg0, s32 *, 0x18D4) + 1;
        M2C_FIELD(arg0, s32 *, 0x18CC) = 0x1E;
        M2C_FIELD(arg0, s32 *, 0x18D4) = (s32) ((temp_4 < 4) ? temp_4 : 3);
        M2C_FIELD(arg0, s32 *, 0x18D0) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0x18D0) + 1) % 3);
    }
    temp_4_2 = (M2C_FIELD(arg0, s32 *, 0x18D0) * 0x334) + arg0;
    M2C_FIELD(temp_4_2, s32 *, 0x18D8) = (s32) M2C_FIELD(arg0, s32 *, 0x64);
    var_20 = 0;
    if (M2C_FIELD(arg0, s32 *, 0x64) > 0) {
        var_6 = temp_4_2 + 0x18DC;
        var_5 = arg0;
        do {
            var_3 = var_5 + 0x574;
            var_4 = var_6;
            if (((s32) var_3 | (s32) var_6) & 7) {
                do {
                    M2C_ERROR(/* unknown instruction: ldl $a3, 0x7($v1) */);
                    M2C_ERROR(/* unknown instruction: ldr $a3, ($v1) */);
                    M2C_ERROR(/* unknown instruction: ldl $a4, 0xf($v1) */);
                    M2C_ERROR(/* unknown instruction: ldr $a4, 0x8($v1) */);
                    M2C_ERROR(/* unknown instruction: ldl $a5, 0x17($v1) */);
                    M2C_ERROR(/* unknown instruction: ldr $a5, 0x10($v1) */);
                    M2C_ERROR(/* unknown instruction: ldl $a6, 0x1f($v1) */);
                    M2C_ERROR(/* unknown instruction: ldr $a6, 0x18($v1) */);
                    M2C_ERROR(/* unknown instruction: sdl $a3, 0x7($a0) */);
                    M2C_ERROR(/* unknown instruction: sdr $a3, ($a0) */);
                    M2C_ERROR(/* unknown instruction: sdl $a4, 0xf($a0) */);
                    M2C_ERROR(/* unknown instruction: sdr $a4, 0x8($a0) */);
                    M2C_ERROR(/* unknown instruction: sdl $a5, 0x17($a0) */);
                    M2C_ERROR(/* unknown instruction: sdr $a5, 0x10($a0) */);
                    M2C_ERROR(/* unknown instruction: sdl $a6, 0x1f($a0) */);
                    M2C_ERROR(/* unknown instruction: sdr $a6, 0x18($a0) */);
                    var_3 += 0x20;
                    var_4 += 0x20;
                } while (var_3 != (var_5 + 0x634));
            } else {
                do {
                    M2C_FIELD(var_4, s64 *, 0) = (s64) M2C_FIELD(var_3, s64 *, 0);
                    M2C_FIELD(var_4, s64 *, 8) = (s64) M2C_FIELD(var_3, s64 *, 8);
                    M2C_FIELD(var_4, s64 *, 0x10) = (s64) M2C_FIELD(var_3, s64 *, 0x10);
                    M2C_FIELD(var_4, s64 *, 0x18) = (s64) M2C_FIELD(var_3, s64 *, 0x18);
                    var_3 += 0x20;
                    var_4 += 0x20;
                } while (var_3 != (var_5 + 0x634));
            }
            M2C_ERROR(/* unknown instruction: ldl $v0, 0x7($v1) */);
            M2C_ERROR(/* unknown instruction: ldr $v0, ($v1) */);
            M2C_ERROR(/* unknown instruction: sdl $v0, 0x7($a0) */);
            M2C_ERROR(/* unknown instruction: sdr $v0, ($a0) */);
            var_20 += 1;
            var_5 += 0x610;
            M2C_FIELD(var_4, s32 *, 8) = (s32) M2C_FIELD(var_3, s32 *, 8);
            var_6 += 0xCC;
        } while (var_20 < M2C_FIELD(arg0, s32 *, 0x64));
    }
    var_20_2 = 0;
    if (M2C_FIELD(arg0, s32 *, 0x18D4) > 0) {
        do {
            temp_6 = (((s32) ((M2C_FIELD(arg0, s32 *, 0x18D0) - var_20_2) + 3) % 3) * 0x334) + arg0;
            var_19 = 0;
            if (M2C_FIELD(temp_6, s32 *, 0x18D8) > 0) {
                var_16 = temp_6 + 0x18DC;
                var_6_2 = var_16;
                do {
                    var_16 += 0xCC;
                    var_19 += 1;
                    RenderBoltVertices__11VILightningR8VIRasterP7VIVect3i(arg0, arg1, var_6_2, 3 - var_20_2);
                    var_6_2 = var_16;
                } while (var_19 < M2C_FIELD(temp_6, s32 *, 0x18D8));
            }
            var_20_2 += 1;
        } while (var_20_2 < M2C_FIELD(arg0, s32 *, 0x18D4));
    }
}
