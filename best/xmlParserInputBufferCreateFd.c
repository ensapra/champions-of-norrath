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
void *xmlBufferCreate();                            /* extern */
s32 xmlGetCharEncodingHandler(s32);                 /* extern */
extern M2C_UNK (*D_0118EDD0)(s32, M2C_UNK *, M2C_UNK);
extern s32 D_0118EDD4;
extern M2C_UNK (*D_011B1E18)(void *);
extern void *(*D_011B1E1C)(M2C_UNK);
extern M2C_UNK D_011DBAA8;
extern M2C_UNK xmlFdClose;
extern M2C_UNK xmlFdRead;

void *xmlParserInputBufferCreateFd(s32 arg0, s32 arg1) {
    s32 temp_2_3;
    void *temp_2;
    void *temp_2_2;
    void *var_2;
    void *var_4;

    var_2 = NULL;
    if (arg0 >= 0) {
        temp_2 = D_011B1E1C(0x18);
        if (temp_2 == NULL) {
            D_0118EDD0(D_0118EDD4, &D_011DBAA8, D_0118EDD0);
            var_4 = NULL;
        } else {
            memset(temp_2, 0, 0x18);
            temp_2_2 = xmlBufferCreate();
            M2C_FIELD(temp_2, void **, 0x10) = temp_2_2;
            if (temp_2_2 == NULL) {
                D_011B1E18(temp_2);
                var_4 = NULL;
            } else {
                M2C_FIELD(temp_2_2, s32 *, 0xC) = 0;
                temp_2_3 = xmlGetCharEncodingHandler(arg1);
                M2C_FIELD(temp_2, s32 *, 0xC) = temp_2_3;
                if (temp_2_3 != 0) {
                    M2C_FIELD(temp_2, void **, 0x14) = xmlBufferCreate();
                } else {
                    M2C_FIELD(temp_2, void **, 0x14) = NULL;
                }
                M2C_FIELD(temp_2, s32 *, 4) = 0;
                var_4 = temp_2;
                M2C_FIELD(temp_2, s32 *, 8) = 0;
                M2C_FIELD(temp_2, s32 *, 0) = 0;
            }
        }
        if (var_4 != NULL) {
            M2C_FIELD(var_4, s32 *, 0) = arg0;
            M2C_FIELD(var_4, M2C_UNK **, 4) = &xmlFdRead;
            M2C_FIELD(var_4, M2C_UNK **, 8) = &xmlFdClose;
        }
        var_2 = var_4;
    }
    return var_2;
}
