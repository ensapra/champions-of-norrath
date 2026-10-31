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

s32 End__Ct6VIPool1Z13VILoaderTrans(s32);           /* extern */
s32 Process__8VILoaderR7VIScene(void *, s32);       /* extern */

s32 CompleteAll__8VILoaderR7VIScene(void *arg0, s32 arg1) {
    M2C_UNK (*temp_2)(s32);

loop_8:
    if (M2C_FIELD(arg0, s32 *, 0x680) == End__Ct6VIPool1Z13VILoaderTrans(arg0 + 0x684)) {
        return 0;
    }
    if (Process__8VILoaderR7VIScene(arg0, arg1) >= 0) {
        temp_2 = M2C_FIELD(arg0, M2C_UNK (**)(s32), 0x6B0);
        if (temp_2 != NULL) {
            temp_2(M2C_FIELD(arg0, s32 *, 0x6B4));
        }
        goto loop_8;
    }
    return -1;
}
