extern s64 func_002F81C0(s64, s64);
#define M(i) func_002F81C0(a[i] >> 2, a[i] >> 2)

void func_002EDAE8(s64 *a, s64 *out, s64 *pidx) {
    register s64 idx = 0, best, sum, base;
    s64 *p, *q;
    register s32 n;
    sum = M(3); sum += M(6); sum += M(9); sum += M(12); sum += M(15); sum += M(18);
    sum += M(21); sum += M(24); sum += M(27); sum += M(30); sum += M(33); sum += M(36);
    base = sum;
    sum += M(0);
    best = sum * 2;
    sum = M(1); sum += M(4); sum += M(7); sum += M(10); sum += M(13); sum += M(16);
    sum += M(19); sum += M(22); sum += M(25); sum += M(28); sum += M(31); sum += M(34); sum += M(37);
    sum *= 2;
    if (best < sum) { best = sum; idx = 1; }
    sum = M(2); sum += M(5); sum += M(8); sum += M(11); sum += M(14); sum += M(17);
    sum += M(20); sum += M(23); sum += M(26); sum += M(29); sum += M(32); sum += M(35); sum += M(38);
    sum *= 2;
    if (best < sum) { best = sum; idx = 2; }
    sum = base;
    sum += M(39);
    sum *= 2;
    idx = (best < sum) ? 3 : idx;
    p = (unsigned)a + idx; q = out;
    for (n = 12; n >= 0; n--) { *q++ = *p; p += 3; }
    *pidx = idx;
}
