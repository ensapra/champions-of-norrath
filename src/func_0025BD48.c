typedef struct { u64 a:8; u64 b:16; u64 c:8; u64 d:16; u16 e; } K64;
typedef struct { u32 a:8; u32 b:16; u32 c:8; u16 d; u16 e; } K32;
s32 func_003044FC(void *, void *);
extern u8 D_007F7FE0[];

s32 func_0025BD48(K32 *arg0) {
    u8 *p = D_007F7FE0;
    K64 *k;
    s32 r = func_003044FC((u8 *)arg0 + 0x20, p);
    k = (K64 *)(p - 0x20);
    if (r == 0) {
        if (arg0->b == k->b) {
            if (arg0->c == k->c) {
                if (arg0->d == k->d) {
                    if (arg0->e == k->e) return 1;
                }
            }
        }
    }
    return 0;
}
