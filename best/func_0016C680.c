typedef struct { u64 *head; u64 *last; } PktList;
typedef struct { u8 pad[0x12]; s8 n; u8 pad2[0x26 - 0x13]; s8 cnt; u8 pad3; s32 data[1]; } Src;

void func_0016C680(PktList *l, Src *s, s64 mask, s32 idx) {
    s32 n = s->n;
    s32 max;
    s32 *p;
    s32 cur;
    s32 i;
    u64 *q;
    if (idx < 0) idx = 0;
    max = s->cnt - 1;
    if (max < idx) idx = max;
    mask &= ~(1L << n);
    idx *= n * 4 + 4;
    p = s->data;
    p = (s32 *)((u8 *)p + idx);
    cur = *p;
    for (i = 0; i <= n; i++) {
        if (((s32)mask ^ 1) & 1) {
            if (cur != p[i]) {
                q = l->head;
                l->head += 2;
                l->last = q;
                q[0] = ((u64)cur << 32) | ((p[i] - cur) >> 4) | 0x30000000;
                q[1] = 0;
            }
            cur = p[i + 1];
        }
        mask >>= 1;
    }
}
