extern f32 D_0037EE80[];
extern f32 D_0037EF00[];

#define PF(v) (*(f32 *)p = (v), p += 4)
#define PW(v) (*(s32 *)p = (v), p += 4)

s32 func_0026C4D0(char *a, char *p) {
    char *out = p;
    u8 *src = (u8 *)a + 0x100;
    s32 i, j, k;
    s16 h;
    PF(D_0037EE80[0]);
    PF(D_0037EE80[1]);
    PF(D_0037EE80[2]);
    for (i = 0, k = 0; i < 4; i++, k += 2) {
        f32 *q = D_0037EF00 + (k + i);
        for (j = 3; j >= 0; j--) {
            PF(*q++);
        }
    }
    h = *(s16 *)(a + 0x68);
    *(s16 *)p = h; p += 2;
    h = *(s16 *)(a + 0x6A);
    *(s16 *)p = h; p += 2;
    PW(*(s32 *)(a + 0x54));
    PW(*(s32 *)(a + 0x58));
    PF(*(f32 *)(a + 0x90));
    PF(*(f32 *)(a + 0xD4));
    PF(*(f32 *)(a + 0x8C));
    for (j = 0x5F; j >= 0; j--) {
        *p++ = *src++;
    }
    return p - out;
}
