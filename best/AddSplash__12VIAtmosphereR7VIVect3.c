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

M2C_UNK AddTail__7VILListP7VILNode(void *, void *); /* extern */
void *RemHead__7VILList(s32);                       /* extern */
s32 rand();                                         /* extern */

void AddSplash__12VIAtmosphereR7VIVect3(void *arg0, void *arg1) {
    void *temp_2;
    void *temp_3;

    temp_2 = RemHead__7VILList(arg0 + 0x24);
    temp_3 = temp_2 + 0x10;
    if (temp_2 != NULL) {
        M2C_FIELD(temp_2, f32 *, 0x10) = (f32) M2C_FIELD(arg1, f32 *, 0);
        M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) + 1);
        M2C_FIELD(temp_3, f32 *, 4) = (f32) M2C_FIELD(arg1, f32 *, 4);
        M2C_FIELD(temp_2, s32 *, 0x20) = 0;
        M2C_FIELD(temp_3, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 8);
        M2C_FIELD(temp_2, f32 *, 0x1C) = (f32) (((f32) ((rand() * 0x83) & 0xFF) * 0.0039215684f * 0.19999999f) + 0.28199998f);
        AddTail__7VILListP7VILNode(arg0 + 0x14, temp_2);
    }
}
