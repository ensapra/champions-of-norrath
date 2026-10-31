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

M2C_UNK AddTail__7VILListP7VILNode(M2C_UNK *, s32); /* extern */
M2C_UNK Init__9VITrailFxlif(s32, s32, s32, f32);    /* extern */
s32 RemHead__7VILList(M2C_UNK *);                   /* extern */
extern M2C_UNK D_011E51E8;
extern M2C_UNK D_011E51F8;

s32 VITrailFxBegin__Flif(s32 arg0, s32 arg1, f32 fparg0) {
    s32 temp_2;

    temp_2 = RemHead__7VILList(&D_011E51E8);
    if (temp_2 != 0) {
        Init__9VITrailFxlif(temp_2, arg0, arg1, fparg0);
        AddTail__7VILListP7VILNode(&D_011E51F8, temp_2);
    }
    return temp_2;
}
