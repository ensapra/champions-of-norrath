typedef struct HEnt { u8 len; u8 b1; s8 b2; char data[0x7B]; } HEnt;
extern HEnt D_008D8938[8];
extern s32 D_008D8D28[8];
extern u8 D_008D88B8[];
s32 D_00486DAC;
void func_00301FFC(void *, void *, s32);
s32 func_00301F68(void *, void *, s32);

void func_002CA8D0(void *src, s32 n) {
    s32 i;
    s32 same;
    for (i = 7; i > 0; i--) {
        D_008D8938[i] = *(HEnt *)((u8 *)D_008D8938 + i * 0x7E - 0x7E);
        D_008D8D28[i] = D_008D8D28[i - 1];
    }
    func_00301FFC(D_008D8938, src, n);
    same = 0;
    if (D_008D8938[0].b2 == (s8)D_008D88B8[2] && D_008D8938[0].len == D_008D88B8[0] && D_008D8938[0].b1 == D_008D88B8[1]) {
        same = func_00301F68(D_008D8938[0].data, D_008D88B8 + 3, D_008D8938[0].len + 1) == 0;
    }
    if (same) {
        D_00486DAC = 0;
        D_008D88B8[1] = 0;
        D_008D88B8[0] = 1;
        D_008D88B8[3] = 0x20;
        D_008D88B8[4] = 0;
    }
    D_008D8D28[0] = 0;
}
