typedef struct Ent { s16 off; s16 pad; s32 (*fn)(void *, s32, s32, s32); } Ent;
typedef struct Host { char pad[0x60]; s32 vt; } Host;
typedef struct Obj { s8 f0; char p1[3]; s32 f4, f8, fC, f10; void *f14; s32 f18, f1C; } Obj;
extern char D_0044E670[], D_00452D80[];
s32 D_00483E5C;
s32 D_004844A4;
void func_002BA028(Obj *o, s32 a1, s32 a2, s32 a3, Host *h) {
    Ent *e;
    s32 r, n;
    u32 seed;
    o->f0 = a1;
    o->f14 = D_0044E670;
    o->fC = a3;
    o->f8 = (s32)h;
    o->f4 = 0;
    seed = D_00483E5C * 0x19660D + 0x3C6EF35F;
    D_00483E5C = seed;
    o->f14 = D_00452D80;
    o->f10 = seed >> 16;
    e = (Ent *)(h->vt + 0x58);
    r = e->fn((char *)h + e->off, 2, a1, a3);
    n = D_004844A4 + r * 60;
    o->f1C = a2;
    o->f18 = n;
}
