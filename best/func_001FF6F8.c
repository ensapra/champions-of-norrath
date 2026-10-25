typedef struct {
    s8 type;
    s32 u4;
    s32 u8;
    s32 uC;
    u32 u10;
    s32 vt;
    s32 h18;
    s32 h1C;
    s32 p20;
    s32 u24;
    s32 u28;
    s32 u2C;
} S1FF6F8;

extern char D_0044E640[];
extern char D_0044E670[];
extern u32 D_00483E5C;
extern s32 D_004844A4;
void func_00194390(s32 *dst, s32 a, s32 b);

void func_001FF6F8(S1FF6F8 *s, s32 idx, s32 type, s32 b, s32 a, s32 c) {
    s32 *p18;
    s32 *p1C;
    u32 r;
    s->type = type;
    s->u4 = 0;
    s->vt = (s32)D_0044E670;
    s->uC = b;
    s->u8 = 0;
    r = D_00483E5C * 0x19660D + 0x3C6EF35F;
    D_00483E5C = r;
    p18 = &s->h18;
    *p18 = 0;
    s->u10 = r >> 16;
    s->vt = (s32)D_0044E640;
    p1C = &s->h1C;
    *p1C = 0;
    if (a != 0) func_00194390(p18, a, a);
    if (b != 0) func_00194390(p1C, b, b);
    s->u24 = idx;
    s->p20 = D_004844A4 + idx * 0x3C;
    s->u28 = type;
    s->u2C = c;
}
