typedef struct { s32 a, b; } V8;
typedef struct { s32 a, b, c; } V12;
extern V8 D_004862C0[];
extern char D_004862C8[];
extern char D_004785B0[];
extern char D_004785C0[];
f32 D_00482A80;
void func_0013E730(V8 *);
void func_0013E7D0(void);
void func_001577D0(void *, V12 *, s32, f32);
s32 func_00165DC0(char *, char *);
void func_0016AE78(s32, s32, s32, V12 *, void *, s32, s32, s32, s32);
void func_0013CB88(void);

void func_002A4750(char *self) {
    V12 *p = (V12 *)(self + 0x10);
    if (*(s32 *)(self + 0x58) == 0) {
        char buf[0x30];
        V8 v[3];
        V12 a, b;
        s32 r1, r2;
        v[0] = D_004862C0[0];
        func_0013E730(v);
        func_0013E7D0();
        a = *p;
        func_001577D0(buf, &a, 0, D_00482A80);
        r1 = func_00165DC0(D_004862C8, D_004785B0);
        r2 = func_00165DC0(D_004862C8, D_004785C0);
        b = *p;
        func_0016AE78(r1, r2, 3, &b, buf, 0, -1, 0, 0);
        func_0013CB88();
    }
}
