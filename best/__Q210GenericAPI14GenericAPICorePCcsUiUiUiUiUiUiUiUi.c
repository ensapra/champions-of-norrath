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

M2C_UNK _M_initialize_map__t11_Deque_base3Zt4pair2ZPQ210GenericAPI14GenericRequestZPQ210GenericAPI15GenericResponseZt9allocator1Zt4pair2ZPQ210GenericAPI14GenericRequestZPQ210GenericAPI15GenericResponseUi0Ui(void *, M2C_UNK, void *, void *, M2C_UNK *); /* extern */
M2C_UNK _M_insert_aux__t6vector2ZPQ210GenericAPI17GenericConnectionZt9allocator1ZPQ210GenericAPI17GenericConnectionPPQ210GenericAPI17GenericConnectionRCPQ210GenericAPI17GenericConnection(void *, s32 *, s32 *); /* extern */
M2C_UNK *_S_refill__t24__default_alloc_template2b0i0Ui(M2C_UNK, s32); /* extern */
M2C_UNK __Q210GenericAPI17GenericConnectionPCcsPQ210GenericAPI14GenericAPICoreUiUiUiUiUiUiUi(s32, s32, s16, void *, s32, s32, s32, s32, s32, s32, s32); /* extern */
s32 __builtin_new(M2C_UNK);                         /* extern */
extern M2C_UNK D_011F2910;
extern M2C_UNK D_01205140;

void __Q210GenericAPI14GenericAPICorePCcsUiUiUiUiUiUiUiUi(void *arg0, s32 arg1, s16 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg_sp0, s32 arg_sp8, s32 arg_sp10) {
    s32 sp50;
    u8 sp54;
    M2C_UNK *temp_2;
    M2C_UNK *temp_2_2;
    M2C_UNK *var_8;
    s32 *temp_5;
    s32 temp_2_3;
    void *temp_17;
    void *temp_3;
    void *temp_6;
    void *temp_7;

    temp_17 = arg0 + 0xC;
    M2C_FIELD(arg0, M2C_UNK **, 0x64) = &D_01205140;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 **, 4) = NULL;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    sp54 = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0xC) = NULL;
    if (M2C_FIELD(&D_011F2910, M2C_UNK **, 8) == NULL) {
        var_8 = _S_refill__t24__default_alloc_template2b0i0Ui(0x18, arg2 << 0x10);
    } else {
        var_8 = M2C_FIELD(&D_011F2910, M2C_UNK **, 8);
        M2C_FIELD(&D_011F2910, M2C_UNK **, 8) = (M2C_UNK *) *M2C_FIELD(&D_011F2910, M2C_UNK **, 8);
    }
    temp_3 = arg0 + 0x20;
    M2C_FIELD(arg0, M2C_UNK **, 0xC) = var_8;
    temp_7 = arg0 + 0x30;
    M2C_FIELD(temp_17, u8 *, 8) = sp54;
    temp_6 = arg0 + 0x18;
    M2C_FIELD(var_8, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    temp_2 = M2C_FIELD(arg0, M2C_UNK **, 0xC);
    M2C_FIELD(temp_3, s32 *, 4) = 0;
    M2C_FIELD(temp_2, M2C_UNK **, 8) = temp_2;
    M2C_FIELD(temp_3, s32 *, 8) = 0;
    temp_2_2 = M2C_FIELD(arg0, M2C_UNK **, 0xC);
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(temp_17, s32 *, 4) = 0;
    M2C_FIELD(temp_3, s32 *, 0xC) = 0;
    M2C_FIELD(temp_2_2, M2C_UNK **, 0xC) = temp_2_2;
    M2C_FIELD(temp_7, s32 *, 0xC) = 0;
    M2C_FIELD(var_8, M2C_UNK **, 0) = NULL;
    M2C_FIELD(temp_6, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(temp_7, s32 *, 4) = 0;
    M2C_FIELD(temp_7, s32 *, 8) = 0;
    _M_initialize_map__t11_Deque_base3Zt4pair2ZPQ210GenericAPI14GenericRequestZPQ210GenericAPI15GenericResponseZt9allocator1Zt4pair2ZPQ210GenericAPI14GenericRequestZPQ210GenericAPI15GenericResponseUi0Ui(temp_6, 0, temp_6, temp_7, var_8);
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    M2C_FIELD(arg0, s32 *, 0x58) = arg3;
    M2C_FIELD(arg0, s64 *, 0x48) = 0;
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
    M2C_FIELD(arg0, s32 *, 0x54) = 0;
    M2C_FIELD(arg0, s32 *, 0x5C) = 0;
    M2C_FIELD(arg0, s32 *, 0x60) = 0;
    temp_2_3 = __builtin_new(0x38);
    if (temp_2_3 != 0) {
        __Q210GenericAPI17GenericConnectionPCcsPQ210GenericAPI14GenericAPICoreUiUiUiUiUiUiUi(temp_2_3, arg1, arg2, arg0, arg4, arg5, arg6, arg7, arg_sp0, arg_sp8, arg_sp10);
    }
    temp_5 = M2C_FIELD(arg0, s32 **, 4);
    sp50 = temp_2_3;
    if (temp_5 != M2C_FIELD(arg0, s32 *, 8)) {
        if (temp_5 != NULL) {
            *temp_5 = temp_2_3;
        }
        M2C_FIELD(arg0, s32 **, 4) = (s32 *) (temp_5 + 4);
        return;
    }
    _M_insert_aux__t6vector2ZPQ210GenericAPI17GenericConnectionZt9allocator1ZPQ210GenericAPI17GenericConnectionPPQ210GenericAPI17GenericConnectionRCPQ210GenericAPI17GenericConnection(arg0, temp_5, &sp50);
}
