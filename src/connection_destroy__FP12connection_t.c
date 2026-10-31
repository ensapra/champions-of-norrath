void connection_destroy_buffer__FP12connection_tP8buffer_t(void *, void *);
void connection_destroy__FP12connection_t(void *c) {
    volatile void *dummy;
    connection_destroy_buffer__FP12connection_tP8buffer_t(c, 0);
    dummy = (void *)0;
    (void)dummy;
}
