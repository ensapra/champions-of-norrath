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

void *FindIopFunction__FUi(M2C_UNK);                /* extern */
M2C_UNK SetIopFunction__FUii(M2C_UNK, M2C_UNK, void *, M2C_UNK *, s64, s64); /* extern */
extern M2C_UNK D_011EDF08;

void StopChannels__13VISoundDeviceUl(s64 arg1) {
    s64 temp_8;
    s64 temp_9;
    void *temp_2;

    temp_2 = FindIopFunction__FUi(4);
    temp_8 = (s64) ((arg1 & 0xFFFFFF) << 0x20) >> 0x20;
    temp_9 = (s64) (arg1 << 8) >> 0x20;
    if (temp_2 != NULL) {
        M2C_FIELD(temp_2, s32 *, 0) = (s32) (M2C_FIELD(temp_2, s32 *, 0) | temp_8);
        M2C_FIELD(temp_2, s32 *, 4) = (s32) (M2C_FIELD(temp_2, s32 *, 4) | temp_9);
        return;
    }
    M2C_FIELD(&D_011EDF08, s32 *, 4) = (s32) temp_9;
    M2C_FIELD(&D_011EDF08, s32 *, 0) = (s32) temp_8;
    SetIopFunction__FUii(4, 2, temp_2, &D_011EDF08, temp_8, temp_9);
}
