typedef struct {
    s32 pad0[2];
    s32 id;
    u32 flags;
    s64 base;
    s64 val;
    s32 pad20[8];
} Ent2DE;

typedef struct {
    s32 pad[7];
    s32 cur;
} Cur2DE;

extern volatile Cur2DE D_004459A8;
s32 func_002DD640(void);
void func_002DD698(void);
s64 func_002DE780(void);

s64 func_002DECC0(s32 h, s64 v)
{
    Ent2DE *e = (Ent2DE *)(((u32)h >> 10) << 6);
    s32 lk = func_002DD640();
    s64 r;

    if (h < 0 || (h & 0x3FF) != e->id || D_004459A8.cur == h) {
        if (lk)
            func_002DD698();
        return -1;
    }
    r = e->val;
    if (e->flags & 1) {
        s64 t = func_002DE780();
        s64 b = e->base;
        e->val = v;
        e->base = t;
        r += t - b;
    } else {
        e->val = v;
    }
    if (lk)
        func_002DD698();
    return r;
}
