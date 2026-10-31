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

M2C_UNK scePrintf(M2C_UNK *);                       /* extern */
extern M2C_UNK D_011D2E38;

void ExitMcErr__10VIWndMcErri(void *arg0, s32 arg1) {
    void *temp_2;
    void *temp_2_2;
    void *temp_9;
    void *temp_9_2;

    scePrintf(&D_011D2E38);
    temp_9 = M2C_FIELD(arg0, void **, 0x1AC);
    if (temp_9 != NULL) {
        temp_2 = M2C_FIELD(temp_9, void **, 0x20);
        M2C_FIELD((temp_2 + 0x30), M2C_UNK (**)(void *, void *, M2C_UNK, M2C_UNK, M2C_UNK, void *), 4)(temp_9 + M2C_FIELD(temp_2, s16 *, 0x30), arg0, 0x1102, 0, 0, temp_9);
        temp_9_2 = M2C_FIELD(arg0, void **, 0x1AC);
        temp_2_2 = M2C_FIELD(temp_9_2, void **, 0x20);
        M2C_FIELD((temp_2_2 + 0x30), M2C_UNK (**)(void *, void *, M2C_UNK, s32, M2C_UNK, void *), 4)(temp_9_2 + M2C_FIELD(temp_2_2, s16 *, 0x30), arg0, 0x1106, arg1, 0, temp_9_2);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x1B4) = arg1;
}
