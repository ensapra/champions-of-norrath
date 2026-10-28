extern const char D_0047E1F1[];
extern s32 func_00304CFC(char *);
extern s32 func_00304F60(char *, char *, s32);
extern s32 func_002FF990(char *);
typedef struct { char pad[0x2C]; char **tab; } T;
s32 func_00140F60(T *t, char *s, s32 idx) {
    char *name = s;
    s32 len, i, c, r;
    s32 ret = 0;
    if (t->tab) {
        while (*s) {
            c = *s;
            r = c;
            if ((D_0047E1F1 + 0)[c] & 1) r = c + 0x20;
            *s++ = r;
        }
        len = func_00304CFC(name);
        for (i = 0; t->tab[i]; i++) {
            if (func_00304F60(t->tab[i], name, len) == 0 && t->tab[i][len] == '=') {
                if (--idx == -1) return func_002FF990(t->tab[i] + len + 1);
            }
        }
    }
    return ret;
}
