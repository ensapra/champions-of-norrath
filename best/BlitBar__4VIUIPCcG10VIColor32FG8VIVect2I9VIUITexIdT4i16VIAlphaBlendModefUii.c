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

M2C_UNK BlitBar__4VIUIPCUsG10VIColor32FG8VIVect2I9VIUITexIdT4i16VIAlphaBlendModefUii(s32, M2C_UNK *, M2C_UNK *, s32 *, s32, s32, s32, s32, f32, s32, s32); /* extern */
M2C_UNK str8to16__8VIStringPUsUiPCc(M2C_UNK *, M2C_UNK, s32); /* extern */

void BlitBar__4VIUIPCcG10VIColor32FG8VIVect2I9VIUITexIdT4i16VIAlphaBlendModefUii(s32 arg0, s32 arg1, void *arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, f32 fparg0, s32 arg_sp0, s32 arg_sp8) {
    M2C_UNK sp10;
    M2C_UNK sp20;
    s32 sp220;
    s32 sp224;

    M2C_ERROR(/* unknown instruction: ldl $v1, 0x7($a2) */);
    M2C_ERROR(/* unknown instruction: ldr $v1, ($a2) */);
    M2C_ERROR(/* unknown instruction: ldl $t0, 0xf($a2) */);
    M2C_ERROR(/* unknown instruction: ldr $t0, 0x8($a2) */);
    M2C_ERROR(/* unknown instruction: sdl $v1, 0x7($s7) */);
    M2C_ERROR(/* unknown instruction: sdr $v1, ($s7) */);
    M2C_ERROR(/* unknown instruction: sdl $t0, 0xf($s7) */);
    M2C_ERROR(/* unknown instruction: sdr $t0, 0x8($s7) */);
    str8to16__8VIStringPUsUiPCc(&sp20, 0x200, arg1);
    sp220 = M2C_FIELD(arg3, s32 *, 0);
    sp224 = M2C_FIELD(arg3, s32 *, 4);
    BlitBar__4VIUIPCUsG10VIColor32FG8VIVect2I9VIUITexIdT4i16VIAlphaBlendModefUii(arg0, &sp20, &sp10, &sp220, arg4, arg5, arg6, arg7, fparg0, arg_sp0, arg_sp8);
}
