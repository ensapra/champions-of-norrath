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

M2C_UNK memset(void *, M2C_UNK, M2C_UNK);           /* extern */
s32 xmlXPathCmpNodes(s32, s32, s32, M2C_UNK);       /* extern */
extern M2C_UNK (*D_0118EDD0)(s32, M2C_UNK *, M2C_UNK);
extern s32 D_0118EDD4;
extern void *(*D_011B1E1C)(M2C_UNK);
extern M2C_UNK D_011DD758;

void *xmlXPtrNewRangePointNode(void *arg0, s32 arg1) {
    s32 temp_2_2;
    s32 temp_4;
    s32 temp_5;
    s32 temp_6;
    s32 var_5;
    void *temp_2;
    void *var_2;

    var_2 = NULL;
    if ((arg0 != NULL) && (arg1 != 0) && (M2C_FIELD(arg0, s32 *, 0) == 5)) {
        temp_2 = D_011B1E1C(0x30);
        if (temp_2 == NULL) {
            D_0118EDD0(D_0118EDD4, &D_011DD758, D_0118EDD0);
            return NULL;
        }
        memset(temp_2, 0, 0x30);
        temp_6 = M2C_FIELD(arg0, s32 *, 0x20);
        temp_4 = M2C_FIELD(arg0, s32 *, 0x1C);
        var_5 = -2;
        M2C_FIELD(temp_2, s32 *, 0) = 6;
        M2C_FIELD(temp_2, s32 *, 0x1C) = temp_4;
        M2C_FIELD(temp_2, s32 *, 0x20) = temp_6;
        M2C_FIELD(temp_2, s32 *, 0x24) = arg1;
        M2C_FIELD(temp_2, s32 *, 0x28) = -1;
        if (temp_4 != 0) {
            if (temp_4 == arg1) {
                var_5 = 1;
                if (temp_6 >= -1) {
                    var_5 = (temp_6 <= -1) ? 0 : -1;
                }
            } else {
                var_5 = xmlXPathCmpNodes(temp_4, arg1, temp_6, -1);
            }
        }
        var_2 = temp_2;
        if (var_5 == -1) {
            temp_2_2 = M2C_FIELD(temp_2, s32 *, 0x1C);
            temp_5 = M2C_FIELD(temp_2, s32 *, 0x20);
            M2C_FIELD(temp_2, s32 *, 0x1C) = (s32) M2C_FIELD(temp_2, s32 *, 0x24);
            M2C_FIELD(temp_2, s32 *, 0x24) = temp_2_2;
            M2C_FIELD(temp_2, s32 *, 0x20) = (s32) M2C_FIELD(temp_2, s32 *, 0x28);
            M2C_FIELD(temp_2, s32 *, 0x28) = temp_5;
            var_2 = temp_2;
        }
        /* Duplicate return node #12. Try simplifying control flow for better match */
        return var_2;
    }
    return var_2;
}
