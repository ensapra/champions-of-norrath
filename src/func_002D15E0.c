/* identical to func_0017E268 (matched), with its names changed by decompdecomp */
void func_002D1508(void *arg0);

void func_002D15E0(void *arg0) {
    u8 *p = (u8 *)arg0;
    u8 t = p[3];
    if (t == 0) {
        p[3] = 0x17;
        func_002D1508(arg0);
        return;
    }
    p[3] = t - 1;
}
