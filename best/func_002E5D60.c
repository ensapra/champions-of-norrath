typedef struct { char pad[0x24]; int f; } S;
extern int func_002E4910(void *, int, int, int, int, int);

int func_002E5D60(S *a, int b, int c, int d) {
    int i;
    if (b < 0x100 || b != ((b + 0x3F) & ~0x3F)) return -0x21F;
    while (func_002E4910(a, 0x80001201, 0, b, c, d) >= 0) {
        if (a->f != 0) return 0;
        for (i = 0x10000; i != -1; i--) {}
    }
    return -0x21C;
}
