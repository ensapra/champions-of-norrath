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

s32 Allocate__8VILoader(void *);                    /* extern */
s32 Clear__8VILoader();                             /* extern */
s32 End__Ct6VIPool1Z13VILoaderTrans(s32);           /* extern */
s32 Init__t6VIPool1Z13VILoaderTransi(s32, M2C_UNK); /* extern */
M2C_UNK SetPermResource__10VIESFParsei(void *, M2C_UNK); /* extern */

s32 Init__8VILoaderii(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_17;

    temp_17 = arg0 + 0x684;
    if (Clear__8VILoader() >= 0) {
        if (Init__t6VIPool1Z13VILoaderTransi(temp_17, 0x64) < 0) {
            return -1;
        }
        M2C_FIELD(arg0, s32 *, 0x680) = End__Ct6VIPool1Z13VILoaderTrans(temp_17);
        M2C_FIELD(arg0, s32 *, 0) = arg2;
        M2C_FIELD(arg0, s32 *, 0x6B8) = arg1;
        if (Allocate__8VILoader(arg0) < 0) {
            goto block_5;
        }
        SetPermResource__10VIESFParsei(arg0 + 0x258, 0);
        return 0;
    }
block_5:
    return -1;
}
