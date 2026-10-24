extern void func_001C8098();
void func_00153310(void)
{
    void (*fn)(void);
    char *p = (char *)func_001C8098;
    fn = *(void (**)(void))(p + 0xD68);
    fn();
}
