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

s32 func_001107E8(s32, M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
s32 func_0011BA18(M2C_UNK, s32);                    /* extern */
M2C_UNK func_0011CEF0(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_0011E420(M2C_UNK, s32);                /* extern */
extern M2C_UNK drawNewestQuickSpellMenu__Fiiicl;
extern M2C_UNK message_get_created__FPC9message_t;
extern M2C_UNK message_get_flush__FPC9message_t;
extern s32 message_get_time__FPC9message_t;
extern s32 message_set_flush__FP9message_tUs;

void func_001363D0(void) {
    s32 temp_2;

    if (message_set_flush__FP9message_tUs >= 0) {
        if (message_set_flush__FP9message_tUs < 7) {
            temp_2 = func_001107E8(func_0011BA18(0x111, M2C_FIELD(&message_get_flush__FPC9message_t, s32 *, 0)), &message_get_created__FPC9message_t, 2, 0, &message_get_flush__FPC9message_t);
            M2C_FIELD(&drawNewestQuickSpellMenu__Fiiicl, s32 *, 0x384) = -1;
            message_get_time__FPC9message_t = temp_2;
            M2C_FIELD(&message_get_flush__FPC9message_t, s32 *, 4) = 0;
        }
    }
    func_0011E420(0, M2C_FIELD(&message_get_flush__FPC9message_t, s32 *, 0));
    func_0011CEF0(message_get_time__FPC9message_t, message_set_flush__FP9message_tUs, 0xF);
}
