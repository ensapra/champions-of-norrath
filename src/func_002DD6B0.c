extern s32 D_00444A30[]; extern s32 D_00444A34[];
typedef struct { s32 currentCount, maxCount, initCount, numWaitThreads; u32 attr, option; } SemaP5CF0;
s32 CreateSema_2(SemaP5CF0 *);
void func_002DD6B0(void) {
    SemaP5CF0 a, b;
    a.maxCount = 1;
    a.initCount = 1;
    b.maxCount = 1;
    b.initCount = 1;
    D_00444A30[0] = CreateSema_2(&a);
    D_00444A34[0] = CreateSema_2(&b);
}
