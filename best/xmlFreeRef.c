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

void *xmlLinkGetData();                             /* extern */
extern M2C_UNK (*D_011B1E18)(void *);

void xmlFreeRef(void) {
    void *temp_2;
    void *temp_2_2;

    temp_2 = xmlLinkGetData();
    if (temp_2 != NULL) {
        temp_2_2 = M2C_FIELD(temp_2, void **, 4);
        if (temp_2_2 != NULL) {
            D_011B1E18(temp_2_2);
        }
        D_011B1E18(temp_2);
    }
}
