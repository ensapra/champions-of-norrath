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

M2C_UNK BlitBar__4VIUIPCUsG10VIColor32FG8VIVect2I9VIUITexIdN24i16VIAlphaBlendModefUii(void *, s32, M2C_UNK *, s32 *, s32, s32, s32, s32, f32, s32, s32, s32); /* extern */
s32 GetString__13VIStringTableii(s32, s32);         /* extern */

void BlitBar__4VIUIUsG10VIColor32FG8VIVect2I9VIUITexIdN24i16VIAlphaBlendModefUii(void *arg0, s32 arg1, void *arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, f32 fparg0, s32 arg_sp0, s32 arg_sp8, s32 arg_sp10) {
    M2C_UNK sp20;
    s32 sp30;
    s32 sp34;

    M2C_ERROR(/* unknown instruction: ldl $v0, 0x7($a2) */);
    M2C_ERROR(/* unknown instruction: ldr $v0, ($a2) */);
    M2C_ERROR(/* unknown instruction: ldl $v1, 0xf($a2) */);
    M2C_ERROR(/* unknown instruction: ldr $v1, 0x8($a2) */);
    M2C_ERROR(/* unknown instruction: sdl $v0, 0x7($s5) */);
    M2C_ERROR(/* unknown instruction: sdr $v0, ($s5) */);
    M2C_ERROR(/* unknown instruction: sdl $v1, 0xf($s5) */);
    M2C_ERROR(/* unknown instruction: sdr $v1, 0x8($s5) */);
    sp30 = M2C_FIELD(arg3, s32 *, 0);
    sp34 = M2C_FIELD(arg3, s32 *, 4);
    BlitBar__4VIUIPCUsG10VIColor32FG8VIVect2I9VIUITexIdN24i16VIAlphaBlendModefUii(arg0, GetString__13VIStringTableii(arg1 & 0xFFFF, M2C_FIELD(arg0, s32 *, 0x30)), &sp20, &sp30, arg4, arg5, arg6, arg7, fparg0, arg_sp0, arg_sp8, arg_sp10);
}
