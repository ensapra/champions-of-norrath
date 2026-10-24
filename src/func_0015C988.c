typedef struct { s32 tag; long data; } TagItem;
extern void func_0015D188(void *);
extern s32 func_00166C10(s32, void *, TagItem *, s32);

#define F(o) (*(s32 *)((u8 *)a + (o)))
#define SET(tg, v) (t[n].tag = (tg), t[n].data = (v), n++)

void func_0015C988(void *a) {
    TagItem t[64];
    s32 n;

    F(0x4D0) = 2;
    func_0015D188(a);
    n = 0;
    SET(9, F(0x5A0) + F(0x5D4));
    SET(0xB, F(0x5A4) + F(0x5D4));
    SET(0x15, 0);
    SET(0xE, F(0x5AC));
    SET(0x10, F(0x5B0));
    SET(0x1A, F(0x5DC));
    SET(0x39, (u32)((u8 *)a + 0xCD0));
    SET(0x12, (u32)((u8 *)a + 0x5C0));
    SET(0x48, F(0xD00));
    SET(0x43, F(0xCF0));
    SET(0x44, F(0xCF4));
    SET(0x45, F(0xCF8));
    SET(0x46, F(0xCFC));
    SET(0x3C, F(0xCE0));
    SET(0x3E, F(0xCE4));
    SET(0x40, F(0xCE8));
    SET(0x42, F(0xCEC));
    SET(0x49, F(0xD04));
    SET(0x3A, F(0xD0C));
    SET(0x4A, F(0xD10));
    SET(0x4B, F(0xD14));
    SET(0x4C, F(0xD18));
    SET(0x4D, F(0xD1C));
    F(0x910) = func_00166C10(0, (u8 *)a + 0x58, t, n);
}
