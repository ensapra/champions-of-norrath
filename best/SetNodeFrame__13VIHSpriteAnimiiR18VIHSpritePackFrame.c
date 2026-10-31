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

s32 SetNodeFrame__13VIHSpriteAnimiiR18VIHSpritePackFrame(void *arg0, s32 arg1, s32 arg2, void *arg3) {
    s32 var_2;
    void *temp_3;
    void *temp_6;
    void *temp_9;

    temp_9 = arg3 + 8;
    var_2 = -1;
    if (M2C_FIELD(arg0, s32 *, 8) == 1) {
        var_2 = 0;
        temp_3 = M2C_FIELD(arg0, s32 *, 0x28) + ((arg2 + M2C_FIELD(((arg1 * 8) + M2C_FIELD(arg0, s32 *, 0x24)), s32 *, 4)) * 0x10);
        M2C_FIELD(temp_3, u16 *, 0) = (u16) M2C_FIELD(arg3, u16 *, 0);
        temp_6 = temp_3 + 8;
        M2C_FIELD(temp_3, u16 *, 2) = (u16) M2C_FIELD(arg3, u16 *, 2);
        M2C_FIELD(temp_3, u16 *, 4) = (u16) M2C_FIELD(arg3, u16 *, 4);
        M2C_FIELD(temp_3, u16 *, 6) = (u16) M2C_FIELD(arg3, u16 *, 6);
        M2C_FIELD(temp_3, u16 *, 8) = (u16) M2C_FIELD(arg3, u16 *, 8);
        M2C_FIELD(temp_6, u16 *, 2) = (u16) M2C_FIELD(temp_9, u16 *, 2);
        M2C_FIELD(temp_6, u16 *, 4) = (u16) M2C_FIELD(temp_9, u16 *, 4);
        M2C_FIELD(temp_6, u16 *, 6) = (u16) M2C_FIELD(temp_9, u16 *, 6);
    }
    return var_2;
}
