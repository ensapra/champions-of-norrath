typedef struct { char p0[0x18]; s32 f18; char p1[0x24 - 0x1C]; s32 f24; char p2[0x34 - 0x28]; s32 f34; char p3[0x4C - 0x38]; s32 f4C; s32 f50; char p4[0x70 - 0x54]; s32 f70; } E;
typedef struct { char p0[0x59]; signed char f59; char p1[0xF0 - 0x5A]; s8 pad; s8 f1; s8 f2; char p2[0x5DB0 - 0xF3]; } F;
extern E D_00427288[];
extern F D_00408600[];
extern char D_004281B8[];
extern char D_00466348[], D_00484828[];
s32 D_00484920;
s32 D_00486A88;
s8 D_00483829;
void func_00134F68(s32, void *, s32);
s32 func_001353A8(s32);
s32 func_00165DC0(void *, void *);
void func_001B10E8(s32, s32, s32);
void func_001BBF28(void *);
void func_0024D308(s32, s32, f32);

void func_001ACC20(s32 a, s32 b, s32 c) {
    s8 buf[0x190];
    E *e = &D_00427288[a];
    s32 t;
    func_001BBF28(e);
    t = e->f70;
    e->f4C = 0;
    e->f18 = t;
    e->f24 = t * D_00484920;
    func_001B10E8(b, a, 0);
    if (c) {
        s32 i = e->f34;
        F *f;
        if (func_001353A8(i))
            func_0024D308(func_00165DC0(D_00484828, D_00466348), 0, 1.0f);
        buf[0] = 9;
        buf[1] = i;
        f = &D_00408600[i];
        buf[2] = f->f59;
        func_00134F68(D_00486A88, buf, 3);
        D_00427288[a].f50 = 5;
        f->f1 = i;
        f->f2 = 0;
        if (D_00483829) {
            D_004281B8[0] = 1;
            return;
        }
        D_004281B8[a * 0x74] = 1;
    }
}
