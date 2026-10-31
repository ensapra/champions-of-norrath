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

M2C_UNK xmlNodeDumpOutput(s32, s32, void *, s32, s32, s32); /* extern */
M2C_UNK xmlOutputBufferWriteString(s32, M2C_UNK *); /* extern */
extern s32 D_0118E5A4;
extern M2C_UNK D_011C2D38;
extern M2C_UNK D_011C2D40;

void xmlNodeListDumpOutput(s32 arg0, s32 arg1, void *arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 var_16;
    void *var_17;

    var_17 = arg2;
    if (var_17 != NULL) {
        do {
            if ((arg4 != 0) && (D_0118E5A4 != 0)) {
                if ((M2C_FIELD(var_17, s32 *, 4) == 1) && (arg3 > 0)) {
                    var_16 = arg3 - 1;
loop_7:
                    xmlOutputBufferWriteString(arg0, &D_011C2D38);
                    if (var_16 != 0) {
                        var_16 -= 1;
                        goto loop_7;
                    }
                }
            }
            xmlNodeDumpOutput(arg0, arg1, var_17, arg3, arg4, arg5);
            if (arg4 != 0) {
                xmlOutputBufferWriteString(arg0, &D_011C2D40);
            }
            var_17 = M2C_FIELD(var_17, void **, 0x18);
        } while (var_17 != NULL);
    }
}
