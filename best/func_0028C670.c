typedef struct { f32 x, y, z; } V3;
typedef struct { s32 (*f0)(); s32 (*f4)(); } VT;
typedef struct { char p[0x60]; void *vt60; } Q;
typedef struct { char p0[0xC]; u32 flags; char p1[0x2C]; s16 ang; char p2[0x0E]; s32 f48; Q *owner; s32 f50, f54, f58; char p3[0xC4]; V3 f120; char p4[0x1C]; char sub[0x28]; V3 f17c; char p5[0x4]; s32 f188; } O;
void func_001411F0(V3 *, s32, s32);
void func_00143830(void *);
f32 func_0015A070(s16);
f32 func_0015A100(s16);
void *func_00165DC0(char *, char *);
void func_00194390(void *, void *, void *);
void func_0024D308(void *, void *, f32);
void ovl_ntgui2_func_0013D230(void *, V3 *, s32, s32, s32, s32, s32);
extern char D_00449B00[], D_00477868[], D_00486108[];
extern f32 D_004825D4, D_004825D8, D_004825DC;
extern s32 D_004844A4;
void func_0028C670(O *o, V3 *pos, s16 ang, void *a3, Q *owner, s8 b) {
    V3 v, w;
    func_001411F0(&v, 0, 0);
    o->f48 = 0;
    func_0024D308(func_00165DC0(D_00486108, D_00477868), a3, 1.0f);
}
