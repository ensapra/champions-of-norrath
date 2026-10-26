extern void func_002EF5C8(void *, void *);
extern void func_002EFCE0(void *, s64 *, s32, s32, s32);
#define ABS(x) ((x) < 0 ? -(x) : (x))
#define G(v) ((v) < 0x2B33 ? (v) * 2 : (v) < 0x4E66 ? (v) + 0x2B33 : ((v) >> 2) + 0x6600)
#define COMP(buf) { s32 i; s64 *p = buf; for (i = 7; i >= 0; i--, p++) { s64 x = *p; if (x < 0) { x = ABS(x); *p = -G(x); } else { *p = G(x); } } }
typedef struct { u8 pad[0x918]; s64 b[2][8]; s64 flag; } S;

void func_002F0480(S *a0, void *a1, s32 a2, s32 a3) {
    s64 buf[8];
    s64 *oth, *cur;
    s64 f;
    cur = a0->b[(s32)a0->flag];
    f = a0->flag ^ 1;
    a0->flag = f;
    oth = a0->b[(s32)f];
    func_002EF5C8(a1, cur);
    { s32 i; s64 *p = oth, *q = cur, *d = buf;
    for (i = 7; i >= 0; i--) { s64 a = *p++; s64 b = *q++; *d++ = (a >> 2) + (b >> 2) + (a >> 1); } }
    COMP(buf)
    func_002EFCE0(a0, buf, 0xD, a2, a3);
    { s32 i; s64 *p = oth, *q = cur, *d = buf;
    for (i = 7; i >= 0; i--) { s64 a = *p++; s64 b = *q++; *d++ = (a >> 1) + (b >> 1); } }
    COMP(buf)
    func_002EFCE0(a0, buf, 0xE, a2 + 0x68, a3 + 0x1A);
    { s32 i; s64 *q = oth, *p = cur, *d = buf;
    for (i = 7; i >= 0; i--) { s64 a = *p++; s64 b = *q++; *d++ = (b >> 2) + (a >> 2) + (a >> 1); } }
    COMP(buf)
    func_002EFCE0(a0, buf, 0xD, a2 + 0xD8, a3 + 0x36);
    { s32 i; s64 *p = cur, *d = buf;
    for (i = 7; i >= 0; i--) *d++ = *p++; }
    COMP(buf)
    func_002EFCE0(a0, buf, 0x78, a2 + 0x140, a3 + 0x50);
}
