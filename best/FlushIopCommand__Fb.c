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

M2C_UNK sceSifCallRpc(M2C_UNK *, M2C_UNK, s32, s32 *, M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK, s32); /* extern */
s32 sceSifCheckStatRpc(M2C_UNK *);                  /* extern */
extern s32 D_011EDB00;
extern M2C_UNK D_011EDD00;
extern s32 D_011EDF00;
extern M2C_UNK D_011EE108;

s32 FlushIopCommand__Fb(s32 arg0) {
    s32 var_2;

    if (sceSifCheckStatRpc(&D_011EE108) != 0) {
        return -1;
    }
    var_2 = -2;
    if (D_011EDB00 != 0) {
        sceSifCallRpc(&D_011EE108, 0x80F0, arg0 != 0, &D_011EDB00, 0x200, &D_011EDD00, 0x200, 0, 0);
        D_011EDB00 = 0;
        var_2 = D_011EDF00;
        D_011EDF00 = 0;
    }
    return var_2;
}
