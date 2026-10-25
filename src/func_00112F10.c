extern s32 D_001BD8AC[];
extern s32 D_010C2AA0[];
s32 func_00152520(s32);
void func_0014D270(s32);

void func_00112F10(void) {
    func_00152520(D_001BD8AC[0]);
    if (D_010C2AA0[0] != 0) {
        func_0014D270(D_010C2AA0[0]);
    }
}
