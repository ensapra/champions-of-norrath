s32 D_00486A6C;

void *func_00194390(void **a0, void **a1, s32 a2)
{
    void *p = (void *)D_00486A6C;
    void *a = 0;
    void *b;
    void *t;
    if (p) { t = p; p = *(void **)p; D_00486A6C = (s32)p; *(s16 *)((char *)t + 0x10) = 0; a = t; }
    b = 0;
    t = p;
    if (t) { p = *(void **)p; b = t; D_00486A6C = (s32)p; *(s16 *)((char *)t + 0x10) = 0; }
    *(void **)a = *a0;
    if (*a0) *(void **)((char *)*a0 + 4) = a;
    *(void **)((char *)a + 4) = a0;
    *a0 = a;
    *(void **)b = *a1;
    if (*a1) *(void **)((char *)*a1 + 4) = b;
    *(void **)((char *)b + 4) = a1;
    *a1 = b;
    *(s32 *)((char *)a + 0xC) = a2;
    *(void **)((char *)a + 8) = b;
    *(s32 *)((char *)b + 0xC) = 0;
    *(void **)((char *)b + 8) = a;
    return a;
}

void func_00194520(void **a0, s32 a1, void **a2, s32 a3)
{
    void *p = (void *)D_00486A6C;
    void *a = 0;
    void *b;
    void *t;
    if (p) { t = p; p = *(void **)p; D_00486A6C = (s32)p; *(s16 *)((char *)t + 0x10) = 0; a = t; }
    b = 0;
    t = p;
    if (t) { p = *(void **)p; b = t; D_00486A6C = (s32)p; *(s16 *)((char *)t + 0x10) = 0; }
    *(void **)a = *a0;
    if (*a0) *(void **)((char *)*a0 + 4) = a;
    *(void **)((char *)a + 4) = a0;
    *a0 = a;
    *(void **)b = *a2;
    if (*a2) *(void **)((char *)*a2 + 4) = b;
    *(void **)((char *)b + 4) = a2;
    *(s32 *)((char *)a + 0xC) = a3;
    *a2 = b;
    *(s32 *)((char *)b + 0xC) = a1;
    *(void **)((char *)a + 8) = b;
    *(void **)((char *)b + 8) = a;
}
