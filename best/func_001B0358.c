typedef struct { char pad[0x10]; u32 f10; s32 f14; char p18[4]; s32 f1C; s32 f20; s32 f24; s32 f28; } A;
typedef struct { char pad[0x14]; s32 f14; char p18[4]; s32 f1C; s32 f20; s32 f24; s32 f28; s32 f2C; } B;
extern char func_001B0318[];
s32 func_001AFD10(s32, void *, s32, s32, s32, s32);
B *func_001B01D8(s32, u32);
B *func_001B0208(s32, u32);
s32 func_001B7A28(s32, void *, void *);
void func_001B0358(A *a, s32 x) {
    B *b;
    if (a->f10 & 4) b = func_001B0208(x, a->f10 >> 16);
    else b = func_001B01D8(x, a->f10);
    b->f14 = a->f14;
    b->f1C = a->f1C;
    b->f20 = 0x8000000C;
    b->f24 = a->f20;
    b->f28 = a->f24;
    b->f2C = a->f28;
    if (func_001AFD10(0x80000008, b, 0x40, a->f20, a->f24, a->f28) == 0)
        func_001B7A28(0x800, func_001B0318, b);
}
