extern s32 D_0044F798[];
extern void func_00194300(void *);
extern void func_00112340(void *, s32);
extern void func_001447D8(void *);
void func_00315F58(char *t, s32 fl) {
    s32 *p, *e;
    *(void **)(t + 0x48) = D_0044F798;
    if (t != (char *)-0x470) {
        p = (s32 *)(t + 0x480);
        e = (s32 *)(t + 0x470);
        if (e != p) {
            do {
                p--;
                func_00194300(p);
            } while (e != p);
        }
    }
    p = (s32 *)(t + 0x464);
    func_00194300(p);
    if (t != (char *)-0x454) {
        e = (s32 *)(t + 0x454);
        if (e != p) {
            do {
                p--;
                func_00194300(p);
            } while (e != p);
        }
    }
    func_00112340(t, 0);
    if (fl & 1)
        func_001447D8(t);
}
