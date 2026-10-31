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

M2C_UNK FlushCache(M2C_UNK, void *);                /* extern */
M2C_UNK VIEEDMASend__FiPv(M2C_UNK, void *);         /* extern */
M2C_UNK VIEEDMASync__Fi(M2C_UNK);                   /* extern */

s32 Flush__8VIRaster(void *arg0) {
    void *temp_2;
    void *temp_2_2;
    void *temp_3;
    void *temp_3_2;

    temp_3 = M2C_FIELD(arg0, void **, 0x4C24);
    if (temp_3 != M2C_FIELD(arg0, void **, 0x4C28)) {
        M2C_FIELD(temp_3, s8 *, 3) = 0x70;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x4C24), s32 *, 4) = 0;
        temp_2 = M2C_FIELD(arg0, void **, 0x4C24);
        M2C_FIELD(temp_2, s16 *, 0) = 0;
        M2C_FIELD(arg0, void **, 0x4C24) = (void *) (temp_2 + 0x10);
        FlushCache(0, temp_3);
        VIEEDMASync__Fi(1);
        VIEEDMASend__FiPv(1, M2C_FIELD(arg0, void **, 0x4C28));
        temp_3_2 = M2C_FIELD(arg0, void **, 0x4C1C);
        if (M2C_FIELD(arg0, void **, 0x4C28) != temp_3_2) {
            M2C_FIELD(arg0, void **, 0x4C24) = temp_3_2;
            M2C_FIELD(arg0, void **, 0x4C28) = temp_3_2;
        } else {
            temp_2_2 = M2C_FIELD(arg0, void **, 0x4C20);
            M2C_FIELD(arg0, void **, 0x4C24) = temp_2_2;
            M2C_FIELD(arg0, void **, 0x4C28) = temp_2_2;
        }
        M2C_FIELD(arg0, s32 *, 0x4C18) = 0;
        M2C_FIELD(arg0, s32 *, 0x4C2C) = (s32) (M2C_FIELD(arg0, s32 *, 0x4C2C) + 1);
    }
    return 0;
}
