extern s32 D_0042DD90[];
void func_00194300(s32 *);
void func_00249B78(s32 init, s32 prio) {
    if (prio == 0xFFFF && init == 1) {
        s32 *p = D_0042DD90;
        s32 i = 9;
        while (i != -1) {
            *p = 0;
            i--;
            p++;
        }
    }
    if (prio == 0xFFFF && init == 0) {
        s32 *base = D_0042DD90;
        if (base != 0) {
            s32 *p = base + 10;
            if (p != base) {
                do {
                    p--;
                    func_00194300(p);
                } while (p != D_0042DD90);
            }
        }
    }
}
