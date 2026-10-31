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

M2C_UNK ___t10VIMultiMap2ZUiZi(void *, M2C_UNK);    /* extern */
M2C_UNK ___t5VIMap2ZiZ17VIEESurfCacheInfo(void *, M2C_UNK); /* extern */
M2C_UNK ___t6VIPool1Z10VIEEBucket(void *, M2C_UNK); /* extern */
M2C_UNK __t10VIMultiMap2ZUiZi(void *);              /* extern */
M2C_UNK __t5VIMap2ZiZ17VIEESurfCacheInfo(void *);   /* extern */
M2C_UNK __t6VIPool1Z10VIEEBucket(void *, M2C_UNK);  /* extern */
extern s32 D_011B01B0;
extern s32 D_011B01B8;
extern s32 D_011B01C0;
extern s32 D_011B01C8;
extern s32 D_011B01D0;
extern s32 D_011B01D8;
extern s32 D_011B01E0;
extern s32 D_011B01E8;
extern M2C_UNK D_011EDA68;
extern M2C_UNK D_1128;
extern M2C_UNK D_14E0;
extern M2C_UNK D_1938;
extern M2C_UNK D_1CE0;
extern M2C_UNK D_9E8;
extern M2C_UNK D_B0;
extern M2C_UNK D_D0;
extern M2C_UNK D_D68;

void __static_initialization_and_destruction_0_01112B00(s32 arg0, s32 arg1) {
    if (arg1 == 0xFFFF) {
        if (arg0 == 1) {
            D_011B01B0 = (s32) (&D_B0 - 0) >> 3;
            if (arg0 == 1) {
                D_011B01B8 = (s32) (&D_9E8 - 0) >> 3;
                if (arg0 == 1) {
                    D_011B01C0 = (s32) (&D_D68 - 0) >> 3;
                    if (arg0 == 1) {
                        D_011B01C8 = (s32) (&D_1128 - 0) >> 3;
                        if (arg0 == 1) {
                            D_011B01D0 = (s32) (&D_14E0 - 0) >> 3;
                            if (arg0 == 1) {
                                D_011B01D8 = (s32) (&D_1938 - 0) >> 3;
                                if (arg0 == 1) {
                                    D_011B01E0 = (s32) (&D_1CE0 - 0) >> 3;
                                    if (arg0 == 1) {
                                        D_011B01E8 = (s32) (&D_D0 - 0) >> 3;
                                        if (arg0 == 1) {
                                            __t6VIPool1Z10VIEEBucket(&D_011EDA68 + 0x20, 1);
                                            __t5VIMap2ZiZ17VIEESurfCacheInfo(&D_011EDA68 + 0x38);
                                            __t10VIMultiMap2ZUiZi(&D_011EDA68 + 0x4C);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if (arg0 == 0) {
            ___t10VIMultiMap2ZUiZi(&D_011EDA68 + 0x4C, 2);
            ___t5VIMap2ZiZ17VIEESurfCacheInfo(&D_011EDA68 + 0x38, 2);
            ___t6VIPool1Z10VIEEBucket(&D_011EDA68 + 0x20, 2);
        }
    }
}
