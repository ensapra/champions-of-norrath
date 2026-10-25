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

M2C_UNK func_002D5F90(s32, void *, void *);         /* extern */

void func_002D81E0(void *arg0) {
    s32 temp_4;
    void *temp_5;
    void *temp_6;

    temp_5 = M2C_FIELD(arg0, void **, 0x34);
    temp_6 = M2C_FIELD(temp_5, void **, 0x40);
    if (M2C_FIELD(temp_6, void **, 0xC) != NULL) {
        M2C_FIELD(M2C_FIELD(temp_6, void **, 0x10), void **, 0x3C) = temp_5;
    } else {
        M2C_FIELD(temp_6, void **, 0xC) = temp_5;
    }
    M2C_FIELD(temp_6, void **, 0x10) = temp_5;
    M2C_FIELD(temp_5, s32 *, 0x20) = (s32) M2C_FIELD(arg0, s32 *, 0x14);
    M2C_FIELD(temp_5, s32 *, 0x1C) = (s32) M2C_FIELD(arg0, s32 *, 0x1C);
    M2C_FIELD(temp_5, s32 *, 0x24) = (s32) M2C_FIELD(arg0, s32 *, 0x20);
    M2C_FIELD(temp_5, s32 *, 0xC) = (s32) M2C_FIELD(arg0, s32 *, 0x24);
    M2C_FIELD(temp_5, s32 *, 0x28) = (s32) M2C_FIELD(arg0, s32 *, 0x28);
    M2C_FIELD(temp_5, s32 *, 0x2C) = (s32) M2C_FIELD(arg0, s32 *, 0x2C);
    M2C_FIELD(temp_5, s32 *, 0x30) = (s32) M2C_FIELD(arg0, s32 *, 0x30);
    M2C_FIELD(temp_5, s32 *, 0x34) = (s32) M2C_FIELD(arg0, s32 *, 0x10);
    temp_4 = M2C_FIELD(temp_6, s32 *, 0);
    if ((temp_4 >= 0) && (M2C_FIELD(temp_6, s32 *, 4) == 0)) {
        func_002D5F90(temp_4, temp_5, temp_6);
    }
}
