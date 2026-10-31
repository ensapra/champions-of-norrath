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

s32 xmlHashLookup(s32, s32);                        /* extern */
M2C_UNK xmlHashUpdateEntry(s32, s32, M2C_UNK, M2C_UNK *); /* extern */
s32 xmlNodeListGetString(s32, M2C_UNK);             /* extern */
extern M2C_UNK (*D_011B1E18)(s32);
extern M2C_UNK xmlFreeID;

s32 xmlRemoveID(void *arg0, void *arg1) {
    s32 temp_17;
    s32 temp_2;
    s32 var_2;

    var_2 = -1;
    if ((arg0 != NULL) && (arg1 != NULL)) {
        temp_17 = M2C_FIELD(arg0, s32 *, 0x40);
        if (temp_17 != 0) {
            temp_2 = xmlNodeListGetString(M2C_FIELD(arg1, s32 *, 0xC), 1);
            var_2 = -1;
            if (temp_2 != 0) {
                if (xmlHashLookup(temp_17, temp_2) != arg1) {
                    D_011B1E18(temp_2);
                    return -1;
                }
                xmlHashUpdateEntry(temp_17, temp_2, 0, &xmlFreeID);
                D_011B1E18(temp_2);
                var_2 = 0;
                /* Duplicate return node #8. Try simplifying control flow for better match */
                return var_2;
            }
        }
    }
    return var_2;
}
