/* identical to func_001587D8 (matched), with its names changed by decompdecomp */
#define F32(p,o) (*(s32*)((char*)(p)+(o)))
s32 func_0015B174(void *);
void func_0015BB8C(void);
void func_0015BA94();
void func_0015B210(void*);

s32 func_00158828(void *a) {
    if (a == 0) return 0;
    if (F32(a,0xD10) == 0) func_0015BB8C();
    return func_0015B174(a);
}

s32 func_00158878(void *a) {
    if (a == 0) return 0;
    {
        s32 t = F32(a,0xBF0);
        if (F32(a,0xD0C) == t) return 0;
        F32(a,0xB8C) = t;
        F32(a,0xB94) = 0;
        func_0015BA94();
        func_0015B210(a);
        F32(a,0x98) = 2;
        return 1;
    }
}
