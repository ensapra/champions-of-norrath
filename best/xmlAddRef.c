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

s32 xmlHashAddEntry(s32, s32, s32);                 /* extern */
s32 xmlHashCreate(M2C_UNK);                         /* extern */
s32 xmlHashLookup(s32, s32);                        /* extern */
s32 xmlListCreate(M2C_UNK *, M2C_UNK);              /* extern */
M2C_UNK xmlListDelete(s32);                         /* extern */
M2C_UNK xmlListInsert(s32, void *);                 /* extern */
s32 xmlStrdup(s32);                                 /* extern */
extern M2C_UNK (*D_0118EDD0)(s32, M2C_UNK *, M2C_UNK);
extern s32 D_0118EDD4;
extern void *(*D_011B1E1C)(M2C_UNK);
extern M2C_UNK D_011CC508;
extern M2C_UNK D_011CC528;
extern M2C_UNK D_011CC548;
extern M2C_UNK D_011CC568;
extern M2C_UNK D_011CC590;
extern M2C_UNK D_011CC5B0;
extern M2C_UNK D_011CC5E0;
extern M2C_UNK xmlFreeRef;

void *xmlAddRef(void *arg1, s32 arg2, s32 arg3) {
    M2C_UNK *var_5;
    s32 temp_2_2;
    s32 temp_2_3;
    s32 temp_2_4;
    s32 var_17;
    s32 var_4;
    void *temp_2;

    if (arg1 == NULL) {
        var_5 = &D_011CC508;
        goto block_27;
    }
    if (arg2 == 0) {
        var_5 = &D_011CC528;
        goto block_27;
    }
    if (arg3 != 0) {
        var_17 = M2C_FIELD(arg1, s32 *, 0x44);
        if (var_17 == 0) {
            var_17 = xmlHashCreate(0);
            M2C_FIELD(arg1, s32 *, 0x44) = var_17;
            if (var_17 == 0) {
                var_5 = &D_011CC568;
                goto block_27;
            }
            goto block_13;
        }
block_13:
        temp_2 = D_011B1E1C(0xC);
        if (temp_2 == NULL) {
            var_5 = &D_011CC590;
            goto block_27;
        }
        temp_2_2 = xmlStrdup(arg2);
        M2C_FIELD(temp_2, s32 *, 8) = arg3;
        M2C_FIELD(temp_2, s32 *, 4) = temp_2_2;
        temp_2_3 = xmlHashLookup(var_17, arg2);
        if (temp_2_3 != 0) {
            var_4 = temp_2_3;
            goto block_29;
        }
        temp_2_4 = xmlListCreate(&xmlFreeRef, 0);
        if (temp_2_4 != 0) {
            if (xmlHashAddEntry(var_17, arg2, temp_2_4) >= 0) {
                var_4 = temp_2_4;
block_29:
                xmlListInsert(var_4, temp_2);
                return temp_2;
            }
            xmlListDelete(temp_2_4);
            var_5 = &D_011CC5E0;
            goto block_27;
        }
        var_5 = &D_011CC5B0;
        goto block_27;
    }
    var_5 = &D_011CC548;
block_27:
    ((M2C_UNK (*)(s32, M2C_UNK *, M2C_UNK)) D_0118EDD0)(D_0118EDD4, var_5, (M2C_UNK (*)(s32, M2C_UNK *, M2C_UNK)) D_0118EDD0);
    return NULL;
}
