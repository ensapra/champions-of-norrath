typedef struct { s32 a, b, c, d; } Node;
extern Node D_00604200[];
extern Node *D_00614200[];
extern s32 D_00483EF4;
extern s32 D_004868E4;
void func_0015FA40(void) {
    s32 i;
    s32 k = D_00483EF4;
    D_004868E4 = 0;
    for (i = 0; i < 8; i++) {
        Node *n = &D_00604200[(k << 11) + D_004868E4++];
        D_00614200[k * 8 + i] = n;
        n->d = 0;
    }
}
