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

extern s32 D_011B1AA0;
extern s32 D_011B1AA4;
extern M2C_UNK D_011B1AB8;
extern M2C_UNK xmlFileClose;
extern M2C_UNK xmlFileMatch;
extern M2C_UNK xmlFileOpen;
extern M2C_UNK xmlFileRead;

void xmlRegisterDefaultInputCallbacks(void) {
    s32 temp_7;
    void *temp_5;

    if (D_011B1AA4 == 0) {
        temp_7 = D_011B1AA0 * 0x10;
        if (D_011B1AA0 < 0xF) {
            D_011B1AA0 += 1;
            temp_5 = &D_011B1AB8 + temp_7;
            *(temp_7 + &D_011B1AB8) = &xmlFileMatch;
            M2C_FIELD(temp_5, M2C_UNK **, 4) = &xmlFileOpen;
            M2C_FIELD(temp_5, M2C_UNK **, 8) = &xmlFileRead;
            M2C_FIELD(temp_5, M2C_UNK **, 0xC) = &xmlFileClose;
        }
        D_011B1AA4 = 1;
    }
}
