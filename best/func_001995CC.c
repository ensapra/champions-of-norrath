typedef struct __attribute__((packed, aligned(1))) { u64 v; } U64;
#define G(i) (*(U64 *)((char *)o + 0xA88 + (i) * 8))
void func_001995CC(char *o, s32 n) {
    s32 x, y, si;
    U64 *p;
    if (n > 0) {
        si = n * 16;
        for (y = 0; y < 8 - n; y++) {
            for (x = 0; x < 16; x++)
                G(y * 16 + x) = G(si + x);
            si += 16;
        }
    } else if (n < 0) {
        si = n * 16 + 0x70;
        for (y = 7; y >= -n; y--) {
            p = &G(si);
            for (x = 0; x < 16; x++)
                G(y * 16 + x) = *p++;
            si -= 16;
        }
    }
}
