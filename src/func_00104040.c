extern u8 D_004C5B08[];

void func_00102228(u8 *p) {
    p[0xE0C] = 1;
    p[0xD00] = D_004C5B08[0];
    *(s32 *)(p + 0xE08) = 600;
    p[0xE0D] = 0;
    p[0x000] = D_004C5B08[0];
    p[0x100] = D_004C5B08[0];
    p[0x200] = D_004C5B08[0];
    p[0x300] = D_004C5B08[0];
    p[0x400] = D_004C5B08[0];
    p[0x500] = D_004C5B08[0];
    p[0x600] = D_004C5B08[0];
    p[0x700] = D_004C5B08[0];
    p[0x800] = D_004C5B08[0];
    p[0x900] = D_004C5B08[0];
    p[0xA00] = D_004C5B08[0];
    p[0xB00] = D_004C5B08[0];
    p[0xC00] = D_004C5B08[0];
    *(s32 *)(p + 0xE00) = 0;
    *(s32 *)(p + 0xE04) = 1;
}

extern s32 D_001BAA40[];
extern s32 D_001BAA44[];
extern s32 D_001BAA48[];
extern s32 D_001BAA4C[];
extern s32 D_001BAA50[];
extern void (*D_010B2290[])(void);
extern s32 func_00190490(s32, s32, u8 *);

s32 func_00103F70(void) {
    u8 buf[32];
    s32 r = func_00190490(D_001BAA48[0], D_001BAA4C[0], buf);
    if (r == 0) return r;
    if (buf[0] == 0) {
        D_001BAA44[0] = (u16)~(buf[3] | (buf[2] << 8));
        D_001BAA50[0] = buf[1] >> 4;
        if (D_001BAA50[0] == 4 && D_010B2290[0] != 0) {
            D_010B2290[0]();
        }
    }
    D_001BAA40[0] = D_001BAA44[0];
    return *(u16 *)D_001BAA44;
}

void func_00104040(void (*f)(void)) {
    D_010B2290[0] = f;
}
