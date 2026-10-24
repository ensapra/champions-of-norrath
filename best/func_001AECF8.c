typedef struct { s32 size; s32 count; u8 *rd; u8 *wr; u8 data[1]; } Ring;
void func_001AE898(Ring *r) {
    r->count++;
    r->wr++;
    if (r->wr == r->data + r->size) r->wr = r->data;
}

extern s32 FlushCache(s32);
extern s32 func_001B7E98(s32, void *, void *);
extern void func_001AE918(void);
extern s32 func_001AE870(s32, s32, s32);
typedef struct { s32 h; s32 f4; s32 f8; s32 fC; u32 f10; u32 f14; s32 f18; } Q;
extern Q D_01107950;
extern u8 D_01107980[];
extern u8 D_01107AC0[];
s32 func_001AECF8(void) {
    Q *q = &D_01107950;
    u8 *t;
    FlushCache(0);
    q->h = func_001B7E98(0x210, q, func_001AE918);
    if (q->h < 0) return 0;
    q->fC = 0;
    t = (u8 *)((u32)D_01107980 | 0x20000000);
    q->f4 = 0;
    q->f8 = 0;
    q->f14 = (u32)D_01107AC0 | 0x20000000;
    q->f10 = (u32)t;
    *(s16 *)(t + 4) = 0x210;
    t[6] = 0x45;
    t[7] = 0x48;
    *(s32 *)(t + 8) = 0;
    *(s16 *)(t + 2) = 0;
    q->f18 = func_001AE870(0x100, 0x45, 0x210);
    return 1;
}

s32 func_001AEDB8(s32 a) {
    while (*(volatile u32 *)0x1000F130 & 0x8000) {}
    *(volatile u8 *)0x1000F180 = a;
    return a;
}
