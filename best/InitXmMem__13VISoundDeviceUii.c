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
s32 __builtin_vec_new(M2C_UNK, u32, s32);           /* extern */

s32 InitXmMem__13VISoundDeviceUii(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_2;
    s32 temp_2_2;
    s32 temp_6;
    s32 var_16;
    s32 var_16_2;
    s32 var_17;
    s32 var_18;
    s32 var_4;
    u32 temp_5;
    void *temp_17;
    void *temp_2_3;
    void *temp_5_2;

    temp_2 = arg2 - 0x41;
    temp_6 = arg2 - 2;
    temp_5 = (u32) (arg1 + 0x3F) >> 6;
    temp_2_2 = __builtin_vec_new(0xC00, temp_5, temp_6);
    var_16 = temp_2_2;
    if (temp_2_2 != 0) {
        var_17 = 0x7F;
        var_4 = var_16;
        do {
            var_16 += 0x18;
            var_17 -= 1;
            __7VILNode(var_4);
            var_4 = var_16;
        } while (var_17 != -1);
    }
    M2C_FIELD(arg0, s32 *, 0xD24) = temp_2_2;
    var_18 = 0;
    temp_17 = arg0 + 0xD18;
    var_16_2 = 0x7F;
    do {
        var_16_2 -= 1;
        temp_5_2 = M2C_FIELD(arg0, s32 *, 0xD24) + var_18;
        var_18 += 0x18;
        AddTail__7VILListP7VILNode(temp_17, temp_5_2);
    } while (var_16_2 >= 0);
    temp_2_3 = RemHead__7VILList(temp_17);
    M2C_FIELD(temp_2_3, s32 *, 0x10) = (s32) (temp_5 << 6);
    M2C_FIELD(temp_2_3, s32 *, 0x14) = (s32) (((s32) ((temp_2 < 0) ? temp_6 : temp_2) >> 6) << 6);
    AddTail__7VILListP7VILNode(arg0 + 0xD0C, temp_2_3);
    return 0;
}
