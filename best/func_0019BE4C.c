s32 func_0019BFD8(s32);
struct S19 { char pad[0x54]; s32 *arr; };
extern struct S19 *D_004804D0;
extern s32 D_003642E0[];
s32 func_0019BE4C(s32 n) {
    s32 i, cnt, m;
    if (n < 1) { func_0019BFD8(19); return n; }
    i = n;
    func_0019BFD8(1);
    cnt = 0;
    n--;
    if (D_004804D0->arr[i] != 0) {
        do {
            s32 v = D_004804D0->arr[i];
            i++;
            D_004804D0->arr[n + cnt] = v;
            cnt++;
        } while (D_004804D0->arr[i] != 0);
    }
    m = n + cnt;
    D_004804D0->arr[m] = 0;
    D_003642E0[0] = m;
    return n;
}
