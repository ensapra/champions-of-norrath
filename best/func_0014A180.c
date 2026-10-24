typedef struct {
    u8 pad[0x870];
    u32 *p870;
    u32 f874;
    s32 f878;
    u8 pad2[0x10];
    s32 f88C;
    s32 f890;
} O;
u32 *func_0011B9A8(u32);
void func_0011B9E0(void *);
u32 func_0016FA70(u32);

void func_0014A180(O *o, u32 *src, u32 n, u32 cnt) {
    u32 cap = o->f878;
    u32 *nw, *old, *dst;
    u32 i, j, k, rest;
    if (!(cnt < cap)) cnt = cap;
    nw = func_0011B9A8(((cap + n) * 4 + 15) / 16 * 16);
    if (nw) {
        old = o->p870;
        i = 0;
        if (cnt) {
            do {
                nw[i] = old[i];
                i++;
            } while (i < cnt);
        }
        j = i;
        if (n) {
            dst = nw + i;
            k = 0;
            do {
                *dst = func_0016FA70(*src++);
                k++;
                j++;
                dst++;
            } while (k < n);
        }
        if ((s32)i < o->f878) {
            u32 *s = old + i;
            u32 *d = nw + j;
            rest = o->f878 - i;
            do {
                *d = *s;
                s++;
                rest--;
                d++;
            } while (rest);
        }
        if (old) func_0011B9E0(old);
        o->f890 = 1;
        o->p870 = nw;
        o->f874 = o->f878 + n;
        o->f878 = o->f874;
        o->f88C = 1;
    }
}
