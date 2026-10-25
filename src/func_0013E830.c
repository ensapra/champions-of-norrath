extern s32 D_010D10E8[];
extern u8 D_010D10F8[];
extern u8 jtbl_004C006C[];
void func_00140010(void);
s32 func_001A3D78(char *, char *, ...);

typedef struct {
    char pad[8];
    void (*fn)(char *, s32);
} T;

void func_0013E830(T *t) {
    char buf[256];
    s32 *p;
    func_00140010();
    p = D_010D10E8;
    if (*p >= 0) {
        if (t->fn) {
            u8 *q = D_010D10F8;
            func_001A3D78(buf, (char *)(jtbl_004C006C + 0xAF2C), q[0], q[1], q[2], q[3], q[4], q[5]);
            t->fn(buf, *p);
        }
    } else if (t->fn) {
        t->fn((char *)(jtbl_004C006C + 0xAF4C), *p);
    }
}
