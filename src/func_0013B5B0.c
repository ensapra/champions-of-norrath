extern s32 func_00138758(void *, s32, void **);
extern void func_00138900(void *, void *);
extern char D_00483A08[], D_00483A20[];
extern char D_0034B6B1[];
void func_00303EB8(char *, const char *, ...);
void *func_00165DC0(void *, void *);
void func_0018E1C0(void *, void *);

s32 func_0013B5B0(void *arg0, s32 *arg1) {
    struct { char b0[0xA0]; void *s; char pad[0xC]; char n1[0x50]; char n2[0x50]; } l;

    func_00138758(arg0, arg1[1], &l.s);
    func_00138900(l.b0, l.s);
    func_00303EB8(l.n1, D_00483A08, D_0034B6B1);
    func_00303EB8(l.n2, D_00483A20, l.b0);
    func_0018E1C0(func_00165DC0(l.n1, l.n2), l.n2);
    return 0;
}

s32 func_001353A8(s32);
s32 func_001B3B20(s32, s32, s32);
s32 func_001D38B0(void);
extern s32 D_0042A3E8[];
extern s32 D_00484F44;
extern s8 D_00485078;

s32 func_0013B640(void) {
    s32 i;

    if (func_001D38B0() != 0) {
        D_00485078 = 1;
    } else {
        for (i = 0; i < D_00484F44; i++) {
            if (func_001353A8(D_0042A3E8[i]) != 0) {
                func_001B3B20(D_0042A3E8[i], 0, 1);
            }
        }
    }
    return 0;
}

typedef struct { s16 delta; s16 pad; void (*fn)(void *, s32); } VtEnt_13A6E8;
typedef struct { char pad[0x18]; VtEnt_13A6E8 e; } Vt_13A6E8;
typedef struct { char pad[0x48]; Vt_13A6E8 *vt; } Obj_13A6E8;
void func_00140678(void *, Obj_13A6E8 **, s32);

s32 func_0013A6E8_listdispatch(void *arg0, s32 *arg1) {
    struct { char b0[0xA0]; void *s; char pad[0xC]; Obj_13A6E8 *list[100]; } l;
    s32 i;

    func_00138758(arg0, arg1[1], &l.s);
    func_00138900(l.b0, l.s);
    func_00140678(l.b0, l.list, 100);
    for (i = 0; l.list[i] != NULL; i++) {
        Obj_13A6E8 *o = l.list[i];
        o->vt->e.fn((char *)o + o->vt->e.delta, arg1[2]);
    }
    return 0;
}
