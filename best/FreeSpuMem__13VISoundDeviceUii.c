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

M2C_UNK AddTail__7VILListP7VILNode(void *, void *, s32); /* extern */
M2C_UNK InsertAfter__7VILNodeP7VILNode(void *, s32, M2C_UNK); /* extern */
M2C_UNK MergeFreeSpuMem__13VISoundDevice(void *);   /* extern */
void *RemHead__7VILList(s32, s32);                  /* extern */

void FreeSpuMem__13VISoundDeviceUii(void *arg0, u32 arg1, s32 arg2) {
    s32 temp_16;
    s32 temp_6;
    s32 var_6;
    void *temp_2;
    void *temp_5;
    void *var_4;

    temp_16 = arg2 + 0x3F;
    temp_6 = arg2 + 0x7E;
    temp_2 = RemHead__7VILList(arg0 + 0xCFC, temp_6);
    var_4 = M2C_FIELD(arg0, void **, 0xCF0);
    var_6 = 0;
    M2C_FIELD(temp_2, u32 *, 0x10) = arg1;
    M2C_FIELD(temp_2, s32 *, 0x14) = (s32) (((s32) ((temp_16 < 0) ? temp_6 : temp_16) >> 6) << 6);
loop_1:
    temp_5 = M2C_FIELD(var_4, void **, 0);
    if (temp_5 != NULL) {
        if ((u32) M2C_FIELD(temp_2, u32 *, 0x10) >= (u32) M2C_FIELD(var_4, u32 *, 0x10)) {
            var_4 = temp_5;
            goto loop_1;
        }
        InsertAfter__7VILNodeP7VILNode(temp_2, M2C_FIELD(var_4, s32 *, 4), 0);
        var_6 = 1;
    }
    if (var_6 == 0) {
        AddTail__7VILListP7VILNode(arg0 + 0xCF0, temp_2, var_6);
    }
    MergeFreeSpuMem__13VISoundDevice(arg0);
}
