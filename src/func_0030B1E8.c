typedef struct { s32 w[10]; } S40;
extern S40 D_004488B8;
extern s64 D_004488B0[];
extern char D_0047F480[];
extern char D_0047F4A0[];
extern char D_0047F4C0[];
s32 func_00302270(void *);
void func_003022F0(void *);
void func_0030AF90(void);
void func_0030A9C0(s32, char *, s32);
void func_0030B1E8(void *p) {
    S40 s;
    s32 cur, count;
    s64 max;
    func_00302270(p);
    func_0030AF90();
    max = D_004488B0[0];
    s = D_004488B8;
    cur = D_004488B8.w[0];
    func_003022F0(p);
    count = *(s32 *)((u8 *)p+0xC);
    func_0030A9C0(count, D_0047F480, max);
    func_0030A9C0(count, D_0047F4A0, cur);
    func_0030A9C0(count, D_0047F4C0, s.w[7]);
}
