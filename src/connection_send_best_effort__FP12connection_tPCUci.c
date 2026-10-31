s32 endpoint_get_time__FP10endpoint_t(void *);
s32 message_create__FPP9message_tP10endpoint_tP12connection_tUlUlPCvUiUcUsUi(void **, void *, void *, unsigned long, unsigned long, const void *, unsigned int, unsigned char, unsigned short, unsigned int);
void message_destroy__FP9message_t(void *);
void vlist_add_tail__FP7vlist_tPv(void *, void *);

s32 connection_send_best_effort__FP12connection_tPCUci(void *c, const unsigned char *data, int len) {
    void *msg;
    s32 t;
    s32 r;
    *(volatile int *)&msg = 0;
    t = endpoint_get_time__FP10endpoint_t(*(void **)((char *)c + 0x34));
    r = message_create__FPP9message_tP10endpoint_tP12connection_tUlUlPCvUiUcUsUi(&msg, *(void **)((char *)c + 0x34), c, *(unsigned long long *)((char *)c + 0x48), *(unsigned long long *)((char *)c + 0x50), data, len, 0xFC, 0xFFFF, t);
    if (r == 0) {
        vlist_add_tail__FP7vlist_tPv((char *)c + 0xBC, msg);
        *(volatile int *)&msg = 0;
    }
    if (msg != 0) {
        message_destroy__FP9message_t(msg);
    }
    return r;
}
