void func_00313700(char *arg0, s32 arg1, s32 arg2, char **arg3)
{
    char *q = *arg3;
    void *p60a;
    char *pa;
    s16 offa;
    s32 (*fpa)(char *, s32, s32);
    void *p60b;
    char *pb;
    s16 offb;
    s32 (*fpb)(char *, s32, s32);

    if (q != 0 && (*(s32 *)(*(char **)(q + 12) + 12) & 0x40)) {
        p60a = *((void **)(arg0 + 0x60));
        pa = ((char *)p60a) + 0x58;
        offa = *((s16 *)pa);
        fpa = *((s32 (**)(char *, s32, s32))((char *)pa + 4));
        fpa(arg0 + offa, arg1, arg2);
        return;
    }
    p60b = *((void **)(arg0 + 0x60));
    pb = ((char *)p60b) + 0x60;
    offb = *((s16 *)pb);
    fpb = *((s32 (**)(char *, s32, s32))((char *)pb + 4));
    fpb(arg0 + offb, arg1, arg2);
}
