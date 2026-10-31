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

M2C_UNK __wrap_free(M2C_UNK *);                     /* extern */
M2C_UNK _uassert(M2C_UNK *, M2C_UNK *, M2C_UNK);    /* extern */
s32 memcmp(M2C_UNK *, M2C_UNK);                     /* extern */
M2C_UNK message_destroy__FP9message_t(s32);         /* extern */
s32 vlist_remove_head__FP7vlist_t(void *);          /* extern */
M2C_UNK vset_remove_all__FP6vset_t(void *);         /* extern */
extern M2C_UNK D_011DB468;
extern M2C_UNK D_011DB4A8;
extern M2C_UNK D_011DB4B0;
extern M2C_UNK D_011DB4C8;

void route_destroy__FP7route_t(M2C_UNK *arg0) {
    s32 temp_2;

    if (memcmp(&D_011DB4A8, 4) != 0) {
        _uassert(&D_011DB4B0, &D_011DB468, 0xDB);
    }
    *arg0 = M2C_UNALIGNED32(M2C_FIELD(&D_011DB4C8, M2C_UNK *, 0));
loop_5:
    temp_2 = vlist_remove_head__FP7vlist_t(arg0 + 0x38);
    if (temp_2 != 0) {
        message_destroy__FP9message_t(temp_2);
        goto loop_5;
    }
    vset_remove_all__FP6vset_t(arg0 + 0x74);
    vset_remove_all__FP6vset_t(arg0 + 0x98);
    __wrap_free(arg0);
}
