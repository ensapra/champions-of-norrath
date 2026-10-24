typedef struct { s32 size; s32 count; u8 *rd; u8 *wr; u8 data[1]; } Ring;
void func_001AE898(Ring *r) {
    r->count++;
    r->wr++;
    if (r->wr == r->data + r->size) r->wr = r->data;
}

s32 func_001AEDB8(s32 a) {
    while (*(volatile u32 *)0x1000F130 & 0x8000) {}
    *(volatile u8 *)0x1000F180 = a;
    return a;
}

extern s32 D_004C3F08[];
extern char D_01107C00[];
extern void ovl_ntgui2_func_001B80A8(char *);
void func_001AEDF8(s32 c) {
    if (D_004C3F08[0] >= 0x7E) {
        D_004C3F08[0] = 0;
        D_01107C00[0x7F] = 0;
        ovl_ntgui2_func_001B80A8(D_01107C00);
    }
    if (c == 10) {
        s32 i = D_004C3F08[0];
        D_004C3F08[0] = 0;
        D_01107C00[i] = c;
        D_01107C00[i + 1] = 0;
        ovl_ntgui2_func_001B80A8(D_01107C00);
    } else {
        s32 i = D_004C3F08[0];
        D_004C3F08[0] = i + 1;
        D_01107C00[i] = c;
    }
}
