/* identical to func_00153310 (matched), with its names changed by decompdecomp */
extern void D_001CA2E0();
void func_00165A1C(void)
{
    void (*fn)(void);
    char *p = (char *)D_001CA2E0;
    fn = *(void (**)(void))(p + 0xD68);
    fn();
}
