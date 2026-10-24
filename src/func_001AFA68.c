typedef struct { s32 size; s32 count; u8 *rd; u8 *wr; u8 data[1]; } Ring;
void func_001AE898(Ring *r) {
    r->count++;
    r->wr++;
    if (r->wr == r->data + r->size) r->wr = r->data;
}

extern u8 D_01107D58[];
void *func_001AF7D8(void) {
    return D_01107D58;
}

extern s32 func_001AE2D0(s32);
extern s32 RemoveDmacHandler(s32, s32);
extern s32 D_01107D54[];
extern s32 D_004C3F10[];
void func_001AFA68(void) {
    func_001AE2D0(5);
    RemoveDmacHandler(5, D_01107D54[0]);
    D_004C3F10[0] = 0;
}

extern s32 D_01107D58_w[];
s32 func_001AFAA0(s32 a, s32 b) {
    s32 *p = (s32 *)D_01107D58;
    s32 old = p[5];
    p[6] = b;
    p[5] = a;
    return old;
}
