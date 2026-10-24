#define F(p,o) (*(s32*)((char*)(p)+(o)))
void func_0011B9E0(void *);
void func_0014A5CC(void *a) {
    s32 i;
    for (i = 0; i < F(a, 0x878); i++) {
        func_0011B9E0((*(void ***)((char *)a + 0x870))[i]);
        (*(void ***)((char *)a + 0x870))[i] = NULL;
    }
    F(a, 0x878) = 0;
}
