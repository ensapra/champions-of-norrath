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

M2C_UNK ReleaseActor__7VIScenei(s32, s32);          /* extern */
void *RemHead__7VILList(s32);                       /* extern */
M2C_UNK ___11VILightning(s32, M2C_UNK);             /* extern */
M2C_UNK ___14VIMotifBlender(s32, M2C_UNK);          /* extern */
M2C_UNK ___17VIParticleEmitter(s32, M2C_UNK);       /* extern */
M2C_UNK ___7VILList(s32, M2C_UNK);                  /* extern */
M2C_UNK __builtin_delete(void *);                   /* extern */

void ___18VISpellEventDriver(void *arg0, s32 arg1) {
    s32 temp_19;
    s32 temp_20;
    s32 temp_4;
    s32 temp_4_10;
    s32 temp_4_11;
    s32 temp_4_12;
    s32 temp_4_13;
    s32 temp_4_14;
    s32 temp_4_2;
    s32 temp_4_3;
    s32 temp_4_4;
    s32 temp_4_5;
    s32 temp_4_6;
    s32 temp_4_7;
    s32 temp_4_8;
    s32 temp_4_9;
    s32 temp_5;
    s32 temp_5_2;
    s32 temp_5_3;
    s32 temp_5_4;
    s32 temp_5_5;
    s32 temp_5_6;
    s32 temp_5_7;
    s32 temp_5_8;
    void *temp_16;
    void *temp_16_2;
    void *temp_2;
    void *temp_2_2;

    temp_20 = arg0 + 0x4C;
loop_12:
    temp_2 = RemHead__7VILList(temp_20);
    if (temp_2 != NULL) {
        temp_5 = M2C_FIELD(temp_2, s32 *, 0x8C);
        if (temp_5 != -1) {
            ReleaseActor__7VIScenei(M2C_FIELD(temp_2, s32 *, 0x10), temp_5);
        }
        temp_5_2 = M2C_FIELD(temp_2, s32 *, 0x90);
        if (temp_5_2 != -1) {
            ReleaseActor__7VIScenei(M2C_FIELD(temp_2, s32 *, 0x10), temp_5_2);
        }
        temp_4 = M2C_FIELD(temp_2, s32 *, 0x78);
        if (temp_4 != 0) {
            ___17VIParticleEmitter(temp_4, 3);
        }
        temp_4_2 = M2C_FIELD(temp_2, s32 *, 0x7C);
        if (temp_4_2 != 0) {
            ___17VIParticleEmitter(temp_4_2, 3);
        }
        temp_4_3 = M2C_FIELD(temp_2, s32 *, 0x80);
        if (temp_4_3 != 0) {
            ___14VIMotifBlender(temp_4_3, 3);
        }
        __builtin_delete(temp_2);
        goto loop_12;
    }
    temp_19 = arg0 + 0x58;
loop_27:
    temp_2_2 = RemHead__7VILList(temp_19);
    if (temp_2_2 != NULL) {
        temp_5_3 = M2C_FIELD(temp_2_2, s32 *, 0x8C);
        if (temp_5_3 != -1) {
            ReleaseActor__7VIScenei(M2C_FIELD(temp_2_2, s32 *, 0x10), temp_5_3);
        }
        temp_5_4 = M2C_FIELD(temp_2_2, s32 *, 0x90);
        if (temp_5_4 != -1) {
            ReleaseActor__7VIScenei(M2C_FIELD(temp_2_2, s32 *, 0x10), temp_5_4);
        }
        temp_4_4 = M2C_FIELD(temp_2_2, s32 *, 0x78);
        if (temp_4_4 != 0) {
            ___17VIParticleEmitter(temp_4_4, 3);
        }
        temp_4_5 = M2C_FIELD(temp_2_2, s32 *, 0x7C);
        if (temp_4_5 != 0) {
            ___17VIParticleEmitter(temp_4_5, 3);
        }
        temp_4_6 = M2C_FIELD(temp_2_2, s32 *, 0x80);
        if (temp_4_6 != 0) {
            ___14VIMotifBlender(temp_4_6, 3);
        }
        __builtin_delete(temp_2_2);
        goto loop_27;
    }
    temp_16 = M2C_FIELD(arg0, void **, 0x20);
    if (temp_16 != NULL) {
        temp_5_5 = M2C_FIELD(temp_16, s32 *, 0x8C);
        if (temp_5_5 != -1) {
            ReleaseActor__7VIScenei(M2C_FIELD(temp_16, s32 *, 0x10), temp_5_5);
        }
        temp_5_6 = M2C_FIELD(temp_16, s32 *, 0x90);
        if (temp_5_6 != -1) {
            ReleaseActor__7VIScenei(M2C_FIELD(temp_16, s32 *, 0x10), temp_5_6);
        }
        temp_4_7 = M2C_FIELD(temp_16, s32 *, 0x78);
        if (temp_4_7 != 0) {
            ___17VIParticleEmitter(temp_4_7, 3);
        }
        temp_4_8 = M2C_FIELD(temp_16, s32 *, 0x7C);
        if (temp_4_8 != 0) {
            ___17VIParticleEmitter(temp_4_8, 3);
        }
        temp_4_9 = M2C_FIELD(temp_16, s32 *, 0x80);
        if (temp_4_9 != 0) {
            ___14VIMotifBlender(temp_4_9, 3);
        }
        __builtin_delete(temp_16);
    }
    temp_16_2 = M2C_FIELD(arg0, void **, 0x24);
    if (temp_16_2 != NULL) {
        temp_5_7 = M2C_FIELD(temp_16_2, s32 *, 0x8C);
        if (temp_5_7 != -1) {
            ReleaseActor__7VIScenei(M2C_FIELD(temp_16_2, s32 *, 0x10), temp_5_7);
        }
        temp_5_8 = M2C_FIELD(temp_16_2, s32 *, 0x90);
        if (temp_5_8 != -1) {
            ReleaseActor__7VIScenei(M2C_FIELD(temp_16_2, s32 *, 0x10), temp_5_8);
        }
        temp_4_10 = M2C_FIELD(temp_16_2, s32 *, 0x78);
        if (temp_4_10 != 0) {
            ___17VIParticleEmitter(temp_4_10, 3);
        }
        temp_4_11 = M2C_FIELD(temp_16_2, s32 *, 0x7C);
        if (temp_4_11 != 0) {
            ___17VIParticleEmitter(temp_4_11, 3);
        }
        temp_4_12 = M2C_FIELD(temp_16_2, s32 *, 0x80);
        if (temp_4_12 != 0) {
            ___14VIMotifBlender(temp_4_12, 3);
        }
        __builtin_delete(temp_16_2);
    }
    temp_4_13 = M2C_FIELD(arg0, s32 *, 0x28);
    if (temp_4_13 != 0) {
        ___11VILightning(temp_4_13, 3);
    }
    temp_4_14 = M2C_FIELD(arg0, s32 *, 0x2C);
    if (temp_4_14 != 0) {
        ___11VILightning(temp_4_14, 3);
    }
    ___7VILList(temp_19, 2);
    ___7VILList(temp_20, 2);
    if (arg1 & 1) {
        __builtin_delete(arg0);
    }
}
