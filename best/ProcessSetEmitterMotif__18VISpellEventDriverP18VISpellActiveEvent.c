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

f32 Factor__C14VIMotifBlender(s32);                 /* extern */
s32 GetTime__7VIScene(s32);                         /* extern */
s32 Motif__14VIMotifBlender(s32);                   /* extern */
M2C_UNK ReleaseActor__7VIScenei(s32, s32);          /* extern */
M2C_UNK Remove__7VILNode(void *);                   /* extern */
M2C_UNK SetFactor__14VIMotifBlenderf(s32, f32);     /* extern */
M2C_UNK ___14VIMotifBlender(s32, M2C_UNK);          /* extern */
M2C_UNK ___17VIParticleEmitter(s32, M2C_UNK);       /* extern */
M2C_UNK __builtin_delete(void *);                   /* extern */
M2C_UNK __floatdisf(s32);                           /* extern */

s32 ProcessSetEmitterMotif__18VISpellEventDriverP18VISpellActiveEvent(void *arg0, void *arg1) {
    f32 temp_f12;
    s32 temp_4;
    s32 temp_4_2;
    s32 temp_4_3;
    s32 temp_5;
    s32 temp_5_2;
    void *temp_17;

    temp_17 = M2C_FIELD(arg1, void **, 0x74);
    if (M2C_FIELD(temp_17, s32 *, 0xC) < ((s64) ((GetTime__7VIScene(M2C_FIELD(arg0, s32 *, 0x14)) - M2C_FIELD(arg1, s64 *, 0xB0)) << 0x20) >> 0x20)) {
        temp_f12 = M2C_FIELD(temp_17, f32 *, 0x14);
        if (Factor__C14VIMotifBlender(M2C_FIELD(arg1, s32 *, 0x80)) != temp_f12) {
            SetFactor__14VIMotifBlenderf(M2C_FIELD(arg1, s32 *, 0x80), temp_f12);
        }
    } else {
        __floatdisf(GetTime__7VIScene(M2C_FIELD(arg0, s32 *, 0x14)) - M2C_FIELD(arg1, s64 *, 0xB0));
        M2C_ERROR(/* unknown instruction: max.s $f12, $f12, $f4 */);
        SetFactor__14VIMotifBlenderf(M2C_FIELD(arg1, s32 *, 0x80), M2C_ERROR(/* unknown instruction: min.s $f12, $f12, $f0 */));
    }
    if (Motif__14VIMotifBlender(M2C_FIELD(arg1, s32 *, 0x80)) == 0) {
        Remove__7VILNode(arg1);
        if (arg1 != NULL) {
            temp_5 = M2C_FIELD(arg1, s32 *, 0x8C);
            if (temp_5 != -1) {
                ReleaseActor__7VIScenei(M2C_FIELD(arg1, s32 *, 0x10), temp_5);
            }
            temp_5_2 = M2C_FIELD(arg1, s32 *, 0x90);
            if (temp_5_2 != -1) {
                ReleaseActor__7VIScenei(M2C_FIELD(arg1, s32 *, 0x10), temp_5_2);
            }
            temp_4 = M2C_FIELD(arg1, s32 *, 0x78);
            if (temp_4 != 0) {
                ___17VIParticleEmitter(temp_4, 3);
            }
            temp_4_2 = M2C_FIELD(arg1, s32 *, 0x7C);
            if (temp_4_2 != 0) {
                ___17VIParticleEmitter(temp_4_2, 3);
            }
            temp_4_3 = M2C_FIELD(arg1, s32 *, 0x80);
            if (temp_4_3 != 0) {
                ___14VIMotifBlender(temp_4_3, 3);
            }
            __builtin_delete(arg1);
        }
    }
    return 0;
}
