s32 func_0015A62C(void *, s32);
s32 func_0015A6C0(void *, s32 *);
void func_0015AFAC(void *);
void func_0015B210(void *);
void func_0015B72C(void *, s32);
void ovl_ntgui2_func_0015A7B8(void *);

s32 func_00158930(char *arg0, s32 arg1, s32 *arg2, s32 arg3) {
    s32 id;
    s32 total = 0;
    s32 first = 1;
    s32 n;

    if (arg0 == NULL) return 0;
    *(s32 *)(arg0 + 0xD10) = 0;
    while (arg3-- != 0) {
        id = arg2[arg3];
        if (func_0015A6C0(arg0, &id)) {
            if (first) {
                first = 0;
                func_0015B72C(arg0, id);
            }
            n = func_0015A62C(arg0, id);
            total += n;
            *(s32 *)(arg0 + 0xB8C) += n;
        }
    }
    func_0015B210(arg0);
    *(s32 *)(arg0 + 0x98) = 2;
    func_0015AFAC(arg0);
    ovl_ntgui2_func_0015A7B8(arg0);
    return total;
}
