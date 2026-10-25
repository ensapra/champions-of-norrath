void func_00170584(void *, s32, ...);
extern s32 D_0048041C;

typedef struct {
    char a[0x10];
    char b[0x10];
} Pair;

void func_00165FC8(char *arg0) {
    Pair *e = (Pair *)(arg0 + 0x9D0);
    u32 i;

    func_00170584(e, 0, 0x9B, 4, 0x9C, 1, 0x9D, 0, 0x9E, 0, 0x9F, *(s32 *)(arg0 + 0x960),
                  0xA0, 0, 0xA1, 1, 0xA2, D_0048041C, 0x67, 0, 0);
    for (i = 0; i < 8; i++) {
        func_00170584(e[i].b, 1, 0);
        func_00170584(e[i + 1].a, 5, 0);
    }
}
