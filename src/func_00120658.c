extern s32 func_0010A4D0(s32, s32, s32);
extern s32 func_0011E378();
extern s32 func_001A1640(void *);
extern char func_001BCB38[];
extern char D_010C5218[];
void func_00120658(void) {
    s32 found = 0;
    s32 i, j, k;
    if (*(s32 *)(func_001BCB38 + 0xD38) != 0) {
        func_0010A4D0(*(s32 *)(func_001BCB38 + 0xD38), func_0011E378() == 0, 0x40);
    }
    i = 0;
    k = 0;
    do {
        char *p = D_010C5218 + (k << 5);
        for (j = 0; j < 4; j++) {
            if (func_001A1640(p)) { found = 1; break; }
            p += 0x258;
        }
        if (!found) break;
        if (i != 2) found = 0;
        i++;
        k += 0x4B;
    } while (i < 3);
    if (*(s32 *)(func_001BCB38 + 0xD40) != 0) {
        func_0010A4D0(*(s32 *)(func_001BCB38 + 0xD40), found, 0x40);
    }
}
