typedef struct { s32 id; u8 name[252]; } Pkt;
extern s32 D_00444A0C[];
extern u8 D_008E1CC0[];
extern s32 D_008E1D00;
extern Pkt D_008E1D80;
s32 func_002D8270(void *, s32, s32, void *, s32, s32 *, s32, s32, s32);
s32 func_002DC2C0(u8 *s, s32 id) {
    s32 n;
    u8 c;
    if (D_00444A0C[0] < 0) return 0;
    c = s[0];
    D_008E1D80.name[0] = c;
    n = 0;
    if (c != 0) {
        n = 1;
        while (n < 0xFC) {
            c = s[n];
            D_008E1D80.name[n] = c;
            if (c == 0) break;
            n++;
        }
    }
    if (n == 0xFC) {
        n = 0xFB;
        D_008E1D80.name[0xFB] = 0;
    }
    D_008E1D80.id = id;
    D_008E1D80.name[0xFB] = 0;
    if (func_002D8270(D_008E1CC0, 3, 0, &D_008E1D80, n + 5, &D_008E1D00, 4, 0, 0) < 0)
        return -1;
    return D_008E1D00;
}
