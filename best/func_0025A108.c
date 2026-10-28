typedef struct { s32 a, b, c; } T12;
extern u8 D_007E05E0[];
extern u8 D_0081E2B0[];
extern u8 D_0081E240[];
extern T12 D_0042E2D0[];
extern s32 D_00484538;
extern s32 D_00484F50;
extern s8 D_gptbl[];
s32 func_0026FC90(s32);
s32 func_002847A0(void);
void func_0025A108(void) {
    u8 *p, *q, *dst;
    s32 i, j;
    s32 tmp;
    p = D_0081E2B0 + func_0026FC90(D_00484F50);
    p += func_002847A0();
    q = p + 0x1008 + 0xE;
    for (i = 0; i < 4; i++, q += 0xE) {
        dst = q;
        q += 0x5DB0;
        if (i == 0) goto found;
    }
    dst = 0;
found:
    for (j = 0; j < 0x5DB0; j++) dst[j] = D_007E05E0[j];
    tmp = D_00484538;
    *(u16 *)(D_0081E240 + 0x6A) = *(u16 *)&tmp;
    p = D_0081E240 + 0x70 + func_0026FC90(D_00484F50);
    p += func_002847A0();
    p += 0x1004;
    for (i = 0; i < 4; i++) p[i] = ((u8 *)&tmp)[i];
    p = D_0081E2B0 + func_0026FC90(D_00484F50);
    p += func_002847A0();
    p += 0x1008;
    for (i = 0; i < 4; i++) {
        p[0] = D_gptbl[i * 2];
        p[1] = D_gptbl[i * 2 + 1];
        p += 2;
        *(T12 *)p = D_0042E2D0[i];
        p += 0x5DBC;
    }
}
