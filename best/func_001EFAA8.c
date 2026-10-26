typedef struct { s32 x, y, z; } V3;
typedef struct { s32 w[64]; } Tbl;
typedef struct { s16 off; s16 pad; void (*fn)(void *); } VEnt;
typedef struct Obj {
    char p0[0xC]; s32 flags; V3 v10; char p1c[0x8]; Tbl *tbl; char p28[0x10]; s16 s38; char p3a[0xE];
    char *p48; char p4c[0xB4]; s32 s100; char p104[0xC]; V3 v110; char p11c[4]; char sub[0x6]; u16 f126; char p128[0x114];
    s16 s23C; char p23e[0xEA]; s32 s328; char p32c[0x94]; s32 s3C0;
} Obj;
typedef struct { u32 st; char p0[12]; V3 a; char p1[4]; V3 b; char p2[4]; V3 d; char p3[4]; V3 c; } Loc;
extern s32 func_001129F0(Obj *, u32 *);
extern void func_0010D250(V3 *, Obj *, s32);
extern void func_00113460(Obj *);
extern s32 func_00153FA8(Obj *);
extern void func_00160010(void *, s32, s32, f32, f32);
extern void func_00160128(void *, s32, s32, f32);
extern void func_001639E8(void *);
extern void func_0010C338(Obj *, V3 *, s16, s32, f32, f32, f32, f32, f32, f32);
extern f32 D_00480CF4, D_00480CF8, D_00480CFC, D_00480D00, D_00480D04, D_00480D08, D_00480D0C, D_00480D10, D_00480D14, D_00480D18, D_00480D1C, D_00480D20, D_00480D24;
#define SUB(o) ((void *)((char *)(o) + 0x120))

void func_001EFAA8(Obj *o, u32 arg) {
    Loc L;
    void *s;
    s16 t;
    L.st = arg;
    if (func_001129F0(o, &L.st) != 0) return;
    switch (L.st) {
    case 0:
        func_00160128(SUB(o), o->tbl->w[0x84 / 4], 3, D_00480CF4);
        o->s100 = o->s328 + 0xB4;
        break;
    case 1: {
        func_00113460(o);
        s = SUB(o);
        func_0010D250(&L.a, o, 0xC8);
        L.b = L.a;
        o->v110 = L.b;
        func_00160128(s, o->tbl->w[0x94 / 4], 0x803, D_00480CF8);
        func_001639E8(s);
        break;
    }
    case 7:
        func_00113460(o);
        s = SUB(o);
        func_00160128(s, o->tbl->w[0x44 / 4], 0x803, D_00480CFC);
        o->s100 = o->s328 + 0x3C;
        func_001639E8(s);
        break;
    case 3:
        func_00113460(o);
        s = SUB(o);
        t = o->s23C;
        if (t == 3 || t == 6 || t == 14 || t == 15 || t == 16) {
        } else if (t == 13) {
            s = SUB(o);
        } else {
            func_00160128(s, o->tbl->w[0x4C / 4], 0x803, D_00480D00);
        }
        func_001639E8(s);
        break;
    case 6:
        func_00160010(SUB(o), o->tbl->w[0x24 / 4], 0x808, D_00480D04, D_00480D04);
        o->s3C0 = 0;
        break;
    case 14:
        func_00160010(SUB(o), o->tbl->w[0x2C / 4], 0x4808, D_00480D08, D_00480D08);
        o->s3C0 = 0;
        break;
    case 15:
        func_00160010(SUB(o), o->tbl->w[0x3C / 4], 0x4808, D_00480D0C, D_00480D0C);
        o->s3C0 = 0;
        break;
    case 16:
        func_00160010(SUB(o), o->tbl->w[0x34 / 4], 0x808, D_00480D10, D_00480D10);
        o->s3C0 = 0;
        break;
    case 13:
        func_00160010(SUB(o), o->tbl->w[0x54 / 4], 0x808, D_00480D14, D_00480D14);
        o->s3C0 = 0;
        break;
    case 8:
        if ((o->s23C != 6 || !(o->f126 & 8)) && o->s23C != 9) {
            func_00160010(SUB(o), o->tbl->w[0x6C / 4], 0x10, D_00480D18, D_00480D18);
        } else {
            L.st = o->s23C;
        }
        break;
    case 5:
    case 9:
        func_00160128(SUB(o), o->tbl->w[0x84 / 4], 3, D_00480D1C);
        break;
    case 10: {
        if (!(o->flags & 2)) o->flags &= ~1;
        L.c = o->v10;
        func_0010C338(o, &L.c, o->s38, 0, 36.0f, 2.0f, D_00480D20, 0.0f, 3.0f, 0.25f);
        func_00160128(SUB(o), o->tbl->w[0x5C / 4 + (func_00153FA8(o) & 1) * 2], 6, D_00480D24);
        {
            VEnt *e = (VEnt *)(o->p48 + 0xC0);
            e->fn((char *)o + e->off);
        }
        break;
    }
    }
    o->s23C = (u16)L.st;
}
