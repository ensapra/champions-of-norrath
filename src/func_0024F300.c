void Copy_6(void *arg0, void *arg1, s32 arg2);
extern s32 D_00444A18[3];
s32 func_002DD7A0(s32 arg0) {
    s32 tmp;
    Copy_6(&tmp, (void *)(D_00444A18[0] + arg0 * 4), 4);
    return tmp;
}

typedef struct { s32 f0, f4, f8, fC; u8 pad[0x20]; } Sub24F;
typedef struct { u8 pad0[0x14]; s32 active; u8 pad1[0x8]; s32 mask; u8 pad2[0x3C]; Sub24F sub[7]; u8 pad3[0x10]; s32 count; } Ent24F;
extern Ent24F D_007DD290[];

s32 func_0024F300(s32 i) {
    s32 j;
    s32 m = D_007DD290[i].mask;
    for (j = 0; j < D_007DD290[i].count; j++) {
        m |= D_007DD290[i].sub[j].fC;
    }
    return m;
}

s32 func_0024F288(s32 i) {
    s32 j;
    s32 m = 0;
    if (D_007DD290[i].active) m = D_007DD290[i].mask;
    for (j = 0; j < D_007DD290[i].count; j++) {
        m |= D_007DD290[i].sub[j].fC;
    }
    return m;
}

void func_0024F218(s32 i) {
    s32 j;
    for (j = 0; j < D_007DD290[i].count; j++) {
        if (D_007DD290[i].sub[j].fC & 8) {
            D_007DD290[i].sub[j].fC &= ~8;
            return;
        }
    }
}
