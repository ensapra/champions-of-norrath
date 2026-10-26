typedef struct { s32 pad0[3]; s32 mask; s32 flags; s32 pad1[17]; } Tab;
typedef struct { s32 pad0[6]; s32 f18; s32 pad1[2]; s32 f24; s32 f28; s32 pad2[18]; } Anm;
typedef struct { s32 pad0[5]; s32 f14; s32 f18, f1C, f20, f24, f28; s32 pad1; s32 f30; s32 pad2[7]; s32 f50; } Obj;
extern Tab D_00332FD0[];
extern s32 D_0034BEB8[];
extern Anm D_004281A8[];
extern s32 D_007D03C8[];
s8 D_00483F54[4];
s8 D_00483F55;
s32 D_00483F2C;
s32 D_0048404C;
extern char D_00484930[];
extern char D_00466C48[];
extern char D_00466C60[];
s32 func_001BC400(void *);
void *func_00165DC0(char *, char *);
void func_0024D308(void *, s32, f32);

void func_001B2A90(s32 idx, Obj *p)
{
    s32 max, r, flags, n, c;
    if (D_00483F54[idx] != 0) return;
    if (D_007D03C8[idx] != 0) return;
    if (D_00483F55 != 0) return;
    max = 6;
    if (D_00483F2C) max = 3;
    r = func_001BC400(p);
    if (D_00332FD0[idx].mask & D_0048404C) {
        if (r >= 0) {
            D_0034BEB8[idx * 22 + 4] = 0;
            D_00332FD0[idx].flags = 0;
            p->f50 = r;
            p->f18 = 0;
            p->f1C = 0;
            p->f24 = 0;
            p->f28 = 0;
            p->f20 = 0;
            if (func_001353A8(idx)) {
                func_0024D308(func_00165DC0(D_00484930, D_00466C48), 0, 1.0f);
            }
            D_004281A8[idx].f24 = 0;
            D_004281A8[idx].f28 = 0;
            D_004281A8[idx].f18 = 0;
            p->f14 = 0;
            return;
        }
    }
    flags = D_00332FD0[idx].flags;
    if (flags & 8) goto inc;
    if (flags & 2) {
inc:
        c = p->f50;
        p->f14 = 0;
        if (max - 2 < c) return;
        n = c + 1;
    } else {
        if (!(flags & 4)) {
            if (!(flags & 1)) return;
        }
        n = p->f50;
        p->f14 = 0;
        if (n <= 0) return;
        n--;
    }
    p->f30 = 0;
    p->f50 = n;
    p->f18 = 0;
    p->f1C = 0;
    p->f24 = 0;
    p->f20 = 0;
    p->f28 = 0;
    if (func_001353A8(idx)) {
        func_0024D308(func_00165DC0(D_00484930, D_00466C60), 0, 1.0f);
    }
    D_004281A8[idx].f24 = 0;
    D_004281A8[idx].f28 = 0;
    D_004281A8[idx].f18 = 0;
}
