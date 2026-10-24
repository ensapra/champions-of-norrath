typedef struct { s32 v[4]; } V16;
void ovl_ntgui2_func_00191DE0(V16 *, void *, V16 *);

void func_00177C18(void *m, V16 *src, V16 *dst, s32 start, s32 count) {
    s32 i;
    for (i = start; i < start + count; i++) {
        ovl_ntgui2_func_00191DE0(&dst[i], m, &src[i]);
    }
}

typedef struct {
    s32 start0;
    s32 count0;
    s32 start1;
    s32 count1;
} Range;

typedef struct {
    u8 pad0[0x10];
    V16 m0[4];
    V16 m1[4];
    u8 pad[0x90 - 0x90];
} Mtx90;

typedef struct {
    u8 pad0[0x10];
    V16 *src0;
    V16 *src1;
    V16 *dst0;
    V16 *dst1;
    u8 pad20[0x20];
    Range *ranges;
    s32 nranges;
    u8 *mats;
} Skin;

s32 func_00177C98(Skin *s) {
    s32 i;
    for (i = 0; i < s->nranges; i++) {
        Range *r = &s->ranges[i];
        u8 *m = s->mats + i * 0x90;
        if (r->count0 > 0) {
            func_00177C18(m + 0x10, s->src0, s->dst0, r->start0, r->count0);
            func_00177C18(m + 0x50, s->src1, s->dst1, r->start1, r->count1);
        }
    }
    return 0;
}

u32 func_00177670(u32 x, u32 *a, u32 n) {
    u32 i;
    for (i = 0; i < n; i++) {
        if (x >= a[i] && x <= a[i + 1]) {
            return i;
        }
    }
    return 0;
}
