/* identical to func_00153310 (matched), with its names changed by decompdecomp */
extern void D_001C6A40();
void func_001573A4(void)
{
    void (*fn)(void);
    char *p = (char *)D_001C6A40;
    fn = *(void (**)(void))(p + 0xD68);
    fn();
}
