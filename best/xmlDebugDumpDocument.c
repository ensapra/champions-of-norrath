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

M2C_UNK fprintf(s32, M2C_UNK *);                    /* extern */
M2C_UNK xmlDebugDumpDocumentHead(s32);              /* extern */
M2C_UNK xmlDebugDumpNodeList(s32, s32, M2C_UNK);    /* extern */
M2C_UNK xmlDebugDumpOneNode(s32, void *, M2C_UNK);  /* extern */
extern M2C_UNK D_011C9E90;
extern void *_impure_ptr;

void xmlDebugDumpDocument(s32 arg0, void *arg1) {
    s32 temp_3;
    s32 temp_5_2;
    s32 var_17;
    void *temp_5;
    void *var_16;
    void *var_5;

    var_17 = arg0;
    if (var_17 == 0) {
        var_17 = M2C_FIELD(_impure_ptr, s32 *, 8);
    }
    if (arg1 == NULL) {
        fprintf(var_17, &D_011C9E90);
        return;
    }
    xmlDebugDumpDocumentHead(var_17);
    temp_3 = M2C_FIELD(arg1, s32 *, 4);
    if ((temp_3 == 9) || (temp_3 == 0xD)) {
        temp_5 = M2C_FIELD(arg1, void **, 0xC);
        var_16 = temp_5;
        if (temp_5 != NULL) {
            var_5 = var_16;
            do {
                xmlDebugDumpOneNode(var_17, var_5, 1);
                temp_5_2 = M2C_FIELD(var_16, s32 *, 0xC);
                if ((temp_5_2 != 0) && (M2C_FIELD(var_16, s32 *, 4) != 5)) {
                    xmlDebugDumpNodeList(var_17, temp_5_2, 2);
                }
                var_16 = M2C_FIELD(var_16, void **, 0x18);
                var_5 = var_16;
            } while (var_16 != NULL);
        }
    }
}
