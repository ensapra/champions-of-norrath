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

M2C_UNK xmlXPathFreeObject(void *);                 /* extern */
extern M2C_UNK (*D_011B1E18)(void *);

void xmlXPathFreeCompExpr(void *arg0) {
    s32 var_18;
    void *temp_16;
    void *temp_2;
    void *temp_4;
    void *temp_4_2;

    if (arg0 != NULL) {
        var_18 = 0;
        if (M2C_FIELD(arg0, s32 *, 0) > 0) {
loop_3:
            temp_16 = M2C_FIELD(arg0, void **, 8) + (var_18 << 5);
            temp_4 = M2C_FIELD(temp_16, void **, 0x18);
            var_18 += 1;
            if (temp_4 != NULL) {
                if (M2C_FIELD(temp_16, s32 *, 0) != 0xC) {
                    D_011B1E18(temp_4);
                } else {
                    xmlXPathFreeObject(temp_4);
                }
            }
            temp_2 = M2C_FIELD(temp_16, void **, 0x1C);
            if (temp_2 != NULL) {
                D_011B1E18(temp_2);
            }
            if (var_18 < M2C_FIELD(arg0, s32 *, 0)) {
                goto loop_3;
            }
        }
        temp_4_2 = M2C_FIELD(arg0, void **, 8);
        if (temp_4_2 != NULL) {
            D_011B1E18(temp_4_2);
        }
        D_011B1E18(arg0);
    }
}
