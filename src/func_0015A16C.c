extern void func_001C8098();
void func_0015A16C(void)
{
    void *p = (char *)func_001C8098;
    p = *(void **)((char *)p + 0xDB8);
    ((void (*)(void))p)();
}

s32 func_0014CF0C(s32, s32, s32);
void func_0015A128(char *arg0) {
    s32 temp_6;

    temp_6 = *(s32 *)(arg0 + 0x8D4);
    func_0014CF0C(*(s32 *)(arg0 + 0x910), *(s32 *)(arg0 + 0x5AC) - ((temp_6 + *(s32 *)(arg0 + 0xCF0)) * 2), *(s32 *)(arg0 + 0x5B0) - ((temp_6 + *(s32 *)(arg0 + 0xCF4)) * 2));
}

s32 func_0014D29C(void *);
s32 func_0014F200(s32, u32, void *, void *);
void func_0014F288(s32, s32);
void func_0015AFAC(void *);
void func_0015B248(void *);
void func_0015B2F8(void *);
void func_0015B400(void *);
void func_0015B520(void *);
void func_0015BB8C();
s32 func_0015BBE0(void *, s32, s32);
extern void func_0015AE18();

void func_0015A354(char *arg0) {
    s32 temp_2;

    if (*(s32 *)(arg0 + 0xD04) != 0) {
        func_0015BB8C();
        temp_2 = func_0015BBE0(arg0, *(s32 *)(arg0 + 0x4F4), *(s32 *)(arg0 + 0x4F8));
        if (temp_2 >= 0) {
            *(s32 *)(arg0 + 0xB8C) = temp_2;
            func_0015AFAC(arg0);
            *(s32 *)(arg0 + 0x98) = 2;
            func_0015B248(arg0);
            func_0015B2F8(arg0);
            func_0015B520(arg0);
            func_0015B400(arg0);
        }
        if (*(s32 *)(arg0 + 0xC90) != 0) {
            func_0014F288(func_0014D29C(arg0), *(s32 *)(arg0 + 0xC90));
        }
        *(s32 *)(arg0 + 0xC90) = func_0014F200(func_0014D29C(arg0), *(u32 *)(arg0 + 0xC94), arg0, func_0015AE18);
    }
}

void func_0015A424(char *arg0, s32 a1, s32 a2, s32 a3, s32 a4) {
    *(volatile s32 *)(arg0 + 0xC5C) = a1;
    *(volatile s32 *)(arg0 + 0x98) = 2;
    *(volatile s32 *)(arg0 + 0xC60) = a2;
    *(volatile s32 *)(arg0 + 0xC64) = a3;
    *(volatile s32 *)(arg0 + 0xC68) = a4;
}
