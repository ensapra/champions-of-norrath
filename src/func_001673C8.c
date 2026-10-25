s32 func_003044FC(const char *, const char *);
s32 func_00304CFC(const char *);
extern char *D_006D8FA0[];

void *func_001673C8(char *name) {
    char buf[0x200];
    char *d = buf;
    char *p;
    s32 len;
    s32 i;
    s32 h;
    s32 idx;
    char **slot;

    while (*name) {
        if (*name != '"') {
            *d++ = *name;
        }
        name++;
    }
    *d = 0;
    len = func_00304CFC(buf);
    i = 0;
    p = buf;
    h = 0;
    for (; i < len; i++) {
        h += p[i];
        h += h << 10;
        h ^= h >> 6;
    }
    h += h << 3;
    h ^= h >> 11;
    idx = h & 0x1FFF;
    for (;;) {
        slot = &D_006D8FA0[idx];
        if (*slot == NULL) return NULL;
        if (func_003044FC(buf, *slot) == 0) break;
        idx = (idx + 1) & 0x1FFF;
    }
    return (void *)(((s32)*slot + len + 2) & ~1);
}
