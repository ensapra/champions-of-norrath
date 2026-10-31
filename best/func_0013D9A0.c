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

s32 func_00140020();                                /* extern */
M2C_UNK func_001403B8(s32, void *);                 /* extern */
s32 func_001404D0();                                /* extern */
M2C_UNK func_00140E08(void *);                      /* extern */
extern M2C_UNK SetLayerMagFilter__10VIMaterialii;
extern M2C_UNK func_0013DA28;

s32 func_0013D9A0(void *arg0) {
    s32 temp_2;
    s32 temp_4;

    if (func_00140020() != 0) {
        return 0;
    }
    temp_2 = func_001404D0();
    if (temp_2 != 0) {
        return 0;
    }
    temp_4 = M2C_FIELD(&SetLayerMagFilter__10VIMaterialii, s32 *, 0x14) - 1;
    if (M2C_FIELD(&SetLayerMagFilter__10VIMaterialii, s32 *, 0x14) > 0) {
        M2C_FIELD(&SetLayerMagFilter__10VIMaterialii, s32 *, 0x14) = temp_4;
        return temp_2;
    }
    func_001403B8(temp_4, &SetLayerMagFilter__10VIMaterialii + 0x14);
    func_00140E08(&SetLayerMagFilter__10VIMaterialii + 0x28);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &func_0013DA28;
    return 0;
}
