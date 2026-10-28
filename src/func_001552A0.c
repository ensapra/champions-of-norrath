void func_001552A0(void *arg0, s32 *arg1, s32 *arg2) {
    void *obj;
    s32 (*fn)(void *);
    s32 a, b, c, s;

    obj = *(void **)((char *)arg0 + 0x50);
    if (obj != 0) {
        fn = *(s32 (**)(void *))((char *)*(void **)((char *)obj + 0x4C) + 0x9C);
        if (fn != 0) {
            fn(obj);
        } else {
            *arg2 = 0;
            *arg1 = 0;
        }
    } else {
        *arg2 = 0;
        *arg1 = 0;
    }
    a = *(s32 *)((char *)arg0 + 0x5A0);
    s = *arg1 + a;
    b = *(s32 *)((char *)arg0 + 0x5D4);
    c = *(s32 *)((char *)arg0 + 0x880);
    c = c + b;
    s = s + c;
    a = *(s32 *)((char *)arg0 + 0x878);
    s = s + a;
    *arg1 = s;

    a = *(s32 *)((char *)arg0 + 0x5A4);
    s = *arg2 + a;
    c = *(s32 *)((char *)arg0 + 0x888);
    b = *(s32 *)((char *)arg0 + 0x5D4);
    c = c + b;
    s = s + c;
    a = *(s32 *)((char *)arg0 + 0x87C);
    s = s + a;
    *arg2 = s;
}
