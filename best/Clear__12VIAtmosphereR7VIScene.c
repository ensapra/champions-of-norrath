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

M2C_UNK ClearAllFireballs__12VIAtmosphere(void *);  /* extern */
M2C_UNK ClearAllSplashes__12VIAtmosphere(void *);   /* extern */
M2C_UNK ReleaseMaterial__8VIRasteriR12VIDictionary(s32, s32, s32); /* extern */
M2C_UNK Stop__13VISoundDevicei(s32, s32);           /* extern */
M2C_UNK ___17VIParticleEmitter(void *, M2C_UNK);    /* extern */
M2C_UNK __builtin_vec_delete(s32);                  /* extern */

void Clear__12VIAtmosphereR7VIScene(void *arg0, void *arg1) {
    s32 *var_16;
    s32 temp_16;
    s32 temp_19;
    s32 temp_20;
    s32 temp_4;
    s32 temp_4_3;
    s32 temp_5;
    s32 temp_5_2;
    s32 temp_5_3;
    s32 var_18;
    void *temp_4_2;
    void *var_16_2;

    temp_16 = M2C_FIELD(arg1, s32 *, 0x4BA0);
    temp_20 = M2C_FIELD(arg1, s32 *, 0x4B9C);
    temp_19 = M2C_FIELD(arg1, s32 *, 0x4B98);
    if (M2C_FIELD(arg0, s32 *, 0x4CC) != 0) {
        temp_5 = M2C_FIELD(arg0, s32 *, 0x1190);
        if (temp_5 != 0) {
            Stop__13VISoundDevicei(temp_16, temp_5);
            M2C_FIELD(arg0, s32 *, 0x1190) = -1;
        }
        temp_5_2 = M2C_FIELD(arg0, s32 *, 0x1194);
        if (temp_5_2 != 0) {
            Stop__13VISoundDevicei(temp_16, temp_5_2);
            M2C_FIELD(arg0, s32 *, 0x1194) = -1;
        }
        var_16 = arg0 + 0xA0;
        ReleaseMaterial__8VIRasteriR12VIDictionary(temp_20, M2C_FIELD(arg0, s32 *, 0xF50), temp_19);
        var_18 = 1;
        ReleaseMaterial__8VIRasteriR12VIDictionary(temp_20, M2C_FIELD(arg0, s32 *, 0x4DC), temp_19);
        ReleaseMaterial__8VIRasteriR12VIDictionary(temp_20, M2C_FIELD(arg0, s32 *, 0x38), temp_19);
        do {
            temp_5_3 = *var_16;
            var_16 += 4;
            var_18 -= 1;
            ReleaseMaterial__8VIRasteriR12VIDictionary(temp_20, temp_5_3, temp_19);
        } while (var_18 >= 0);
    }
    temp_4 = M2C_FIELD(arg0, s32 *, 0xC);
    if (temp_4 != 0) {
        __builtin_vec_delete(temp_4);
        M2C_FIELD(arg0, s32 *, 0xC) = 0;
    }
    ClearAllFireballs__12VIAtmosphere(arg0);
    temp_4_2 = M2C_FIELD(arg0, void **, 0x117C);
    if (temp_4_2 != NULL) {
        var_16_2 = temp_4_2 + (M2C_FIELD(temp_4_2, s32 *, -0x10) << 0xB);
        if (temp_4_2 != var_16_2) {
            do {
                var_16_2 -= 0x800;
                ___17VIParticleEmitter(var_16_2 + 0x420, 2);
                ___17VIParticleEmitter(var_16_2 + 0x40, 2);
            } while (M2C_FIELD(arg0, void **, 0x117C) != var_16_2);
        }
        __builtin_vec_delete(M2C_FIELD(arg0, void **, 0x117C) - 0x10);
        M2C_FIELD(arg0, void **, 0x117C) = NULL;
    }
    ClearAllSplashes__12VIAtmosphere(arg0);
    temp_4_3 = M2C_FIELD(arg0, s32 *, 0x30);
    if (temp_4_3 != 0) {
        __builtin_vec_delete(temp_4_3);
        M2C_FIELD(arg0, s32 *, 0x30) = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x4CC) = 0;
}
