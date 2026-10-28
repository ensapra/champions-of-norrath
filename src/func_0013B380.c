extern s32 func_00138758(void *, s32, void **);
extern void func_00138900(void *, void *);
extern void *func_00143A58(void *);

s32 func_0013B380(void *arg0, void *arg1) {
    char buf[0xA0];
    void *tmp;
    func_00138758(arg0, *(s32 *)((u8 *)arg1 + 4), &tmp);
    func_00138900(buf, tmp);
    *(u8 *)(func_00143A58(buf) + 0x58) = 0;
    return 0;
}
