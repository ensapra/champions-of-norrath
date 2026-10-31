typedef struct { s32 a, b, c; } S;
extern S D_004F3600[];

void func_00135710(s32 arg0, s32 arg1) {
    s32 old = D_004F3600[arg0].a;
    s32 neg = -1;
    if (old <= arg1) old = arg1;
    D_004F3600[arg0].c = 1;
    D_004F3600[arg0].a = old;
    D_004F3600[arg0].b = neg;
}
