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

M2C_UNK xmlBufferFree(s32);                         /* extern */
M2C_UNK xmlCharEncCloseFunc(s32);                   /* extern */
extern M2C_UNK (*D_011B1E18)(void *);

void xmlFreeParserInputBuffer(void *arg0) {
    M2C_UNK (*temp_2_2)(s32);
    s32 temp_2;
    s32 temp_4;
    s32 temp_4_2;

    temp_2 = M2C_FIELD(arg0, s32 *, 0x14);
    if (temp_2 != 0) {
        xmlBufferFree(temp_2);
        M2C_FIELD(arg0, s32 *, 0x14) = 0;
    }
    temp_4 = M2C_FIELD(arg0, s32 *, 0xC);
    if (temp_4 != 0) {
        xmlCharEncCloseFunc(temp_4);
    }
    temp_2_2 = M2C_FIELD(arg0, M2C_UNK (**)(s32), 8);
    if (temp_2_2 != NULL) {
        temp_2_2(M2C_FIELD(arg0, s32 *, 0));
    }
    temp_4_2 = M2C_FIELD(arg0, s32 *, 0x10);
    if (temp_4_2 != 0) {
        xmlBufferFree(temp_4_2);
        M2C_FIELD(arg0, s32 *, 0x10) = 0;
    }
    D_011B1E18(arg0);
}
