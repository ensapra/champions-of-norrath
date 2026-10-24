s32 func_001B5FA0(s32 *d,s32 *s,u32 n){u32 i=0;n>>=2;if(n)do{ s32 v=*s; i++; s++; *d=v; d++;}while(i<n);return 0;}

extern u8 D_004CDC18[];
extern u8 D_004CDC28[];
extern s32 D_010F4480[];
void func_001A1568(void *, s32, void *);
s32 func_00186038();
void *func_001A2660(void *, s32, s32);

void func_00185A48(s32 *p) {
    if (p == 0) func_001A1568(D_004CDC18, 0x9B, D_004CDC28);
    if (*p != 0) {
        *p = 0;
        D_010F4480[0]--;
    }
}

s32 func_00185A08(s32 *p, s32 v) {
    *p = v;
    if (func_00186038() == 0) {
        D_010F4480[0]++;
        return 0;
    }
    return 1;
}

void func_00185950(s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h) {
    s32 *p = D_010F4480;
    func_001A2660(p, 0, 0x24);
    p[1] = a;
    p[8] = h;
    p[2] = b;
    p[3] = e;
    p[4] = f;
    p[5] = c;
    p[6] = d;
    p[7] = g;
}
