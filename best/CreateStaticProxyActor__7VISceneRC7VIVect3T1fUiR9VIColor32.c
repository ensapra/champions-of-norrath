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

s32 Add__t6VIList1Z7VIActor(s32);                   /* extern */
s32 UpdateProxyActor__7VIScenei(s32, s32, void *, void *); /* extern */

s32 CreateStaticProxyActor__7VISceneRC7VIVect3T1fUiR9VIColor32(s32 arg0, void *arg1, void *arg2, s32 arg3, void *arg4, f32 fparg0) {
    s32 temp_2;
    s32 var_2;
    void *temp_3;
    void *temp_6;
    void *temp_7;

    temp_2 = Add__t6VIList1Z7VIActor(arg0 + 0x3CC);
    var_2 = -1;
    temp_3 = temp_2 + 0x44;
    temp_6 = temp_2 + 0x50;
    temp_7 = temp_2 + 0x70;
    if (temp_2 >= 0) {
        M2C_FIELD(temp_2, s32 *, 0x98) = -1;
        M2C_FIELD(temp_2, f32 *, 0x44) = (f32) M2C_FIELD(arg1, f32 *, 0);
        M2C_FIELD(temp_2, s32 *, 0x9C) = -1;
        M2C_FIELD(temp_2, s32 *, 0x60) = -1;
        M2C_FIELD(temp_3, f32 *, 4) = (f32) M2C_FIELD(arg1, f32 *, 4);
        M2C_FIELD(temp_2, s32 *, 0x68) = -1;
        M2C_FIELD(temp_2, s32 *, 0x6C) = -1;
        M2C_FIELD(temp_3, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 8);
        M2C_FIELD(temp_2, s32 *, 0x40) = 0xC;
        M2C_FIELD(temp_2, s32 *, 0x64) = arg3;
        M2C_FIELD(temp_2, f32 *, 0x50) = (f32) M2C_FIELD(arg2, f32 *, 0);
        M2C_FIELD(temp_2, s32 *, 0x80) = 0;
        M2C_FIELD(temp_2, s32 *, 0x84) = 0;
        M2C_FIELD(temp_6, f32 *, 4) = (f32) M2C_FIELD(arg2, f32 *, 4);
        M2C_FIELD(temp_6, f32 *, 8) = (f32) M2C_FIELD(arg2, f32 *, 8);
        M2C_FIELD(temp_2, f32 *, 0x5C) = fparg0;
        M2C_FIELD(temp_2, f32 *, 0x70) = (f32) ((f32) M2C_FIELD(arg4, u8 *, 0) * 0.0039215684f);
        M2C_FIELD(temp_7, f32 *, 4) = (f32) ((f32) M2C_FIELD(arg4, u8 *, 1) * 0.0039215684f);
        M2C_FIELD(temp_7, f32 *, 8) = (f32) ((f32) M2C_FIELD(arg4, u8 *, 2) * 0.0039215684f);
        M2C_FIELD(temp_7, f32 *, 0xC) = (f32) ((f32) M2C_FIELD(arg4, u8 *, 3) * 0.0039215684f);
        var_2 = (UpdateProxyActor__7VIScenei(arg0, temp_2, temp_6, temp_7) >= 0) ? temp_2 : -1;
    }
    return var_2;
}
