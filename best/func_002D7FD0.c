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

s32 func_002D76D0(M2C_UNK, void *, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
void *func_002D7B98(s32);                           /* extern */
void *func_002D7F40(s32, s32);                      /* extern */
M2C_UNK func_002DF3E8(M2C_UNK, M2C_UNK *, void *);  /* extern */
extern M2C_UNK func_002D7F90;

void func_002D7FD0(void *arg0, s32 arg1) {
    void *temp_2;
    void *temp_2_2;

    temp_2 = func_002D7B98(arg1);
    M2C_FIELD(temp_2, s32 *, 0x1C) = (s32) M2C_FIELD(arg0, s32 *, 0x1C);
    M2C_FIELD(temp_2, s32 *, 0x14) = (s32) M2C_FIELD(arg0, s32 *, 0x14);
    M2C_FIELD(temp_2, s32 *, 0x20) = 0x80000009;
    temp_2_2 = func_002D7F40(M2C_FIELD(arg0, s32 *, 0x20), arg1);
    if (temp_2_2 != NULL) {
        M2C_FIELD(temp_2, void **, 0x24) = temp_2_2;
        M2C_FIELD(temp_2, s32 *, 0x28) = (s32) M2C_FIELD(temp_2_2, s32 *, 8);
    } else {
        M2C_FIELD(temp_2, void **, 0x24) = NULL;
        M2C_FIELD(temp_2, s32 *, 0x28) = 0;
    }
    if (func_002D76D0(0x80000008, temp_2, 0x40, 0, 0, 0) == 0) {
        func_002DF3E8(0x800, &func_002D7F90, temp_2);
    }
}
