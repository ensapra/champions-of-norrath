extern s32 D_004448FC[];
extern char D_0047B478[];
extern char D_0047B4A8[];
extern u8 D_008DD880[];
extern u8 D_008DD8D0[];
extern u8 D_008DD9C0[];
extern s32 D_008DDAC0[];
void func_002D70D0(char *, ...);
s32 func_002D8270(void *, s32, s32, void *, s32, void *, s32, s32, s32);
void *func_003021B0(void *, s32, s32);

typedef struct { s32 buf; s32 dma; s32 u8_; s32 uC; s32 state; } PadSlot;

s32 func_002D3710(s32 port, s32 slot, u8 *buf) {
    u8 *p;
    s32 i;
    s32 *q;
    PadSlot *s;
    s32 *r;
    if ((s32)buf & 0x3F) {
        if (D_004448FC[0]) func_002D70D0(D_0047B478, buf);
        return 0;
    }
    p = buf;
    if (((PadSlot *)(D_008DD8D0 + slot * 0x1C + port * 0x70))->state == 1) {
        if (D_004448FC[0]) func_002D70D0(D_0047B4A8, port, slot);
        return 0;
    }
    for (i = 1; i >= 0; i--) {
        *(s32 *)(p + 0x58) = 0;
        p[0x70] = 5;
        p[0x71] = 2;
        p[0x67] = 0;
        func_003021B0(p, 0xFF, 0x20);
        *(s32 *)(p + 0x60) = 0;
        p += 0x80;
    }
    r = D_008DDAC0;
    r[0] = 1;
    r[1] = port;
    r[2] = slot;
    r[4] = (s32)buf;
    if (func_002D8270(D_008DD880, 1, 0, r, 0x80, r, 0x80, 0, 0) < 0) return 0;
    q = (s32 *)(D_008DD9C0 + slot * 0x20 + port * 0x80);
    s = (PadSlot *)(D_008DD8D0 + slot * 0x1C + port * 0x70);
    s->state = 1;
    *q = 0;
    s->uC = 0;
    s->u8_ = r[5];
    s->buf = (s32)buf;
    s->dma = (s32)q;
    return r[3];
}
