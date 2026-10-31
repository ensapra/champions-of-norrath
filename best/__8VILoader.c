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

M2C_UNK __10VIESFParse(s32);                        /* extern */
M2C_UNK __9VIObjFile(s32);                          /* extern */
M2C_UNK __t5VIMap2ZUiZi(s32);                       /* extern */
M2C_UNK __t6VIPool1Z13VILoaderTrans(s32);           /* extern */

void __8VILoader(void *arg0) {
    __9VIObjFile(arg0 + 8);
    __10VIESFParse(arg0 + 0x258);
    __t6VIPool1Z13VILoaderTrans(arg0 + 0x684);
    __t5VIMap2ZUiZi(arg0 + 0x69C);
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 0x6B0) = 0;
    M2C_FIELD(arg0, s32 *, 0x680) = -1;
    M2C_FIELD(arg0, s32 *, 0x6BC) = 0;
    M2C_FIELD(arg0, s32 *, 0x6C0) = 0;
    M2C_FIELD(arg0, s32 *, 0x6B8) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
}
