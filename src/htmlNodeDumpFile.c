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

M2C_UNK htmlNodeDump(s32, s32, s32);                /* extern */
s32 xmlBufferCreate();                              /* extern */
M2C_UNK xmlBufferDump(s32, s32);                    /* extern */
M2C_UNK xmlBufferFree(s32);                         /* extern */

void htmlNodeDumpFile(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_2;

    temp_2 = xmlBufferCreate();
    if (temp_2 != 0) {
        htmlNodeDump(temp_2, arg1, arg2);
        xmlBufferDump(arg0, temp_2);
        xmlBufferFree(temp_2);
    }
}
