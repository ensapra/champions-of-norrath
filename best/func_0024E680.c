typedef struct { s32 a; s16 b, c; s32 d, e; } Hdr;
typedef struct { s32 f0; s32 f4; s16 f8; s16 fA; s32 fC; s32 f10; } Obj;

extern s32 D_0042DE10[];
s32 D_0048594C;
s32 D_0048599C;
extern u8 D_004859B0[];
extern u8 D_007D9280[];
extern u8 D_007DD7E0[];
extern u8 D_007DD840[];
extern u8 D_007DD880[];

void *func_00144368(s32, void *, s32);
void func_00144558(void *);
s32 func_002D8270(void *, s32, s32, void *, s32, void *, s32, s32, s32);
s32 func_002E0478(s32, s32, void *, void *, s32, s32, s32, s32);

void func_0024E680(s32 arg0, s16 arg1, s16 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8) {
    s32 i;
    s32 n;
    s32 temp4;
    s32 var6;
    s32 var22;
    u8 *var4;
    Obj *temp2;
    s16 t17, t18;
    s32 t16, t19, t20;
    s32 t9;
    s32 v16;
    Hdr h0, h1;

    /* prologue copy raw args to D_007DD880 */
    h0.a = arg0; h0.b = arg1; h0.c = arg2; h0.d = arg3; h0.e = arg4;
    *(Hdr *)D_007DD880 = h0;

    func_002D8270(D_007DD7E0, 0xB0, 0, D_007DD880, 0x10, D_007DD840, 0x40, 0, 0);

    temp4 = D_0042DE10[arg0];
    var6 = 0;
    D_0048599C = temp4;
    if (D_0048594C > 0) {
        var4 = D_007D9280 + 8;
        for (i = 0; i < D_0048594C; i++) {
            u8 *t3 = *(u8 **)(var4 - 4);
            var6++;
            if (t3[0x24] <= 0x1FFFFF && *(s32 *)var4 >= (0x1FFFFF - temp4)) {
                *(s32 *)(t3 + 0x24) = 0x5000;
            }
            var4 += 0x10;
        }
    }

    var22 = 0;
    temp2 = (Obj *)func_00144368(0x14, D_004859B0, var6);

    t18 = (arg2 < -0x8000) ? -0x8000 : arg2;
    t17 = (arg1 < -0x8000) ? -0x8000 : arg1;
    t16 = (arg0 < 0) ? 0 : arg0;
    t19 = (arg3 < 0) ? 0 : arg3;
    t20 = (arg4 < 0) ? 0 : arg4;
    t9 = (t17 > 0x7FFF) ? 1 : 0;

    temp2->fA = (t18 > 0x7FFF) ? 0x7FFF : t18;
    temp2->f8 = t9 ? 0x7FFF : t17;
    temp2->fC = (t19 >= 0x80) ? 0x7F : t19;
    temp2->f10 = (t20 >= 0x80) ? 0x7F : t20;
    temp2->f4 = (t16 >= 0xA) ? 9 : t16;

    func_002E0478(1, 0x8050, (void *)0x1D01, (void *)0x1FFFFF, 0x7F, t9, 0x5000, 0);

    /* loop */
    do {
        v16 = 0;
        {
            s32 r = func_002E0478(1, 0x8190, (void *)1, (void *)var22, temp2->f4, arg5, arg6, arg7);
            if (r != -0xCA) {
                if (r == 0) {
                    /* nothing */
                } else {
                    v16 = 1;
                    if (r != -0xD2) {
                        /* nothing */
                    }
                }
            } else {
                v16 = 1;
            }
        }
        {
            s32 r2 = func_002E0478(1, 0x80F0, (void *)var22, (void *)1, arg5, arg6, arg7, arg8);
            if (r2 != 0) {
                if (r2 <= 0) {
                    v16 = 1;
                    if (r2 != -0xCA) {
                        /* nothing */
                    }
                } else if (r2 != 1) {
                    v16 = 1;
                }
            } else {
                v16 = 1;
            }
        }
        if (v16 != 0) {
            var22++;
            if (var22 >= 2) {
                break;
            }
        } else {
            break;
        }
    } while (1);

    func_002E0478(1, 0x81A0, (void *)1, temp2, 0, 0, 0, 0);
    func_002E0478(1, 0x81B0, (void *)1, temp2, 0, 0, 0, 0);
    func_002E0478(1, 0x8030, (void *)0x1800, (void *)0xFFFFFF, 0, 0, 0, 0);
    func_002E0478(1, 0x8030, (void *)0x1A00, (void *)0xFFFFFF, 0, 0, 0, 0);
    func_002E0478(1, 0x8030, (void *)0x1900, NULL, 0, 0, 0, 0);
    func_002E0478(1, 0x8030, (void *)0x1B00, NULL, 0, 0, 0, 0);
    func_002E0478(1, 0x8030, (void *)0x1801, (void *)0xFFFFFF, 0, 0, 0, 0);
    func_002E0478(1, 0x8030, (void *)0x1A01, (void *)0xFFFFFF, 0, 0, 0, 0);
    func_002E0478(1, 0x8030, (void *)0x1901, (void *)0x7FFFF, 0, 0, 0, 0);
    func_002E0478(1, 0x8030, (void *)0x1B01, (void *)0x7FFFF, 0, 0, 0, 0);
    func_002E0478(1, 0x8010, (void *)0x800, (void *)0xC00, 0, 0, 0, 0);
    func_002E0478(1, 0x8010, (void *)0x801, (void *)0xF0F, 0, 0, 0, 0);
    func_002E0478(1, 0x8070, (void *)3, (void *)1, 0, 0, 0, 0);

    func_00144558(temp2);

    /* end copy clamped to D_007DD880 */
    h1.a = t16; h1.b = t17; h1.c = t18; h1.d = t19; h1.e = t20;
    *(Hdr *)D_007DD880 = h1;

    func_002D8270(D_007DD7E0, 0xC0, 0, D_007DD880, 0x10, D_007DD840, 0x40, 0, 0);
}
