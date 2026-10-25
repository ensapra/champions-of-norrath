extern u8 D_00453810[], D_00453930[], D_0047F910[];
extern s32 func_0031AA68(void);
extern void func_0031AAC8(void);
extern void **func_002FA4A8(s32);
extern void func_002FEF80(void *, s32, void *);
extern void func_002FB070(void);
extern void func_002FB1C0(void *) __attribute__((noreturn));

void func_002FF3C8(void) {
    void * volatile loc;
    void **p;
    void *vt;
    void *q;
    vt = D_00453810;
    loc = vt;
    p = func_002FA4A8(4);
    *p = vt;
    func_002FEF80(p, func_0031AA68(), func_0031AAC8);
    func_002FB070();
    q = D_0047F910;
    loc = D_00453930;
    func_002FB1C0(q);
}
