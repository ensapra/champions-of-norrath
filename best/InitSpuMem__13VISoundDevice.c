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
void *RemHead__7VILList(void *);                    /* extern */
M2C_UNK __7VILNode(s32);                            /* extern */
s32 __builtin_vec_new(M2C_UNK);                     /* extern */

s32 InitSpuMem__13VISoundDevice(void *arg0) {
    s32 temp_2;
    s32 var_16;
    s32 var_16_2;
    s32 var_17;
    s32 var_18;
    s32 var_4;
    void *temp_17;
    void *temp_2_2;
    void *temp_5;

    temp_2 = __builtin_vec_new(0xC00);
    var_16 = temp_2;
    if (temp_2 != 0) {
        var_17 = 0x7F;
        var_4 = var_16;
        do {
            var_16 += 0x18;
            var_17 -= 1;
            __7VILNode(var_4);
            var_4 = var_16;
        } while (var_17 != -1);
    }
    M2C_FIELD(arg0, s32 *, 0xD08) = temp_2;
    var_18 = 0;
    temp_17 = arg0 + 0xCFC;
    var_16_2 = 0x7F;
    do {
        var_16_2 -= 1;
        temp_5 = M2C_FIELD(arg0, s32 *, 0xD08) + var_18;
        var_18 += 0x18;
        AddTail__7VILListP7VILNode(temp_17, temp_5);
    } while (var_16_2 >= 0);
    temp_2_2 = RemHead__7VILList(temp_17);
    M2C_FIELD(temp_2_2, s32 *, 0x10) = 0x5040;
    M2C_FIELD(temp_2_2, s32 *, 0x14) = 0x1F9FC0;
    AddTail__7VILListP7VILNode(arg0 + 0xCF0, temp_2_2);
    return 0;
}
