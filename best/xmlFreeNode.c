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

M2C_UNK xmlFreeProp(void *);                        /* extern */
extern M2C_UNK D_0118E580;
extern M2C_UNK D_0118E588;
extern M2C_UNK D_0118E598;
extern M2C_UNK (*D_011B1E18)(void *);

void xmlFreeNode(void *arg0) {
    M2C_UNK (*temp_2)(void *);
    s32 temp_3;
    void *temp_16;
    void *temp_16_2;
    void *temp_18;
    void *temp_4;
    void *temp_4_2;
    void *temp_4_3;
    void *temp_4_4;
    void *temp_4_5;
    void *var_16;
    void *var_2;
    void *var_4;
    void *var_4_2;

    if (arg0 != NULL) {
        temp_3 = M2C_FIELD(arg0, s32 *, 4);
        if (temp_3 != 0xE) {
            var_4 = M2C_FIELD(arg0, void **, 0xC);
            M2C_FIELD(arg0, s32 *, 0x20) = 0;
            M2C_FIELD(arg0, s32 *, 0x14) = 0;
            M2C_FIELD(arg0, s32 *, 0x18) = 0;
            M2C_FIELD(arg0, s32 *, 0x1C) = 0;
            if ((var_4 != NULL) && (temp_3 != 5)) {
                do {
                    temp_16 = M2C_FIELD(var_4, void **, 0x18);
                    xmlFreeNode(var_4);
                    var_4 = temp_16;
                } while (var_4 != NULL);
            }
            var_4_2 = M2C_FIELD(arg0, void **, 0x2C);
            if (var_4_2 != NULL) {
                do {
                    temp_16_2 = M2C_FIELD(var_4_2, void **, 0x18);
                    xmlFreeProp(var_4_2);
                    var_4_2 = temp_16_2;
                } while (var_4_2 != NULL);
            }
            if (M2C_FIELD(arg0, s32 *, 4) != 5) {
                temp_4 = M2C_FIELD(arg0, void **, 0x28);
                if (temp_4 != NULL) {
                    D_011B1E18(temp_4);
                }
            }
            temp_4_2 = M2C_FIELD(arg0, void **, 8);
            if ((temp_4_2 != NULL) && (temp_4_2 != &D_0118E580) && (temp_4_2 != &D_0118E588) && (temp_4_2 != &D_0118E598)) {
                D_011B1E18(temp_4_2);
            }
            temp_4_3 = M2C_FIELD(arg0, void **, 0x30);
            temp_2 = D_011B1E18;
            if (temp_4_3 != NULL) {
                var_16 = temp_4_3;
                var_2 = M2C_FIELD(var_16, void **, 8);
loop_18:
                temp_18 = M2C_FIELD(var_16, void **, 0);
                if (var_2 != NULL) {
                    D_011B1E18(var_2);
                }
                temp_4_4 = M2C_FIELD(var_16, void **, 0xC);
                if (temp_4_4 != NULL) {
                    D_011B1E18(temp_4_4);
                }
                temp_4_5 = var_16;
                var_16 = temp_18;
                D_011B1E18(temp_4_5);
                if (var_16 != NULL) {
                    var_2 = M2C_FIELD(var_16, void **, 8);
                    goto loop_18;
                }
            }
            temp_2(arg0);
        }
    }
}
