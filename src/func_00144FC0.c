extern s32 D_010D4484[];
extern s32 D_010D4488[];
extern s32 D_010D448C[];
extern s32 D_010D4490[];
extern s32 D_010D4494[];
extern s32 D_010D4498[];

s32 func_00144FC0(void) {
    return D_010D4490[0];
}

void func_00144F38(s32 a, s32 b) {
    D_010D4498[0] = a;
    D_010D4484[0] = b;
    D_010D4488[0] = 0;
    D_010D448C[0] = 0;
    D_010D4490[0] = 0;
    D_010D4494[0] = 0;
}

void func_00144F70(void) {
    if (D_010D4498[0] != 0) {
        void (*f)(void *, void *, void *, void *) = (void *)D_010D4484[0];
        if (f != 0) f(D_010D4488, D_010D448C, D_010D4490, D_010D4494);
    }
}
