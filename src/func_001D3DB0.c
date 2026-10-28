extern s32 D_00485088;
extern s32 D_00486B98;
extern s32 D_00486B9C;
extern char D_007D0DE8[2][64][0x50];
s32 func_001D3E88(char *);

void func_001D3DB0(void) {
    s32 i;
    for (i = 0; i < D_00486B98; i++) {
        func_001D3E88(D_007D0DE8[D_00485088 & 1][i]);
    }
    D_00486B98 = D_00486B9C;
    D_00486B9C = 0;
    D_00485088++;
}
