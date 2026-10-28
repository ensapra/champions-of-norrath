typedef struct { s32 id; s64 p; } Arg;
typedef struct { s64 a, b; } Q;
extern s32 D_001BD938[];
extern char D_001BD948[];
extern char func_01000000[];
#define CB (*(void (**)(s32))(func_01000000 + 0xC2A68))
#define TBL (*(char **)D_001BD948)
extern Q D_010C2AF0;
extern s32 func_00113DD0(s32);
extern void func_001A2660(void *, s32, s32);
extern void func_0014CBF4(s32, Arg *, s32);

void func_00112FE0(s32 flag, s64 arg1) {
    Arg st;
    char pad[0x70];
    char buf[16];
    Q q;
    s32 idx = (s32)arg1;
    s32 a, b, v;
    a = func_00113DD0(D_001BD938[0]);
    b = func_00113DD0(idx);
    if (arg1 == -1) {
        if (CB) CB(-1);
        D_001BD938[0] = -1;
        return;
    }
    idx *= 0x4C4;
    if (*(s32 *)(TBL + idx + 0x4B0) & 1) return;
    if (a) {
        func_001A2660(buf, 0, 0x10);
        st.id = 0x61;
        st.p = (s64)buf;
        func_0014CBF4(a, &st, 1);
    }
    if (b) {
        q = D_010C2AF0;
        st.id = 0x61;
        st.p = (s64)&q;
        func_0014CBF4(b, &st, 1);
    }
    if (CB) {
        if (flag) {
            v = *(s32 *)(TBL + idx + 0x4B8);
            CB(v);
            D_001BD938[0] = v;
        } else {
            CB(-1);
        }
    }
}
