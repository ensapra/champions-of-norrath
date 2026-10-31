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

M2C_UNK xmlFreeEnumeration(s32);                    /* extern */
M2C_UNK xmlUnlinkNode();                            /* extern */
extern M2C_UNK (*D_011B1E18)(void *);

void xmlFreeAttribute(void *arg0) {
    s32 temp_4;
    void *temp_16;
    void *temp_4_2;
    void *temp_4_3;
    void *temp_4_4;
    void *temp_4_5;
    void *temp_4_6;

    if (arg0 != NULL) {
        xmlUnlinkNode();
        temp_16 = M2C_FIELD(arg0, void **, 0x34);
        if (temp_16 != NULL) {
            temp_4 = M2C_FIELD(temp_16, s32 *, 0);
            if (temp_4 != 0) {
                xmlFreeEnumeration(temp_4);
            }
            temp_4_2 = M2C_FIELD(temp_16, void **, 4);
            if (temp_4_2 != NULL) {
                D_011B1E18(temp_4_2);
            }
            D_011B1E18(temp_16);
        }
        temp_4_3 = M2C_FIELD(arg0, void **, 0x3C);
        if (temp_4_3 != NULL) {
            D_011B1E18(temp_4_3);
        }
        temp_4_4 = M2C_FIELD(arg0, void **, 8);
        if (temp_4_4 != NULL) {
            D_011B1E18(temp_4_4);
        }
        temp_4_5 = M2C_FIELD(arg0, void **, 0x30);
        if (temp_4_5 != NULL) {
            D_011B1E18(temp_4_5);
        }
        temp_4_6 = M2C_FIELD(arg0, void **, 0x38);
        if (temp_4_6 != NULL) {
            D_011B1E18(temp_4_6);
        }
        D_011B1E18(arg0);
    }
}
