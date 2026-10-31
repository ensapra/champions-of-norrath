/* identical to func_0031A9A8 (matched), with its names changed by decompdecomp */
extern s32 D_00453850[6];
void func_0031A990(s32 *arg0, s32 arg1) {
    arg0[0] = arg1;
    arg0[1] = (s32)D_00453850;
}
s32 GetCallbackType__17VIXMLCallbackData(s32 *arg0) {
    return *arg0;
}
extern s32 func_002FD2E0(void);
s32 func_0031A9B0(void) {
    return func_002FD2E0() ^ 1;
}
extern s32 D_00486DE0[2];
extern char D_0047DFF0[];
extern void func_002FD368(s32 *, char *);
s32 *func_0031A950(void) {
    s32 *ptr = D_00486DE0;
    if (*ptr == 0) {
        func_002FD368(ptr, D_0047DFF0);
    }
    return ptr;
}
