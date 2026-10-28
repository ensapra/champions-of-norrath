typedef struct { u8 c[29]; } S;
extern S D_00476848;
extern u8 D_008D5AB8[];
s32 D_00486D14;
s32 D_00486D18;
void func_0027F1B0(void) {
    S t = D_00476848;
    s32 i, j, k;
    D_00486D18 = 0;
    for (i = 0; i < 26; i++) D_008D5AB8[D_00486D18++] = 'a' + i;
    for (j = 0; j < 10; j++) D_008D5AB8[D_00486D18++] = '0' + j;
    k = 0;
    if (t.c[0]) {
        do {
            D_008D5AB8[D_00486D18++] = t.c[k];
            k++;
        } while (t.c[k]);
    }
    D_00486D14 = 10;
}
