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

void *__builtin_new(M2C_UNK);                       /* extern */
s32 __builtin_vec_new(s32);                         /* extern */
M2C_UNK memset(void *, M2C_UNK, M2C_UNK);           /* extern */

void realloc__14BlockAllocator(void *arg0) {
    u32 var_18;
    void *temp_19;
    void *temp_2;
    void *temp_2_2;
    void *temp_4;
    void *var_17;

    var_18 = 1;
    temp_19 = __builtin_new(0x14);
    temp_4 = temp_19;
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) + 1);
    var_17 = temp_19;
    memset(temp_4, 0, 0x14);
    M2C_FIELD(temp_19, s32 *, 0xC) = __builtin_vec_new(M2C_FIELD(arg0, s32 *, 8));
    M2C_FIELD(temp_19, s32 *, 8) = (s32) M2C_FIELD(arg0, s32 *, 8);
loop_3:
    if (var_18 < (u32) M2C_FIELD(arg0, u32 *, 4)) {
        var_18 += 1;
        temp_2 = __builtin_new(0x14);
        M2C_FIELD(var_17, void **, 0x10) = temp_2;
        var_17 = temp_2;
        M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) + 1);
        memset(var_17, 0, 0x14);
        M2C_FIELD(var_17, s32 *, 0xC) = __builtin_vec_new(M2C_FIELD(arg0, s32 *, 8));
        M2C_FIELD(var_17, s32 *, 8) = (s32) M2C_FIELD(arg0, s32 *, 8);
        goto loop_3;
    }
    temp_2_2 = M2C_FIELD(arg0, void **, 0);
    if (temp_2_2 != NULL) {
        M2C_FIELD(var_17, void **, 0x10) = temp_2_2;
    }
    M2C_FIELD(arg0, void **, 0) = temp_19;
}
