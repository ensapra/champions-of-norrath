typedef struct { s32 head; s32 tail; } Q;
typedef struct { u8 pad0[0x10]; u16 flags; s8 count; u8 pad13[0x13]; s8 max; u8 pad27; s32 vals[1]; } Obj;
extern s32 D_00484084;
extern s32 D_00484088;
extern s32 D_004844C8;
extern void func_00169528(void*, void*, s32, s32);
extern void func_00168410(void*, void*, s32, s32, s32);
extern void func_0015EB80(s32, s32, s32, s32, s32);
void func_0016C060(Obj *o, s32 a1, s32 a2, s32 a3, s32 a4, s64 a5, s32 a6, s32 a7) {
    Q q;
    volatile Q *qp;
    s32 start, i, k, cur, next, h;
    s32 *p;
    s64 mask;
    s64 *node;
    s64 x;
    q.head = D_004844C8;
    if (o == 0) return;
    func_00169528((void*)&q, o, a3, a6);
    if ((o->flags & 0x20) && D_00484088 > 0)
        func_00168410((void*)&q, o, 1, D_00484084, D_00484088);
    k = o->count;
    start = a7 < 0 ? 0 : a7;
    if (start > o->max - 1) start = o->max - 1;
    p = (s32*)((u8*)o + 0x28 + start * (k * 4 + 4));
    cur = *p;
    mask = a5 & ~(1LL << k);
    qp = &q;
    i = 0;
    while (k >= i) {
        if (((s32)mask ^ 1) & 1) {
            next = p[i];
            if (cur != next) {
                node = (s64*)qp->head;
                qp->head = (s32)(node + 2);
                node[0] = ((s64)cur << 32) | ((next - cur) >> 4) | 0x30000000;
                node[1] = 0;
                qp->tail = (s32)node;
            }
            cur = p[i + 1];
        }
        i++;
        mask >>= 1;
    }
    node = (s64*)q.tail;
    x = *node;
    if (((x >> 28) & 7) == 1) {
        *node = (x & (s32)0x8FFFFFFF) | 0x60000000;
    } else {
        node = (s64*)q.head;
        q.tail = 0;
        q.head = (s32)(node + 2);
        node[0] = 0x60000000;
        node[1] = 0;
    }
    h = D_004844C8;
    D_004844C8 = q.head;
    func_0015EB80(h, a2, a1, a4, 0);
}
