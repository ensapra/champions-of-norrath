typedef struct { s32 h; s32 f4; s32 f8; s32 fC; u32 f10; u32 f14; s32 f18; } Q;
typedef struct { u8 p[2]; volatile s16 h2; volatile s16 h4; volatile u8 b6; volatile u8 b7; volatile s32 w8; } T;
extern volatile s32 D_01107950[];
extern u8 D_01107980[], D_01107AC0[];
void func_001AE918(void);
void FlushCache(s32);
s32 func_001AE870(s32, s32, s32);
s32 func_001B7E98(s32, void *, void *);

s32 func_001AECF8(void) {
    Q *q = (Q *)D_01107950;
    T *t;
    FlushCache(0);
    D_01107950[0] = func_001B7E98(0x210, q, (void *)func_001AE918);
    if (D_01107950[0] < 0) return 0;
    q->fC = 0;
    t = (T *)((u32)D_01107980 | 0x20000000);
    q->f4 = 0;
    q->f8 = 0;
    q->f14 = (u32)D_01107AC0 | 0x20000000;
    q->f10 = (u32)t;
    t->h4 = 0x210;
    t->b6 = 0x45;
    t->b7 = 0x48;
    t->w8 = 0;
    t->h2 = 0;
    q->f18 = func_001AE870(0x100, 0x45, 0x210);
    return 1;
}
