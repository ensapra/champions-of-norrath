extern s32 D_004840B0;
extern s32 D_0048695C;
extern s32 D_00486960;
void func_0016D520(void);

void func_001725E0(s32 a, s32 b) {
    D_0048695C = (a + 0xFF) >> 8;
    D_00486960 = (b - (a & 0xFF)) >> 8;
    func_0016D520();
    D_004840B0 = D_00486960 - 1;
}
