typedef struct {
    s32 a;
    s32 b;
} Pair_00152EAC;

void func_00152EAC(s32 arg0, s32 arg1, Pair_00152EAC arg2) {
    &arg2;
}

extern void (*D_010E4568[])(void);

void func_00152DCC(void) {
    if (D_010E4568[0] != NULL) {
        D_010E4568[0]();
    }
}
