typedef struct { s32 a, b, c; } V12;
extern char D_00486520[];
extern char D_00479868[];
extern char D_00479878[];
f32 D_00482F28;
void func_001577D0(void *, V12 *, s16, f32);
void func_00156CB0(void *, s32, s16);
void func_0013E7A8(s16 *);
s32 func_00165DC0(char *, char *);
void func_0016AE78(s32, s32, s32, V12 *, void *, s32, s32, s32, s32);
void func_0013CB88(void);

void func_002BBD78(char *self) {
    V12 *p = (V12 *)(self + 0x10);
    char buf[0x40];
    V12 a;
    s16 q[4];
    V12 b;
    s32 r1, r2;
    s32 ang = *(u16 *)(self + 0x38);
    a = *p;
    func_001577D0(buf, &a, ang - 0x7FFF, D_00482F28);
    func_00156CB0(buf, 0, *(s16 *)(self + 0x5C));
    q[0] = 7;
    q[1] = 7;
    q[2] = 0x2A;
    q[3] = 0x80;
    func_0013E7A8(q);
    r1 = func_00165DC0(D_00486520, D_00479868);
    r2 = func_00165DC0(D_00486520, D_00479878);
    b = *p;
    func_0016AE78(r1, r2, 3, &b, buf, 0, -1, 0, 0);
    func_0013CB88();
}
