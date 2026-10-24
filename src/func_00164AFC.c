void func_00168124(s32);
void func_00169C08(s32);
void func_00167E58(s32);
extern char func_001C8098[];

void func_00166E64(s32 arg0) {
    void *p = func_001C8098;
    p = *(void **)((u8 *)p + 0xD70);
    ((void (*)(void))p)();
    func_00168124(arg0);
    func_00169C08(arg0);
    func_00167E58(arg0);
}

extern char func_001C7AF8[];
void func_0016FCC4(void *, void *, void *, void *);

void func_00164AFC(char *arg0)
{
    s32 ok = 0;
    void *p;

    if (*(s32 *)(arg0 + 0x538) != 0) {
        ok = *(s32 *)(arg0 + 0x53C) != 0;
    }
    p = func_001C7AF8;
    p = *(void **)((u8 *)p + 8);
    ((void (*)(void))p)();
    if (ok) {
        func_0016FCC4(arg0 + 0x540, arg0 + 0x930, arg0 + 0x950, arg0 + 0x940);
    }
}
