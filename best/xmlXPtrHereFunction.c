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

M2C_UNK valuePush(void *, s32);                     /* extern */
M2C_UNK xmlXPatherror(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
s32 xmlXPtrNewLocationSetNodes(s32, M2C_UNK);       /* extern */
extern M2C_UNK D_011DD800;

void xmlXPtrHereFunction(void *arg0, s32 arg1) {
    s32 temp_2;

    if (arg1 != 0) {
        xmlXPatherror(&D_011DD800, 0x65A, 0xC);
        M2C_FIELD(arg0, s32 *, 8) = 0xC;
        return;
    }
    temp_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 *, 0x50);
    if (temp_2 == 0) {
        xmlXPatherror(&D_011DD800, 0x65D, 0x10);
        M2C_FIELD(arg0, s32 *, 8) = 0x10;
        return;
    }
    valuePush(arg0, xmlXPtrNewLocationSetNodes(temp_2, 0x65D));
}
