typedef struct {
    u8 p0[0x10]; f32 x, y, z; u8 p1[8]; u8 *o24; u8 p2[0x10]; s16 ang; u8 p3[0x8E];
    s16 c8; s16 ca; s16 cc; u8 p4[0x26]; u32 f4; u8 p5[0x130]; s64 f228;
} T;
extern s32 func_001137B0(void *, s32);
extern s32 func_00143A80(void *, char *, s32);
extern void *func_001441B8(s32);
extern void func_001450E8(void *, s32, s32, s32, f32 *, f32 *, s32, void *, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern s32 func_00153FA8(void *);
extern f32 func_0015A070(s32);
extern f32 func_0015A100(s32);
extern s32 func_00165DC0(char *, char *);
extern s64 func_0016C970(s32, s32);
extern void func_0024D308(s32, void *, f32);
extern void func_00303EB8(char *, char *, s32);
extern s32 D_0031F540[];
extern char D_00474580[], D_004745E0[], D_00485920[];

void func_002484D0(T *a, s32 arg1) {
    f32 v[3];
    f32 w[3];
    char name[0x40];
    if (func_00143A80(a, D_004745E0, 0) == 0) {
        f32 *pv, *pw;
        f32 t0, t1;
        void *o;
        s32 fl, id;
        fl = a->f4 & ~0x400;
        id = *(s32 *)(a->o24 + 0xC);
        a->f4 = fl;
        a->f228 = func_0016C970(id, fl);
        pv = v;
        pw = w;
        pv[0] = a->x;
        pv[1] = a->y;
        pv[2] = a->z + 58.0f;
        t0 = func_0015A070(a->ang) * 400.0f;
        t1 = func_0015A100(a->ang) * 400.0f;
        pw[0] = t0;
        pw[2] = 0.0f;
        pw[1] = t1;
        func_00303EB8(name, D_00474580, (func_00153FA8(a) & 3) + 1);
        func_0024D308(func_00165DC0(D_00485920, name), a, 1.0f);
        o = func_001441B8(0x1C4);
        if (o != 0) {
            func_001450E8(o, 0, D_0031F540[2], D_0031F540[3], pv, pw, a->ang - 0x4000, a, 0, 0, a->c8, a->ca / 2, 0, 0, a->cc, 4, 0);
        }
    } else {
        func_001137B0(a, arg1);
    }
}
