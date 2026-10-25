extern u8 func_001CE218[];
#define g_base (*(s32 *)(func_001CE218 + 0x2228))

typedef struct {
    s32 unk0, unk4, unk8;
    s32 offs;
} Ent178670;

typedef struct {
    u32 flags;
    s32 unk4, unk8;
    s32 count;
    Ent178670 ent[1];
} Hdr178670;

void func_00178438(s32);
s32 func_00178518(s32);
s32 func_001785C0(s32);

s32 func_00178670(Hdr178670 *h)
{
    s32 n;
    Ent178670 *e;
    s32 r;

    g_base = (s32)h;
    if ((h->flags & 0xFFFFFF) != 1) {
        return 3;
    }
    n = h->count - 1;
    e = h->ent;
    while (n != 0) {
        e->offs += g_base;
        func_00178438(e->offs);
        r = func_00178518(e->offs);
        if (r != 1) {
            return 4;
        }
        if (func_001785C0(e->offs) != r) {
            return 4;
        }
        e++;
        n--;
    }
    h->flags |= 0x2000000;
    return 0;
}
