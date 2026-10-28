struct Vec3 { f32 x, y, z; };
struct Sub3C { char p[0x3C]; s32 a3C; };
struct T {
  char p0[0x1C]; f32 a1C; char p20[4]; Sub3C *a24; char p28[0x10]; s16 a38; char p3a[0xE];
  void *a48; char p4c[0x14]; f32 a60; char p64[0x3C]; u64 aA0; f32 aA8; s8 aAC; char pAD[3];
  f32 aB0; char pB4[0x2C]; f32 aE0; char pE4[8]; s32 aEC; char pF0[8]; s32 aF8; char pFC[0x24];
  char a120[0x11C]; s16 a23C;
};
extern "C" {
extern char D_0042C130[];
extern char D_0044B540[];
extern const f32 D_004813A4;
extern const f32 D_004813A8;
extern const f32 D_004813AC;
extern s32 D_004844A4;
void ovl_ntgui2_func_00108E58(void *, Vec3 *, s16, void *, s32, f32);
void func_001091B0(void *);
void func_001092F0(void *, s32, u64, s32, f32, f32, f32, f32, f32);
void func_001438A0(void *);
void func_001601F8(void *);
void func_00163830(void *, s32, s32);

void func_002097B0(T *t, Vec3 *p, s16 id, s32 k) {
    Vec3 v = *p;
    f32 one = 1.0f;
    char *h = t->a120;
    ovl_ntgui2_func_00108E58(t, &v, id, D_0042C130, k, one);
    u64 fl = t->aA0 | 0x8004001000ULL;
    t->a48 = D_0044B540;
    t->aA8 = D_004813A4;
    t->aF8 = D_004844A4;
    t->a1C = 5.0f;
    t->aE0 = D_004813A8;
    t->aB0 = 50.0f;
    t->a38 = id;
    t->aAC = 0x12;
    t->aA0 = fl;
    t->a60 = one;
    t->aEC = 0;
    t->a23C = 0;
    func_001092F0(t, 1, fl, D_004844A4, D_004813AC, D_004813AC, D_004813AC, D_004813AC, D_004813AC);
    func_00163830(h, t->a24->a3C, 1);
    func_001601F8(h);
    t->a23C = 0;
    func_001438A0(t);
    func_001091B0(t);
}
}
