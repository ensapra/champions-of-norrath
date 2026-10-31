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

M2C_UNK xmlFreeNodeList(s32);                       /* extern */
s32 xmlIsID(s32, void *, void *);                   /* extern */
M2C_UNK xmlRemoveID(s32, void *);                   /* extern */
extern M2C_UNK (*D_011B1E18)(void *);

void xmlFreeProp(void *arg0) {
    M2C_UNK (*temp_2)(void *);
    s32 temp_4_2;
    void *temp_4;
    void *temp_5;

    if (arg0 != NULL) {
        temp_5 = M2C_FIELD(arg0, void **, 0x14);
        if ((temp_5 != NULL) && (xmlIsID(M2C_FIELD(temp_5, s32 *, 0x20), temp_5, arg0) != 0)) {
            xmlRemoveID(M2C_FIELD(M2C_FIELD(arg0, void **, 0x14), s32 *, 0x20), arg0);
        }
        temp_4 = M2C_FIELD(arg0, void **, 8);
        if (temp_4 != NULL) {
            D_011B1E18(temp_4);
        }
        temp_4_2 = M2C_FIELD(arg0, s32 *, 0xC);
        temp_2 = D_011B1E18;
        if (temp_4_2 != 0) {
            xmlFreeNodeList(temp_4_2);
        }
        temp_2(arg0);
    }
}
