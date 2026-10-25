typedef struct { u8 r, g, b, a; u8 x[4]; } Px8;
typedef struct { Px8 p; u8 pad[0x18]; } Cell20;
typedef struct { u8 r, g, b, a; } Rgba;
typedef struct {
    u8 pad0[0x3390];
    Rgba col[8];
} Sub910;
typedef struct {
    u8 pad0[0x4EC];
    s32 unk4EC;
    u8 pad4F0[0x618 - 0x4F0];
    s32 unk618;
    u8 pad61C[0x910 - 0x61C];
    Sub910 sub;
} S1611A4;

void func_001611A4(S1611A4 *arg0) {
    s32 i;
    s32 j;
    Sub910 *s = &arg0->sub;
    Cell20 *d = (Cell20 *)((u8 *)s + arg0->unk4EC * 0x19C0 + 0xD50);

    i = 0;
loop:
    j = i % 2;
    i++;
    d[-50].p.r = s->col[j].r;
    d[-50].p.g = s->col[j].g;
    d[-50].p.b = s->col[j].b;
    d[-50].p.a = arg0->unk618 * s->col[j].a / 255;
    d[25].p = d[-50].p;
    d[-25].p.r = s->col[j + 1].r;
    d[-25].p.g = s->col[j + 1].g;
    d[-25].p.b = s->col[j + 1].b;
    d[-25].p.a = arg0->unk618 * s->col[j + 1].a / 255;
    d[50].p = d[-25].p;
    d[0].p.r = s->col[j + 2].r;
    d[0].p.g = s->col[j + 2].g;
    d[0].p.b = s->col[j + 2].b;
    d[0].p.a = arg0->unk618 * s->col[j + 2].a / 255;
    d[75].p = d[0].p;
    d++;
    if ((u32)i < 24) goto loop;
}
