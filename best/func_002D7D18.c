/* machine draft (m2c) for ee-gcc-2.9-991111 -O2 -G8, tried by autopilot */
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

s32 func_002D76D0(M2C_UNK, void *, M2C_UNK, s32, s32, s32); /* extern */
void *func_002D7B98(s32, u32);                      /* extern */
void *func_002D7BC8(s32, u32);                      /* extern */
M2C_UNK func_002DF3E8(M2C_UNK, M2C_UNK *, void *);  /* extern */
extern M2C_UNK func_002D7CD8;

void func_002D7D18(void *arg0, s32 arg1) {
    u32 temp_5;
    void *var_2;

    temp_5 = M2C_FIELD(arg0, u32 *, 0x10);
    if (temp_5 & 4) {
        var_2 = func_002D7BC8(arg1, temp_5 >> 0x10);
    } else {
        var_2 = func_002D7B98(arg1, temp_5);
    }
    M2C_FIELD(var_2, s32 *, 0x14) = (s32) M2C_FIELD(arg0, s32 *, 0x14);
    M2C_FIELD(var_2, s32 *, 0x1C) = (s32) M2C_FIELD(arg0, s32 *, 0x1C);
    M2C_FIELD(var_2, s32 *, 0x20) = 0x8000000C;
    M2C_FIELD(var_2, s32 *, 0x24) = (s32) M2C_FIELD(arg0, s32 *, 0x20);
    M2C_FIELD(var_2, s32 *, 0x28) = (s32) M2C_FIELD(arg0, s32 *, 0x24);
    M2C_FIELD(var_2, s32 *, 0x2C) = (s32) M2C_FIELD(arg0, s32 *, 0x28);
    if (func_002D76D0(0x80000008, var_2, 0x40, M2C_FIELD(arg0, s32 *, 0x20), M2C_FIELD(arg0, s32 *, 0x24), M2C_FIELD(arg0, s32 *, 0x28)) == 0) {
        func_002DF3E8(0x800, &func_002D7CD8, var_2);
    }
}
