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

M2C_UNK xmlBufferAdd(s32, s32, s32);                /* extern */
s32 xmlBufferCreate();                              /* extern */
s32 xmlCharEncInFunc(s32, s32, s32);                /* extern */
extern M2C_UNK (*D_0118EDD0)(s32, M2C_UNK *, M2C_UNK);
extern s32 D_0118EDD4;
extern M2C_UNK D_011DBB00;

s32 xmlParserInputBufferPush(void *arg0, s32 arg1, s32 arg2) {
    s32 var_17;
    s32 var_2;
    s32 var_2_2;

    var_2 = 0;
    var_17 = arg1;
    if (var_17 >= 0) {
        if (M2C_FIELD(arg0, s32 *, 0xC) == 0) {
            xmlBufferAdd(M2C_FIELD(arg0, s32 *, 0x10), arg2, var_17);
            goto block_9;
        }
        var_2_2 = M2C_FIELD(arg0, s32 *, 0x14);
        if (var_2_2 == 0) {
            var_2_2 = xmlBufferCreate();
            M2C_FIELD(arg0, s32 *, 0x14) = var_2_2;
        }
        xmlBufferAdd(var_2_2, arg2, var_17);
        var_17 = xmlCharEncInFunc(M2C_FIELD(arg0, s32 *, 0xC), M2C_FIELD(arg0, s32 *, 0x10), M2C_FIELD(arg0, s32 *, 0x14));
        if (var_17 < 0) {
            D_0118EDD0(D_0118EDD4, &D_011DBB00, D_0118EDD0);
            return -1;
        }
block_9:
        var_2 = var_17;
        /* Duplicate return node #10. Try simplifying control flow for better match */
        return var_2;
    }
    return var_2;
}
