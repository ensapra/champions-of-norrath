s32 func_00304CFC();

void func_001BBF48(char *s) {
    s32 len = func_00304CFC(s);
    s32 i;
    s32 cnt = (len - 1) / 3;
    s32 pos = len + cnt + 1;
    s32 off = 0;
    for (i = 0; i < cnt; i++) {
        s32 rem = len % 3;
        s32 d = len / 2;
        s32 j = pos;
        if (rem) d = rem;
        len = d;
        if (j >= d + off) {
            char *q = s + j;
            do {
                j--;
                *q = q[-1];
                q--;
            } while (j >= d + off);
        }
        s[off + len] = ',';
        off += 4;
    }
}
