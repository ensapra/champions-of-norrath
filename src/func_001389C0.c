extern s32 D_001C54A4[];
extern s32 D_001C54A8[];
extern s32 D_010CE574[];
extern s32 D_010CE578[];
void func_0014D090(s32, s32 *, s32 *);
void func_0014CF78(s32, s32 *, s32 *);
void func_00138928(s32);

void func_001389C0(s32 a) {
    s32 v[4];
    if (a == 0) {
        func_00138928(a);
        return;
    }
    if (D_001C54A8[0] != 0) {
        func_0014D090(a, &v[0], &v[1]);
        func_0014CF78(a, &v[2], &v[3]);
        v[0] += v[2] >> 1;
        v[1] += v[3] >> 1;
        D_010CE574[0] = v[0];
        D_010CE578[0] = v[1];
        D_001C54A4[0] = 1;
    }
}
