typedef struct { s32 a, b, c; } V12;
typedef struct { s32 pad[4]; V12 v; } V28;
typedef struct { char q0[0xC]; s32 f0c; s32 f10; s32 f14; char q1[0x94]; s32 fAC; char q2[4]; s32 fB4; } P24;
typedef struct { char p0[0x10]; V12 v; char p1[8]; P24 *p24; char p2[0x398]; s32 f3C0; s32 f3C4; char p3[0x98]; char f460[1]; } O40;
extern char D_004858C0[], D_004858D0[], D_004858D8[];
void func_0016CD10(f32);
s32 func_00165DC0(char *, char *);
s32 func_00109808(void *, s32, s32, s32);
void func_0016CD20();
void func_0016CBF8(V12 *, s32);
void func_0013E730(void *);
void func_0016C060(s32, s32, s32, s32, s32, s32, s32, s32);
void func_0013CB88();

void func_00240AC0(O40 *o) {
    s32 h, i;
    V28 l;
    if (o->f3C4 != 0) {
        func_0016CD10(0.0f);
        i = func_00165DC0(D_004858C0, D_004858D0);
        func_00109808(o, i, func_00165DC0(D_004858C0, D_004858D8), 0);
        func_0016CD20();
        return;
    }
    func_0016CD10(0.0f);
    h = func_00109808(o, o->p24->f0c, o->p24->f14, 0);
    func_0016CD20();
    if (o->f3C0 != 0) {
        l.v = o->v;
        func_0016CBF8(&l.v, o->v.c);
        func_0013E730(o->f460);
        func_0016C060(o->p24->fAC, o->p24->fB4, 0, o->p24->f0c, h, -1, -1, 0);
        func_0013CB88();
        func_0016CD20();
    }
}
