typedef struct { u8 b[40]; } S40;
extern u8 D_004488B8[];
extern s64 D_004488B0[];
extern char D_0047F480[];
extern char D_0047F4A0[];
extern char D_0047F4C0[];
s32 func_00302270(void *);
void func_003022F0(void *, S40);
void func_0030AF90(void);
void func_0030A9C0(s32, char *, s64);
void func_0030B1E8(void *p) {
    s64 max;
    S40 x;
    s32 cur, count;
    func_00302270(p);
    func_0030AF90();
    max = D_004488B0[0];
    x = *(S40 *)D_004488B8;
    cur = *(s32 *)D_004488B8;
    func_003022F0(p, x);
    count = *(s32 *)((u8 *)p+0xC);
    func_0030A9C0(count, D_0047F480, (s64)(s32)max);
    func_0030A9C0(count, D_0047F4A0, (s64)cur);
    func_0030A9C0(count, D_0047F4C0, (s64)*(s32 *)((u8 *)p+0x1C));
}
