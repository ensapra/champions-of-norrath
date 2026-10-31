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

M2C_UNK func_0010A5E8(void *, M2C_UNK);             /* extern */
M2C_UNK func_00134020(void *);                      /* extern */
M2C_UNK func_00134238(M2C_UNK);                     /* extern */
M2C_UNK func_00158DC0(s32, void *, M2C_UNK);        /* extern */
s32 func_001A1640(void *);                          /* extern */
M2C_UNK func_001A3D78(void *, void *, s32);         /* extern */
extern M2C_UNK jtbl_004C006C;
extern M2C_UNK message_create_buffer__FPP9message_tP10endpoint_tP12connection_tP8buffer_t;
extern M2C_UNK runStats__Fii;

void func_00134518(s32 arg0, void *arg2) {
    s32 temp_2;
    s32 temp_3;
    u8 temp_3_2;
    void *temp_17;

    temp_3 = M2C_FIELD(arg2, s32 *, 0);
    switch (temp_3) {                               /* irregular */
    case 19:
        temp_3_2 = *M2C_FIELD(arg2, u8 **, 8);
        if ((u32) ((temp_3_2 + 0xD0) & 0xFF) >= 0xAU) {
            if (temp_3_2 != 9) {
                M2C_FIELD(arg2, s32 *, 4) = 0;
                return;
            }
            func_00134238(0x258);
            M2C_FIELD(arg2, s32 *, 4) = 0;
            return;
        }
        return;
    case 18:
        temp_17 = &message_create_buffer__FPP9message_tP10endpoint_tP12connection_tP8buffer_t + 8;
        func_0010A5E8(temp_17, 0x258);
        temp_2 = func_001A1640(temp_17);
        func_001A3D78(temp_17, &jtbl_004C006C + 0xACB4, (((temp_2 < 0x5B) ^ 0) == 0) ? 0x5A : ((temp_2 < 0) ? 0 : temp_2));
        func_00158DC0(arg0, temp_17, 0);
        M2C_FIELD(&runStats__Fii, s32 *, 0xC2C) = (s32) (func_001A1640(temp_17) * 0x3C);
        func_00134020(&runStats__Fii + 0xC2C);
        break;
    }
}
