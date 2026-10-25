typedef struct { s32 *a; s32 b; s32 *c; s32 d; } B;
typedef struct { s32 f0; s32 f4; s32 f8; s32 *fC; s32 n; } A;
s32 func_001A08E0(s32);
void func_001A0920(s32, B *, s32 *, s32 *);
s32 *func_001A19F8(s32);
s32 func_001A0158(B *, s32);

void func_001A0A08(A *a) {
    B buf;
    B *b;
    s32 i0, i1;
    s32 n, r, cur, next;
    s32 *p, *t;
    s32 *x;
    s32 *y;
    if (a->f0) {
        n = a->n;
    } else {
        t = a->fC;
        if (t) {
            p = t;
            cur = *p;
            n = 0;
            if (cur) {
                do {
                    p++;
                    n += func_001A08E0(cur);
                    next = *p;
                    cur = next;
                } while (next);
            }
        } else {
            n = func_001A08E0(a->f8);
        }
    }
    a->n = n;
    b = &buf;
    if (n) {
        x = func_001A19F8(n * 4);
    } else {
        x = 0;
    }
    b->a = x;
    y = 0;
    if (x) {
        y = func_001A19F8(n * 4);
    }
    b->c = y;
    b->b = 0;
    b->d = 0;
    if (b->a || a->f0 == 0) {
        i0 = -1;
        i1 = 0;
        t = a->fC;
        if (t) {
            p = t;
            cur = *p;
            if (cur) {
                do {
                    func_001A0920(cur, &buf, &i0, &i1);
                    p++;
                    next = *p;
                    cur = next;
                } while (next);
            }
        } else {
            func_001A0920(a->f8, &buf, &i0, &i1);
        }
        r = func_001A0158(&buf, n);
        if (r) a->fC = (s32 *)r;
        a->f0 = i0;
        a->f4 = i1;
    }
}
