extern char D_0042C028[80];
extern char D_007D7170[80];
extern f32 D_0048134C, D_00481350, D_00481354, D_00481358, D_0048135C;
void func_00180D78(void *, s32,s32,s32,s32,s32,s32,s32,f32,f32,f32,s32,s32,s32,s32,s32);
void func_00208738(s32 a, s32 b) {
    s32 again = a;
    if (b == 0xFFFF) {
        if (a == 1)
            func_00180D78(D_007D7170,0x32,0x32,0x14,0x96,0x28,0x28,0xA,
              D_0048134C,D_00481350,D_00481354,0,2,0,4,0);
        if (again == 1)
            func_00180D78(D_0042C028,2,0x53,0x4A,0xE0,0x1F,0x2B,0x1F,
              D_00481358,D_0048135C,0.0f,0xD6,again,3,2,0);
    }
}
