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

void unpack__Q24Base14AutoByteStreamRQ34Base10ByteStream12ReadIterator(void *arg0, void *arg1) {
    s8 sp0;                                         /* compiler-managed */
    s8 sp1;
    s32 temp_4;
    void ***var_16;
    void **temp_6;
    void *temp_2;
    void *temp_2_2;

    temp_4 = M2C_FIELD(arg1, s32 *, 0);
    var_16 = M2C_FIELD(arg0, void ****, 0);
    temp_2 = *M2C_FIELD(M2C_FIELD(arg1, void **, 4), s32 **, 0xC) + temp_4;
    sp0 = M2C_FIELD(temp_2, s8 *, 0);
    sp1 = M2C_FIELD(temp_2, s8 *, 1);
    M2C_FIELD(arg1, s32 *, 0) = (s32) (temp_4 + 2);
    sp0 = (u16) sp0;
    if (var_16 != M2C_FIELD(arg0, s32 *, 4)) {
        do {
            temp_6 = *var_16;
            var_16 += 4;
            temp_2_2 = *temp_6;
            M2C_FIELD((temp_2_2 + 0x18), M2C_UNK (**)(void *, void *, void **), 4)(temp_6 + M2C_FIELD(temp_2_2, s16 *, 0x18), arg1, temp_6);
        } while (var_16 != M2C_FIELD(arg0, s32 *, 4));
    }
}
