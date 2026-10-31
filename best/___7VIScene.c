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

M2C_UNK Clear__7VIScene();                          /* extern */
M2C_UNK ___10VIMatrix44(s32, M2C_UNK);              /* extern */
M2C_UNK ___12VIAtmosphere(s32, M2C_UNK);            /* extern */
M2C_UNK ___14VIQueryTriList(s32, M2C_UNK);          /* extern */
M2C_UNK ___16VIParticleSystem(s32, M2C_UNK);        /* extern */
M2C_UNK ___19VISpellEffectSystem(s32, M2C_UNK);     /* extern */
M2C_UNK ___7VIWorld(s32, M2C_UNK);                  /* extern */
M2C_UNK ___t6VIList1Z7VIActor(s32, M2C_UNK);        /* extern */
M2C_UNK ___t6VIList1ZQ27VIScene12VISceneOccup(s32, M2C_UNK); /* extern */
M2C_UNK ___t6VIPool1ZP13VIHSpriteAnim(s32, M2C_UNK); /* extern */
M2C_UNK ___t6VIPool1ZP16VIStaticLighting(s32, M2C_UNK); /* extern */
M2C_UNK ___t6VIPool1ZP8VIRefMap(s32, M2C_UNK);      /* extern */
M2C_UNK ___t6VIPool1ZP8VISprite(s32, M2C_UNK);      /* extern */
M2C_UNK ___t7VIArray1Z11VIClipEntry(s32, M2C_UNK);  /* extern */
M2C_UNK ___t7VIArray1Z7VIPlane(s32, M2C_UNK);       /* extern */
M2C_UNK ___t7VIArray1Z7VIVect3(s32, M2C_UNK);       /* extern */
M2C_UNK ___t7VIArray1Zi(s32, M2C_UNK);              /* extern */
M2C_UNK ___t8VIVector1Z18VISceneDisplayElem(s32, M2C_UNK); /* extern */
M2C_UNK __builtin_delete(s32);                      /* extern */

void ___7VIScene(s32 arg0, s32 arg1) {
    Clear__7VIScene();
    ___19VISpellEffectSystem(arg0 + 0x1B70, 2);
    ___14VIQueryTriList(arg0 + 0x17F0, 2);
    ___12VIAtmosphere(arg0 + 0x640, 2);
    ___16VIParticleSystem(arg0 + 0x548, 2);
    ___t7VIArray1Z7VIVect3(arg0 + 0x53C, 2);
    ___t7VIArray1Z7VIVect3(arg0 + 0x534, 2);
    ___t7VIArray1Z7VIPlane(arg0 + 0x52C, 2);
    ___t7VIArray1Z7VIVect3(arg0 + 0x520, 2);
    ___t7VIArray1Z11VIClipEntry(arg0 + 0x514, 2);
    ___10VIMatrix44(arg0 + 0x4D0, 2);
    ___10VIMatrix44(arg0 + 0x490, 2);
    ___t8VIVector1Z18VISceneDisplayElem(arg0 + 0x458, 2);
    ___t7VIArray1Zi(arg0 + 0x450, 2);
    ___t6VIPool1ZP16VIStaticLighting(arg0 + 0x42C, 2);
    ___t6VIPool1ZP8VIRefMap(arg0 + 0x414, 2);
    ___t6VIPool1ZP13VIHSpriteAnim(arg0 + 0x3FC, 2);
    ___t6VIPool1ZP8VISprite(arg0 + 0x3E4, 2);
    ___t6VIList1ZQ27VIScene12VISceneOccup(arg0 + 0x3D8, 2);
    ___t6VIList1Z7VIActor(arg0 + 0x3CC, 2);
    ___7VIWorld(arg0 + 4, 2);
    if (arg1 & 1) {
        __builtin_delete(arg0);
    }
}
