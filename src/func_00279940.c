typedef struct __attribute__((packed, aligned(4))) { u64 a; s32 b; } P12;
extern s32 D_00485EA8;
extern s32 D_008D57A8[];
s32 func_001441B8(s32);
void func_00278F08(s32, void *, s32, s32);
s32 func_00304168(s32, s32);
void func_00279C60(s32, s32);
void func_00279940(P12 *a, s16 b, s32 c) {
    P12 copy = *a;
    s32 *slot = &D_008D57A8[D_00485EA8++];
    s32 r = func_001441B8(0x18);
    if (r) func_00278F08(r, &copy, b, c);
    *slot = r;
}
void func_00279A10(s32 arg) {
    s32 i, n, j;
    s32 *p;
    n = D_00485EA8;
    for (i = 0; i < n; i++) {
        if (D_008D57A8[i] == arg) {
            if (arg) func_00279C60(arg, 3);
            n = D_00485EA8;
            for (j = i + 1; j < n; j++) D_008D57A8[j - 1] = D_008D57A8[j];
            break;
        }
    }
    D_00485EA8 = n - 1;
}
s32 func_00279AD0(s32 a) {
    s32 i = 0;
    if (D_00485EA8 > 0) {
        s32 *p = D_008D57A8;
        do {
            s32 e = *p++;
            if (func_00304168(*(s32 *)e, a) == 0) return i;
            i++;
        } while (i < D_00485EA8);
    }
    return -1;
}
