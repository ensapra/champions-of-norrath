s32 D_010C2B28[8];
s32 D_010C2B2C[8];
void func_00115618(void);
s32 func_00152520(s32);

void func_00116730(s32 a, s64 b) {
    if (D_010C2B28[0] == 0) {
        func_00115618();
        func_00152520(a);
        if (D_010C2B2C[0] != 0) {
            ((void (*)(s32))D_010C2B2C[0])((s32)b);
        }
    }
}
