/* identical to func_001013D0 (matched), with its names changed by decompdecomp */
/* identical to func_001040B8 (matched), with its names changed by decompdecomp */
/* identical to func_0013AAA8 (matched), with its names changed by decompdecomp */

extern s32 func_00138758(void *arg0, s32 arg1, void **arg2);
extern s32 func_00138900(void *arg0, void *arg1);
extern s32 func_00304640(void *arg0, void *arg1);
extern char D_0042A3F8[];
extern void *func_00143A58(void *arg0);
extern s32 func_00277AD8(void *arg0, void *arg1);
extern void func_002804E8(void);
extern void unet_gethostname__FPci(void);

void drdp_gethostname__FPci(void) {
    unet_gethostname__FPci();
}

s32 func_0013AAC0(void *arg0, s32 *arg1) {
    char sp00[0xA0];
    char spA0[0xA0];
    void *tmp;
    void *a;

    func_00138758(arg0, arg1[1], &tmp);
    func_00138900(sp00, tmp);
    func_00138758(arg0, arg1[2], &tmp);
    func_00138900(spA0, tmp);
    a = func_00143A58(sp00);
    if (a != NULL) {
        func_00277AD8(a, func_00143A58(spA0));
    }
    return 0;
}

s32 func_0013AA68(void) {
    func_002804E8();
    return 0;
}

s32 func_0013AA28(void *arg0, s32 *arg1) {
    char spA0[0xA0];
    void *tmp;

    func_00138758(arg0, arg1[1], &tmp);
    func_00138900(spA0, tmp);
    func_00304640(&D_0042A3F8, spA0);
    return 0;
}
