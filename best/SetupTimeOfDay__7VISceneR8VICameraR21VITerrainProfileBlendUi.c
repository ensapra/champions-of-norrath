#ifndef M2C_DEFINES
#define M2C_DEFINES
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
M2C_UNK SetupTimeOfDayFog__7VISceneR21VITerrainProfileBlendUi(s32, s32, s32);
M2C_UNK SetupTimeOfDayLights__7VISceneR8VICameraR21VITerrainProfileBlend();
M2C_UNK SetupTimeOfDaySky__7VISceneR21VITerrainProfileBlend(s32, s32);
s32 SetupTimeOfDay__7VISceneR8VICameraR21VITerrainProfileBlendUi(s32 arg0, s32 arg2, s32 arg3)
{
  int new_var;
  SetupTimeOfDayLights__7VISceneR8VICameraR21VITerrainProfileBlend();
  SetupTimeOfDayFog__7VISceneR21VITerrainProfileBlendUi(new_var = arg0, arg2, arg3);
  new_var = 0;
  SetupTimeOfDaySky__7VISceneR21VITerrainProfileBlend(new_var, arg2);
  return new_var;
}
