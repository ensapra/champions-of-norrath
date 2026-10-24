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
s32 func_0024A660(s32, char *, s32, s32, s32, s32, s32, s32);
s64 func_0024EBC0(s32 arg0, s32 arg1, s32 arg2) {
    VatInfo *p = func_0024A1F0(arg1);
    if (p != NULL && p->x90 != p->x40) {
        return func_0024A660(arg0, D_00474630, arg2, p->x40, p->x90 - p->x40, p->x44, p->x48, p->x4C);
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
    for (i = 0; i < 0x2B; i++) {
        if ((D_007D8F20[i].flags & 4) && D_0048594C > 0) {
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
extern s8 D_0042DDB8[];
s32 D_00486BC0[2];
s32 D_00486BC8[2];
void func_0024CEC8(void) {
    s32 i, j;
    s8 *t0, *t1;
    for (j = 0x1F; j >= 0; j--)
        D_007D8110[j].x4 = 0;
    t0 = D_0042DDB8;
    for (i = 0; i < 0x2B; i++) {
        s32 o = i << 1;
        s32 a, b;
        s32 *p;
        a = *(s8 *)(o + (s32)t0);
        p = &D_00486BC8[a];
        t1 = t0 + 1;
        b = *(s8 *)(o + (s32)t1);
        D_007D8F20[i].flags = 0;
        *p |= 1 << b;
        D_00486BC0[a] &= ~(1 << b);
    }
}
