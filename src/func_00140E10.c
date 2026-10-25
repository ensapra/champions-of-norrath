typedef struct {
    char pad0[0x2C];
    char **env;
} Obj140E10;

extern const char D_0047E1F1[];
s32 func_00304CFC(char *);
s32 func_00304F60(char *, char *, s32);

void func_00140E10(Obj140E10 *o, char *name) {
    char *p;
    s32 len;
    s32 i, j;
    s32 c, r;

    if (o->env == NULL) {
        return;
    }
    for (p = name; *p; p++) {
        c = *p;
        r = c;
        if ((D_0047E1F1 + 0)[c] & 1) {
            r = c + 0x20;
        }
        *p = r;
    }
    len = func_00304CFC(name);
    for (i = 0; o->env[i]; i++) {
        if (func_00304F60(o->env[i], name, len) == 0 && o->env[i][len] == '=') {
            for (j = i; o->env[j]; j++) {
                o->env[j] = o->env[j + 1];
            }
            return;
        }
    }
}
