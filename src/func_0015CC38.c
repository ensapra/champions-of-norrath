/* identical to func_00153310 (matched), with its names changed by decompdecomp */
extern void func_001C8098();
void func_0015CC38(void)
{
    void (*fn)(void);
    char *p = (char *)func_001C8098;
    fn = *(void (**)(void))(p + 0xD68);
    fn();
}
