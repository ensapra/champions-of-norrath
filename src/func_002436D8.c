s32 func_002E4E48(s32, s32, s32 *, s32, s32);

s32 func_002E5F70(s32 a0, s32 type, s32 *a1, s32 n, s32 a4) {
    s32 *dst = (s32 *)a4;
    s32 i;
    if (func_002E4E48(a0, type, a1, 0, n * 4 + 4) < 0) return -0x21E;
    for (i = 0; i < n; i++) dst[i] = a1[i + 1];
    return *a1;
}

extern char D_004738B8[];
extern char D_004858C0[];
s32 func_00165DC0(char *, char *);
void func_00163830(void *, s32, s32);

typedef struct {
    u8 p0[0xC];
    s32 flags;
    u8 p1[0x90];
    s64 bits;
    u8 p2[0x78];
    u8 name[8];
    u8 p3[0x29C];
    s32 f3C4;
} Obj;

void func_002436D8(Obj *o) {
    o->f3C4 = 1;
    o->name[4] = 0;
    func_00163830(o->name, func_00165DC0(D_004858C0, D_004738B8), 0x801);
    o->flags |= 1;
    o->bits |= 0x100000;
}
