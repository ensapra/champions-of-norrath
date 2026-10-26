void func_001552A0(void *arg0, s32 *arg1, s32 *arg2) {
    void *obj;
    s32 (*fn)(void *);
    s32 t1, t2, t3, t4, t5, t6, t7;

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
    t1 = *(s32 *)((char *)arg0 + 0x5A0);
    t2 = *arg1;
    t3 = t2 + t1;
    t4 = *(s32 *)((char *)arg0 + 0x5D4);
    t5 = *(s32 *)((char *)arg0 + 0x880);
    t6 = t5 + t4;
    t3 = t3 + t6;
    t7 = *(s32 *)((char *)arg0 + 0x878);
    t3 = t3 + t7;
    *arg1 = t3;

    t1 = *(s32 *)((char *)arg0 + 0x5A4);
    t2 = *arg2;
    t3 = t2 + t1;
    t4 = *(s32 *)((char *)arg0 + 0x888);
    t5 = *(s32 *)((char *)arg0 + 0x5D4);
    t6 = t5 + t4;
    t3 = t3 + t6;
    t7 = *(s32 *)((char *)arg0 + 0x87C);
    t3 = t3 + t7;
    *arg2 = t3;
}
