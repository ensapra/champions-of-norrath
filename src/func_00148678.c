extern s32 D_010D453C[];
extern s32 D_001C68D8[];
extern u8 func_001484D4[];
void func_00147798(void);
void func_001474C8(void);
void func_00118140(void *, s32, void *, void *, s32);
s32 func_00118160(void *);
void func_00118340(s32);

void func_00148678(s32 arg0) {
    u8 a[0x20];
    u8 b[0x20];
    D_010D453C[0] = arg0;
    if (arg0 < 0)
        return;
    switch (arg0) {
    case 0: case 1: case 2: case 3: case 4: case 5: case 6:
        func_00118140(a, 1, func_001484D4 + 4, func_00147798, 0);
        D_001C68D8[0] = func_00118160(a);
        break;
    case 7: case 8: case 9: case 10: case 11: case 12: case 13:
        if (D_001C68D8[0] != 0)
            func_00118340(D_001C68D8[0]);
        func_00118140(b, 1, func_001484D4 + 4, func_001474C8, 0);
        func_00118160(b);
        break;
    }
}
