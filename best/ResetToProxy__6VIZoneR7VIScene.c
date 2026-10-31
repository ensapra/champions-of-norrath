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

s32 Clear__10VIZoneTree(void *);                    /* extern */
s32 Clear__17VIZoneRadialFlora(void *);             /* extern */
s32 Clear__t7VIArray1Z10VIZoneRoom(void *);         /* extern */
s32 Clear__t7VIArray1Z14VIResourceElem(void *);     /* extern */
s32 Clear__t7VIArray1Z21VIZoneStaticTableElem(void *); /* extern */
s32 Clear__t7VIArray1Z7VIVect3(void *);             /* extern */
s32 Init__6VIZone(void *);                          /* extern */
M2C_UNK ReleaseSprite__7VIScenei(s32, s32);         /* extern */

s32 ResetToProxy__6VIZoneR7VIScene(void *arg0, s32 arg1) {
    s32 *temp_2;
    s32 var_19;
    s32 var_21;
    s32 var_2;
    void *temp_20;

    temp_20 = arg0 + 0x74;
    var_21 = 0;
    if (M2C_FIELD(arg0, s32 *, 0x74) > 0) {
        var_19 = 0;
        do {
            var_21 += 1;
            temp_2 = M2C_FIELD(temp_20, s32 *, 4) + var_19;
            var_19 += 0x1C;
            ReleaseSprite__7VIScenei(arg1, *temp_2);
        } while (var_21 < M2C_FIELD(arg0, s32 *, 0x74));
    }
    if (Clear__17VIZoneRadialFlora(temp_20) < 0) {
        return -1;
    }
    if (Clear__t7VIArray1Z7VIVect3(arg0 + 0x54) < 0) {
        return -1;
    }
    if (Clear__t7VIArray1Z10VIZoneRoom(arg0 + 0x5C) < 0) {
        return -1;
    }
    if (Clear__10VIZoneTree(arg0 + 0x44) < 0) {
        return -1;
    }
    if (Clear__t7VIArray1Z14VIResourceElem(arg0 + 0x64) < 0) {
        return -1;
    }
    var_2 = -1;
    if (Clear__t7VIArray1Z21VIZoneStaticTableElem(arg0 + 0x6C) >= 0) {
        var_2 = (Init__6VIZone(arg0) >= 0) ? 0 : -1;
    }
    return var_2;
}
