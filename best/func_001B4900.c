s32 func_001B08B0();
extern s32 jtbl_004C006C[];
extern struct { s32 v; char name[0x100]; } D_0110B0C0;
extern u8 D_0110B000[];
extern s32 D_0110B040[];
#define G (*(s32 *)&jtbl_004C006C[0x3F48/4])

s32 func_001B4900(u8 *s, s32 v) {
    s32 i;
    u8 c;
    if (G < 0) return 0;
    c = s[0];
    D_0110B0C0.name[0] = c;
    i = 0;
    if (c != 0) {
        i = 1;
        while (i < 0xFC) {
            c = s[i];
            D_0110B0C0.name[i] = c;
            if (c == 0) break;
            i++;
        }
    }
    if (i == 0xFC) { i = 0xFB; D_0110B0C0.name[0xFB] = 0; }
    D_0110B0C0.v = v;
    D_0110B0C0.name[0xFB] = 0;
    if (func_001B08B0(D_0110B000, 3, 0, &D_0110B0C0, i + 5, D_0110B040, 4, 0, 0) < 0) return -1;
    return D_0110B040[0];
}
