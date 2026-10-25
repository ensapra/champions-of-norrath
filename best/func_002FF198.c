typedef struct { s32 p0; s32 p4; s32 b; s32 c; } Info;
extern char D_00453910[], D_00453930[], D_0047F8B0[], D_0047F8C0[], D_0047F8D0[];
extern char func_0031B420[];
Info **func_002FA108(void);
void **func_002FA4A8(s32);
void func_002FB070(void);
void func_002FB1C0(void *);
s32 func_002FE0D0(void *, s32, s32, void *);
void func_002FEE30(void);
void func_002FEE88(void);
Info *func_002FEEE8(void);
void func_002FEF80(void *, s32, void *);
void func_002FF010(void *);
void func_002FF138(void);
s32 func_0031B3C0(void);
void func_002FF198(s32 n, void **argv);

void func_002FF198(s32 n, void **argv) {
    char buf[16];
    void *sp10;
    void **p;
    s32 cnt;
    Info *cur, *nw;
    void **obj;
    s32 t;
    char *a;

    cur = *func_002FA108();
    if (n > 0) {
        p = argv; cnt = n;
        while (1) {
            if (func_002FE0D0(*p, cur->c, cur->b, buf)) { func_002FF138(); func_002FB070(); }
            else cnt--;
            if (cnt == 0) break;
            p++;
        }
        p++;
    }
    func_002FEE88();
    a = D_0047F8C0;
    *p = D_00453930;
    func_002FB1C0(a);
    func_002FF010(nw);
    func_002FB1C0(D_0047F8D0);
    func_002FB1C0(D_0047F8B0);
    nw = func_002FEEE8();
    if (cur != nw) {
        if (n > 0) {
            cur = nw;
            p = argv; cnt = n;
            while (1) {
                if (func_002FE0D0(*p, nw->c, nw->b, buf)) { func_002FF138(); func_002FB070(); }
                else cnt--;
                if (cnt == 0) break;
                p++;
            }
        }
    }
    t = func_0031B3C0();
    if (n > 0) {
        p = argv; cnt = n;
        while (1) {
            if (func_002FE0D0(*p, t, cur->b, buf)) {
                p = &sp10;
                *p = D_00453910;
                obj = func_002FA4A8(4);
                cnt = (s32)obj;
                *obj = D_00453910;
                func_002FEF80(obj, func_0031B3C0(), func_0031B420);
                func_002FB070();
            } else cnt--;
            if (cnt == 0) break;
            p++;
        }
    }
    func_002FEE30();
    func_002FEE30();
    func_002FF198(0, 0);
}
