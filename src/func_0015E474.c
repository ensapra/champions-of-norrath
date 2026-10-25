typedef struct { u8 b[0x10]; } Sub_15E;
typedef struct {
    Sub_15E s[8];
    u8 pad2[0x568 - 0x80];
    s32 w;
    s32 h;
    s32 pad3;
    s32 psm;
} Tex_15E;
typedef struct {
    u8 pad[0x910];
    Tex_15E t;
} Obj_15E;
void func_0016FEAC(Sub_15E *, s32);
void func_0016FF04(Sub_15E *, s32);
void func_00170584(Sub_15E *, s32, ...);

void func_0015E474(Obj_15E *o) {
    Tex_15E *t = &o->t;
    s32 w = t->w;
    s32 h = t->h;
    func_0016FEAC(&t->s[1], 5);
    func_00170584(&t->s[2], 0x3F, 0);
    func_00170584(&t->s[3], 0x50, 0x6B, 0x3000, 0x6C, (w + 63) / 64, 0x6D, t->psm, 0);
    func_00170584(&t->s[4], 0x52, 0xD3, w, 0xD4, h, 0);
    func_00170584(&t->s[5], 0x51, 0xD1, 0, 0xD2, 0, 0);
    func_00170584(&t->s[6], 0x53, 0xCE, 0, 0);
    func_0016FF04(&t->s[7], w * h * *(s32 *)((u8 *)o + 0xE74) / 16);
}
