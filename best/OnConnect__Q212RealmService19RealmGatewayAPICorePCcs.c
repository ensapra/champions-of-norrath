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

M2C_UNK __Q212RealmService19ReqGetEncryptionKeyUiRCt12basic_string3ZcZt18string_char_traits1ZcZt24__default_alloc_template2b0i0(s32, s32, s32); /* extern */
M2C_UNK __Q212RealmService19ReqGetServerAddressUi(s32, s32); /* extern */
M2C_UNK __Q212RealmService19ResGetEncryptionKeyPv(s32, M2C_UNK); /* extern */
M2C_UNK __Q212RealmService19ResGetServerAddressPv(s32, M2C_UNK); /* extern */
s32 __builtin_new(M2C_UNK);                         /* extern */
s32 getPublicKey__C9Encryptor(void *);              /* extern */
M2C_UNK submitRequest__Q210GenericAPI14GenericAPICorePQ210GenericAPI14GenericRequestPQ210GenericAPI15GenericResponse(void *, s32, s32); /* extern */

void OnConnect__Q212RealmService19RealmGatewayAPICorePCcs(void *arg0) {
    s32 temp_16;
    s32 temp_2_2;
    s32 temp_2_3;
    s32 temp_2_4;
    s32 temp_2_5;
    s32 var_17;
    s32 var_19;
    void *temp_2;
    void *temp_5;

    if (M2C_FIELD(arg0, s32 *, 0x70) != 0) {
        if (M2C_FIELD(arg0, s32 *, 0x6C) != 0) {
            temp_5 = M2C_FIELD(arg0, void **, 0x68);
            temp_2 = M2C_FIELD(temp_5, void **, 8);
            M2C_FIELD((temp_2 + 0x10), M2C_UNK (**)(void *, void *), 4)(temp_5 + M2C_FIELD(temp_2, s16 *, 0x10), temp_5);
            return;
        }
        temp_2_2 = __builtin_new(0x20);
        var_19 = temp_2_2;
        if (temp_2_2 != 0) {
            temp_16 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x68), s32 *, 4);
            __Q212RealmService19ReqGetEncryptionKeyUiRCt12basic_string3ZcZt18string_char_traits1ZcZt24__default_alloc_template2b0i0(temp_2_2, temp_16, getPublicKey__C9Encryptor(arg0 + 0x74));
        } else {
            var_19 = 0;
        }
        temp_2_3 = __builtin_new(0x28);
        if (temp_2_3 != 0) {
            __Q212RealmService19ResGetEncryptionKeyPv(temp_2_3, 0);
        }
        submitRequest__Q210GenericAPI14GenericAPICorePQ210GenericAPI14GenericRequestPQ210GenericAPI15GenericResponse(arg0, var_19, temp_2_3);
        return;
    }
    temp_2_4 = __builtin_new(0x20);
    var_17 = temp_2_4;
    if (temp_2_4 != 0) {
        __Q212RealmService19ReqGetServerAddressUi(temp_2_4, M2C_FIELD(M2C_FIELD(arg0, void **, 0x68), s32 *, 4));
    } else {
        var_17 = 0;
    }
    temp_2_5 = __builtin_new(0x28);
    if (temp_2_5 != 0) {
        __Q212RealmService19ResGetServerAddressPv(temp_2_5, 0);
    }
    submitRequest__Q210GenericAPI14GenericAPICorePQ210GenericAPI14GenericRequestPQ210GenericAPI15GenericResponse(arg0, var_17, temp_2_5);
}
