extern s32 D_004C3FD8[]; extern s32 D_004C3FDC[];
typedef struct { s32 currentCount, maxCount, initCount, numWaitThreads; u32 attr, option; } SemaP5CF0;
s32 CreateSema(SemaP5CF0 *);
void func_001B5CF0(void) {
    SemaP5CF0 a, b;
    a.maxCount = 1;
    a.initCount = 1;
    b.maxCount = 1;
    b.initCount = 1;
    D_004C3FD8[0] = CreateSema(&a);
    D_004C3FDC[0] = CreateSema(&b);
}
