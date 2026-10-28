extern s32 *D_010EB624[];
extern u32 D_010EB628[];
void func_00179520(s32 *, s32, s32, u32);

void func_00179158(s32 *a, s32 u1, s32 u2, u32 lim) {
    s32 *end = a - 1;
    s32 *p = D_010EB624[0];
    s32 v, c, t;
    u32 m;
    if (p != end) {
        v = *p;
        c = v & 0x7fffffff;
        if (p + c + 1 != end) {
            lim = D_010EB628[0];
            do {
                p = p + c + 1;
                if (lim < (u32)p) return;
                v = *p;
                c = v & 0x7fffffff;
            } while (p + c + 1 != end);
        }
        if (v >= 0) {
            c = c + (*end & 0x7fffffff) + 1;
        } else {
            p = end;
            c = *p & 0x7fffffff;
        }
    } else {
        c = *p & 0x7fffffff;
    }
    func_00179520(p, c, 0, lim);
    m = 0x7fffffff;
    t = end[*end + 1];
    if (t >= 0)
        func_00179520(p, (*p & m) + (t & m) + 1, 0, m);
}
