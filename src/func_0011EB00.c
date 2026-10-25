extern void func_001A3D78(void *, void *, void *, void *);
extern s32 func_001A4174(void *, void *);
extern void ovl_ntgui2_func_0011EC80(void);
extern s32 D_001C40EC[4], D_001C6820[4], D_001C6824[4];
extern char D_004C9060[], D_001C6100[];
void func_0011EB00(void) {
    char sp0[0x100];
    char sp100[0x100];
    s32 i;
    D_001C40EC[0] = 1;
    for (i = 0; i < D_001C6824[0]; i++) {
        char *e = (char *)(i * 0x21C + D_001C6820[0]);
        if (*(s32 *)e == -1) {
            func_001A3D78(sp0, D_004C9060, e + 0x1C, e + 0x11C);
            func_001A3D78(sp100, D_004C9060, D_001C6100, D_001C6100 + 0x100);
            if (func_001A4174(sp0, sp100) == 0) {
                D_001C40EC[0] = 0;
                break;
            }
        }
    }
    ovl_ntgui2_func_0011EC80();
}
