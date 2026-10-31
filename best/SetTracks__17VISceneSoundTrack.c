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

s32 SetTracks__17VISceneSoundTrack(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xC0) = 0x42E6CF3A;
    M2C_FIELD(arg0, s32 *, 0xC4) = 0x72F08216;
    M2C_FIELD(arg0, s32 *, 0xC8) = 0x1ADCC066;
    M2C_FIELD(arg0, s32 *, 0xCC) = 0x68B480A2;
    M2C_FIELD(arg0, s32 *, 0xD0) = 0x9E562B5A;
    M2C_FIELD(arg0, s32 *, 0xD4) = 0xCEF71F36;
    M2C_FIELD(arg0, s32 *, 0xD8) = 0x0CE4AB35;
    M2C_FIELD(arg0, s32 *, 0xDC) = 0xFD6FEEE9;
    M2C_FIELD(arg0, s32 *, 0x90) = 0x9A5DBACC;
    M2C_FIELD(arg0, s32 *, 0x94) = 0xA5C60038;
    M2C_FIELD(arg0, s32 *, 0x98) = 0xEBF2EEC3;
    M2C_FIELD(arg0, s32 *, 0x9C) = 0x909E78E7;
    M2C_FIELD(arg0, s32 *, 0xA0) = 0x92C9A8CE;
    M2C_FIELD(arg0, s32 *, 0xA4) = 0xA0DBE44A;
    M2C_FIELD(arg0, s32 *, 0xA8) = 0xB9422F46;
    M2C_FIELD(arg0, s32 *, 0xAC) = 0x2FEB20F5;
    M2C_FIELD(arg0, s32 *, 0xB0) = 0x864A0682;
    M2C_FIELD(arg0, s32 *, 0xB4) = 0x656F64E9;
    M2C_FIELD(arg0, s32 *, 0xB8) = 0xDB5AA9FB;
    M2C_FIELD(arg0, s32 *, 0xBC) = 0x2143B5DF;
    M2C_FIELD(arg0, s32 *, 0x88) = 0;
    M2C_FIELD(arg0, s32 *, 0x8C) = 0;
    return 0;
}
