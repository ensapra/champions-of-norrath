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

M2C_UNK AddTail__7VILListP7VILNode(M2C_UNK *, void *); /* extern */
s32 CreateMaterial__8VIRasteri(M2C_UNK);            /* extern */
M2C_UNK Init__10VIMateriali(s32, M2C_UNK);          /* extern */
M2C_UNK Init__7VILList(M2C_UNK *);                  /* extern */
s32 Material__8VIRasteri(s32, s32);                 /* extern */
M2C_UNK SetDither__10VIMateriali(s32, M2C_UNK);     /* extern */
M2C_UNK SetLayerBlendMode__10VIMateriali16VIAlphaBlendMode(s32, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK SetLayerFillType__10VIMateriali18VIMaterialFillType(s32, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK SetLayerModulate__10VIMaterialii(s32, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK SetZTest__10VIMateriali(s32, M2C_UNK);      /* extern */
M2C_UNK SetZWrite__10VIMateriali(s32, M2C_UNK);     /* extern */
M2C_UNK __9VITrailFx(s32 *);                        /* extern */
s32 *__builtin_vec_new(M2C_UNK);                    /* extern */
extern s32 D_0118E7D8;
extern M2C_UNK D_011E51E8;
extern M2C_UNK D_011E51F8;
extern M2C_UNK D_011E5208;
extern s32 *D_011E5214;

s32 VITrailFxInit__FR8VIRasterR12VIDictionary(s32 arg0) {
    s32 *temp_18;
    s32 *temp_5;
    s32 *var_16;
    s32 *var_3;
    s32 *var_4;
    s32 temp_2;
    s32 var_16_2;
    s32 var_17;
    s32 var_17_2;
    s32 var_2;
    void *temp_5_2;

    var_2 = CreateMaterial__8VIRasteri(0);
    D_0118E7D8 = var_2;
    if (var_2 != -1) {
        temp_2 = Material__8VIRasteri(arg0, var_2);
        Init__10VIMateriali(temp_2, 1);
        SetLayerFillType__10VIMateriali18VIMaterialFillType(temp_2, 0, 0);
        SetLayerModulate__10VIMaterialii(temp_2, 0, 1);
        SetDither__10VIMateriali(temp_2, 0);
        SetLayerBlendMode__10VIMateriali16VIAlphaBlendMode(temp_2, 0, 1);
        SetZWrite__10VIMateriali(temp_2, 0);
        SetZTest__10VIMateriali(temp_2, 1);
        Init__7VILList(&D_011E51E8);
        Init__7VILList(&D_011E51F8);
        Init__7VILList(&D_011E5208);
        var_3 = __builtin_vec_new(0x388);
        if (var_3 != NULL) {
            temp_18 = var_3 + 8;
            *var_3 = 0x10;
            var_16 = temp_18;
            var_17 = 0xF;
            var_4 = var_16;
            do {
                var_16 += 0x38;
                var_17 -= 1;
                __9VITrailFx(var_4);
                var_4 = var_16;
            } while (var_17 != -1);
            var_3 = temp_18;
        }
        D_011E5214 = var_3;
        var_17_2 = 0;
        var_16_2 = 0xF;
        temp_5 = D_011E5214;
        do {
            var_16_2 -= 1;
            temp_5_2 = temp_5 + var_17_2;
            var_17_2 += 0x38;
            AddTail__7VILListP7VILNode(&D_011E51E8, temp_5_2);
        } while (var_16_2 >= 0);
        var_2 = 0;
    }
    return var_2;
}
