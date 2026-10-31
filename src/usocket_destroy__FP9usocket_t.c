void VIFreeUSocketEx__FP9usocket_t(void *);
void sceInetClose(void *, int, int, int);
void __wrap_free(void *);
extern int D_0118E6B0;
extern char D_0118E740[];
extern char D_011CAB30[];

void usocket_destroy__FP9usocket_t(void *s) {
    volatile void *dummy;
    __builtin_memcpy(s, D_011CAB30, 4);
    VIFreeUSocketEx__FP9usocket_t(s);
    if (*(int *)((char *)s + 4) != -1) {
        sceInetClose(D_0118E740, D_0118E6B0, *(int *)((char *)s + 4), -1);
        *(int *)((char *)s + 4) = -1;
    }
    __wrap_free(s);
    dummy = (void *)0;
    (void)dummy;
}
