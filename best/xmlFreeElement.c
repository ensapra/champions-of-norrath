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

M2C_UNK xmlFreeElementContent(s32);                 /* extern */
M2C_UNK xmlUnlinkNode();                            /* extern */
extern M2C_UNK (*D_0118EDD0)(s32, M2C_UNK *, u32, M2C_UNK);
extern s32 D_0118EDD4;
extern M2C_UNK (*D_011B1E18)(void *);
extern M2C_UNK D_011CBC60;

void xmlFreeElement(void *arg0) {
    s32 temp_4;
    s32 temp_4_2;
    u32 temp_6;
    void *temp_16;
    void *temp_4_3;
    void *temp_4_4;
    void *temp_4_5;

    if (arg0 != NULL) {
        xmlUnlinkNode();
        temp_16 = M2C_FIELD(arg0, void **, 0x28);
        if (temp_16 == NULL) {

        } else {
            temp_6 = M2C_FIELD(temp_16, u32 *, 0);
            if (temp_6 < 5U) {
                if (temp_6 != 0) {
                    temp_4 = M2C_FIELD(temp_16, s32 *, 0xC);
                    if (temp_4 != 0) {
                        xmlFreeElementContent(temp_4);
                    }
                    temp_4_2 = M2C_FIELD(temp_16, s32 *, 0x10);
                    if (temp_4_2 != 0) {
                        xmlFreeElementContent(temp_4_2);
                    }
                    temp_4_3 = M2C_FIELD(temp_16, void **, 8);
                    if (temp_4_3 != NULL) {
                        D_011B1E18(temp_4_3);
                    }
                    D_011B1E18(temp_16);
                } else {
                    goto block_9;
                }
            } else {
block_9:
                D_0118EDD0(D_0118EDD4, &D_011CBC60, temp_6, D_0118EDD0);
            }
        }
        temp_4_4 = M2C_FIELD(arg0, void **, 8);
        if (temp_4_4 != NULL) {
            D_011B1E18(temp_4_4);
        }
        temp_4_5 = M2C_FIELD(arg0, void **, 0x30);
        if (temp_4_5 != NULL) {
            D_011B1E18(temp_4_5);
        }
        D_011B1E18(arg0);
    }
}
