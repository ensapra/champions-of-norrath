typedef struct N N;
struct N {
    char pad0[0x50];
    N *next;
    char pad1[0xA8 - 0x54];
    s32 ok;
    char pad2[0x5A0 - 0xAC];
    s32 x, y;
    char pad3[4];
    s32 w, h;
    char pad4[0x5D4 - 0x5B4];
    s32 m;
    char pad5[0x5FC - 0x5D8];
    s32 flag;
};
void func_0014FEC4(N *, s32 *, s32 *, s32 *, s32 *);
void func_0014BA50(s32, s32, s32, s32, s32 *, s32 *, s32 *, s32 *);

s32 func_0014EC9C(N *o) {
    s32 a[4];
    s32 r[4];
    N *n;
    N *first;
    if (o->flag == 0) {
        first = o->next;
        if (first == 0) goto fail;
        n = first;
        r[0] = o->x;
        r[1] = o->y;
        r[2] = o->x + o->w + o->m * 2;
        r[3] = o->y + o->h + o->m * 2;
        do {
            func_0014FEC4(n, &a[0], &a[1], &a[2], &a[3]);
            func_0014BA50(0, 0, a[2], a[3], &r[0], &r[1], &r[2], &r[3]);
            if (r[0] >= r[2] || r[3] <= r[1]) {
fail:
                o->ok = 0;
                return 0;
            }
            r[0] += a[0];
            r[2] += a[0];
            r[1] += a[1];
            r[3] += a[1];
            n = n->next;
        } while (n);
    }
    o->ok = 1;
    return 1;
}
