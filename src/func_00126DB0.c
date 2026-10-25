s32 func_0010F6B0(s32, void *, s32);
s32 func_00110770(s32, s32, void *, void *);
s32 func_0011BA18();
void func_00128730(void);
extern s32 D_010C9140[], D_010C9148[], D_010C9150[], D_010C9154[], D_010C9158[];
extern s32 D_001C4D34[], D_001C4D3C[];

void func_00126DB0(void) {
    s32 i = 0;
    s32 y = 0x2D;
    s32 *p;
    s32 buf[4];
    D_010C9140[0] = func_00110770(func_0011BA18(0xB5), 3, D_010C9150, D_010C9154);
    buf[0] = 0x78;
    buf[2] = 0x1A4;
    buf[3] = 0x16;
    p = D_010C9148;
    do {
        buf[1] = y;
        *p = func_0010F6B0(D_010C9140[0], buf, func_0011BA18(0xB6 + i));
        i++;
        y += 0x16;
        p++;
    } while (i < 2);
    D_001C4D34[0] = -1;
    D_010C9158[0] = 0;
    D_001C4D3C[0] = 0;
    func_00128730();
}
