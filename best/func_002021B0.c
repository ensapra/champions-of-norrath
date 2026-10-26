typedef struct { s16 adj; s16 pad; void (*fn)(void *); } Ent;
typedef struct { char pad0[0x1C]; s32 f1C; char pad20[0x14]; s32 f34; char pad38[0x1C]; s32 f54; } Inf;
typedef struct {
    char pad0[0x24]; Inf *inf; char pad28[0x20]; char *vt; char pad4c[0x54]; u64 fA0; char padA8[0x58];
    s32 f100; char pad104[0xC]; char v110[0x10]; char pad120[0x11C]; s16 s23C; char pad23e[0xEA]; s32 f328;
} Obj;
typedef struct { s32 a, b, c; } V3;
s32 func_001129F0(void *);
void func_00113460(void *);
void func_0010D250(void *, void *, s32);
u32 func_00153FA8(void *);
void func_00160128(void *, s32, s32, f32);
void func_001639E8(void *);
f32 D_00481144, D_00481148, D_0048114C, D_00481150, D_00481154, D_00481158, D_0048115C;

void func_002021B0(Obj *p, u32 arg1) {
    if (func_001129F0(&arg1) != 0) return;
    switch (arg1) {
    case 0:
        func_00160128((char *)p + 0x120, p->inf->f1C, 3, D_00481144);
        p->f100 = p->f328 + func_00153FA8(p) % 120 + 0x3C;
        break;
    case 1: {
        V3 a, b;
        char *r = (char *)p + 0x120;
        func_00113460(p);
        func_0010D250(&a, p, 200);
        b = a;
        *(V3 *)(p->v110) = b;
        if (p->fA0 & 0xC00000)
            func_00160128(r, p->inf->f34, 0x803, D_00481148);
        else
            func_00160128(r, p->inf->f54, 0x803, D_0048114C);
        p->f100 = p->f328 + func_00153FA8(p) % 120 + 0x12C;
        func_001639E8(r);
        break;
    }
    case 3:
        func_00113460(p);
        func_00160128((char *)p + 0x120, p->inf->f34, 0x803, D_00481150);
        func_001639E8((char *)p + 0x120);
        break;
    case 5:
        func_00160128((char *)p + 0x120, p->inf->f1C, 6, D_00481154);
        break;
    case 10: {
        Ent *e;
        func_00160128((char *)p + 0x120, p->inf->f1C, 6, D_00481158);
        e = (Ent *)(p->vt + 0xC0);
        e->fn((char *)p + e->adj);
        break;
    }
    case 9:
        func_00160128((char *)p + 0x120, p->inf->f1C, 3, D_0048115C);
        break;
    case 6:
    case 8:
        arg1 = p->s23C;
        break;
    }
    p->s23C = arg1;
}
