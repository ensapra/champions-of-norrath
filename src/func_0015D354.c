typedef struct { u8 b[0x10]; } Sub_15D;
typedef struct {
    Sub_15D s[9];
    u8 pad2[0x410 - 0x90];
    s32 lw;
    s32 lh;
    s32 pad3;
    s32 psm;
} Tex_15D;
typedef struct {
    u8 pad[0x910];
    Tex_15D t;
} Obj_15D;
void func_0016FEAC(Sub_15D *, s32);
void func_0016FF04(Sub_15D *, s32);
void func_00170584(Sub_15D *, s32, ...);

void func_0015D354(Obj_15D *o) {
    Tex_15D *t = &o->t;
    s32 w = 1 << t->lw;
    s32 h = 1 << t->lh;
    s32 n;
    func_0016FEAC(&t->s[2], 5);
    func_00170584(&t->s[3], 0x3F, 0);
    func_00170584(&t->s[4], 0x50, 0x6B, 0x3000, 0x6C, w / 64, 0x6D, t->psm, 0);
    func_00170584(&t->s[5], 0x52, 0xD3, w, 0xD4, h, 0);
    func_00170584(&t->s[6], 0x51, 0xD1, 0, 0xD2, 0, 0);
    func_00170584(&t->s[7], 0x53, 0xCE, 0, 0);
    n = w * h;
    func_0016FF04(&t->s[8], t->psm == 0 ? n / 4 : n / 8);
}
