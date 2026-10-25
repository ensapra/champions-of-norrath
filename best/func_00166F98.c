extern s32 func_00304CFC();
extern s32 D_006D8FA0[];
void func_00166F98(s8 *str) {
    s32 len, i, hash, idx;
    s8 *p;
    while (*str != 0) {
        len = func_00304CFC(str);
        i = 0; hash = 0;
        if (len > 0) {
            do {
                hash += str[i];
                hash = (hash << 10) + hash;
                hash ^= hash >> 6;
                i++;
            } while (i < len);
        }
        hash = (hash << 3) + hash;
        hash ^= hash >> 11;
        idx = hash & 0x1fff;
        while (D_006D8FA0[idx] != (s32)str)
            idx = (idx + 1) & 0x1fff;
        D_006D8FA0[idx] = 0;
        p = (s8 *)(((s32)(str + len + 2)) & ~1);
        while (*(s16 *)p != 0) p += 2;
        str = p + 2;
    }
}
