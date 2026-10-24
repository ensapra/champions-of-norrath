extern s32 D_010D1100[];
extern s32 D_010D1104[];
extern s32 D_010D1108[];
extern s32 D_010D110C[];
extern s32 D_010D1110[];
extern s32 D_010D1114[];
extern s32 D_010D1118[];
extern s32 D_010D111C[];
extern s32 D_010D10E8[];
extern u8 D_010D10F8[];
extern u8 jtbl_004C006C[];
void func_00140010(void);
s32 func_001A3D78(char *, char *, ...);

typedef struct {
    char pad[8];
    void (*fn)();
} T;

void func_0013E918(s32 a) {
    D_010D1118[0] = a;
}

void func_0013E8D0(void) {
    D_010D1118[0] = -1;
    D_010D1100[0] = 0;
    D_010D1104[0] = 0;
    D_010D1108[0] = 0;
    D_010D110C[0] = 0;
    D_010D1110[0] = 0;
    D_010D1114[0] = 0;
    D_010D111C[0] = 0;
}

void func_0013E830(T *t) {
    char buf[256];
    s32 *p;
    func_00140010();
    p = D_010D10E8;
    if (p[0] >= 0) {
        if (t->fn) {
            u8 *q = D_010D10F8;
            func_001A3D78(buf, (char *)(jtbl_004C006C + 0xAF2C), q[0], q[1], q[2], q[3], q[4], q[5]);
            t->fn(buf, p[0]);
        }
    } else if (t->fn) {
        t->fn(jtbl_004C006C + 0xAF4C);
    }
}
