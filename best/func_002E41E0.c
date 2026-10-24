extern int D_00446090[];
extern int D_00447C34[];
extern char D_0047BCC8[], D_0047BCF8[], D_0047BD40[];
extern u8 D_008E83D8[];
void func_002D70D0(const char *, ...);
void func_002D7858(void *, int);
void func_002D6140(int);
unsigned int func_002E4458(int, unsigned int, void *, int, void *);

int func_002E41E0(unsigned int rsize, unsigned int *buf, unsigned int mode, unsigned int *err) {
    unsigned int r;
    int e, rd, cur, err_ret;

    if (D_00446090[0] > 0)
        func_002D70D0(D_0047BCC8, rsize, mode);
    if (D_00447C34[0] == 0)
        return 0;
    err_ret = 0;
    cur = 0;
    func_002D7858(buf, rsize << 11);
    if (mode != 0) {
        do {
            r = func_002E4458(0, rsize - cur, (u8 *)buf + (cur << 11), 2, D_008E83D8);
            rd = r & 0xFFFF;
            e = r >> 16;
            cur += rd;
            if (e != 0) {
                err_ret = e;
                if (D_00446090[0] > 0)
                    func_002D70D0(D_0047BCF8, cur, rd, rsize, e);
            } else if (rd == 0) {
                func_002D6140(600);
            }
        } while (cur != rsize && (e == 0 || rd != 0));
        if (D_00446090[0] > 0)
            func_002D70D0(D_0047BD40);
        *err = err_ret;
    } else {
        unsigned int r2 = func_002E4458(0, rsize, buf, 2, D_008E83D8);
        cur = r2 & 0xFFFF;
        *err = r2 >> 16;
    }
    return cur;
}
