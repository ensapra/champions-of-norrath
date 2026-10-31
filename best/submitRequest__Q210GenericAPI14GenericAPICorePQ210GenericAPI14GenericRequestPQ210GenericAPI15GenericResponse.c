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

M2C_UNK _M_push_back_aux__t5deque3Zt4pair2ZPQ210GenericAPI14GenericRequestZPQ210GenericAPI15GenericResponseZt9allocator1Zt4pair2ZPQ210GenericAPI14GenericRequestZPQ210GenericAPI15GenericResponseUi0RCt4pair2ZPQ210GenericAPI14GenericRequestZPQ210GenericAPI15GenericResponse(void *, void **, void *, void *, void *, void *, s32, void **); /* extern */
s32 time(M2C_UNK, void *, s32);                     /* extern */

s32 submitRequest__Q210GenericAPI14GenericAPICorePQ210GenericAPI14GenericRequestPQ210GenericAPI15GenericResponse(void *arg0, void *arg1, void *arg2) {
    void *sp0;
    void *sp4;
    void *sp10;
    void *sp14;
    s32 temp_10;
    s32 temp_4;
    s32 var_7;
    s64 temp_2;
    void *temp_9;

    sp0 = arg1;
    var_7 = M2C_FIELD(arg0, s32 *, 0x40);
    sp4 = arg2;
    M2C_FIELD(arg0, s32 *, 0x50) = (s32) (M2C_FIELD(arg0, s32 *, 0x50) + 1);
    if (var_7 == 0) {
        var_7 = 1;
        M2C_FIELD(arg0, s32 *, 0x40) = 1;
    }
    M2C_FIELD(sp0, s32 *, 8) = var_7;
    M2C_FIELD(sp4, s32 *, 8) = (s32) M2C_FIELD(arg0, s32 *, 0x40);
    temp_9 = arg0 + 0x18;
    temp_2 = time(0, sp4, var_7) + M2C_FIELD(arg0, u32 *, 0x58);
    temp_10 = M2C_FIELD(temp_9, s32 *, 0x18);
    M2C_FIELD(sp0, s64 *, 0x10) = temp_2;
    sp10 = sp0;
    sp14 = sp4;
    M2C_FIELD(sp4, s64 *, 0x18) = temp_2;
    if (temp_10 != (M2C_FIELD(temp_9, s32 *, 0x20) - 8)) {
        if (temp_10 != 0) {
            M2C_ERROR(/* unknown instruction: ldl $v0, 0x7($a7) */);
            M2C_ERROR(/* unknown instruction: ldr $v0, ($a7) */);
            M2C_ERROR(/* unknown instruction: sdl $v0, 0x7($a6) */);
            M2C_ERROR(/* unknown instruction: sdr $v0, ($a6) */);
        }
        M2C_FIELD(temp_9, s32 *, 0x18) = (s32) (M2C_FIELD(temp_9, s32 *, 0x18) + 8);
    } else {
        _M_push_back_aux__t5deque3Zt4pair2ZPQ210GenericAPI14GenericRequestZPQ210GenericAPI15GenericResponseZt9allocator1Zt4pair2ZPQ210GenericAPI14GenericRequestZPQ210GenericAPI15GenericResponseUi0RCt4pair2ZPQ210GenericAPI14GenericRequestZPQ210GenericAPI15GenericResponse(temp_9, &sp10, sp4, sp0, sp4, temp_9, temp_10, &sp10);
    }
    temp_4 = M2C_FIELD(arg0, s32 *, 0x40);
    M2C_FIELD(arg0, s32 *, 0x40) = (s32) (temp_4 + 1);
    return temp_4;
}
