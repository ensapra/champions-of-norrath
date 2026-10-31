extern void *__ls__7ostreamPCc(void *, void *);
extern void *endl__FR7ostream(void *);
extern void exit(s32);
extern void *__wrap_malloc(s32);

extern void *D_011C21E0;
extern void *D_011F2B34;
extern void *D_013577D0;

void _S_oom_malloc__t23__malloc_alloc_template1i0Ui(s32 arg0) {
    void (*fp)(void);
    do {
        fp = (void (*)(void))D_011F2B34;
        if (fp == (void (*)(void))0) {
            endl__FR7ostream(__ls__7ostreamPCc(&D_013577D0, &D_011C21E0));
            exit(1);
        }
        fp();
    } while (__wrap_malloc(arg0) == 0);
}
