extern u8 func_001C8098[];
void func_0015EA84(void *);
void func_0015EB28(void *);
void func_0015EA7C(void *);

void func_0015DE74(void *arg0) {
    u8 *p = func_001C8098;
    p = *(u8 **)(p + 0xD70);
    ((void (*)(void *))p)(arg0);
    func_0015EA84(arg0);
    func_0015EB28(arg0);
    func_0015EA7C(arg0);
}
