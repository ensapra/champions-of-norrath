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

extern M2C_UNK (*D_011B1E18)(void *);

void xmlListPopFront(void *arg0) {
    M2C_UNK (*temp_5)(void *, M2C_UNK);
    void **temp_2;
    void *temp_16;

    temp_2 = M2C_FIELD(arg0, void ***, 0);
    temp_16 = *temp_2;
    if (temp_16 != temp_2) {
        temp_5 = M2C_FIELD(arg0, M2C_UNK (**)(void *, M2C_UNK), 4);
        *M2C_FIELD(temp_16, void ***, 4) = M2C_FIELD(temp_16, void **, 0);
        M2C_FIELD(M2C_FIELD(temp_16, void **, 0), void ***, 4) = (void **) M2C_FIELD(temp_16, void ***, 4);
        if (temp_5 != NULL) {
            temp_5(temp_16, temp_5);
        }
        D_011B1E18(temp_16);
    }
}
