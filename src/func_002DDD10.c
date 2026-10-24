extern u8 D_0047B920[];
extern s32 D_00445D48[];
void _ExecOSD_2(s32, s32);
void func_002DDB10(void *, s32, s32);
void func_002DDC28(void);

void func_002DDD10(s32 arg0, s32 arg1) {
    func_002DDB10(D_0047B920, arg0, arg1);
    func_002DDC28();
    _ExecOSD_2(arg0, D_00445D48[0] + 4);
}

typedef struct VatInfo {
    u8 pad[0x40];
    s32 x40;
    s32 x44;
    s16 x48;
    s32 x4C;
    u8 pad2[0x90 - 0x50];
    s32 x90;
} VatInfo;
extern char D_00474630[];
VatInfo *func_0024A1F0(s32);
s32 func_0024A660(void *, char *, s32, s32, s32, s32, s32, s32);
void func_0024EBC0(void *a0, s32 a1, s32 a2) {
    VatInfo *p = func_0024A1F0(a1);
    if (p != NULL) {
        s32 start = p->x40;
        if (p->x90 != start) {
            func_0024A660(a0, D_00474630, a2, start, p->x90 - start, p->x44, p->x48, p->x4C);
        }
    }
}

typedef struct Ent14 {
    s32 x0;
    u16 flags;
    u8 pad[0x14 - 6];
} Ent14;
extern Ent14 D_007D8F20[];
s32 D_0048594C;
void func_0024D6A0(void) {
    s32 i, j;
    Ent14 *e = D_007D8F20;
    for (i = 0x2A; i >= 0; i--, e++) {
        if ((e->flags & 4) && D_0048594C > 0) {
            j = D_0048594C;
            while (--j)
                ;
        }
    }
}

typedef struct Ent4C {
    s32 x0;
    u8 x4;
    u8 pad[0x4C - 5];
} Ent4C;
extern Ent4C D_007D8110[];
extern s8 D_0042DDB8[][2];
s32 D_00486BC0[2];
s32 D_00486BC8[2];
void func_0024CEC8(void) {
    s32 i;
    for (i = 0x1F; i >= 0; i--)
        D_007D8110[i].x4 = 0;
    for (i = 0; i < 0x2B; i++) {
        s32 a = D_0042DDB8[i][0];
        s32 m = 1 << D_0042DDB8[i][1];
        D_007D8F20[i].flags = 0;
        D_00486BC8[a] |= m;
        D_00486BC0[a] &= ~m;
    }
}
