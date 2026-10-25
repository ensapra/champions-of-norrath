extern "C" {
struct V3 { s32 a, b, c; };
struct V4 { s32 a, b, c, d; };
struct S8 { s16 a, b, c, d; };
struct Mat { s32 m[16]; };
struct Arg { char p0[0x10]; V3 pos; char p1[0x1C]; u16 ang; };
extern char D_00486500[];
extern char D_004797C0[];
extern char D_004797D0[];
extern V4 D_004797E0[];
extern S8 D_00486510[];
extern char D_008D7EF0[];
extern char D_008D7F00[];
s32 D_00486508;
s32 D_0048650C;
u16 D_004844A4;
s32 func_00166F30(char *, char *, char *);
s32 func_00166F48(char *);
void func_0016CBE8(V4 *, s32);
void func_0013E730(S8 *);
void func_00157668(Mat *, V3 *, s16);
void func_00156CB0(Mat *, s32, s16);
void func_0016AE78(s32, s32, s32, V3 *, Mat *, s32, s32, s32, s32);
void func_0013CB88(void);
void func_002BB2F0(Arg *p) {
    if (D_00486508 == 0) {
        func_00166F30(D_008D7EF0, D_00486500, D_004797C0);
        D_00486508 = 1;
    }
    if (D_0048650C == 0) {
        func_00166F30(D_008D7F00, D_00486500, D_004797D0);
        D_0048650C = 1;
    }
    s32 a = func_00166F48(D_008D7EF0);
    s32 b = func_00166F48(D_008D7F00);
    V4 c = D_004797E0[0];
    func_0016CBE8(&c, 2);
    S8 s = D_00486510[0];
    func_0013E730(&s);
    Mat m;
    V3 v1 = p->pos;
    func_00157668(&m, &v1, p->ang + 0x4000);
    func_00156CB0(&m, 0, D_004844A4 << 10);
    V3 v2 = p->pos;
    func_0016AE78(a, b, 3, &v2, &m, 0, -1, 0, 0);
    func_0013CB88();
}
}
