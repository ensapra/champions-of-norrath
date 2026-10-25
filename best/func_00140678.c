extern u8 D_0047E1F1[];
extern s32 D_005182C0[];
extern s32 D_00518AC0[];
s32 func_00304CFC();
s32 func_00304168(s8 *a, s32 b);
void func_00140678(s8 *name, s32 *out, s32 max) {
    s32 n, hash, i, idx, c, cnt, off;
    cnt = 0;
    n = func_00304CFC(name);
    hash = 0;
    i = 0;
    if (n > 0) {
        do {
            c = name[i];
            c = (*(D_0047E1F1 + c) & 1) ? (c + 0x20) : c;
            i++;
            hash += c;
            hash = (hash << 10) + hash;
            hash ^= hash >> 6;
        } while (i < n);
    }
    hash = (hash << 3) + hash;
    hash ^= hash >> 11;
    idx = hash & 0x1FF;
    off = idx << 2;
    {
        char *keys = (char *)D_005182C0;
        if (*(s32 *)(keys + off)) {
            char *vals = (char *)D_00518AC0;
            s32 *p = out + cnt;
            do {
                s32 r = func_00304168(name, *(s32 *)(keys + off));
                s32 *vp = (s32 *)(vals + off);
                idx = (idx + 1) & 0x1FF;
                off = idx << 2;
                if (r == 0 && *vp) {
                    cnt++;
                    *p++ = *vp;
                    if (cnt == max - 1) break;
                }
            } while (*(s32 *)(keys + off));
        }
    }
    out[cnt] = 0;
}
