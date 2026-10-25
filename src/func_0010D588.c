extern s32 D_001BD8C0[];
extern s32 D_010C21F0[];
void func_00105090(s32, s32);
void func_0010D588(void) {
    s32 i;
    for (i = 0; i < D_001BD8C0[0] + 1; i++)
        func_00105090(D_010C21F0[i], 0);
}
