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

s32 Open__12VITCPSocket2(s32);                      /* extern */
M2C_UNK __12VITCPSocket2G14sceInetAddressi(s32, M2C_UNK *, s32); /* extern */
M2C_UNK __5Clock(s32);                              /* extern */
M2C_UNK __Q210TcpManager9TcpParamsRCQ210TcpManager9TcpParams(s32, s32); /* extern */
s32 __builtin_new(M2C_UNK);                         /* extern */
s32 __builtin_vec_new(s32);                         /* extern */
M2C_UNK setOptions__13TcpConnection(void *);        /* extern */
M2C_UNK start__5Clock(s32);                         /* extern */

void __13TcpConnectionP10TcpManagerP14BlockAllocatorRQ210TcpManager9TcpParamsRC9IPAddressiUi(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg5, s32 arg6) {
    M2C_UNK sp10;
    s32 temp_16;
    s32 temp_2;
    s32 temp_2_2;
    s32 var_2;

    temp_16 = arg0 + 0xB0;
    M2C_FIELD(arg0, s32 *, 0xC) = arg1;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_ERROR(/* unknown instruction: ldl $v0, 0x7($a4) */);
    M2C_ERROR(/* unknown instruction: ldr $v0, ($a4) */);
    M2C_ERROR(/* unknown instruction: ldl $v1, 0xf($a4) */);
    M2C_ERROR(/* unknown instruction: ldr $v1, 0x8($a4) */);
    M2C_ERROR(/* unknown instruction: sdl $v0, 0x7($s3) */);
    M2C_ERROR(/* unknown instruction: sdr $v0, ($s3) */);
    M2C_ERROR(/* unknown instruction: sdl $v1, 0xf($s3) */);
    M2C_ERROR(/* unknown instruction: sdr $v1, 0x8($s3) */);
    M2C_FIELD(arg0, s32 *, 0x30) = arg2;
    M2C_FIELD(arg0, s32 *, 0x28) = arg5;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    __Q210TcpManager9TcpParamsRCQ210TcpManager9TcpParams(arg0 + 0x44, arg3);
    M2C_FIELD(arg0, s32 *, 0xA8) = 0;
    M2C_FIELD(arg0, s32 *, 0xAC) = arg6;
    __5Clock(temp_16);
    M2C_FIELD(arg0, s32 *, 0xC0) = 0;
    start__5Clock(temp_16);
    temp_2 = M2C_FIELD(arg0, s32 *, 0x9C);
    if (temp_2 != 0) {
        M2C_FIELD(arg0, s32 *, 0xA8) = __builtin_vec_new(temp_2);
    }
    temp_2_2 = __builtin_new(0x64);
    var_2 = 0;
    if (temp_2_2 != 0) {
        M2C_ERROR(/* unknown instruction: ldl $v0, 0x7($s3) */);
        M2C_ERROR(/* unknown instruction: ldr $v0, ($s3) */);
        M2C_ERROR(/* unknown instruction: ldl $v1, 0xf($s3) */);
        M2C_ERROR(/* unknown instruction: ldr $v1, 0x8($s3) */);
        M2C_ERROR(/* unknown instruction: sdl $v0, 0x7($a1) */);
        M2C_ERROR(/* unknown instruction: sdr $v0, ($a1) */);
        M2C_ERROR(/* unknown instruction: sdl $v1, 0xf($a1) */);
        M2C_ERROR(/* unknown instruction: sdr $v1, 0x8($a1) */);
        __12VITCPSocket2G14sceInetAddressi(temp_2_2, &sp10, M2C_FIELD(arg0, s32 *, 0x28));
        var_2 = temp_2_2;
    }
    M2C_FIELD(arg0, s32 *, 8) = var_2;
    setOptions__13TcpConnection(arg0);
    if (Open__12VITCPSocket2(M2C_FIELD(arg0, s32 *, 8)) >= 0) {
        M2C_FIELD(arg0, s32 *, 0x10) = 0;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x10) = 2;
}
