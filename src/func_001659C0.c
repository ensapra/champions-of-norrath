/* identical to func_00153310 (matched), with its names changed by decompdecomp */
extern void D_001CA290();
void func_001659C0(void)
{
    void (*fn)(void);
    char *p = (char *)D_001CA290;
    fn = *(void (**)(void))(p + 0xD68);
    fn();
}
