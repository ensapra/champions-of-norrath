typedef struct { s32 w[3]; } B12;
typedef struct { s32 w[2]; } B8;
typedef struct { s32 w[12]; } B48;
typedef struct { s64 w[9]; } B72;
extern char D_0044CEF8[], D_0044D018[], D_0044D498[];
void *func_001441B8(s32);
void func_00194498(void *, void *);
#define F(t, o) (*(t *)(d + o))
#define S(t, o) (*(t *)(s + o))

void *func_001148F0(char *s) {
    char *d = func_001441B8(0x190);
    int i;
    if (d == 0) return 0;
    F(char *, 0x48) = D_0044D498;
    func_00194498(d, s);
    func_00194498(d + 4, s + 4);
    func_00194498(d + 8, s + 8);
    F(s32, 0xC) = S(s32, 0xC);
    F(B12, 0x10) = S(B12, 0x10);
    F(f32, 0x1C) = S(f32, 0x1C);
    F(f32, 0x20) = S(f32, 0x20);
    F(s32, 0x24) = S(s32, 0x24);
    F(u8, 0x28) = S(u8, 0x28);
    F(u8, 0x29) = S(u8, 0x29);
    F(char *, 0x48) = D_0044D018;
    F(s32, 0x2C) = S(s32, 0x2C);
    F(f32, 0x30) = S(f32, 0x30);
    F(s32, 0x34) = S(s32, 0x34);
    F(u16, 0x38) = S(u16, 0x38);
    F(f32, 0x3C) = S(f32, 0x3C);
    F(f32, 0x40) = S(f32, 0x40);
    F(s32, 0x44) = S(s32, 0x44);
    F(s32, 0x4C) = S(s32, 0x4C);
    F(s32, 0x50) = S(s32, 0x50);
    for (i = 0; i < 16; i++) d[0x54 + i] = s[0x54 + i];
    for (i = 0; i < 64; i++) d[0x64 + i] = s[0x64 + i];
    for (i = 0; i < 64; i++) d[0xA4 + i] = s[0xA4 + i];
    F(s64, 0xE8) = S(s64, 0xE8);
    F(B12, 0xF0) = S(B12, 0xF0);
    F(B8, 0xFC) = S(B8, 0xFC);
    F(s32, 0x104) = S(s32, 0x104);
    F(f32, 0x108) = S(f32, 0x108);
    F(u16, 0x10C) = S(u16, 0x10C);
    F(u16, 0x10E) = S(u16, 0x10E);
    F(B48, 0x110) = S(B48, 0x110);
    F(char *, 0x48) = D_0044CEF8;
    F(u16, 0x140) = S(u16, 0x140);
    F(B72, 0x148) = S(B72, 0x148);
    return d;
}
