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

M2C_UNK xmlFreeAttributeTable(s32);                 /* extern */
M2C_UNK xmlFreeElementTable(s32);                   /* extern */
M2C_UNK xmlFreeEntitiesTable(s32);                  /* extern */
M2C_UNK xmlFreeNode(void *);                        /* extern */
M2C_UNK xmlFreeNotationTable(s32);                  /* extern */
M2C_UNK xmlUnlinkNode(void *);                      /* extern */
extern M2C_UNK (*D_011B1E18)(void *);

void xmlFreeDtd(void *arg0) {
    M2C_UNK (*temp_2)(void *);
    s32 temp_4_5;
    s32 temp_4_6;
    s32 temp_4_7;
    s32 temp_4_8;
    s32 temp_4_9;
    s32 var_2;
    void *temp_17;
    void *temp_4;
    void *temp_4_2;
    void *temp_4_3;
    void *temp_4_4;
    void *var_16;

    if (arg0 != NULL) {
        temp_4 = M2C_FIELD(arg0, void **, 0xC);
        var_16 = temp_4;
        if (temp_4 != NULL) {
            var_2 = M2C_FIELD(var_16, s32 *, 4);
loop_3:
            temp_17 = M2C_FIELD(var_16, void **, 0x18);
            if (var_2 == 8) {
                xmlUnlinkNode(var_16);
                xmlFreeNode(var_16);
            }
            var_16 = temp_17;
            if (var_16 != NULL) {
                var_2 = M2C_FIELD(var_16, s32 *, 4);
                goto loop_3;
            }
        }
        temp_4_2 = M2C_FIELD(arg0, void **, 8);
        if (temp_4_2 != NULL) {
            D_011B1E18(temp_4_2);
        }
        temp_4_3 = M2C_FIELD(arg0, void **, 0x38);
        if (temp_4_3 != NULL) {
            D_011B1E18(temp_4_3);
        }
        temp_4_4 = M2C_FIELD(arg0, void **, 0x34);
        if (temp_4_4 != NULL) {
            D_011B1E18(temp_4_4);
        }
        temp_4_5 = M2C_FIELD(arg0, s32 *, 0x24);
        if (temp_4_5 != 0) {
            xmlFreeNotationTable(temp_4_5);
        }
        temp_4_6 = M2C_FIELD(arg0, s32 *, 0x28);
        if (temp_4_6 != 0) {
            xmlFreeElementTable(temp_4_6);
        }
        temp_4_7 = M2C_FIELD(arg0, s32 *, 0x2C);
        if (temp_4_7 != 0) {
            xmlFreeAttributeTable(temp_4_7);
        }
        temp_4_8 = M2C_FIELD(arg0, s32 *, 0x30);
        if (temp_4_8 != 0) {
            xmlFreeEntitiesTable(temp_4_8);
        }
        temp_4_9 = M2C_FIELD(arg0, s32 *, 0x3C);
        temp_2 = D_011B1E18;
        if (temp_4_9 != 0) {
            xmlFreeEntitiesTable(temp_4_9);
        }
        temp_2(arg0);
    }
}
