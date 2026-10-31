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

s32 func_001882A8(s32);                             /* extern */
void *func_00188378(s32, M2C_UNK);                  /* extern */
M2C_UNK func_00188FA0(void *, s32, s32);            /* extern */
M2C_UNK func_001A1568(void *, M2C_UNK, void *);     /* extern */
M2C_UNK func_001A2850(void *);                      /* extern */
extern M2C_UNK jtbl_004C006C;
extern M2C_UNK xmlParseTryOrFinish;

s32 func_00186038(void *arg0) {
    s8 temp_2_3;
    void *temp_2;
    void *temp_2_2;
    void *var_4;

    if (arg0 == NULL) {
        func_001A1568(&jtbl_004C006C + 0xDBAC, 0x184, &jtbl_004C006C + 0xDBBC);
    }
    if (func_001882A8(M2C_FIELD(arg0, s32 *, 0)) != 0) {
        temp_2 = func_00188378(M2C_FIELD(arg0, s32 *, 0), 0);
        temp_2_2 = &xmlParseTryOrFinish + 0x8A8;
        if (temp_2 == NULL) {
            var_4 = &jtbl_004C006C + 0xDC34;
            goto block_9;
        }
        func_00188FA0(temp_2, M2C_FIELD(temp_2_2, s32 *, 0xC), M2C_FIELD(temp_2_2, s32 *, 0x10));
        M2C_FIELD(arg0, s64 *, 8) = (s64) M2C_FIELD(temp_2, s64 *, 0x18);
        M2C_FIELD(arg0, s32 *, 0x10) = (s32) M2C_FIELD(temp_2, u16 *, 0x14);
        M2C_FIELD(arg0, s32 *, 0x14) = (s32) M2C_FIELD(temp_2, u16 *, 0x16);
        temp_2_3 = M2C_FIELD(temp_2, u8 *, 0x11) + 0xFF;
        M2C_FIELD(arg0, s8 *, 0x18) = temp_2_3;
        if (temp_2_3 & 0xFF) {
            M2C_FIELD(arg0, s64 *, 0x20) = (s64) M2C_FIELD(temp_2, s64 *, 0x30);
            M2C_FIELD(arg0, s64 *, 0x28) = (s64) M2C_FIELD((temp_2 + 0x30), s64 *, 8);
        } else {
            M2C_FIELD(arg0, s64 *, 0x28) = 0;
            M2C_FIELD(arg0, s64 *, 0x20) = 0;
        }
        return 0;
    }
    var_4 = &jtbl_004C006C + 0xDBC4;
block_9:
    func_001A2850(var_4);
    return 1;
}
