#define F(p,o) (*(s32*)((char*)(p)+(o)))
void func_0011B9E0(void *);
void func_0014A32C(void *a, u32 idx) {
    s32 i;
    if (F(a, 0x878) > 0 && idx < F(a, 0x878)) {
        func_0011B9E0((*(void ***)((char *)a + 0x870))[idx]);
        for (i = idx; i < F(a, 0x878) - 1; i++) {
            (*(void ***)((char *)a + 0x870))[i] = (*(void ***)((char *)a + 0x870))[i + 1];
        }
        (*(void ***)((char *)a + 0x870))[i] = NULL;
        F(a, 0x878)--;
        F(a, 0x88C) = 1;
        F(a, 0x890) = 1;
    }
}
