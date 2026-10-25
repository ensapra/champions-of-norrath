void func_00138758(s32, s32, s32 *);
void func_00138900(char *, s32);
char *func_00143A58(char *);
s32 func_00143A80(char *, char *, s32);
void func_00160128(char *, s32, s32, f32);
void func_001637A8(char *, char *, s32);
void func_00163830(char *, s32, s32);
void func_00163BA0(char *);
void func_001640D0(char *);
s32 func_00165DC0(s32, char *);
extern f32 D_0047FC98;
extern char D_00483A10[];

typedef struct { s32 a; s32 b; s32 c; s32 d; } Arg1;

s32 func_00139230(s32 arg0, Arg1 *arg1) {
    char buf2[0xA0];
    char buf1[0xA0];
    s32 v;
    s32 *pv = &v;
    char *obj;
    s32 r;

    func_00138758(arg0, arg1->b, pv);
    func_00138900(buf1, *pv);
    obj = func_00143A58(buf1);
    func_00138758(arg0, arg1->c, pv);
    func_00138900(buf2, *pv);
    if (arg1->d == -1) {
        func_001637A8(obj + 0x54, D_00483A10, 0);
        r = func_00165DC0(func_00143A80(obj, D_00483A10, 0), buf2);
        func_00163830(obj + 0x54, r, 6);
        func_00163BA0(obj + 0x54);
        func_001640D0(obj + 0x54);
    } else {
        r = func_00165DC0(func_00143A80(obj, D_00483A10, 0), buf2);
        func_00160128(obj + 0x54, r, arg1->d, D_0047FC98);
    }
    return 0;
}
