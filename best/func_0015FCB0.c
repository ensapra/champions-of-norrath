typedef struct Obj { char pad[0x14]; void *back; } Obj;
typedef struct Rec { char pad0[4]; Obj *link; char pad1[0x14]; u16 flags; char pad2[2]; } Rec;
typedef struct Hdr { char pad[4]; s8 count; char pad1[3]; Rec recs[1]; } Hdr;

void func_0015FCB0(Hdr *a) {
    s32 i = 0, j = 0;
    u8 n;
    Rec *src, *dst;
    Obj **lp0;
    Obj **lp;
    Obj *o;
    n = a->count;
    if ((s8)n > 0) {
        lp0 = &a->recs[0].link;
        src = a->recs;
        lp = lp0;
        dst = src;
        do {
            if (!(src->flags & 0x1000)) {
                if (*lp) {
                    (*lp)->back = 0;
                    *lp = 0;
                    n = a->count;
                }
            } else {
                *dst = *src;
                if (*lp && j != i) {
                    o = a->recs[j].link;
                    *lp = 0;
                    o->back = dst;
                }
                n = a->count;
                dst++;
                j++;
            }
            i++;
            lp += 8;
            src++;
        } while (i < (s8)n);
    }
    a->count = j;
}
