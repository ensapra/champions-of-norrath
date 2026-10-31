int memcmp(const void *, const void *, unsigned long);
extern char D_011CAB18[];
int usocket_is_valid__FP9usocket_t(void *s) {
    return memcmp(s, D_011CAB18, 4) == 0;
}
