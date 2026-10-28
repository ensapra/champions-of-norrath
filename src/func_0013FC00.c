extern s32 func_0013FBB8(s32);
typedef struct { s32 id; s32 a; s32 b; } Rec3;
extern s32 D_010D1254[];
extern s32 D_001BAC80[];
extern s32 D_001BAC84[];
extern s32 D_001C6840[];
extern s32 D_001C6844[];
extern Rec3 D_001C6848[];

void func_0013FC00(s32 arg0, s32 arg1, s32 arg2) {
    s32 mode = D_010D1254[0];

    switch (mode) {
    case 0:
        if (!(D_001BAC80[0] & 1)) {
            D_001BAC80[0] |= 1;
            D_001C6840[0] = arg1;
            D_001C6844[0] = 0;
            D_001C6848[0].id = func_0013FBB8(arg0);
            D_001C6848[0].a = arg1;
            D_001C6848[0].b = arg2;
        }
        break;
    case 1:
        if (!(D_001BAC80[0] & 2) && !(D_001BAC84[0] & 2)) {
            D_001BAC80[0] |= 2;
            D_001C6840[0] = arg1;
            D_001C6844[0] = mode;
            D_001C6848[1].id = func_0013FBB8(arg0);
            D_001C6848[1].a = arg1;
            D_001C6848[1].b = arg2;
        }
        break;
    }
}
