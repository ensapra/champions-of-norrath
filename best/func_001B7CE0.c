typedef struct Ent{s32 a,b,c,pad;}Ent;
extern Ent D_0110D888[];
extern Ent *D_004C4F70[];
extern u32 D_004C4F74[];
s32 func_001B5C80(void);
void func_001B5CD8(void);
extern s32 _gp[];
s32 func_001B7CE0(s32 idx, s32 a, s32 b) {
    Ent *tab; u32 lim; Ent *e; s32 r;
    if (idx < 0) { idx &= 0x7FFFFFFF; tab = D_0110D888; lim = 0x20; }
    else { tab = D_004C4F70[0]; lim = D_004C4F74[0]; }
    if ((u32)idx >= lim) return 0x80000069;
    r = func_001B5C80();
    e = (Ent *)((u32)(idx * 16) + (u32)tab);
    e->a = a; e->b = b; e->c = (s32)_gp;
    if (r) func_001B5CD8();
    return 0;
}
