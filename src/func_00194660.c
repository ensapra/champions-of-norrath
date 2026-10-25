void func_00194660(void *a, void **pp, s32 m)
{
    void *p = *pp;
    *(s32 *)((char *)a + 0x14) = m;
    while (p != NULL) {
        void *q = *(void **)((char *)p + 0xC);
        if (q != NULL && ((*(s32 *)((char *)q + 0xC) & *(s32 *)((char *)a + 0x14)) == 0)) break;
        p = *(void **)p;
    }
    if (p == NULL) {
        *(void **)a = NULL;
        *(void **)((char *)a + 4) = NULL;
    } else {
        void *next = *(void **)p;
        *(void **)((char *)a + 4) = p;
        *(void **)a = next;
        if (next != NULL) *(void **)((char *)next + 4) = a;
        *(void **)(*(void **)((char *)a + 4)) = a;
    }
    *(void **)((char *)a + 0xC) = NULL;
}
