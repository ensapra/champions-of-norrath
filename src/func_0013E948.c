extern s32 D_010D1110[];
extern s32 D_010D1114[];
extern s32 D_010D1120[];
extern void func_001A42B8(void *, s32);

void ovl_ntgui2_func_0013E928(s32 a) {
    D_010D1110[0] = a;
}

void func_0013E938(s32 a) {
    D_010D1114[0] = a;
}

void func_0013E948(s32 a) {
    func_001A42B8(D_010D1120, a);
}

s32 func_001A3990(void *);

typedef struct {
    char pad[0x1D4];
    void (**tbl)(s32);
} R;

s32 func_001A3B58(R *r, u32 sig)
{
    void (*h)(s32);
    if (sig < 32) {
        if (r->tbl == 0) {
            if (func_001A3990(r) != 0)
                return -1;
        }
        h = r->tbl[sig];
        if (h == 0)
            return 1;
        if (h == (void (*)(s32))-1)
            return 2;
        if (h == (void (*)(s32))1)
            return 3;
        r->tbl[sig] = 0;
        h(sig);
        return 0;
    }
    return -1;
}
