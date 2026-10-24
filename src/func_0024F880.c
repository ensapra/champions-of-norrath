s32 func_002DFB88(s32 *d, s32 *s, u32 n) { u32 i = 0; n >>= 2; if (n) do { s32 v = *s; i++; s++; *d = v; d++; } while (i < n); return 0; }

typedef struct {
    s32 a;
    u16 flags;
    u8 pad[0xE];
} Voice14;

extern s32 D_00485948;
extern Voice14 D_007D8F20[];

s32 func_0024F910(void)
{
    s32 i;

    for (i = 0; i < 0x2C; i++) {
        s32 n = D_00485948 + 1;
        if (n >= 0x2B) {
            n = 0;
        }
        D_00485948 = n;
        if (!(D_007D8F20[n].flags & 5)) {
            return n;
        }
    }
    return -1;
}

s32 func_0024F978(s32);

s32 func_0024F8E0(void *arg0)
{
    return (func_0024F978(*(s32 *)((char *)arg0 + 0x10)) << 12) / 48000;
}

typedef struct {
    u8 pad[0x24];
    s32 prio;
} Chan;

typedef struct {
    s32 a;
    Chan *ch;
    s32 b;
    s32 c;
} ChanEnt;

extern s32 D_0048594C;
extern ChanEnt D_007D9280[];

void func_0024F880(s32 lo, s32 hi)
{
    s32 i;

    for (i = 0; i < D_0048594C; i++) {
        Chan *c = D_007D9280[i].ch;
        if (c->prio <= hi && D_007D9280[i].b >= lo) {
            c->prio = 0x5000;
        }
    }
}
