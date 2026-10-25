typedef struct { s16 off; s16 pad; void (*fn)(void *, s32); } VE;
typedef struct { char p0[0xC]; s32 a[0x60]; } T;
s64 func_0016C970(s32, s64);
void func_00163830(void *, s32, s32);
void func_00163BA0(void *);
void func_00220F30(T *t, s32 n) {
    s32 i, p, lim;
    s64 m;
    VE *v;
    char *c = (char *)t;
    if (n < *(s32 *)(c + 0x120)) {
        *(s32 *)(c + 0x178) = n;
        *(s32 *)(c + 0x17C) = 0;
        *(s64 *)(c + 0x180) = 0;
        if (n != 0) {
            lim = n + 1;
            m = 0;
            for (i = 0; i < lim; i++) m |= 1 << i;
            *(s64 *)(c + 0x180) = m;
        }
        *(s64 *)(c + 0xC8) = func_0016C970(*(s32 *)(c + 0x90), *(s32 *)(c + 0x180));
        *(s8 *)(c + 0x9C) = 0;
        p = *(s32 *)(c + *(s32 *)(c + 0x178) * 8 + 0x128);
        if (p) {
            func_00163830(c + 0x98, p, (t->a[*(s32 *)(c + 0x178) * 2 + 0x48] & 2) ? 3 : 6);
            func_00163BA0(c + 0x98);
        }
        v = (VE *)(*(char **)(c + 0x48) + 0x98);
        v->fn(c + v->off, t->a[*(s32 *)(c + 0x178) * 2 + 0x48] & 1);
    }
}
