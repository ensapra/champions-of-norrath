typedef struct { s32 a, b, c; } V12;
extern char D_00486170[];
extern char D_00477AB8[];
extern char D_00477AC8[];
void func_001577D0(void *, V12 *, s16, f32);
void func_0013E7A8(s16 *);
s32 func_00165DC0(char *, char *);
void func_0016AE78(s32, s32, s32, V12 *, void *, s32, s32, s32, s32);
void func_0013CB88(void);

void func_00293628(char *self) {
    V12 *p = (V12 *)(self + 0x10);
    char buf[0x40];
    V12 a;
    s16 q[4];
    V12 b;
    s32 r1, r2;
    a = *p;
    func_001577D0(buf, &a, *(u16 *)(self + 0x38) + 0x40E4, 1.0f);
    q[0] = 7;
    q[2] = 7;
    q[1] = 0x11;
    q[3] = 0;
    func_0013E7A8(q);
    r1 = func_00165DC0(D_00486170, D_00477AB8);
    r2 = func_00165DC0(D_00486170, D_00477AC8);
    b = *p;
    func_0016AE78(r1, r2, 3, &b, buf, 0, -1, 0, 0);
    func_0013CB88();
}
