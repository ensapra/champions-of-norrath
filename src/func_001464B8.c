extern s32 D_001C688C[];
extern s32 D_001BB6C4[];
extern char D_004CB168[];

void func_00146460(void);
void func_00147290(s32);
void func_00147018(s32);
s32 func_001467C8(s32);
void func_00118140(void *, s32, void *, void *, void *);
void func_00118278(s32, void *);
s32 func_0013F460();
s32 func_0013F488();
void func_0013FA70(void *);
s32 func_001462D8();
char *func_0011BA18(s32);
s32 func_001A3D78(char *, const char *, ...);
void func_00114948(s32, s32, s32, char *, void *, s32);

void func_001464B8(s32 a) {
    char buf[0x260];
    if (a >= 0) {
        if (a < 2) {
            func_001A3D78(buf, func_0011BA18(0x75), D_004CB168);
            func_00114948(0, 500, 250, buf, func_00146460, D_001BB6C4[0]);
            return;
        }
    }
    func_00147290(0);
}

typedef struct {
    void *p0;
    void *p4;
    void *p8;
    s32 pad[5];
} Req146;

void func_00146AB8(s32 a) {
    Req146 req;
    s32 r;
    if (a < 0) {
        if (D_001C688C[0] != 0) {
            func_00147290(0);
        } else {
            func_00147018(a);
        }
        return;
    }
    r = func_001467C8(a);
    if (r < 0) {
        if (D_001C688C[0] != 0) {
            func_00147290(0);
        } else {
            func_00147018(r);
        }
        return;
    }
    func_00118140(&req, 1, func_0013F460, func_0013F488, func_0013FA70);
    req.p8 = func_001462D8;
    func_00118278(0, &req);
}
