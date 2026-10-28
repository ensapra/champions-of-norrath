typedef struct { u8 pad[0x44D4]; s8 flag; u8 pad2[0x44E0 - 0x44D5]; } Ent354;
s32 D_0048385C;
s32 func_001354A8(s32 n) {
    s32 i;
    for (i = 0; i < D_0048385C; i++) {
        if (((Ent354 *)D_004E2280)[i].flag) {
            if (--n == -1) return i;
        }
    }
    return -1;
}
