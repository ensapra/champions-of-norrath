/* identical to usocket_is_valid__FP9usocket_t (matched), with its names changed by decompdecomp */
int memcmp(const void *, const void *, unsigned long);
extern char D_011CAB18[];
int route_is_valid__FP7route_t(void *s) {
    return memcmp(s, D_011CAB18, 4) == 0;
}
