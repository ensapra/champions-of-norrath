extern u8 *D_001C6828[], *D_001C682C[], *D_001C6830[];
extern s32 D_001C6834[], D_001C6838[], D_001C683C[];
extern char D_004CA3A0[], D_004CA460[], D_004CA480[], D_004CA490[];
extern u8 D_001BD948[];
extern s32 D_010CD39C[];
#define A0 D_001C6828[0]
#define A4 D_001C682C[0]
#define A8 D_001C6830[0]
#define AC D_001C6834[0]
#define B0 D_001C6838[0]
#define B4 D_001C683C[0]
#define FMTA D_004CA3A0
#define FMTB D_004CA460
#define FMTC D_004CA480
#define FMTD D_004CA490
extern void func_001A3D78(char *, char *, ...);
extern void func_001A3E10(u8 *, char *, s32 *);
extern s32 func_001A4174(u8 *, void *);
extern void func_00110FD0(void *, void *);
extern void func_0012D5E8(void *);
extern void func_0012D988(void *);
void func_0012D778(u8 *arg0) {
    struct { char buf1[0x258]; char buf2[0x258]; s32 s4B0, s4B4, s4B8, s4BC, s4C0; u8 pad[0x26C]; s32 s730; } L;
    s32 i, j;
    func_001A3D78(L.buf1, FMTA);
    func_001A3D78(L.buf2, FMTA);
    L.s4BC = -1;
    for (i = 0; i < B0; i++) {
        if (func_001A4174(A4 + i * 0x20C + 0xC, arg0) == 0) {
            func_001A3E10(A0 + D_010CD39C[0] * 0x20C + 0x10C, FMTC, &L.s730);
            func_001A3D78(L.buf1, FMTB, A4 + i * 0x20C + 0x10C);
            func_001A3D78(L.buf2, FMTD, L.s730, A4 + i * 0x20C + 0x10C);
            L.s4BC = i;
            break;
        }
    }
    L.s4C0 = -1;
    for (j = 0; j < B4; j++) {
        if (func_001A4174(A8 + j * 0x20C + 0xC, arg0 + 0x100) == 0) {
            L.s4C0 = j;
            break;
        }
    }
    L.s4B0 = 0;
    L.s4B8 = D_010CD39C[0];
    D_010CD39C[0] = L.s4B8 + 1;
    L.s4B4 = 0;
    func_00110FD0(D_001BD948, L.buf1);
    if (D_010CD39C[0] < AC)
        func_0012D988(D_001C6834);
    else
        func_0012D5E8(D_001C6834);
}
