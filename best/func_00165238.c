typedef struct { s32 p0, p1, p2; s32 cur; s32 z0; s32 d; s32 t; s32 z1; s32 one; s32 p9; } Ent;
typedef struct { s32 hdr; Ent e[1]; } G;
extern G D_006CB280;
extern char D_006D86C0[];
s8 D_00483FFC;
s8 D_00483FFD;
s32 D_00484008;
s32 D_0048400C;
s8 D_00484011;
s32 D_00484014;
s32 D_00484018;
s8 *D_00486924;
s32 D_00483F8C;
extern s32 func_002E2ED8(s32);
extern s32 func_002E3C20(void);
extern void func_00164B40(void);
extern s32 func_002E41E0(s32, s32, s32, s32 *);
extern s32 func_0024F588(void);
extern s32 func_00164338(s32);
extern void func_00144278(s32, s32);
extern void func_00304640(void *, void *, void *);

void func_00165238(void) {
    s32 c = D_00483FFC;
    s32 cur;
    if (c == 1) {
        if (D_00483FFD == 0) {
            if (func_002E2ED8(1) == 0) {
                if (func_002E3C20() != 0) {
                    func_00164B40();
                } else {
                    goto blk;
                }
            }
        } else if (D_0048400C > 0) {
            s32 sp0 = 0;
            s32 r = func_002E41E0(D_0048400C >> 11, D_00484008, 0, &sp0) << 11;
            D_0048400C -= r;
            D_00484008 += r;
            if (D_0048400C == 0) {
blk:
                *D_00486924 = c;
                D_00483FFC = 0;
            }
        }
    }
    cur = D_00484014;
    if (cur != 0 && D_00484011 != 0) {
        s32 t17 = D_00484018;
        s32 t20 = func_0024F588();
        s32 d = t17 - func_00164338(cur) + 0x100;
        char *tbl = D_006D86C0;
        s32 i;
        Ent *e;
        func_00144278(cur, d);
        D_006CB280.e[D_00483F8C].d = d;
        t20 -= func_0024F588();
        e = &D_006CB280.e[D_00483F8C];
        e->t = t20;
        e->z0 = 0;
        e->z1 = 0;
        func_00304640(&D_006CB280.e[D_00483F8C], tbl, &e->z0);
        i = D_00483F8C;
        D_00484014 = 0;
        D_00483F8C = i + 1;
        D_00484011 = 0;
        D_006CB280.e[i].cur = cur;
        D_006CB280.e[i].one = 1;
    }
}
