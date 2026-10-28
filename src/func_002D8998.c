extern s32 D_00444A00[];
extern s32 D_00444A04[];
s32 CreateSema_2(void *);
void func_002D8998(void) {
    s32 a[8];
    if (D_00444A00[0] == -1) {
        a[5] = 0;
        a[2] = 1;
        a[1] = 1;
        D_00444A00[0] = CreateSema_2(a);
        D_00444A04[0] = CreateSema_2(a);
    }
}
