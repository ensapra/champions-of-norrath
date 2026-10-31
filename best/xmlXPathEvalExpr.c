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

M2C_UNK xmlXPathCompOpEval(void *, s32);            /* extern */
M2C_UNK xmlXPathCompileExpr();                      /* extern */
extern M2C_UNK (*D_0118EDD0)(s32, M2C_UNK *, M2C_UNK);
extern s32 D_0118EDD4;
extern M2C_UNK (*D_011B1E18)(void *);
extern s32 (*D_011B1E1C)(M2C_UNK);
extern M2C_UNK D_011DD350;

void xmlXPathEvalExpr(void *arg0) {
    s32 temp_2;

    xmlXPathCompileExpr();
    if (arg0 == NULL) {
        return;
    }
    if (M2C_FIELD(arg0, void **, 0x20) == NULL) {
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0x1C) == 0) {
        temp_2 = D_011B1E1C(0x28);
        M2C_FIELD(arg0, s32 *, 0x1C) = temp_2;
        if (temp_2 == 0) {
            D_011B1E18(arg0);
            D_0118EDD0(D_0118EDD4, &D_011DD350, D_0118EDD0);
            return;
        }
        M2C_FIELD(arg0, s32 *, 0x10) = 0;
        M2C_FIELD(arg0, s32 *, 0x18) = 0xA;
        M2C_FIELD(arg0, s32 *, 0x14) = 0;
        /* Duplicate return node #11. Try simplifying control flow for better match */
        xmlXPathCompOpEval(arg0, M2C_FIELD(M2C_FIELD(arg0, void **, 0x20), s32 *, 8) + (M2C_FIELD(M2C_FIELD(arg0, void **, 0x20), s32 *, 0xC) << 5));
        return;
    }
    xmlXPathCompOpEval(arg0, M2C_FIELD(M2C_FIELD(arg0, void **, 0x20), s32 *, 8) + (M2C_FIELD(M2C_FIELD(arg0, void **, 0x20), s32 *, 0xC) << 5));
}
