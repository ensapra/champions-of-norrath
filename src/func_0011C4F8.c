extern u32 D_001C3BE0[];
extern u32 D_001C3BE4[];
extern u32 D_001C3BE8[];
extern u32 D_001C3BF8[];
extern void (*D_010C4D00[])(u32 *);

void func_0011C4F8(void) {
    D_001C3BE4[0] = D_001C3BE0[0];
    if (D_010C4D00[0]) D_010C4D00[0](D_001C3BE0);
    else D_001C3BE0[0] = 0;
    D_001C3BF8[0] = (D_001C3BE0[0] & 0x1000) ? D_001C3BF8[0] + 1 : 0;
    D_001C3BF8[1] = (D_001C3BE0[0] & 0x4000) ? D_001C3BF8[1] + 1 : 0;
    D_001C3BF8[2] = (D_001C3BE0[0] & 0x8000) ? D_001C3BF8[2] + 1 : 0;
    D_001C3BF8[3] = (D_001C3BE0[0] & 0x2000) ? D_001C3BF8[3] + 1 : 0;
    D_001C3BF8[4] = (D_001C3BE0[0] & 0x20) ? D_001C3BF8[4] + 1 : 0;
    if (D_001C3BF8[0] >= 0x14) D_001C3BE8[0] = 0x1000;
    else if (D_001C3BF8[1] >= 0x14) D_001C3BE8[0] = 0x4000;
    else if (D_001C3BF8[2] >= 0x14) D_001C3BE8[0] = 0x8000;
    else if (D_001C3BF8[3] >= 0x14) D_001C3BE8[0] = 0x2000;
    else if (D_001C3BF8[4] >= 0x14) D_001C3BE8[0] = 0x20;
    else D_001C3BE8[0] = 0;
}
