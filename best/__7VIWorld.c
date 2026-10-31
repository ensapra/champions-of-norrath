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

M2C_UNK __11VIWorldTree(s32);                       /* extern */
M2C_UNK __t7VIArray1Z13VIWorldRegion(void *);       /* extern */
M2C_UNK __t7VIArray1Z6VIZone(void *);               /* extern */

void __7VIWorld(void *arg0) {
    s32 var_4;
    void *temp_17;
    void *temp_18;
    void *temp_2;
    void *var_3;

    temp_17 = arg0 + 0xC;
    temp_18 = arg0 + 0x24;
    M2C_FIELD(arg0, f32 *, 0) = 0.0f;
    M2C_FIELD(arg0, f32 *, 4) = 0.0f;
    M2C_FIELD(arg0, f32 *, 8) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0xC) = 0.0f;
    M2C_FIELD(temp_17, f32 *, 4) = 0.0f;
    M2C_FIELD(temp_17, f32 *, 8) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0) = 0.0f;
    M2C_FIELD(arg0, f32 *, 4) = 0.0f;
    M2C_FIELD(arg0, f32 *, 8) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0xC) = 0.0f;
    M2C_FIELD(temp_17, f32 *, 4) = 0.0f;
    M2C_FIELD(temp_17, f32 *, 8) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x24) = 0.0f;
    M2C_FIELD(temp_18, f32 *, 4) = 0.0f;
    M2C_FIELD(temp_18, f32 *, 8) = 0.0f;
    __11VIWorldTree(arg0 + 0x34);
    __t7VIArray1Z6VIZone(arg0 + 0x48);
    __t7VIArray1Z13VIWorldRegion(arg0 + 0x50);
    var_3 = arg0 + 0x58;
    var_4 = 0x15;
    do {
        temp_2 = var_3 + 8;
        var_3 += 0x28;
        var_4 -= 1;
        M2C_FIELD(temp_2, f32 *, 0xC) = 0.0f;
        M2C_FIELD(temp_2, f32 *, 0) = 0.0f;
        M2C_FIELD(temp_2, f32 *, 4) = 0.0f;
        M2C_FIELD(temp_2, f32 *, 8) = 0.0f;
    } while (var_4 != -1);
    M2C_FIELD(arg0, f32 *, 8) = -1000.0f;
    M2C_FIELD(arg0, f32 *, 0) = -1000.0f;
    M2C_FIELD(arg0, f32 *, 4) = -1000.0f;
    M2C_FIELD(arg0, s32 *, 0x30) = 4;
    M2C_FIELD(temp_17, f32 *, 8) = 1000.0f;
    M2C_FIELD(arg0, f32 *, 0xC) = 1000.0f;
    M2C_FIELD(temp_17, f32 *, 4) = 1000.0f;
    M2C_FIELD(arg0, s32 *, 0x1C) = 1;
    M2C_FIELD(arg0, f32 *, 0x20) = 2000.0f;
    M2C_FIELD(arg0, s32 *, 0x18) = 1;
    M2C_FIELD(temp_18, f32 *, 8) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x24) = 0.0f;
    M2C_FIELD(temp_18, f32 *, 4) = 0.0f;
}
