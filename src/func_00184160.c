typedef union { u16 h[0x80]; s32 w[0x40]; } U184160;
extern U184160 D_001E2440;

void func_00184160(s32 *a, s32 *b, s32 *c) {
    U184160 *p = &D_001E2440;
    *a = p->h[0x61];
    *b = p->h[0x62];
    *c = p->h[0x63];
}
