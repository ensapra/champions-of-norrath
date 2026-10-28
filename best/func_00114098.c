extern s32 D_010C2ABC[], D_010C2AC8[], D_010C2ACC[], D_010C2AD0[], D_010C2B04[], D_010C2B08[], D_010C2B0C[], D_001BD944[];
typedef struct { s32 a; s64 b; s32 c; s64 d; s64 e, f; } Args;
void func_0014CBF4(s32, Args *, s32);
void func_00114098(void) {
    Args s;
    s32 v9;
    s32 max = D_010C2B0C[0];
    s32 cur = D_010C2AC8[0];
    s32 lo = D_010C2ACC[0];
    s64 v4 = lo;
    s32 span = D_010C2AD0[0] - lo;
    if (cur < max) {
        v9 = span * cur / max;
        if (v9 < 5) v9 = 5;
        v4 = lo + (span - v9) * (D_010C2B04[0] * D_001BD944[0] - D_010C2B08[0]) / ((max - cur) * D_001BD944[0]);
    } else {
        v9 = span;
    }
    s.b = v4;
    s.a = 10;
    s.c = 15;
    s.d = v9;
    func_0014CBF4(D_010C2ABC[0], &s, 2);
}
