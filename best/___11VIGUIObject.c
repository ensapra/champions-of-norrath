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

M2C_UNK __builtin_delete(void *);                   /* extern */
M2C_UNK memset(M2C_UNK, M2C_UNK);                   /* extern */
extern M2C_UNK D_011FF498;

void ___11VIGUIObject(void *arg0, s32 arg1) {
    void *temp_2;
    void *temp_6;

    M2C_FIELD(arg0, M2C_UNK **, 0x94) = &D_011FF498;
    memset(0, 0x20);
    temp_6 = M2C_FIELD(arg0, void **, 0x28);
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    if (temp_6 != NULL) {
        temp_2 = M2C_FIELD(temp_6, void **, 0x24);
        M2C_FIELD((temp_2 + 8), M2C_UNK (**)(void *, M2C_UNK, void *), 4)(temp_6 + M2C_FIELD(temp_2, s16 *, 8), 3, temp_6);
        M2C_FIELD(arg0, void **, 0x28) = NULL;
    }
    M2C_FIELD(arg0, s16 *, 0x30) = 0;
    M2C_FIELD(arg0, s16 *, 0x32) = 0;
    M2C_FIELD(arg0, s16 *, 0x3A) = 0;
    M2C_FIELD(arg0, s16 *, 0x3C) = 0;
    if (arg1 & 1) {
        __builtin_delete(arg0);
    }
}
