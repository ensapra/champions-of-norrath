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

M2C_UNK changeInputVolume(M2C_UNK);                 /* extern */
M2C_UNK sceSdRemote(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32); /* extern */

void audioDecStart(void *arg0) {
    s32 temp_8;
    s32 temp_9;

    changeInputVolume(0x7FFF);
    temp_8 = M2C_FIELD(arg0, s32 *, 0x44);
    temp_9 = M2C_FIELD(arg0, s32 *, 0x48);
    sceSdRemote(1, 0x80E0, 0, 0x13, temp_8, ((s32) ((temp_9 < 0) ? (temp_9 + 0x3FF) : temp_9) >> 0xA) << 0xA, temp_8 + M2C_FIELD(arg0, s32 *, 0x50));
    M2C_FIELD(arg0, s32 *, 0) = 2;
}
