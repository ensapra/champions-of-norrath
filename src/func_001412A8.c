extern s32 D_010D4440[];
extern s32 D_010D4444[];
extern s32 D_010D444C[];
extern s32 D_010D446C[];
extern s32 D_010D4478[];
extern s32 D_010D447C[];
extern s32 D_010D4480[];
void func_00142678(void);
void func_00149A30(s32, s32, s32);
void func_00149AE4(s32, s32);
void func_00149B98(s32);
void func_0014D270(s32);
void func_001412A8(void) {
    D_010D4440[0] = 0;
}
void func_00141248(s32 a, s32 b) {
    func_00149A30(D_010D444C[0], a, b);
    D_010D446C[0] = b;
    D_010D4440[0] = 1;
    D_010D4478[0] = 0;
    D_010D447C[0] = 0;
    D_010D4480[0] = 0;
    func_00142678();
}
void func_001411F8(void) {
    if (D_010D4444[0] != 0) func_0014D270(D_010D4444[0]);
    func_00149AE4(D_010D444C[0], 0);
    func_00149B98(D_010D444C[0]);
}
