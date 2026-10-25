typedef struct __attribute__((packed, aligned(4))) { s32 w[12]; } Tbl48;
extern Tbl48 D_0046A9C8;
extern s32 D_0042E334[][9];
s32 func_001C7B30(s32 a, s32 b) {
    Tbl48 t = D_0046A9C8;
    s32 i;
    for (i = 0; i < 12; i++) {
        if (t.w[i] == D_0042E334[a][b]) {
            return i + 0x7B;
        }
    }
    return 0;
}
