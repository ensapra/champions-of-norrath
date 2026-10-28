extern s32 D_010D1254[];
extern s32 D_001BAC80[];
extern s32 D_001C6840[];
extern s32 D_001C6844[];
extern s32 D_001C6848[];
s32 func_0013FBB8(s32);

void func_0013FCF8(s32 a0, s32 a1) {
    s32 mode = D_010D1254[0];
    switch (mode) {
    case 0:
        if (D_001BAC80[0] & 1) {
            D_001BAC80[0] &= ~1;
            D_001C6840[0] = a1;
            D_001C6844[0] = 0;
            D_001C6848[0] = func_0013FBB8(a0);
            D_001C6848[1] = a1;
        }
        break;
    case 1:
        if (D_001BAC80[0] & 2) {
            D_001BAC80[0] &= ~2;
            D_001C6844[0] = mode;
            D_001C6840[0] = a1;
            D_001C6848[3] = func_0013FBB8(a0);
            D_001C6848[4] = a1;
        }
        break;
    }
}
