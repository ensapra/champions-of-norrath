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

M2C_UNK AddHead__7VILListP7VILNode(void *, void *); /* extern */
M2C_UNK ClearSegmentsForward__9VITrailFxPQ29VITrailFx7SEGMENT(void *, s32); /* extern */
void *RemHead__7VILList(s32);                       /* extern */

s32 AddSegment__9VITrailFxRC7VIVect3T1RC10VIColor32FT3(void *arg0, void *arg1, void *arg2, s32 arg3, s32 arg4) {
    void *temp_2;
    void *temp_3;
    void *temp_4;

loop_2:
    temp_2 = RemHead__7VILList(arg0 + 0x28);
    if (temp_2 == NULL) {
        ClearSegmentsForward__9VITrailFxPQ29VITrailFx7SEGMENT(arg0, M2C_FIELD(arg0, s32 *, 0x24));
        goto loop_2;
    }
    AddHead__7VILListP7VILNode(arg0 + 0x1C, temp_2);
    temp_3 = temp_2 + 0x10;
    temp_4 = temp_2 + 0x1C;
    M2C_FIELD(temp_2, f32 *, 0x10) = (f32) M2C_FIELD(arg1, f32 *, 0);
    M2C_FIELD(temp_3, f32 *, 4) = (f32) M2C_FIELD(arg1, f32 *, 4);
    M2C_FIELD(temp_3, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 8);
    M2C_FIELD(temp_2, f32 *, 0x1C) = (f32) M2C_FIELD(arg2, f32 *, 0);
    M2C_FIELD(temp_4, f32 *, 4) = (f32) M2C_FIELD(arg2, f32 *, 4);
    M2C_FIELD(temp_4, f32 *, 8) = (f32) M2C_FIELD(arg2, f32 *, 8);
    M2C_ERROR(/* unknown instruction: ldl $v1, 0x7($s5) */);
    M2C_ERROR(/* unknown instruction: ldr $v1, ($s5) */);
    M2C_ERROR(/* unknown instruction: ldl $a0, 0xf($s5) */);
    M2C_ERROR(/* unknown instruction: ldr $a0, 0x8($s5) */);
    M2C_ERROR(/* unknown instruction: sdl $v1, 0x2f($s0) */);
    M2C_ERROR(/* unknown instruction: sdr $v1, 0x28($s0) */);
    M2C_ERROR(/* unknown instruction: sdl $a0, 0x37($s0) */);
    M2C_ERROR(/* unknown instruction: sdr $a0, 0x30($s0) */);
    M2C_ERROR(/* unknown instruction: ldl $v1, 0x7($s6) */);
    M2C_ERROR(/* unknown instruction: ldr $v1, ($s6) */);
    M2C_ERROR(/* unknown instruction: ldl $a0, 0xf($s6) */);
    M2C_ERROR(/* unknown instruction: ldr $a0, 0x8($s6) */);
    M2C_ERROR(/* unknown instruction: sdl $v1, 0x3f($s0) */);
    M2C_ERROR(/* unknown instruction: sdr $v1, 0x38($s0) */);
    M2C_ERROR(/* unknown instruction: sdl $a0, 0x47($s0) */);
    M2C_ERROR(/* unknown instruction: sdr $a0, 0x40($s0) */);
    M2C_FIELD(temp_2, s32 *, 0x48) = 0;
    return 0;
}
