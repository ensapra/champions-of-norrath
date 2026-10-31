/* identical to func_0013CF60 (matched), with its names changed by decompdecomp */
extern void drdp_format_endpoint__FPcUl(void *, s32);
extern void func_0013DA98(void *, void *, void *);
extern s32 func_00140020(void);
extern s32 func_001404D0(void);
extern void func_001403B8(s32, void *);
extern void func_00140CD8(void);
extern s32 func_0011B968(s32);

extern char D_010CE610[];
extern char D_010CE640[];
extern s32 D_010CE6C0;
extern s32 D_010CE6C4;
extern s32 D_010CE6C8;
extern s32 D_010CE6CC;
extern char D_010CE700[];
extern void func_0013D028(void);

void drdp_format_endpoint4__FUl(s32 arg0) {
    drdp_format_endpoint__FPcUl((void *)D_010CE700, arg0);
}

void func_0013CF20(void) {
    D_010CE6C0 = 0;
    D_010CE6C4 = 0;
    D_010CE6C8 = 0;
    D_010CE6CC = 0;
    func_0013DA98((void *)D_010CE700, (void *)D_010CE6CC, (void *)D_010CE6C0);
}

s32 func_0013CFA8(void *arg0) {
    if (func_00140020() != 0) {
        return 0;
    }
    if (func_001404D0() != 0) {
        return 0;
    }
    {
        s32 *p = (s32 *)D_010CE6CC;
        s32 c = *p;
        if (c > 0) {
            *p = c - 1;
            return 0;
        }
        func_001403B8(c - 1, p);
    }
    func_00140CD8();
    *(void **)((char *)arg0 + 0x18) = (void *)func_0013D028;
    return 0;
}

void func_0013CEF0(void) {
    func_0011B968(*(s32 *)D_010CE610);
    func_0011B968(*(s32 *)D_010CE640);
}
