extern void *(*D_004480DC)(void);
extern void func_002FA010(void);
extern void *func_002FD0F0(void *, void *);
extern void *func_002FACE0(void *, void *, void *, void *);
void func_002FB070(void) {
    void *eh, *info;
    void *regs[1];
    __builtin_unwind_init();
    eh = D_004480DC();
    if (((void **)eh)[2] == 0) func_002FA010();
    info = func_002FD0F0((void *)func_002FB070, __builtin_frame_address(0));
    if (!info) { func_002FA010(); }
    func_002FACE0(eh, (char *)__builtin_return_address(0) - 1, info, regs);
}
