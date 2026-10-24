/* identical to func_00153310 (matched), with its names changed by decompdecomp */
extern void D_001C80DC();
void func_0015336C(void)
{
    void (*fn)(void);
    char *p = (char *)D_001C80DC;
    fn = *(void (**)(void))(p + 0xD68);
    fn();
}
