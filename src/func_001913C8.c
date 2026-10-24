typedef struct Q { u64 *cur; u64 *end; s32 unk8; u64 *last; } Q;
void func_001913C8(Q *a) {
    u64 *last = a->last;
    u32 cur = (u32)a->cur;
    u64 v = *last;
    s32 n = ((s32)cur - (s32)last) >> 3;
    u32 m = n - 2;
    u32 t;
    u32 k;
    u32 *p;
    t = (u32)(v >> 58) & 3;
    if (t != 1) m = m >> 1;
    if (t != 2) {
        k = (u32)(v >> 60);
        if (k == 0) k = 16;
        m = (m + k - 1) / k;
    }
    p = (u32 *)cur;
    a->last = 0;
    *last = v + m;
    while ((u32)p & 0xC) {
        *p++ = 0;
    }
    a->cur = (u64 *)p;
}
