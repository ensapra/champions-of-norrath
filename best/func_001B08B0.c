typedef struct { s32 pad0[5]; s32 f14; s32 nxt; s32 f1c; s32 f20; s32 f24; s32 f28; s32 f2c; s32 f30; s32 f34; } B;
typedef struct { s32 a, b, c; } Sp;
extern char D_01109780[];
extern s32 CreateSema(void *);
extern void DeleteSema(s32);
extern void WaitSema(s32);
extern s32 func_001AFCD0(u32, void *, s32, s32, s32, s32);
extern void func_001AFE98(s32, s32);
extern B *func_001B0110(void *);
extern void func_001B01B8(void *);
char _gp;
s32 func_001B08B0(s32 *o, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, s32 sp0)
{
    Sp sp;
    B *b = func_001B0110(D_01109780);
    if (b == 0) return -1;
    o[8] = sp0;
    o[1] = *(s32 *)((char *)b + 0x18);
    o[0] = (s32)b;
    o[7] = a7;
    o[6] = (s32)&_gp;
    b->f20 = a1;
    b->f24 = a4;
    b->f28 = a5;
    b->f2c = a6;
    b->f14 = (s32)b;
    b->f1c = (s32)o;
    b->f34 = o[9];
    if (!(a2 & 2)) {
        if (a3 == a5) {
            func_001AFE98(a3, a4 >= a6 ? a4 : a6);
        } else {
            if (a4 > 0) func_001AFE98(a3, a4);
            if (a6 > 0) func_001AFE98(a5, a6);
        }
    }
    if (a2 & 1) {
        b->f30 = a7 ? 1 : 0;
        o[2] = -1;
        if (func_001AFCD0(0x8000000A, b, 0x40, a3, o[5], a4)) return 0;
        func_001B01B8(b);
        return -2;
    }
    sp.b = 1;
    sp.c = 0;
    o[2] = CreateSema(&sp);
    if (o[2] < 0) {
        func_001B01B8(b);
        return -3;
    }
    b->f30 = 1;
    if (func_001AFCD0(0x8000000A, b, 0x40, a3, o[5], a4) == 0) {
        DeleteSema(o[2]);
        func_001B01B8(b);
        return -2;
    }
    WaitSema(o[2]);
    DeleteSema(o[2]);
    return 0;
}
