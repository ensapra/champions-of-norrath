extern u8 jtbl_004C006C[];
extern u8 func_01000000[];
s32 WaitSema(s32);
s32 SignalSema(s32);
void *func_001A1550();
void func_001A1A50(s32);

typedef struct {
    s32 **arr;
    s32 n;
} L;

void *func_001A0800(s32 arg0)
{
    void **pp;
    void *cur;
    void *t;
    WaitSema(*(s32 *)(jtbl_004C006C + 0x3F70));
    pp = (void **)(func_01000000 + 0x106FF0);
    cur = *pp;
    if (cur) {
        do {
            if (*(s32 *)((char *)cur + 0x8) == arg0) {
                s32 vc;
                *pp = *(void **)((char *)cur + 0x14);
                vc = *(s32 *)((char *)cur + 0xC);
                if (vc != 0 && vc != arg0)
                    func_001A1A50(vc);
                SignalSema(*(s32 *)(jtbl_004C006C + 0x3F70));
                return cur;
            }
            pp = (void **)((char *)cur + 0x14);
            t = *pp;
            cur = t;
        } while (t);
    }
    SignalSema(*(s32 *)(jtbl_004C006C + 0x3F70));
    return func_001A1550();
}

s32 func_001A08E0(s32 *p)
{
    s32 n = 0;
    s32 size = *p;
    while (size != 0) {
        if (p[1] != 0) {
            if (p[2] != 0)
                n++;
        }
        p = (s32 *)((u8 *)p + size) + 1;
        size = *p;
    }
    return n;
}

void func_001A0920(s32 *p, L *l, s32 *pmin, s32 *pmax)
{
    s32 size = *p;
    s32 min = *pmin;
    s32 max = *pmax;
    while (size != 0) {
        if (p[1] != 0) {
            s32 off = p[2];
            if (off != 0) {
                if (l->arr != 0) {
                    l->arr[l->n++] = p;
                    size = *p;
                }
                if ((u32)off < (u32)min)
                    min = off;
                if ((u32)max < (u32)(off + p[3]))
                    max = off + p[3];
            }
        }
        p = (s32 *)((u8 *)p + size) + 1;
        size = *p;
    }
    *pmin = min;
    *pmax = max;
}
