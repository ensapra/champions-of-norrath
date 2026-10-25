extern u8 D_0047E1F1[];
extern s32 func_00304CFC(char *);
extern s32 func_00304F60(char *, char *, s32);
extern s32 func_002FF990(char *);
typedef struct { char pad[0x2C]; char **tab; } T;
s32 func_00140F60(T *t, char *s, s32 idx) {
    char *p;
    s32 len, i;
    if (t->tab == 0) return 0;
    p = s;
    if (*p) {
        do {
            s32 c = *p;
            s32 r = c;
            if (D_0047E1F1[c] & 1) r = c + 0x20;
            *p++ = r;
        } while (*p);
    }
    len = func_00304CFC(s);
    i = 0;
    while (t->tab[i]) {
        if (func_00304F60(t->tab[i], s, len) == 0) {
            char *q = t->tab[i] + len;
            if (*q == '=') {
                if (--idx == -1)
                    return func_002FF990(q + 1);
            }
        }
        i++;
    }
    return 0;
}
