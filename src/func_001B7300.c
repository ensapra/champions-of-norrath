typedef struct {
    s32 pad0[2];
    s32 id;
    u32 flags;
    s64 base;
    s64 val;
    s32 pad20[8];
} Ent1B7;

typedef struct {
    s32 pad[7];
    s32 cur;
} Cur1B7;

extern volatile Cur1B7 D_004C4F50;
s32 func_001B5C80(void);
void func_001B5CD8(void);
s64 func_001B6DC0(void);

s64 func_001B7300(s32 h, s64 v)
{
    Ent1B7 *e = (Ent1B7 *)(((u32)h >> 10) << 6);
    s32 lk = func_001B5C80();
    s64 r;

    if (h < 0 || (h & 0x3FF) != e->id || D_004C4F50.cur == h) {
        if (lk)
            func_001B5CD8();
        return -1;
    }
    r = e->val;
    if (e->flags & 1) {
        s64 t = func_001B6DC0();
        s64 b = e->base;
        e->val = v;
        e->base = t;
        r += t - b;
    } else {
        e->val = v;
    }
    if (lk)
        func_001B5CD8();
    return r;
}
