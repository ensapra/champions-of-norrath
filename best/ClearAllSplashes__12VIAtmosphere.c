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

M2C_UNK AddTail__7VILListP7VILNode(void *, s32);    /* extern */
M2C_UNK Init__7VILList(void *);                     /* extern */

void ClearAllSplashes__12VIAtmosphere(void *arg0) {
    s32 temp_5;
    s32 var_17;
    s32 var_19;
    void *temp_18;

    if ((M2C_FIELD(arg0, s32 *, 0x4CC) != 0) && (M2C_FIELD(arg0, s32 *, 0x20) != 0) && (M2C_FIELD(arg0, s32 *, 0x30) != 0)) {
        M2C_FIELD(arg0, s32 *, 0x20) = 0;
        temp_18 = arg0 + 0x24;
        var_19 = 0;
        Init__7VILList(arg0 + 0x14);
        Init__7VILList(temp_18);
        if (M2C_FIELD(arg0, s32 *, 8) > 0) {
            var_17 = 0;
loop_5:
            var_19 += 1;
            temp_5 = M2C_FIELD(arg0, s32 *, 0x30) + var_17;
            var_17 += 0x24;
            AddTail__7VILListP7VILNode(temp_18, temp_5);
            if (var_19 < M2C_FIELD(arg0, s32 *, 8)) {
                goto loop_5;
            }
        }
    }
}
