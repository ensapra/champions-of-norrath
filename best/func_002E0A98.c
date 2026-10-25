/* machine draft (m2c) for ee-gcc-2.96 -O2 -G8, tried by autopilot */
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

extern M2C_UNK (*D_00446038)(M2C_UNK, s32);
extern M2C_UNK (*D_0044603C)(M2C_UNK, s32);
extern M2C_UNK (*D_00446040)(s32, s32, s32 *);
extern s32 D_00446044;
extern s32 D_00446048;
extern s32 D_0044604C;
extern s32 D_00446050;
extern s32 D_00446054;
extern s32 D_00446058;

s32 func_002E0A98(void *arg1) {
    s32 temp_28;
    s32 temp_28_2;
    s32 temp_28_3;

    if ((M2C_FIELD(arg1, s32 *, 0) & 0x100) && (D_00446038 != NULL)) {
        temp_28 = D_00446050;
        D_00446038(0, D_00446044);
    }
    if ((M2C_FIELD(arg1, s32 *, 0) & 0x200) && (D_0044603C != NULL)) {
        temp_28_2 = D_00446054;
        D_0044603C(1, D_00446048);
    }
    if ((M2C_FIELD(arg1, s32 *, 0) & 0x400) && (D_00446040 != NULL)) {
        temp_28_3 = D_00446058;
        D_00446040(M2C_FIELD(arg1, s32 *, 4), D_0044604C, &D_0044604C);
    }
    return 0;
}
