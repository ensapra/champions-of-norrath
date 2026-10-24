extern u8 D_001CB5F8[];
extern u8 func_001C8098[];
void func_00165CCC(void)
{
    void *p = D_001CB5F8;
    p = *(void **)((u8 *)p + 0x50);
    ((void (*)(void))p)();
}
void func_0014D3B8(s32);
void func_00165324(void *);
typedef struct { s64 a, b; } V2;
void func_00165654(void *arg0) {
    u8 *p = func_001C8098;
    V2 v;
    p = *(u8 **)(p + 0xE04);
    ((void (*)(void *))p)(arg0);
    v = *(V2 *)((u8 *)arg0 + 0x1230);
    *(V2 *)((u8 *)arg0 + 0x1250) = v;
    *(V2 *)((u8 *)arg0 + 0x1240) = v;
    func_00165324(arg0);
    func_0014D3B8(*(s32 *)((u8 *)arg0 + 0x910));
    *(s32 *)((u8 *)arg0 + 0x98) = 2;
}
