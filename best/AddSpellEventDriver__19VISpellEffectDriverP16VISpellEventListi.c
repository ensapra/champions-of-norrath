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

M2C_UNK AddTail__7VILListP7VILNode(void *, void *); /* extern */
M2C_UNK __7VILList(void *);                         /* extern */
M2C_UNK __7VILNode(void *);                         /* extern */
void *__builtin_new(M2C_UNK);                       /* extern */

void *AddSpellEventDriver__19VISpellEffectDriverP16VISpellEventListi(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_16;
    void *temp_2;
    void *var_18;

    temp_2 = __builtin_new(0x64);
    var_18 = temp_2;
    if (temp_2 != NULL) {
        temp_16 = M2C_FIELD(arg0, s32 *, 4);
        __7VILNode(temp_2);
        __7VILList(temp_2 + 0x4C);
        __7VILList(temp_2 + 0x58);
        M2C_FIELD(temp_2, void **, 0x10) = arg0;
        M2C_FIELD(temp_2, s32 *, 0x48) = arg1;
        M2C_FIELD(temp_2, s32 *, 0x14) = temp_16;
        M2C_FIELD(temp_2, s32 *, 0x18) = arg2;
        M2C_FIELD(temp_2, s32 *, 0x44) = -1;
        M2C_FIELD(temp_2, s32 *, 0x1C) = 0;
        M2C_FIELD(temp_2, s32 *, 0x20) = 0;
        M2C_FIELD(temp_2, s32 *, 0x24) = 0;
        M2C_FIELD(temp_2, s32 *, 0x28) = 0;
        M2C_FIELD(temp_2, s32 *, 0x2C) = 0;
        M2C_FIELD(temp_2, s32 *, 0x30) = 0;
        M2C_FIELD(temp_2, s32 *, 0x34) = -1;
        M2C_FIELD(temp_2, s32 *, 0x38) = -1;
        M2C_FIELD(temp_2, s32 *, 0x3C) = -1;
        M2C_FIELD(temp_2, s32 *, 0x40) = -1;
    } else {
        var_18 = NULL;
    }
    AddTail__7VILListP7VILNode(arg0 + 0x48, var_18);
    return var_18;
}
